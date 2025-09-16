/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
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
class XmlIntEnumsResult {
 public:
  AWS_QUERYPROTOCOL_API XmlIntEnumsResult() = default;
  AWS_QUERYPROTOCOL_API XmlIntEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_QUERYPROTOCOL_API XmlIntEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline int GetIntEnum1() const { return m_intEnum1; }
  inline void SetIntEnum1(int value) {
    m_intEnum1HasBeenSet = true;
    m_intEnum1 = value;
  }
  inline XmlIntEnumsResult& WithIntEnum1(int value) {
    SetIntEnum1(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntEnum2() const { return m_intEnum2; }
  inline void SetIntEnum2(int value) {
    m_intEnum2HasBeenSet = true;
    m_intEnum2 = value;
  }
  inline XmlIntEnumsResult& WithIntEnum2(int value) {
    SetIntEnum2(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntEnum3() const { return m_intEnum3; }
  inline void SetIntEnum3(int value) {
    m_intEnum3HasBeenSet = true;
    m_intEnum3 = value;
  }
  inline XmlIntEnumsResult& WithIntEnum3(int value) {
    SetIntEnum3(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntEnumList() const { return m_intEnumList; }
  template <typename IntEnumListT = Aws::Vector<int>>
  void SetIntEnumList(IntEnumListT&& value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList = std::forward<IntEnumListT>(value);
  }
  template <typename IntEnumListT = Aws::Vector<int>>
  XmlIntEnumsResult& WithIntEnumList(IntEnumListT&& value) {
    SetIntEnumList(std::forward<IntEnumListT>(value));
    return *this;
  }
  inline XmlIntEnumsResult& AddIntEnumList(int value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntEnumSet() const { return m_intEnumSet; }
  template <typename IntEnumSetT = Aws::Vector<int>>
  void SetIntEnumSet(IntEnumSetT&& value) {
    m_intEnumSetHasBeenSet = true;
    m_intEnumSet = std::forward<IntEnumSetT>(value);
  }
  template <typename IntEnumSetT = Aws::Vector<int>>
  XmlIntEnumsResult& WithIntEnumSet(IntEnumSetT&& value) {
    SetIntEnumSet(std::forward<IntEnumSetT>(value));
    return *this;
  }
  inline XmlIntEnumsResult& AddIntEnumSet(int value) {
    m_intEnumSetHasBeenSet = true;
    m_intEnumSet.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const { return m_intEnumMap; }
  template <typename IntEnumMapT = Aws::Map<Aws::String, int>>
  void SetIntEnumMap(IntEnumMapT&& value) {
    m_intEnumMapHasBeenSet = true;
    m_intEnumMap = std::forward<IntEnumMapT>(value);
  }
  template <typename IntEnumMapT = Aws::Map<Aws::String, int>>
  XmlIntEnumsResult& WithIntEnumMap(IntEnumMapT&& value) {
    SetIntEnumMap(std::forward<IntEnumMapT>(value));
    return *this;
  }
  inline XmlIntEnumsResult& AddIntEnumMap(Aws::String key, int value) {
    m_intEnumMapHasBeenSet = true;
    m_intEnumMap.emplace(key, value);
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
  XmlIntEnumsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  int m_intEnum1{0};
  bool m_intEnum1HasBeenSet = false;

  int m_intEnum2{0};
  bool m_intEnum2HasBeenSet = false;

  int m_intEnum3{0};
  bool m_intEnum3HasBeenSet = false;

  Aws::Vector<int> m_intEnumList;
  bool m_intEnumListHasBeenSet = false;

  Aws::Vector<int> m_intEnumSet;
  bool m_intEnumSetHasBeenSet = false;

  Aws::Map<Aws::String, int> m_intEnumMap;
  bool m_intEnumMapHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
