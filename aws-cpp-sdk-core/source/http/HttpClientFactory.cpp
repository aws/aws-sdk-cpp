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
#else
    #include <aws/core/http/windows/WinINetSyncHttpClient.h>
#endif

#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/memory/AWSMemory.h>

using namespace Aws::Client;
using namespace Aws::Http;

static const char* allocationTag = "HttpClientFactory";

std::shared_ptr<HttpClient> HttpClientFactory::CreateHttpClient(const ClientConfiguration& clientConfiguration) const
{
    return Aws::MakeShared<PlatformHttpClient>(allocationTag, clientConfiguration);
}

std::shared_ptr<HttpRequest> HttpClientFactory::CreateHttpRequest(const Aws::String& uri, HttpMethod method, const Aws::IOStreamFactory& streamFactory) const
{
    auto request = Aws::MakeShared<Standard::StandardHttpRequest>(allocationTag, uri, method);
    request->SetResponseStreamFactory(streamFactory);

    return request;
}
