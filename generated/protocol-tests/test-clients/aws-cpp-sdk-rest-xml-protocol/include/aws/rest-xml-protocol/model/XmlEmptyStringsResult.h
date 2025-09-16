/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

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
class XmlEmptyStringsResult {
 public:
  AWS_RESTXMLPROTOCOL_API XmlEmptyStringsResult() = default;
  AWS_RESTXMLPROTOCOL_API XmlEmptyStringsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API XmlEmptyStringsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::String& GetEmptyString() const { return m_emptyString; }
  template <typename EmptyStringT = Aws::String>
  void SetEmptyString(EmptyStringT&& value) {
    m_emptyStringHasBeenSet = true;
    m_emptyString = std::forward<EmptyStringT>(value);
  }
  template <typename EmptyStringT = Aws::String>
  XmlEmptyStringsResult& WithEmptyString(EmptyStringT&& value) {
    SetEmptyString(std::forward<EmptyStringT>(value));
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
  XmlEmptyStringsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emptyString;
  bool m_emptyStringHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
