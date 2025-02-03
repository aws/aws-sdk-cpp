/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/PayloadWithXmlNamespaceAndPrefix.h>
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
  class HttpPayloadWithXmlNamespaceAndPrefixResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceAndPrefixResult();
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceAndPrefixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceAndPrefixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const PayloadWithXmlNamespaceAndPrefix& GetNested() const{ return m_nested; }
    inline void SetNested(const PayloadWithXmlNamespaceAndPrefix& value) { m_nested = value; }
    inline void SetNested(PayloadWithXmlNamespaceAndPrefix&& value) { m_nested = std::move(value); }
    inline HttpPayloadWithXmlNamespaceAndPrefixResult& WithNested(const PayloadWithXmlNamespaceAndPrefix& value) { SetNested(value); return *this;}
    inline HttpPayloadWithXmlNamespaceAndPrefixResult& WithNested(PayloadWithXmlNamespaceAndPrefix&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPayloadWithXmlNamespaceAndPrefixResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPayloadWithXmlNamespaceAndPrefixResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPayloadWithXmlNamespaceAndPrefixResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PayloadWithXmlNamespaceAndPrefix m_nested;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
