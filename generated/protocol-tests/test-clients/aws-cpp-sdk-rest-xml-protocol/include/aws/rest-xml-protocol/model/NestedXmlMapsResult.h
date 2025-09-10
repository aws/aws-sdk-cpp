/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>

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
class NestedXmlMapsResult {
 public:
  AWS_RESTXMLPROTOCOL_API NestedXmlMapsResult() = default;
  AWS_RESTXMLPROTOCOL_API NestedXmlMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API NestedXmlMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetNestedMap() const { return m_nestedMap; }
  template <typename NestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  void SetNestedMap(NestedMapT&& value) {
    m_nestedMapHasBeenSet = true;
    m_nestedMap = std::forward<NestedMapT>(value);
  }
  template <typename NestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  NestedXmlMapsResult& WithNestedMap(NestedMapT&& value) {
    SetNestedMap(std::forward<NestedMapT>(value));
    return *this;
  }
  template <typename NestedMapKeyT = Aws::String, typename NestedMapValueT = Aws::Map<Aws::String, FooEnum>>
  NestedXmlMapsResult& AddNestedMap(NestedMapKeyT&& key, NestedMapValueT&& value) {
    m_nestedMapHasBeenSet = true;
    m_nestedMap.emplace(std::forward<NestedMapKeyT>(key), std::forward<NestedMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetFlatNestedMap() const { return m_flatNestedMap; }
  template <typename FlatNestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  void SetFlatNestedMap(FlatNestedMapT&& value) {
    m_flatNestedMapHasBeenSet = true;
    m_flatNestedMap = std::forward<FlatNestedMapT>(value);
  }
  template <typename FlatNestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  NestedXmlMapsResult& WithFlatNestedMap(FlatNestedMapT&& value) {
    SetFlatNestedMap(std::forward<FlatNestedMapT>(value));
    return *this;
  }
  template <typename FlatNestedMapKeyT = Aws::String, typename FlatNestedMapValueT = Aws::Map<Aws::String, FooEnum>>
  NestedXmlMapsResult& AddFlatNestedMap(FlatNestedMapKeyT&& key, FlatNestedMapValueT&& value) {
    m_flatNestedMapHasBeenSet = true;
    m_flatNestedMap.emplace(std::forward<FlatNestedMapKeyT>(key), std::forward<FlatNestedMapValueT>(value));
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
  NestedXmlMapsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_nestedMap;
  bool m_nestedMapHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_flatNestedMap;
  bool m_flatNestedMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
