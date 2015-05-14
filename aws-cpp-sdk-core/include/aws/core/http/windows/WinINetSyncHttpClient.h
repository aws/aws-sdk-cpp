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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/HttpClient.h>

namespace Aws
{
namespace Client
{
struct ClientConfiguration;
} // namespace Client

namespace Http
{

class WinINetConnectionPoolMgr;

//Curl implementation of an http client. Right now it is only synchronous.
class AWS_CORE_API WinINetSyncHttpClient : public HttpClient
{
public:
    //Creates client
    WinINetSyncHttpClient(const Aws::Client::ClientConfiguration& clientConfig);
    ~WinINetSyncHttpClient();

    //Makes request and recieves response synchronously
    std::shared_ptr<HttpResponse> MakeRequest(HttpRequest& request, 
                                              Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr, 
                                              Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const;

private:

    WinINetSyncHttpClient &operator =(const WinINetSyncHttpClient &rhs);

    void* m_openHandle;
    //we need control over the order in which this gets cleaned up
    //that's why I'm not using unique_ptr here.
    WinINetConnectionPoolMgr* m_connectionPoolMgr;
};

using PlatformHttpClient = WinINetSyncHttpClient;

} // namespace Http
} // namespace Aws

