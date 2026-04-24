/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class NestedXmlMapWithXmlNameResult {
 public:
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameResult() = default;
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetNestedXmlMapWithXmlNameMap() const {
    return m_nestedXmlMapWithXmlNameMap;
  }
  template <typename NestedXmlMapWithXmlNameMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  void SetNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapT&& value) {
    m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
    m_nestedXmlMapWithXmlNameMap = std::forward<NestedXmlMapWithXmlNameMapT>(value);
  }
  template <typename NestedXmlMapWithXmlNameMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  NestedXmlMapWithXmlNameResult& WithNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapT&& value) {
    SetNestedXmlMapWithXmlNameMap(std::forward<NestedXmlMapWithXmlNameMapT>(value));
    return *this;
  }
  template <typename NestedXmlMapWithXmlNameMapKeyT = Aws::String,
            typename NestedXmlMapWithXmlNameMapValueT = Aws::Map<Aws::String, Aws::String>>
  NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapKeyT&& key,
                                                               NestedXmlMapWithXmlNameMapValueT&& value) {
    m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
    m_nestedXmlMapWithXmlNameMap.emplace(std::forward<NestedXmlMapWithXmlNameMapKeyT>(key),
                                         std::forward<NestedXmlMapWithXmlNameMapValueT>(value));
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
  NestedXmlMapWithXmlNameResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_nestedXmlMapWithXmlNameMap;
  bool m_nestedXmlMapWithXmlNameMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
