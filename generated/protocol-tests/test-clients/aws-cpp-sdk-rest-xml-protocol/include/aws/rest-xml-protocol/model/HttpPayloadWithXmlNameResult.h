/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/PayloadWithXmlName.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {
class HttpPayloadWithXmlNameResult {
 public:
  AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNameResult() = default;
  AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const PayloadWithXmlName& GetNested() const { return m_nested; }
  template <typename NestedT = PayloadWithXmlName>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = std::forward<NestedT>(value);
  }
  template <typename NestedT = PayloadWithXmlName>
  HttpPayloadWithXmlNameResult& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  HttpPayloadWithXmlNameResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  PayloadWithXmlName m_nested;
  bool m_nestedHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
