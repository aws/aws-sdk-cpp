/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class JsonIntEnumsRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API JsonIntEnumsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "JsonIntEnums"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline int GetIntegerEnum1() const { return m_integerEnum1; }
  inline bool IntegerEnum1HasBeenSet() const { return m_integerEnum1HasBeenSet; }
  inline void SetIntegerEnum1(int value) {
    m_integerEnum1HasBeenSet = true;
    m_integerEnum1 = value;
  }
  inline JsonIntEnumsRequest& WithIntegerEnum1(int value) {
    SetIntegerEnum1(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerEnum2() const { return m_integerEnum2; }
  inline bool IntegerEnum2HasBeenSet() const { return m_integerEnum2HasBeenSet; }
  inline void SetIntegerEnum2(int value) {
    m_integerEnum2HasBeenSet = true;
    m_integerEnum2 = value;
  }
  inline JsonIntEnumsRequest& WithIntegerEnum2(int value) {
    SetIntegerEnum2(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerEnum3() const { return m_integerEnum3; }
  inline bool IntegerEnum3HasBeenSet() const { return m_integerEnum3HasBeenSet; }
  inline void SetIntegerEnum3(int value) {
    m_integerEnum3HasBeenSet = true;
    m_integerEnum3 = value;
  }
  inline JsonIntEnumsRequest& WithIntegerEnum3(int value) {
    SetIntegerEnum3(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntegerEnumList() const { return m_integerEnumList; }
  inline bool IntegerEnumListHasBeenSet() const { return m_integerEnumListHasBeenSet; }
  template <typename IntegerEnumListT = Aws::Vector<int>>
  void SetIntegerEnumList(IntegerEnumListT&& value) {
    m_integerEnumListHasBeenSet = true;
    m_integerEnumList = std::forward<IntegerEnumListT>(value);
  }
  template <typename IntegerEnumListT = Aws::Vector<int>>
  JsonIntEnumsRequest& WithIntegerEnumList(IntegerEnumListT&& value) {
    SetIntegerEnumList(std::forward<IntegerEnumListT>(value));
    return *this;
  }
  inline JsonIntEnumsRequest& AddIntegerEnumList(int value) {
    m_integerEnumListHasBeenSet = true;
    m_integerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntegerEnumSet() const { return m_integerEnumSet; }
  inline bool IntegerEnumSetHasBeenSet() const { return m_integerEnumSetHasBeenSet; }
  template <typename IntegerEnumSetT = Aws::Vector<int>>
  void SetIntegerEnumSet(IntegerEnumSetT&& value) {
    m_integerEnumSetHasBeenSet = true;
    m_integerEnumSet = std::forward<IntegerEnumSetT>(value);
  }
  template <typename IntegerEnumSetT = Aws::Vector<int>>
  JsonIntEnumsRequest& WithIntegerEnumSet(IntegerEnumSetT&& value) {
    SetIntegerEnumSet(std::forward<IntegerEnumSetT>(value));
    return *this;
  }
  inline JsonIntEnumsRequest& AddIntegerEnumSet(int value) {
    m_integerEnumSetHasBeenSet = true;
    m_integerEnumSet.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, int>& GetIntegerEnumMap() const { return m_integerEnumMap; }
  inline bool IntegerEnumMapHasBeenSet() const { return m_integerEnumMapHasBeenSet; }
  template <typename IntegerEnumMapT = Aws::Map<Aws::String, int>>
  void SetIntegerEnumMap(IntegerEnumMapT&& value) {
    m_integerEnumMapHasBeenSet = true;
    m_integerEnumMap = std::forward<IntegerEnumMapT>(value);
  }
  template <typename IntegerEnumMapT = Aws::Map<Aws::String, int>>
  JsonIntEnumsRequest& WithIntegerEnumMap(IntegerEnumMapT&& value) {
    SetIntegerEnumMap(std::forward<IntegerEnumMapT>(value));
    return *this;
  }
  inline JsonIntEnumsRequest& AddIntegerEnumMap(Aws::String key, int value) {
    m_integerEnumMapHasBeenSet = true;
    m_integerEnumMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  JsonIntEnumsRequest& WithRequestId(RequestIdT&& value) {
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
