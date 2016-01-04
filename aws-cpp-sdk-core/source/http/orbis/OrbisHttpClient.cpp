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

#include <aws/core/http/curl/OrbisHttpClient.h>

#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Http;


OrbisHttpClient::OrbisHttpClient(const ClientConfiguration& clientConfig) :
    Base()
{
    AWS_UNREFERENCED_PARAM(clientConfig);
}


std::shared_ptr<HttpResponse> OrbisHttpClient::MakeRequest(HttpRequest& request, 
                                                           Aws::Utils::RateLimits::RateLimiterInterface* readLimiter,
                                                           Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
{
    AWS_UNREFERENCED_PARAM(request);
    AWS_UNREFERENCED_PARAM(readLimiter);
    AWS_UNREFERENCED_PARAM(writeLimiter);

    return nullptr;
}
