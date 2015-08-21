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

#include <aws/core/utils/memory/stl/AWSFunction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/stream/ResponseStream.h>

namespace Aws
{
namespace Http
{
    class URI;
} // namespace Http

class AWS_CORE_API AmazonWebServiceRequest
{
public:
        
    AmazonWebServiceRequest();
    virtual ~AmazonWebServiceRequest() {}

    virtual std::shared_ptr<Aws::IOStream> GetBody() const = 0;
    virtual Aws::Http::HeaderValueCollection GetHeaders() const = 0;
    virtual void AddQueryStringParameters(Aws::Http::URI& uri) const { AWS_UNREFERENCED_PARAM(uri); }

    const Aws::IOStreamFactory& GetResponseStreamFactory() const { return m_responseStreamFactory; }
    void SetResponseStreamFactory(const Aws::IOStreamFactory& factory) { m_responseStreamFactory = AWS_BUILD_FUNCTION(factory); }

    inline virtual void SetDataReceivedEventHandler(const Aws::Http::DataReceivedEventHandler& dataReceivedEventHandler) { m_onDataReceived = dataReceivedEventHandler; }
    inline virtual void SetDataSentEventHandler(const Aws::Http::DataSentEventHandler& dataSentEventHandler) { m_onDataSent = dataSentEventHandler; }
    inline virtual void SetDataReceivedEventHandler(Aws::Http::DataReceivedEventHandler&& dataReceivedEventHandler) { m_onDataReceived = dataReceivedEventHandler; }
    inline virtual void SetDataSentEventHandler(Aws::Http::DataSentEventHandler&& dataSentEventHandler) { m_onDataSent = dataSentEventHandler; }

    inline virtual const Aws::Http::DataReceivedEventHandler& GetDataReceivedEventHandler() const { return m_onDataReceived; }
    inline virtual const Aws::Http::DataSentEventHandler& GetDataSentEventHandler() const { return m_onDataSent; }

private:

    Aws::IOStreamFactory m_responseStreamFactory;

    Aws::Http::DataReceivedEventHandler m_onDataReceived;
    Aws::Http::DataSentEventHandler m_onDataSent;
};

} // namespace Aws

