/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/GreetingStruct.h>
#include <aws/query-protocol/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {
class XmlEmptyMapsResult {
 public:
  AWS_QUERYPROTOCOL_API XmlEmptyMapsResult() = default;
  AWS_QUERYPROTOCOL_API XmlEmptyMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_QUERYPROTOCOL_API XmlEmptyMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  XmlEmptyMapsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, GreetingStruct> m_myMap;
  bool m_myMapHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
