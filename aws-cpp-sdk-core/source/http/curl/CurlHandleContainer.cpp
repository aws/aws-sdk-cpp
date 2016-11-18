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

#undef min

#include <algorithm>

using namespace Aws::Utils::Logging;
using namespace Aws::Http;

static const char* CURL_HANDLE_CONTAINER_TAG = "CurlHandleContainer";


CurlHandleContainer::CurlHandleContainer(unsigned maxSize, long requestTimeout, long connectTimeout) :
                m_maxPoolSize(maxSize), m_requestTimeout(requestTimeout), m_connectTimeout(connectTimeout),
                m_poolSize(0)
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Initializing CurlHandleContainer with size " << maxSize);
}

CurlHandleContainer::~CurlHandleContainer()
{
    AWS_LOG_INFO(CURL_HANDLE_CONTAINER_TAG, "Cleaning up CurlHandleContainer.");
    for (CURL* handle : m_handleContainer.ShutdownAndWait(m_poolSize))
    {
        AWS_LOG_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Cleaning up %p.", handle);
        curl_easy_cleanup(handle);
    }
}

CURL* CurlHandleContainer::AcquireCurlHandle()
{
    AWS_LOG_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Attempting to acquire curl connection.");

    if(!m_handleContainer.HasResourcesAvailable())
    {
        AWS_LOG_DEBUG(CURL_HANDLE_CONTAINER_TAG, "No current connections available in pool. Attempting to create new connections.");
        CheckAndGrowPool();
    }

    CURL* handle = m_handleContainer.Acquire();
    AWS_LOG_INFO(CURL_HANDLE_CONTAINER_TAG, "Connection has been released. Continuing.");
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Returning connection handle " << handle);
    return handle;
}

void CurlHandleContainer::ReleaseCurlHandle(CURL* handle)
{
    if (handle)
    {
        curl_easy_reset(handle);
        SetDefaultOptionsOnHandle(handle);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Releasing curl handle " << handle);
        m_handleContainer.Release(handle);
        AWS_LOG_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Notified waiting threads.");
    }
}

bool CurlHandleContainer::CheckAndGrowPool()
{
    if (m_poolSize < m_maxPoolSize)
    {
        unsigned multiplier = m_poolSize > 0 ? m_poolSize : 1;
        unsigned amountToAdd = std::min(multiplier * 2, m_maxPoolSize - m_poolSize);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "attempting to grow pool size by " << amountToAdd);

        unsigned actuallyAdded = 0;
        for (unsigned i = 0; i < amountToAdd; ++i)
        {
            CURL* curlHandle = curl_easy_init();

            if (curlHandle)
            {
                SetDefaultOptionsOnHandle(curlHandle);
                m_handleContainer.Release(curlHandle);
                ++actuallyAdded;
            }
            else
            {
                AWS_LOG_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_easy_init failed to allocate. Will continue retrying until amount to add has exhausted.");
            }
        }

        AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Pool successfully grown by " << actuallyAdded);
        m_poolSize += actuallyAdded;

        return actuallyAdded > 0;
    }

    AWS_LOG_INFO(CURL_HANDLE_CONTAINER_TAG, "Pool cannot be grown any further, already at max size.");

    return false;
}

void CurlHandleContainer::SetDefaultOptionsOnHandle(void* handle)
{
    //for timeouts to work in a multi-threaded context,
    //always turn signals off. This also forces dns queries to
    //not be included in the timeout calculations.
    curl_easy_setopt(handle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(handle, CURLOPT_TIMEOUT_MS, m_requestTimeout);
    curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);
}
