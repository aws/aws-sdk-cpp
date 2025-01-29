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
  class IgnoresWrappingXmlNameResponse
  {
  public:
    AWS_EC2PROTOCOL_API IgnoresWrappingXmlNameResponse();
    AWS_EC2PROTOCOL_API IgnoresWrappingXmlNameResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API IgnoresWrappingXmlNameResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline void SetFoo(const Aws::String& value) { m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_foo.assign(value); }
    inline IgnoresWrappingXmlNameResponse& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline IgnoresWrappingXmlNameResponse& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline IgnoresWrappingXmlNameResponse& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline IgnoresWrappingXmlNameResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline IgnoresWrappingXmlNameResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_foo;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
