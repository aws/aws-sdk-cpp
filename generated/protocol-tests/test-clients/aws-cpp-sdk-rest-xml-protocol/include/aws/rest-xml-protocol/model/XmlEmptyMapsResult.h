/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/GreetingStruct.h>

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
class XmlEmptyMapsResult {
 public:
  AWS_RESTXMLPROTOCOL_API XmlEmptyMapsResult() = default;
  AWS_RESTXMLPROTOCOL_API XmlEmptyMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API XmlEmptyMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Map<Aws::String, GreetingStruct>& GetMyMap() const { return m_myMap; }
  template <typename MyMapT = Aws::Map<Aws::String, GreetingStruct>>
  void SetMyMap(MyMapT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap = std::forward<MyMapT>(value);
  }
  template <typename MyMapT = Aws::Map<Aws::String, GreetingStruct>>
  XmlEmptyMapsResult& WithMyMap(MyMapT&& value) {
    SetMyMap(std::forward<MyMapT>(value));
    return *this;
  }
  template <typename MyMapKeyT = Aws::String, typename MyMapValueT = GreetingStruct>
  XmlEmptyMapsResult& AddMyMap(MyMapKeyT&& key, MyMapValueT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap.emplace(std::forward<MyMapKeyT>(key), std::forward<MyMapValueT>(value));
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
  XmlEmptyMapsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, GreetingStruct> m_myMap;
  bool m_myMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
