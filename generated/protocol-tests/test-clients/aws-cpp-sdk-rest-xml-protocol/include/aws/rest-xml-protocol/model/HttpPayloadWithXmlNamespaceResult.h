/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/PayloadWithXmlNamespace.h>
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
  class HttpPayloadWithXmlNamespaceResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceResult();
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const PayloadWithXmlNamespace& GetNested() const{ return m_nested; }
    inline void SetNested(const PayloadWithXmlNamespace& value) { m_nested = value; }
    inline void SetNested(PayloadWithXmlNamespace&& value) { m_nested = std::move(value); }
    inline HttpPayloadWithXmlNamespaceResult& WithNested(const PayloadWithXmlNamespace& value) { SetNested(value); return *this;}
    inline HttpPayloadWithXmlNamespaceResult& WithNested(PayloadWithXmlNamespace&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPayloadWithXmlNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPayloadWithXmlNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPayloadWithXmlNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PayloadWithXmlNamespace m_nested;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
