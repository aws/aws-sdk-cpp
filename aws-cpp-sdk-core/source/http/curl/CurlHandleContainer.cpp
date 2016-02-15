/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/http/curl/CurlHandleContainer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <algorithm>

#undef min

using namespace Aws::Utils::Logging;
using namespace Aws::Http;

static const char* CurlTag = "CurlHandleContainer";

bool CurlHandleContainer::isInit = false;

#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

static const char* MemTag = "libcurl";
static size_t offset = sizeof(size_t);

void* malloc_callback(size_t size)
{
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, size + offset));
    std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
    *pointerToSize = size;
    return reinterpret_cast<void*>(newMem + offset);
}

void free_callback(void* ptr)
{
    if(ptr)
    {
        char* shiftedMemory = reinterpret_cast<char*>(ptr);
        Aws::Free(shiftedMemory - offset);
    }
}

void* realloc_callback(void* ptr, size_t size)
{
    if(!ptr)
    {
        return nullptr;
    }


    if(!size && ptr)
    {
        free_callback(ptr);
        return nullptr;
    }

    char* rawMemory = reinterpret_cast<char*>(Aws::Malloc(MemTag, size + offset));
    if(rawMemory)
    {
        char* originalLenCharPtr = reinterpret_cast<char*>(ptr) - offset;
        size_t originalLen = *reinterpret_cast<size_t*>(originalLenCharPtr);

        std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(rawMemory);
        *pointerToSize = size;

        memcpy(rawMemory + offset, ptr, originalLen);
        free_callback(ptr);
        return reinterpret_cast<void*>(rawMemory + offset);
    }
    else
    {
        return ptr;
    }

}

void* calloc_callback(size_t nmemb, size_t size)
{
    size_t dataSize = nmemb * size;
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, dataSize + offset));
    std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
    *pointerToSize = dataSize;

    memset(newMem + offset, 0, dataSize);
    return reinterpret_cast<void*>(newMem + offset);
}

char* strdup_callback(const char* str)
{
    size_t len = strlen(str) + 1;
    size_t newLen = len + offset;
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, newLen));

    if(newMem)
    {
        std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
        *pointerToSize = len;
        memcpy(newMem + offset, str, len);
        return newMem + offset;
    }
    return nullptr;
}

#endif



CurlHandleContainer::CurlHandleContainer(unsigned maxSize, long requestTimeout, long connectTimeout) :
                m_maxPoolSize(maxSize), m_requestTimeout(requestTimeout), m_connectTimeout(connectTimeout),
                m_poolSize(0)
{
    AWS_LOGSTREAM_INFO(CurlTag, "Intializing CurlHandleContainer with size " << maxSize);
    if (!isInit)
    {
        AWS_LOG_INFO(CurlTag, "Initializing Curl library");
        isInit = true;
#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT
        curl_global_init_mem(CURL_GLOBAL_ALL, &malloc_callback, &free_callback, &realloc_callback, &strdup_callback, &calloc_callback);
#else
        curl_global_init(CURL_GLOBAL_ALL);
#endif
    }
}

CurlHandleContainer::~CurlHandleContainer()
{
    AWS_LOG_INFO(CurlTag, "Cleaning up CurlHandleContainer.");
    while (m_handleContainer.size() > 0)
    {
        AWS_LOG_DEBUG(CurlTag, "Cleaning up %p.", m_handleContainer.top());
        curl_easy_cleanup(m_handleContainer.top());
        m_handleContainer.pop();
    }
}

CURL* CurlHandleContainer::AcquireCurlHandle()
{
    AWS_LOG_DEBUG(CurlTag, "Attempting to acquire curl connection.");
    std::unique_lock<std::mutex> locker(m_handleContainerMutex);

    while (m_handleContainer.size() == 0)
    {
        AWS_LOG_DEBUG(CurlTag, "No current connections available in pool. Attempting to create new connections.");
        if (!CheckAndGrowPool())
        {
            AWS_LOG_INFO(CurlTag, "Connection pool has reached its max size. Waiting on connection to be freed.");
            m_conditionVariable.wait(locker);
            AWS_LOG_INFO(CurlTag, "Connection has been released. Continuing.");
        }
    }

    CURL* handle = m_handleContainer.top();
    AWS_LOGSTREAM_DEBUG(CurlTag, "Returning connection handle " << handle);
    m_handleContainer.pop();
    return handle;
}

void CurlHandleContainer::ReleaseCurlHandle(CURL* handle)
{
    if (handle != NULL)
    {
        AWS_LOGSTREAM_DEBUG(CurlTag, "Releasing curl handle " << handle);
        std::unique_lock<std::mutex> locker(m_handleContainerMutex);
        m_handleContainer.push(handle);
        locker.unlock();
        AWS_LOG_DEBUG(CurlTag, "Notifying waiting threads.");
        m_conditionVariable.notify_one();
    }
}

bool CurlHandleContainer::CheckAndGrowPool()
{
    if (m_poolSize < m_maxPoolSize)
    {
        unsigned multiplier = m_poolSize > 0 ? m_poolSize : 1;
        unsigned amountToAdd = std::min(multiplier * 2, m_maxPoolSize - m_poolSize);
        AWS_LOGSTREAM_DEBUG(CurlTag, "attempting to grow pool size by " << amountToAdd);

        unsigned actuallyAdded = 0;
        for (unsigned i = 0; i < amountToAdd; ++i)
        {
            CURL* curlHandle = curl_easy_init();

            if (curlHandle)
            {
                //for timeouts to work in a multi-threaded context,
                //always turn signals off. This also forces dns queries to
                //not be included in the timeout calculations.
                curl_easy_setopt(curlHandle, CURLOPT_NOSIGNAL, 1L);
                curl_easy_setopt(curlHandle, CURLOPT_TIMEOUT_MS, m_requestTimeout);
                curl_easy_setopt(curlHandle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);
                m_handleContainer.push(curlHandle);
                ++actuallyAdded;
            }
            else
            {
                AWS_LOG_ERROR(CurlTag, "curl_easy_init failed to allocate. Will continue retrying until amount to add has exhausted.");
            }
        }

        AWS_LOGSTREAM_INFO(CurlTag, "Pool successfully grown by " << actuallyAdded);
        m_poolSize += actuallyAdded;

        return actuallyAdded > 0;
    }

    AWS_LOG_INFO(CurlTag, "Pool cannot be grown any further, already at max size.");

    return false;
}

