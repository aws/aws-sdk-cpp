/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
#include <aws/rest-xml-protocol/model/StructureListMember.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlEmptyListsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlEmptyListsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlEmptyLists"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringList() const { return m_stringList; }
  inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
  template <typename StringListT = Aws::Vector<Aws::String>>
  void SetStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList = std::forward<StringListT>(value);
  }
  template <typename StringListT = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& WithStringList(StringListT&& value) {
    SetStringList(std::forward<StringListT>(value));
    return *this;
  }
  template <typename StringListT = Aws::String>
  XmlEmptyListsRequest& AddStringList(StringListT&& value) {
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
  XmlEmptyListsRequest& WithStringSet(StringSetT&& value) {
    SetStringSet(std::forward<StringSetT>(value));
    return *this;
  }
  template <typename StringSetT = Aws::String>
  XmlEmptyListsRequest& AddStringSet(StringSetT&& value) {
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
  XmlEmptyListsRequest& WithIntegerList(IntegerListT&& value) {
    SetIntegerList(std::forward<IntegerListT>(value));
    return *this;
  }
  inline XmlEmptyListsRequest& AddIntegerList(int value) {
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
  XmlEmptyListsRequest& WithBooleanList(BooleanListT&& value) {
    SetBooleanList(std::forward<BooleanListT>(value));
    return *this;
  }
  inline XmlEmptyListsRequest& AddBooleanList(bool value) {
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
  XmlEmptyListsRequest& WithTimestampList(TimestampListT&& value) {
    SetTimestampList(std::forward<TimestampListT>(value));
    return *this;
  }
  template <typename TimestampListT = Aws::Utils::DateTime>
  XmlEmptyListsRequest& AddTimestampList(TimestampListT&& value) {
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
  XmlEmptyListsRequest& WithEnumList(EnumListT&& value) {
    SetEnumList(std::forward<EnumListT>(value));
    return *this;
  }
  inline XmlEmptyListsRequest& AddEnumList(FooEnum value) {
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
  XmlEmptyListsRequest& WithIntEnumList(IntEnumListT&& value) {
    SetIntEnumList(std::forward<IntEnumListT>(value));
    return *this;
  }
  inline XmlEmptyListsRequest& AddIntEnumList(int value) {
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
  XmlEmptyListsRequest& WithNestedStringList(NestedStringListT&& value) {
    SetNestedStringList(std::forward<NestedStringListT>(value));
    return *this;
  }
  template <typename NestedStringListT = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& AddNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList.emplace_back(std::forward<NestedStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetRenamedListMembers() const { return m_renamedListMembers; }
  inline bool RenamedListMembersHasBeenSet() const { return m_renamedListMembersHasBeenSet; }
  template <typename RenamedListMembersT = Aws::Vector<Aws::String>>
  void SetRenamedListMembers(RenamedListMembersT&& value) {
    m_renamedListMembersHasBeenSet = true;
    m_renamedListMembers = std::forward<RenamedListMembersT>(value);
  }
  template <typename RenamedListMembersT = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& WithRenamedListMembers(RenamedListMembersT&& value) {
    SetRenamedListMembers(std::forward<RenamedListMembersT>(value));
    return *this;
  }
  template <typename RenamedListMembersT = Aws::String>
  XmlEmptyListsRequest& AddRenamedListMembers(RenamedListMembersT&& value) {
    m_renamedListMembersHasBeenSet = true;
    m_renamedListMembers.emplace_back(std::forward<RenamedListMembersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedList() const { return m_flattenedList; }
  inline bool FlattenedListHasBeenSet() const { return m_flattenedListHasBeenSet; }
  template <typename FlattenedListT = Aws::Vector<Aws::String>>
  void SetFlattenedList(FlattenedListT&& value) {
    m_flattenedListHasBeenSet = true;
    m_flattenedList = std::forward<FlattenedListT>(value);
  }
  template <typename FlattenedListT = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& WithFlattenedList(FlattenedListT&& value) {
    SetFlattenedList(std::forward<FlattenedListT>(value));
    return *this;
  }
  template <typename FlattenedListT = Aws::String>
  XmlEmptyListsRequest& AddFlattenedList(FlattenedListT&& value) {
    m_flattenedListHasBeenSet = true;
    m_flattenedList.emplace_back(std::forward<FlattenedListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedList2() const { return m_flattenedList2; }
  inline bool FlattenedList2HasBeenSet() const { return m_flattenedList2HasBeenSet; }
  template <typename FlattenedList2T = Aws::Vector<Aws::String>>
  void SetFlattenedList2(FlattenedList2T&& value) {
    m_flattenedList2HasBeenSet = true;
    m_flattenedList2 = std::forward<FlattenedList2T>(value);
  }
  template <typename FlattenedList2T = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& WithFlattenedList2(FlattenedList2T&& value) {
    SetFlattenedList2(std::forward<FlattenedList2T>(value));
    return *this;
  }
  template <typename FlattenedList2T = Aws::String>
  XmlEmptyListsRequest& AddFlattenedList2(FlattenedList2T&& value) {
    m_flattenedList2HasBeenSet = true;
    m_flattenedList2.emplace_back(std::forward<FlattenedList2T>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedListWithMemberNamespace() const { return m_flattenedListWithMemberNamespace; }
  inline bool FlattenedListWithMemberNamespaceHasBeenSet() const { return m_flattenedListWithMemberNamespaceHasBeenSet; }
  template <typename FlattenedListWithMemberNamespaceT = Aws::Vector<Aws::String>>
  void SetFlattenedListWithMemberNamespace(FlattenedListWithMemberNamespaceT&& value) {
    m_flattenedListWithMemberNamespaceHasBeenSet = true;
    m_flattenedListWithMemberNamespace = std::forward<FlattenedListWithMemberNamespaceT>(value);
  }
  template <typename FlattenedListWithMemberNamespaceT = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& WithFlattenedListWithMemberNamespace(FlattenedListWithMemberNamespaceT&& value) {
    SetFlattenedListWithMemberNamespace(std::forward<FlattenedListWithMemberNamespaceT>(value));
    return *this;
  }
  template <typename FlattenedListWithMemberNamespaceT = Aws::String>
  XmlEmptyListsRequest& AddFlattenedListWithMemberNamespace(FlattenedListWithMemberNamespaceT&& value) {
    m_flattenedListWithMemberNamespaceHasBeenSet = true;
    m_flattenedListWithMemberNamespace.emplace_back(std::forward<FlattenedListWithMemberNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedListWithNamespace() const { return m_flattenedListWithNamespace; }
  inline bool FlattenedListWithNamespaceHasBeenSet() const { return m_flattenedListWithNamespaceHasBeenSet; }
  template <typename FlattenedListWithNamespaceT = Aws::Vector<Aws::String>>
  void SetFlattenedListWithNamespace(FlattenedListWithNamespaceT&& value) {
    m_flattenedListWithNamespaceHasBeenSet = true;
    m_flattenedListWithNamespace = std::forward<FlattenedListWithNamespaceT>(value);
  }
  template <typename FlattenedListWithNamespaceT = Aws::Vector<Aws::String>>
  XmlEmptyListsRequest& WithFlattenedListWithNamespace(FlattenedListWithNamespaceT&& value) {
    SetFlattenedListWithNamespace(std::forward<FlattenedListWithNamespaceT>(value));
    return *this;
  }
  template <typename FlattenedListWithNamespaceT = Aws::String>
  XmlEmptyListsRequest& AddFlattenedListWithNamespace(FlattenedListWithNamespaceT&& value) {
    m_flattenedListWithNamespaceHasBeenSet = true;
    m_flattenedListWithNamespace.emplace_back(std::forward<FlattenedListWithNamespaceT>(value));
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
  XmlEmptyListsRequest& WithStructureList(StructureListT&& value) {
    SetStructureList(std::forward<StructureListT>(value));
    return *this;
  }
  template <typename StructureListT = StructureListMember>
  XmlEmptyListsRequest& AddStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList.emplace_back(std::forward<StructureListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<StructureListMember>& GetFlattenedStructureList() const { return m_flattenedStructureList; }
  inline bool FlattenedStructureListHasBeenSet() const { return m_flattenedStructureListHasBeenSet; }
  template <typename FlattenedStructureListT = Aws::Vector<StructureListMember>>
  void SetFlattenedStructureList(FlattenedStructureListT&& value) {
    m_flattenedStructureListHasBeenSet = true;
    m_flattenedStructureList = std::forward<FlattenedStructureListT>(value);
  }
  template <typename FlattenedStructureListT = Aws::Vector<StructureListMember>>
  XmlEmptyListsRequest& WithFlattenedStructureList(FlattenedStructureListT&& value) {
    SetFlattenedStructureList(std::forward<FlattenedStructureListT>(value));
    return *this;
  }
  template <typename FlattenedStructureListT = StructureListMember>
  XmlEmptyListsRequest& AddFlattenedStructureList(FlattenedStructureListT&& value) {
    m_flattenedStructureListHasBeenSet = true;
    m_flattenedStructureList.emplace_back(std::forward<FlattenedStructureListT>(value));
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

  Aws::Vector<Aws::String> m_renamedListMembers;
  bool m_renamedListMembersHasBeenSet = false;

  Aws::Vector<Aws::String> m_flattenedList;
  bool m_flattenedListHasBeenSet = false;

  Aws::Vector<Aws::String> m_flattenedList2;
  bool m_flattenedList2HasBeenSet = false;

  Aws::Vector<Aws::String> m_flattenedListWithMemberNamespace;
  bool m_flattenedListWithMemberNamespaceHasBeenSet = false;

  Aws::Vector<Aws::String> m_flattenedListWithNamespace;
  bool m_flattenedListWithNamespaceHasBeenSet = false;

  Aws::Vector<StructureListMember> m_structureList;
  bool m_structureListHasBeenSet = false;

  Aws::Vector<StructureListMember> m_flattenedStructureList;
  bool m_flattenedStructureListHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
