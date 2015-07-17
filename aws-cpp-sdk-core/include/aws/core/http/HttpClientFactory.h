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

#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Client
{
struct ClientConfiguration;
} // namespace Client
namespace Http
{
    class URI;
    class HttpClient;
    class HttpRequest;

class AWS_CORE_API HttpClientFactory
{
public:
    virtual ~HttpClientFactory() {}

    virtual std::shared_ptr<HttpClient> CreateHttpClient(const Aws::Client::ClientConfiguration& clientConfiguration) const;

    virtual std::shared_ptr<HttpRequest> CreateHttpRequest(const Aws::String& uri, HttpMethod method, const Aws::IOStreamFactory& streamFactory) const;

    virtual std::shared_ptr<HttpRequest> CreateHttpRequest(const URI& uri, HttpMethod method, const Aws::IOStreamFactory& streamFactory) const;
};

} // namespace Http
} // namespace Aws

