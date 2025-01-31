/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2Protocol
{
namespace Model
{
  class GreetingWithErrorsResponse
  {
  public:
    AWS_EC2PROTOCOL_API GreetingWithErrorsResponse();
    AWS_EC2PROTOCOL_API GreetingWithErrorsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API GreetingWithErrorsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetGreeting() const{ return m_greeting; }
    inline void SetGreeting(const Aws::String& value) { m_greeting = value; }
    inline void SetGreeting(Aws::String&& value) { m_greeting = std::move(value); }
    inline void SetGreeting(const char* value) { m_greeting.assign(value); }
    inline GreetingWithErrorsResponse& WithGreeting(const Aws::String& value) { SetGreeting(value); return *this;}
    inline GreetingWithErrorsResponse& WithGreeting(Aws::String&& value) { SetGreeting(std::move(value)); return *this;}
    inline GreetingWithErrorsResponse& WithGreeting(const char* value) { SetGreeting(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GreetingWithErrorsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GreetingWithErrorsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_greeting;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
