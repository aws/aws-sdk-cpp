/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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


using namespace Aws::Utils::Logging;
using namespace Aws::Http;

static const char* CURL_HANDLE_CONTAINER_TAG = "CurlHandleContainer";


CurlHandleContainer::CurlEasyHandleManager::CurlEasyHandleManager(unsigned long requestTimeout, unsigned long connectTimeout)
: m_requestTimeout(requestTimeout), m_connectTimeout(connectTimeout)
{}

CURL *CurlHandleContainer::CurlEasyHandleManager::Create() const
{
    CURL *handle = curl_easy_init();
    if (!handle)
    {
        AWS_LOGSTREAM_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_easy_init failed to allocate.");
        return nullptr;
    }

    SetDefaultOptionsOnHandle(handle);
    return handle;
}

void CurlHandleContainer::CurlEasyHandleManager::Reset(CURL *handle) const
{
    assert(handle);
    curl_easy_reset(handle);
    SetDefaultOptionsOnHandle(handle);
}

void CurlHandleContainer::CurlEasyHandleManager::Destroy(CURL *handle) const
{
    assert(handle);
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Cleaning up " << handle);
    curl_easy_cleanup(handle);
}

void CurlHandleContainer::CurlEasyHandleManager::SetDefaultOptionsOnHandle(CURL *handle) const
{
    assert(handle);
    //for timeouts to work in a multi-threaded context,
    //always turn signals off. This also forces dns queries to
    //not be included in the timeout calculations.
    curl_easy_setopt(handle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(handle, CURLOPT_TIMEOUT_MS, 0L);
    curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);
    curl_easy_setopt(handle, CURLOPT_LOW_SPEED_LIMIT, 1L);
    curl_easy_setopt(handle, CURLOPT_LOW_SPEED_TIME, m_requestTimeout / 1000);
}

CurlHandleContainer::CurlHandleContainer(unsigned maxSize, long requestTimeout, long connectTimeout)
: m_handleContainer(maxSize, requestTimeout, connectTimeout)
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Initializing CurlHandleContainer with size " << maxSize);
}

CURL* CurlHandleContainer::AcquireCurlHandle()
{
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Attempting to acquire curl connection.");
    auto handle = m_handleContainer.Acquire();
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Returning connection handle " << handle);
    return handle;
}

void CurlHandleContainer::ReleaseCurlHandle(CURL* handle)
{
    if (!handle)
        return;

    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Releasing curl handle " << handle);
    m_handleContainer.Release(handle);
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Notified waiting threads.");
}
