/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/PayloadWithXmlName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RestXmlProtocol
{
namespace Model
{
  class BodyWithXmlNameResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API BodyWithXmlNameResult();
    AWS_RESTXMLPROTOCOL_API BodyWithXmlNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API BodyWithXmlNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const PayloadWithXmlName& GetNested() const{ return m_nested; }
    inline void SetNested(const PayloadWithXmlName& value) { m_nested = value; }
    inline void SetNested(PayloadWithXmlName&& value) { m_nested = std::move(value); }
    inline BodyWithXmlNameResult& WithNested(const PayloadWithXmlName& value) { SetNested(value); return *this;}
    inline BodyWithXmlNameResult& WithNested(PayloadWithXmlName&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BodyWithXmlNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BodyWithXmlNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BodyWithXmlNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PayloadWithXmlName m_nested;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
