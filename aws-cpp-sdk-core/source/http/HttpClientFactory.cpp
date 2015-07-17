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

#include <aws/core/http/HttpClientFactory.h>

#if USE_CURL_CLIENT
    #include <aws/core/http/curl/CurlHttpClient.h>
#endif

#ifdef _WIN32
    #include <aws/core/http/windows/WinINetSyncHttpClient.h>
    #include <aws/core/http/windows/WinHttpSyncHttpClient.h>
#endif

#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils::Logging;

static const char* allocationTag = "HttpClientFactory";

std::shared_ptr<HttpClient> HttpClientFactory::CreateHttpClient(const ClientConfiguration& clientConfiguration) const
{
    // Figure out whether the selected option is available but fail gracefully and return a default of some type if not
    // Windows clients:  Http and Inet are always options, Curl MIGHT be an option if USE_CURL_CLIENT is on, and http is "default"
    // Other clients: Curl is your default
    switch (clientConfiguration.httpLibOverride)
    {
    // Check for Curl first - USE_CURL_CLIENT must be set for this to work
    case TransferLibType::CURL_CLIENT:
    {
#if USE_CURL_CLIENT
        return Aws::MakeShared<CurlHttpClient>(allocationTag, clientConfiguration);
#else
        AWS_LOG_WARN("HttpClientFactoryHttpClientFactory", "Curl client configuration selected but curl is not available.");
#endif
    }

    // Windows additionally has http and inet as possible options, let's check those and default to http
#ifdef _WIN32
    // Fallthrough intended - Winhttp is the default windows setting and will also be returned if curl was selected but USE_CURL_CLIENT is false
    case TransferLibType::DEFAULT_CLIENT:
    case TransferLibType::WIN_HTTP_CLIENT:
    {
        return Aws::MakeShared<WinHttpSyncHttpClient>(allocationTag, clientConfiguration);
    }
    break;
    case TransferLibType::WIN_INET_CLIENT:
    {
        return Aws::MakeShared<WinINetSyncHttpClient>(allocationTag, clientConfiguration);
    }
    break;
#endif
    default:
    {

    }
    }
 // At this point most likely we're a non windows client with the DEFAULT option - Curl will be used.
 // If not we're some sort of new option which hasn't been implemented - use http (must return something at this point)
#if USE_CURL_CLIENT
    return Aws::MakeShared<CurlHttpClient>(allocationTag, clientConfiguration);
#else
    return Aws::MakeShared<WinHttpSyncHttpClient>(allocationTag, clientConfiguration);
#endif

}

std::shared_ptr<HttpRequest> HttpClientFactory::CreateHttpRequest(const Aws::String& uri, HttpMethod method, const Aws::IOStreamFactory& streamFactory) const
{
    return CreateHttpRequest(URI(uri), method, streamFactory);
}

std::shared_ptr<HttpRequest> HttpClientFactory::CreateHttpRequest(const URI& uri, HttpMethod method, const Aws::IOStreamFactory& streamFactory) const
{
    auto request = Aws::MakeShared<Standard::StandardHttpRequest>(allocationTag, uri, method);
    request->SetResponseStreamFactory(streamFactory);

    return request;
}
