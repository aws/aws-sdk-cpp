/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/FooEnum.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
#include <aws/query-protocol/model/StructureListMember.h>

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
class XmlEmptyListsResult {
 public:
  AWS_QUERYPROTOCOL_API XmlEmptyListsResult() = default;
  AWS_QUERYPROTOCOL_API XmlEmptyListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_QUERYPROTOCOL_API XmlEmptyListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringList() const { return m_stringList; }
  template <typename StringListT = Aws::Vector<Aws::String>>
  void SetStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList = std::forward<StringListT>(value);
  }
  template <typename StringListT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithStringList(StringListT&& value) {
    SetStringList(std::forward<StringListT>(value));
    return *this;
  }
  template <typename StringListT = Aws::String>
  XmlEmptyListsResult& AddStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList.emplace_back(std::forward<StringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringSet() const { return m_stringSet; }
  template <typename StringSetT = Aws::Vector<Aws::String>>
  void SetStringSet(StringSetT&& value) {
    m_stringSetHasBeenSet = true;
    m_stringSet = std::forward<StringSetT>(value);
  }
  template <typename StringSetT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithStringSet(StringSetT&& value) {
    SetStringSet(std::forward<StringSetT>(value));
    return *this;
  }
  template <typename StringSetT = Aws::String>
  XmlEmptyListsResult& AddStringSet(StringSetT&& value) {
    m_stringSetHasBeenSet = true;
    m_stringSet.emplace_back(std::forward<StringSetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetIntegerList() const { return m_integerList; }
  template <typename IntegerListT = Aws::Vector<int>>
  void SetIntegerList(IntegerListT&& value) {
    m_integerListHasBeenSet = true;
    m_integerList = std::forward<IntegerListT>(value);
  }
  template <typename IntegerListT = Aws::Vector<int>>
  XmlEmptyListsResult& WithIntegerList(IntegerListT&& value) {
    SetIntegerList(std::forward<IntegerListT>(value));
    return *this;
  }
  inline XmlEmptyListsResult& AddIntegerList(int value) {
    m_integerListHasBeenSet = true;
    m_integerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetBooleanList() const { return m_booleanList; }
  template <typename BooleanListT = Aws::Vector<bool>>
  void SetBooleanList(BooleanListT&& value) {
    m_booleanListHasBeenSet = true;
    m_booleanList = std::forward<BooleanListT>(value);
  }
  template <typename BooleanListT = Aws::Vector<bool>>
  XmlEmptyListsResult& WithBooleanList(BooleanListT&& value) {
    SetBooleanList(std::forward<BooleanListT>(value));
    return *this;
  }
  inline XmlEmptyListsResult& AddBooleanList(bool value) {
    m_booleanListHasBeenSet = true;
    m_booleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const { return m_timestampList; }
  template <typename TimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetTimestampList(TimestampListT&& value) {
    m_timestampListHasBeenSet = true;
    m_timestampList = std::forward<TimestampListT>(value);
  }
  template <typename TimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  XmlEmptyListsResult& WithTimestampList(TimestampListT&& value) {
    SetTimestampList(std::forward<TimestampListT>(value));
    return *this;
  }
  template <typename TimestampListT = Aws::Utils::DateTime>
  XmlEmptyListsResult& AddTimestampList(TimestampListT&& value) {
    m_timestampListHasBeenSet = true;
    m_timestampList.emplace_back(std::forward<TimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetEnumList() const { return m_enumList; }
  template <typename EnumListT = Aws::Vector<FooEnum>>
  void SetEnumList(EnumListT&& value) {
    m_enumListHasBeenSet = true;
    m_enumList = std::forward<EnumListT>(value);
  }
  template <typename EnumListT = Aws::Vector<FooEnum>>
  XmlEmptyListsResult& WithEnumList(EnumListT&& value) {
    SetEnumList(std::forward<EnumListT>(value));
    return *this;
  }
  inline XmlEmptyListsResult& AddEnumList(FooEnum value) {
    m_enumListHasBeenSet = true;
    m_enumList.push_back(value);
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
  XmlEmptyListsResult& WithIntEnumList(IntEnumListT&& value) {
    SetIntEnumList(std::forward<IntEnumListT>(value));
    return *this;
  }
  inline XmlEmptyListsResult& AddIntEnumList(int value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const { return m_nestedStringList; }
  template <typename NestedStringListT = Aws::Vector<Aws::Vector<Aws::String>>>
  void SetNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList = std::forward<NestedStringListT>(value);
  }
  template <typename NestedStringListT = Aws::Vector<Aws::Vector<Aws::String>>>
  XmlEmptyListsResult& WithNestedStringList(NestedStringListT&& value) {
    SetNestedStringList(std::forward<NestedStringListT>(value));
    return *this;
  }
  template <typename NestedStringListT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& AddNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList.emplace_back(std::forward<NestedStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetRenamedListMembers() const { return m_renamedListMembers; }
  template <typename RenamedListMembersT = Aws::Vector<Aws::String>>
  void SetRenamedListMembers(RenamedListMembersT&& value) {
    m_renamedListMembersHasBeenSet = true;
    m_renamedListMembers = std::forward<RenamedListMembersT>(value);
  }
  template <typename RenamedListMembersT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithRenamedListMembers(RenamedListMembersT&& value) {
    SetRenamedListMembers(std::forward<RenamedListMembersT>(value));
    return *this;
  }
  template <typename RenamedListMembersT = Aws::String>
  XmlEmptyListsResult& AddRenamedListMembers(RenamedListMembersT&& value) {
    m_renamedListMembersHasBeenSet = true;
    m_renamedListMembers.emplace_back(std::forward<RenamedListMembersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedList() const { return m_flattenedList; }
  template <typename FlattenedListT = Aws::Vector<Aws::String>>
  void SetFlattenedList(FlattenedListT&& value) {
    m_flattenedListHasBeenSet = true;
    m_flattenedList = std::forward<FlattenedListT>(value);
  }
  template <typename FlattenedListT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithFlattenedList(FlattenedListT&& value) {
    SetFlattenedList(std::forward<FlattenedListT>(value));
    return *this;
  }
  template <typename FlattenedListT = Aws::String>
  XmlEmptyListsResult& AddFlattenedList(FlattenedListT&& value) {
    m_flattenedListHasBeenSet = true;
    m_flattenedList.emplace_back(std::forward<FlattenedListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedList2() const { return m_flattenedList2; }
  template <typename FlattenedList2T = Aws::Vector<Aws::String>>
  void SetFlattenedList2(FlattenedList2T&& value) {
    m_flattenedList2HasBeenSet = true;
    m_flattenedList2 = std::forward<FlattenedList2T>(value);
  }
  template <typename FlattenedList2T = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithFlattenedList2(FlattenedList2T&& value) {
    SetFlattenedList2(std::forward<FlattenedList2T>(value));
    return *this;
  }
  template <typename FlattenedList2T = Aws::String>
  XmlEmptyListsResult& AddFlattenedList2(FlattenedList2T&& value) {
    m_flattenedList2HasBeenSet = true;
    m_flattenedList2.emplace_back(std::forward<FlattenedList2T>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedListWithMemberNamespace() const { return m_flattenedListWithMemberNamespace; }
  template <typename FlattenedListWithMemberNamespaceT = Aws::Vector<Aws::String>>
  void SetFlattenedListWithMemberNamespace(FlattenedListWithMemberNamespaceT&& value) {
    m_flattenedListWithMemberNamespaceHasBeenSet = true;
    m_flattenedListWithMemberNamespace = std::forward<FlattenedListWithMemberNamespaceT>(value);
  }
  template <typename FlattenedListWithMemberNamespaceT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithFlattenedListWithMemberNamespace(FlattenedListWithMemberNamespaceT&& value) {
    SetFlattenedListWithMemberNamespace(std::forward<FlattenedListWithMemberNamespaceT>(value));
    return *this;
  }
  template <typename FlattenedListWithMemberNamespaceT = Aws::String>
  XmlEmptyListsResult& AddFlattenedListWithMemberNamespace(FlattenedListWithMemberNamespaceT&& value) {
    m_flattenedListWithMemberNamespaceHasBeenSet = true;
    m_flattenedListWithMemberNamespace.emplace_back(std::forward<FlattenedListWithMemberNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetFlattenedListWithNamespace() const { return m_flattenedListWithNamespace; }
  template <typename FlattenedListWithNamespaceT = Aws::Vector<Aws::String>>
  void SetFlattenedListWithNamespace(FlattenedListWithNamespaceT&& value) {
    m_flattenedListWithNamespaceHasBeenSet = true;
    m_flattenedListWithNamespace = std::forward<FlattenedListWithNamespaceT>(value);
  }
  template <typename FlattenedListWithNamespaceT = Aws::Vector<Aws::String>>
  XmlEmptyListsResult& WithFlattenedListWithNamespace(FlattenedListWithNamespaceT&& value) {
    SetFlattenedListWithNamespace(std::forward<FlattenedListWithNamespaceT>(value));
    return *this;
  }
  template <typename FlattenedListWithNamespaceT = Aws::String>
  XmlEmptyListsResult& AddFlattenedListWithNamespace(FlattenedListWithNamespaceT&& value) {
    m_flattenedListWithNamespaceHasBeenSet = true;
    m_flattenedListWithNamespace.emplace_back(std::forward<FlattenedListWithNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<StructureListMember>& GetStructureList() const { return m_structureList; }
  template <typename StructureListT = Aws::Vector<StructureListMember>>
  void SetStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList = std::forward<StructureListT>(value);
  }
  template <typename StructureListT = Aws::Vector<StructureListMember>>
  XmlEmptyListsResult& WithStructureList(StructureListT&& value) {
    SetStructureList(std::forward<StructureListT>(value));
    return *this;
  }
  template <typename StructureListT = StructureListMember>
  XmlEmptyListsResult& AddStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList.emplace_back(std::forward<StructureListT>(value));
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
  XmlEmptyListsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
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

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
