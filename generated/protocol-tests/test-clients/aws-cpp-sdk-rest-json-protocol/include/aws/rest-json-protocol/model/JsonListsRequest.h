/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <aws/rest-json-protocol/model/StructureListMember.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class JsonListsRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API JsonListsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "JsonLists"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringList() const { return m_stringList; }
  inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
  template <typename StringListT = Aws::Vector<Aws::String>>
  void SetStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList = std::forward<StringListT>(value);
  }
  template <typename StringListT = Aws::Vector<Aws::String>>
  JsonListsRequest& WithStringList(StringListT&& value) {
    SetStringList(std::forward<StringListT>(value));
    return *this;
  }
  template <typename StringListT = Aws::String>
  JsonListsRequest& AddStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList.emplace_back(std::forward<StringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringSet() const { return m_stringSet; }
  inline bool StringSetHasBeenSet() const { return m_stringSetHasBeenSet; }
  template <typename StringSetT = Aws::Vector<Aws::String>>
  void SetStringSet(StringSetT&& value) {
    m_stringSetHasBeenSet = true;
    m_stringSet = std::forward<StringSetT>(value);
  }
  template <typename StringSetT = Aws::Vector<Aws::String>>
  JsonListsRequest& WithStringSet(StringSetT&& value) {
    SetStringSet(std::forward<StringSetT>(value));
    return *this;
  }
  template <typename StringSetT = Aws::String>
  JsonListsRequest& AddStringSet(StringSetT&& value) {
    m_stringSetHasBeenSet = true;
    m_stringSet.emplace_back(std::forward<StringSetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntegerList() const { return m_integerList; }
  inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }
  template <typename IntegerListT = Aws::Vector<int>>
  void SetIntegerList(IntegerListT&& value) {
    m_integerListHasBeenSet = true;
    m_integerList = std::forward<IntegerListT>(value);
  }
  template <typename IntegerListT = Aws::Vector<int>>
  JsonListsRequest& WithIntegerList(IntegerListT&& value) {
    SetIntegerList(std::forward<IntegerListT>(value));
    return *this;
  }
  inline JsonListsRequest& AddIntegerList(int value) {
    m_integerListHasBeenSet = true;
    m_integerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetBooleanList() const { return m_booleanList; }
  inline bool BooleanListHasBeenSet() const { return m_booleanListHasBeenSet; }
  template <typename BooleanListT = Aws::Vector<bool>>
  void SetBooleanList(BooleanListT&& value) {
    m_booleanListHasBeenSet = true;
    m_booleanList = std::forward<BooleanListT>(value);
  }
  template <typename BooleanListT = Aws::Vector<bool>>
  JsonListsRequest& WithBooleanList(BooleanListT&& value) {
    SetBooleanList(std::forward<BooleanListT>(value));
    return *this;
  }
  inline JsonListsRequest& AddBooleanList(bool value) {
    m_booleanListHasBeenSet = true;
    m_booleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const { return m_timestampList; }
  inline bool TimestampListHasBeenSet() const { return m_timestampListHasBeenSet; }
  template <typename TimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetTimestampList(TimestampListT&& value) {
    m_timestampListHasBeenSet = true;
    m_timestampList = std::forward<TimestampListT>(value);
  }
  template <typename TimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  JsonListsRequest& WithTimestampList(TimestampListT&& value) {
    SetTimestampList(std::forward<TimestampListT>(value));
    return *this;
  }
  template <typename TimestampListT = Aws::Utils::DateTime>
  JsonListsRequest& AddTimestampList(TimestampListT&& value) {
    m_timestampListHasBeenSet = true;
    m_timestampList.emplace_back(std::forward<TimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetEnumList() const { return m_enumList; }
  inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }
  template <typename EnumListT = Aws::Vector<FooEnum>>
  void SetEnumList(EnumListT&& value) {
    m_enumListHasBeenSet = true;
    m_enumList = std::forward<EnumListT>(value);
  }
  template <typename EnumListT = Aws::Vector<FooEnum>>
  JsonListsRequest& WithEnumList(EnumListT&& value) {
    SetEnumList(std::forward<EnumListT>(value));
    return *this;
  }
  inline JsonListsRequest& AddEnumList(FooEnum value) {
    m_enumListHasBeenSet = true;
    m_enumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntEnumList() const { return m_intEnumList; }
  inline bool IntEnumListHasBeenSet() const { return m_intEnumListHasBeenSet; }
  template <typename IntEnumListT = Aws::Vector<int>>
  void SetIntEnumList(IntEnumListT&& value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList = std::forward<IntEnumListT>(value);
  }
  template <typename IntEnumListT = Aws::Vector<int>>
  JsonListsRequest& WithIntEnumList(IntEnumListT&& value) {
    SetIntEnumList(std::forward<IntEnumListT>(value));
    return *this;
  }
  inline JsonListsRequest& AddIntEnumList(int value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const { return m_nestedStringList; }
  inline bool NestedStringListHasBeenSet() const { return m_nestedStringListHasBeenSet; }
  template <typename NestedStringListT = Aws::Vector<Aws::Vector<Aws::String>>>
  void SetNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList = std::forward<NestedStringListT>(value);
  }
  template <typename NestedStringListT = Aws::Vector<Aws::Vector<Aws::String>>>
  JsonListsRequest& WithNestedStringList(NestedStringListT&& value) {
    SetNestedStringList(std::forward<NestedStringListT>(value));
    return *this;
  }
  template <typename NestedStringListT = Aws::Vector<Aws::String>>
  JsonListsRequest& AddNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList.emplace_back(std::forward<NestedStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<StructureListMember>& GetStructureList() const { return m_structureList; }
  inline bool StructureListHasBeenSet() const { return m_structureListHasBeenSet; }
  template <typename StructureListT = Aws::Vector<StructureListMember>>
  void SetStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList = std::forward<StructureListT>(value);
  }
  template <typename StructureListT = Aws::Vector<StructureListMember>>
  JsonListsRequest& WithStructureList(StructureListT&& value) {
    SetStructureList(std::forward<StructureListT>(value));
    return *this;
  }
  template <typename StructureListT = StructureListMember>
  JsonListsRequest& AddStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList.emplace_back(std::forward<StructureListT>(value));
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
  JsonListsRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_stringList;
  bool m_stringListHasBeenSet = false;

  Aws::Vector<Aws::String> m_stringSet;
  bool m_stringSetHasBeenSet = false;

  Aws::Vector<int> m_integerList;
  bool m_integerListHasBeenSet = false;

  Aws::Vector<bool> m_booleanList;
  bool m_booleanListHasBeenSet = false;

  Aws::Vector<Aws::Utils::DateTime> m_timestampList;
  bool m_timestampListHasBeenSet = false;

  Aws::Vector<FooEnum> m_enumList;
  bool m_enumListHasBeenSet = false;

  Aws::Vector<int> m_intEnumList;
  bool m_intEnumListHasBeenSet = false;

  Aws::Vector<Aws::Vector<Aws::String>> m_nestedStringList;
  bool m_nestedStringListHasBeenSet = false;

  Aws::Vector<StructureListMember> m_structureList;
  bool m_structureListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
