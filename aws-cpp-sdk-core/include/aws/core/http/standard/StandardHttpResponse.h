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

#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
namespace Standard
{

class AWS_CORE_API StandardHttpResponse :
    public HttpResponse
{
public:
    StandardHttpResponse(const HttpRequest& originatingRequest) :
        HttpResponse(originatingRequest),
        headerMap(),
        bodyStream(originatingRequest.GetResponseStreamFactory())
    {}

    ~StandardHttpResponse() = default;

    HeaderValueCollection GetHeaders() const;
    bool HasHeader(const char* headerName) const;
    const Aws::String& GetHeader(const Aws::String&) const;

    inline Aws::IOStream& GetResponseBody() const { return bodyStream.GetUnderlyingStream(); }
    inline Utils::Stream::ResponseStream&& SwapResponseStreamOwnership() { return std::move(bodyStream); }
    void AddHeader(const Aws::String&, const Aws::String&);

private:
    StandardHttpResponse(const StandardHttpResponse&);
    StandardHttpResponse& operator = (const StandardHttpResponse&);

    Aws::Map<Aws::String, Aws::String> headerMap;
    Utils::Stream::ResponseStream bodyStream;
};

} // namespace Standard
} // namespace Http
} // namespace Aws


