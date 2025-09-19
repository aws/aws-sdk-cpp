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
class FlattenedXmlMapResult {
 public:
  AWS_RESTXMLPROTOCOL_API FlattenedXmlMapResult() = default;
  AWS_RESTXMLPROTOCOL_API FlattenedXmlMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API FlattenedXmlMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Map<Aws::String, FooEnum>& GetMyMap() const { return m_myMap; }
  template <typename MyMapT = Aws::Map<Aws::String, FooEnum>>
  void SetMyMap(MyMapT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap = std::forward<MyMapT>(value);
  }
  template <typename MyMapT = Aws::Map<Aws::String, FooEnum>>
  FlattenedXmlMapResult& WithMyMap(MyMapT&& value) {
    SetMyMap(std::forward<MyMapT>(value));
    return *this;
  }
  inline FlattenedXmlMapResult& AddMyMap(Aws::String key, FooEnum value) {
    m_myMapHasBeenSet = true;
    m_myMap.emplace(key, value);
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
  FlattenedXmlMapResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, FooEnum> m_myMap;
  bool m_myMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
