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

#if ENABLE_CURL_CLIENT
    #include <aws/core/http/curl/CurlHttpClient.h>
#elif ENABLE_WINDOWS_CLIENT
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
#if ENABLE_WINDOWS_CLIENT
    switch (clientConfiguration.httpLibOverride)
    { 
        case TransferLibType::WIN_INET_CLIENT:
            return Aws::MakeShared<WinINetSyncHttpClient>(allocationTag, clientConfiguration);

        default:
            return Aws::MakeShared<WinHttpSyncHttpClient>(allocationTag, clientConfiguration);
    }
#elif ENABLE_CURL_CLIENT
    return Aws::MakeShared<CurlHttpClient>(allocationTag, clientConfiguration);
#else
    // When neither of these clients is enabled, gcc gives a warning (converted
    // to error by -Werror) about the unused clientConfiguration parameter. We
    // prevent that warning with AWS_UNREFERENCED_PARAM.
    AWS_UNREFERENCED_PARAM(clientConfiguration);
    return nullptr;
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
