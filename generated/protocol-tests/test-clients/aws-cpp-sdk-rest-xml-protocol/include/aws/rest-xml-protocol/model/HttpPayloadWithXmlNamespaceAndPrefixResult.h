﻿/**
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
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceAndPrefixResult() = default;
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceAndPrefixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceAndPrefixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const PayloadWithXmlNamespaceAndPrefix& GetNested() const { return m_nested; }
    template<typename NestedT = PayloadWithXmlNamespaceAndPrefix>
    void SetNested(NestedT&& value) { m_nestedHasBeenSet = true; m_nested = std::forward<NestedT>(value); }
    template<typename NestedT = PayloadWithXmlNamespaceAndPrefix>
    HttpPayloadWithXmlNamespaceAndPrefixResult& WithNested(NestedT&& value) { SetNested(std::forward<NestedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    HttpPayloadWithXmlNamespaceAndPrefixResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PayloadWithXmlNamespaceAndPrefix m_nested;
    bool m_nestedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
