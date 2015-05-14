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

#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
namespace Standard
{

class AWS_CORE_API StandardHttpRequest :  public HttpRequest
{
public:
    StandardHttpRequest(const URI& uri, HttpMethod method);

    virtual HeaderValueCollection GetHeaders() const override;
    virtual const Aws::String& GetHeaderValue(const char* headerName) const override;
    virtual void SetHeaderValue(const char* headerName, const Aws::String& headerValue) override;
    virtual void SetHeaderValue(const Aws::String& headerName, const Aws::String& headerValue) override;
    virtual void DeleteHeader(const char* headerName) override;
    virtual inline void AddContentBody(const std::shared_ptr<Aws::IOStream>& strContent) override { bodyStream = strContent; }
    virtual inline const std::shared_ptr<Aws::IOStream>& GetContentBody() const override { return bodyStream; }
    virtual bool HasHeader(const char*) const override;
    virtual int64_t GetSize() const override;
    virtual const Aws::IOStreamFactory& GetResponseStreamFactory() const override;
    virtual void SetResponseStreamFactory(const Aws::IOStreamFactory& factory) override;
        
private:

    HeaderValueCollection headerMap;
    std::shared_ptr<Aws::IOStream> bodyStream;
    Aws::IOStreamFactory m_responseStreamFactory;
};

} // namespace Standard
} // namespace Http
} // namespace Aws


