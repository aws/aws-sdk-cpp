/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class JsonIntEnumsResult {
 public:
  AWS_RESTJSONPROTOCOL_API JsonIntEnumsResult() = default;
  AWS_RESTJSONPROTOCOL_API JsonIntEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API JsonIntEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline int GetIntegerEnum1() const { return m_integerEnum1; }
  inline void SetIntegerEnum1(int value) {
    m_integerEnum1HasBeenSet = true;
    m_integerEnum1 = value;
  }
  inline JsonIntEnumsResult& WithIntegerEnum1(int value) {
    SetIntegerEnum1(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerEnum2() const { return m_integerEnum2; }
  inline void SetIntegerEnum2(int value) {
    m_integerEnum2HasBeenSet = true;
    m_integerEnum2 = value;
  }
  inline JsonIntEnumsResult& WithIntegerEnum2(int value) {
    SetIntegerEnum2(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerEnum3() const { return m_integerEnum3; }
  inline void SetIntegerEnum3(int value) {
    m_integerEnum3HasBeenSet = true;
    m_integerEnum3 = value;
  }
  inline JsonIntEnumsResult& WithIntegerEnum3(int value) {
    SetIntegerEnum3(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntegerEnumList() const { return m_integerEnumList; }
  template <typename IntegerEnumListT = Aws::Vector<int>>
  void SetIntegerEnumList(IntegerEnumListT&& value) {
    m_integerEnumListHasBeenSet = true;
    m_integerEnumList = std::forward<IntegerEnumListT>(value);
  }
  template <typename IntegerEnumListT = Aws::Vector<int>>
  JsonIntEnumsResult& WithIntegerEnumList(IntegerEnumListT&& value) {
    SetIntegerEnumList(std::forward<IntegerEnumListT>(value));
    return *this;
  }
  inline JsonIntEnumsResult& AddIntegerEnumList(int value) {
    m_integerEnumListHasBeenSet = true;
    m_integerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntegerEnumSet() const { return m_integerEnumSet; }
  template <typename IntegerEnumSetT = Aws::Vector<int>>
  void SetIntegerEnumSet(IntegerEnumSetT&& value) {
    m_integerEnumSetHasBeenSet = true;
    m_integerEnumSet = std::forward<IntegerEnumSetT>(value);
  }
  template <typename IntegerEnumSetT = Aws::Vector<int>>
  JsonIntEnumsResult& WithIntegerEnumSet(IntegerEnumSetT&& value) {
    SetIntegerEnumSet(std::forward<IntegerEnumSetT>(value));
    return *this;
  }
  inline JsonIntEnumsResult& AddIntegerEnumSet(int value) {
    m_integerEnumSetHasBeenSet = true;
    m_integerEnumSet.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, int>& GetIntegerEnumMap() const { return m_integerEnumMap; }
  template <typename IntegerEnumMapT = Aws::Map<Aws::String, int>>
  void SetIntegerEnumMap(IntegerEnumMapT&& value) {
    m_integerEnumMapHasBeenSet = true;
    m_integerEnumMap = std::forward<IntegerEnumMapT>(value);
  }
  template <typename IntegerEnumMapT = Aws::Map<Aws::String, int>>
  JsonIntEnumsResult& WithIntegerEnumMap(IntegerEnumMapT&& value) {
    SetIntegerEnumMap(std::forward<IntegerEnumMapT>(value));
    return *this;
  }
  inline JsonIntEnumsResult& AddIntegerEnumMap(Aws::String key, int value) {
    m_integerEnumMapHasBeenSet = true;
    m_integerEnumMap.emplace(key, value);
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
  JsonIntEnumsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_integerEnum1{0};
  bool m_integerEnum1HasBeenSet = false;

  int m_integerEnum2{0};
  bool m_integerEnum2HasBeenSet = false;

  int m_integerEnum3{0};
  bool m_integerEnum3HasBeenSet = false;

  Aws::Vector<int> m_integerEnumList;
  bool m_integerEnumListHasBeenSet = false;

  Aws::Vector<int> m_integerEnumSet;
  bool m_integerEnumSetHasBeenSet = false;

  Aws::Map<Aws::String, int> m_integerEnumMap;
  bool m_integerEnumMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
