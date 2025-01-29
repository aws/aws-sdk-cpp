/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
#include <aws/rest-xml-protocol/model/StructureListMember.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class XmlEmptyListsRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEmptyListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlEmptyLists"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringListHasBeenSet = true; m_stringList = value; }
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringListHasBeenSet = true; m_stringList = std::move(value); }
    inline XmlEmptyListsRequest& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}
    inline XmlEmptyListsRequest& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddStringList(const Aws::String& value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddStringList(Aws::String&& value) { m_stringListHasBeenSet = true; m_stringList.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddStringList(const char* value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringSet() const{ return m_stringSet; }
    inline bool StringSetHasBeenSet() const { return m_stringSetHasBeenSet; }
    inline void SetStringSet(const Aws::Vector<Aws::String>& value) { m_stringSetHasBeenSet = true; m_stringSet = value; }
    inline void SetStringSet(Aws::Vector<Aws::String>&& value) { m_stringSetHasBeenSet = true; m_stringSet = std::move(value); }
    inline XmlEmptyListsRequest& WithStringSet(const Aws::Vector<Aws::String>& value) { SetStringSet(value); return *this;}
    inline XmlEmptyListsRequest& WithStringSet(Aws::Vector<Aws::String>&& value) { SetStringSet(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddStringSet(const Aws::String& value) { m_stringSetHasBeenSet = true; m_stringSet.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddStringSet(Aws::String&& value) { m_stringSetHasBeenSet = true; m_stringSet.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddStringSet(const char* value) { m_stringSetHasBeenSet = true; m_stringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerList() const{ return m_integerList; }
    inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }
    inline void SetIntegerList(const Aws::Vector<int>& value) { m_integerListHasBeenSet = true; m_integerList = value; }
    inline void SetIntegerList(Aws::Vector<int>&& value) { m_integerListHasBeenSet = true; m_integerList = std::move(value); }
    inline XmlEmptyListsRequest& WithIntegerList(const Aws::Vector<int>& value) { SetIntegerList(value); return *this;}
    inline XmlEmptyListsRequest& WithIntegerList(Aws::Vector<int>&& value) { SetIntegerList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddIntegerList(int value) { m_integerListHasBeenSet = true; m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetBooleanList() const{ return m_booleanList; }
    inline bool BooleanListHasBeenSet() const { return m_booleanListHasBeenSet; }
    inline void SetBooleanList(const Aws::Vector<bool>& value) { m_booleanListHasBeenSet = true; m_booleanList = value; }
    inline void SetBooleanList(Aws::Vector<bool>&& value) { m_booleanListHasBeenSet = true; m_booleanList = std::move(value); }
    inline XmlEmptyListsRequest& WithBooleanList(const Aws::Vector<bool>& value) { SetBooleanList(value); return *this;}
    inline XmlEmptyListsRequest& WithBooleanList(Aws::Vector<bool>&& value) { SetBooleanList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddBooleanList(bool value) { m_booleanListHasBeenSet = true; m_booleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const{ return m_timestampList; }
    inline bool TimestampListHasBeenSet() const { return m_timestampListHasBeenSet; }
    inline void SetTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampListHasBeenSet = true; m_timestampList = value; }
    inline void SetTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampListHasBeenSet = true; m_timestampList = std::move(value); }
    inline XmlEmptyListsRequest& WithTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestampList(value); return *this;}
    inline XmlEmptyListsRequest& WithTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestampList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddTimestampList(const Aws::Utils::DateTime& value) { m_timestampListHasBeenSet = true; m_timestampList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddTimestampList(Aws::Utils::DateTime&& value) { m_timestampListHasBeenSet = true; m_timestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetEnumList() const{ return m_enumList; }
    inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }
    inline void SetEnumList(const Aws::Vector<FooEnum>& value) { m_enumListHasBeenSet = true; m_enumList = value; }
    inline void SetEnumList(Aws::Vector<FooEnum>&& value) { m_enumListHasBeenSet = true; m_enumList = std::move(value); }
    inline XmlEmptyListsRequest& WithEnumList(const Aws::Vector<FooEnum>& value) { SetEnumList(value); return *this;}
    inline XmlEmptyListsRequest& WithEnumList(Aws::Vector<FooEnum>&& value) { SetEnumList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddEnumList(const FooEnum& value) { m_enumListHasBeenSet = true; m_enumList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddEnumList(FooEnum&& value) { m_enumListHasBeenSet = true; m_enumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline bool IntEnumListHasBeenSet() const { return m_intEnumListHasBeenSet; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumListHasBeenSet = true; m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumListHasBeenSet = true; m_intEnumList = std::move(value); }
    inline XmlEmptyListsRequest& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline XmlEmptyListsRequest& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddIntEnumList(int value) { m_intEnumListHasBeenSet = true; m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const{ return m_nestedStringList; }
    inline bool NestedStringListHasBeenSet() const { return m_nestedStringListHasBeenSet; }
    inline void SetNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList = value; }
    inline void SetNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList = std::move(value); }
    inline XmlEmptyListsRequest& WithNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetNestedStringList(value); return *this;}
    inline XmlEmptyListsRequest& WithNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetNestedStringList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddNestedStringList(const Aws::Vector<Aws::String>& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddNestedStringList(Aws::Vector<Aws::String>&& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetRenamedListMembers() const{ return m_renamedListMembers; }
    inline bool RenamedListMembersHasBeenSet() const { return m_renamedListMembersHasBeenSet; }
    inline void SetRenamedListMembers(const Aws::Vector<Aws::String>& value) { m_renamedListMembersHasBeenSet = true; m_renamedListMembers = value; }
    inline void SetRenamedListMembers(Aws::Vector<Aws::String>&& value) { m_renamedListMembersHasBeenSet = true; m_renamedListMembers = std::move(value); }
    inline XmlEmptyListsRequest& WithRenamedListMembers(const Aws::Vector<Aws::String>& value) { SetRenamedListMembers(value); return *this;}
    inline XmlEmptyListsRequest& WithRenamedListMembers(Aws::Vector<Aws::String>&& value) { SetRenamedListMembers(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddRenamedListMembers(const Aws::String& value) { m_renamedListMembersHasBeenSet = true; m_renamedListMembers.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddRenamedListMembers(Aws::String&& value) { m_renamedListMembersHasBeenSet = true; m_renamedListMembers.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddRenamedListMembers(const char* value) { m_renamedListMembersHasBeenSet = true; m_renamedListMembers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedList() const{ return m_flattenedList; }
    inline bool FlattenedListHasBeenSet() const { return m_flattenedListHasBeenSet; }
    inline void SetFlattenedList(const Aws::Vector<Aws::String>& value) { m_flattenedListHasBeenSet = true; m_flattenedList = value; }
    inline void SetFlattenedList(Aws::Vector<Aws::String>&& value) { m_flattenedListHasBeenSet = true; m_flattenedList = std::move(value); }
    inline XmlEmptyListsRequest& WithFlattenedList(const Aws::Vector<Aws::String>& value) { SetFlattenedList(value); return *this;}
    inline XmlEmptyListsRequest& WithFlattenedList(Aws::Vector<Aws::String>&& value) { SetFlattenedList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddFlattenedList(const Aws::String& value) { m_flattenedListHasBeenSet = true; m_flattenedList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedList(Aws::String&& value) { m_flattenedListHasBeenSet = true; m_flattenedList.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedList(const char* value) { m_flattenedListHasBeenSet = true; m_flattenedList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedList2() const{ return m_flattenedList2; }
    inline bool FlattenedList2HasBeenSet() const { return m_flattenedList2HasBeenSet; }
    inline void SetFlattenedList2(const Aws::Vector<Aws::String>& value) { m_flattenedList2HasBeenSet = true; m_flattenedList2 = value; }
    inline void SetFlattenedList2(Aws::Vector<Aws::String>&& value) { m_flattenedList2HasBeenSet = true; m_flattenedList2 = std::move(value); }
    inline XmlEmptyListsRequest& WithFlattenedList2(const Aws::Vector<Aws::String>& value) { SetFlattenedList2(value); return *this;}
    inline XmlEmptyListsRequest& WithFlattenedList2(Aws::Vector<Aws::String>&& value) { SetFlattenedList2(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddFlattenedList2(const Aws::String& value) { m_flattenedList2HasBeenSet = true; m_flattenedList2.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedList2(Aws::String&& value) { m_flattenedList2HasBeenSet = true; m_flattenedList2.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedList2(const char* value) { m_flattenedList2HasBeenSet = true; m_flattenedList2.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListWithMemberNamespace() const{ return m_flattenedListWithMemberNamespace; }
    inline bool FlattenedListWithMemberNamespaceHasBeenSet() const { return m_flattenedListWithMemberNamespaceHasBeenSet; }
    inline void SetFlattenedListWithMemberNamespace(const Aws::Vector<Aws::String>& value) { m_flattenedListWithMemberNamespaceHasBeenSet = true; m_flattenedListWithMemberNamespace = value; }
    inline void SetFlattenedListWithMemberNamespace(Aws::Vector<Aws::String>&& value) { m_flattenedListWithMemberNamespaceHasBeenSet = true; m_flattenedListWithMemberNamespace = std::move(value); }
    inline XmlEmptyListsRequest& WithFlattenedListWithMemberNamespace(const Aws::Vector<Aws::String>& value) { SetFlattenedListWithMemberNamespace(value); return *this;}
    inline XmlEmptyListsRequest& WithFlattenedListWithMemberNamespace(Aws::Vector<Aws::String>&& value) { SetFlattenedListWithMemberNamespace(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddFlattenedListWithMemberNamespace(const Aws::String& value) { m_flattenedListWithMemberNamespaceHasBeenSet = true; m_flattenedListWithMemberNamespace.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedListWithMemberNamespace(Aws::String&& value) { m_flattenedListWithMemberNamespaceHasBeenSet = true; m_flattenedListWithMemberNamespace.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedListWithMemberNamespace(const char* value) { m_flattenedListWithMemberNamespaceHasBeenSet = true; m_flattenedListWithMemberNamespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListWithNamespace() const{ return m_flattenedListWithNamespace; }
    inline bool FlattenedListWithNamespaceHasBeenSet() const { return m_flattenedListWithNamespaceHasBeenSet; }
    inline void SetFlattenedListWithNamespace(const Aws::Vector<Aws::String>& value) { m_flattenedListWithNamespaceHasBeenSet = true; m_flattenedListWithNamespace = value; }
    inline void SetFlattenedListWithNamespace(Aws::Vector<Aws::String>&& value) { m_flattenedListWithNamespaceHasBeenSet = true; m_flattenedListWithNamespace = std::move(value); }
    inline XmlEmptyListsRequest& WithFlattenedListWithNamespace(const Aws::Vector<Aws::String>& value) { SetFlattenedListWithNamespace(value); return *this;}
    inline XmlEmptyListsRequest& WithFlattenedListWithNamespace(Aws::Vector<Aws::String>&& value) { SetFlattenedListWithNamespace(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddFlattenedListWithNamespace(const Aws::String& value) { m_flattenedListWithNamespaceHasBeenSet = true; m_flattenedListWithNamespace.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedListWithNamespace(Aws::String&& value) { m_flattenedListWithNamespaceHasBeenSet = true; m_flattenedListWithNamespace.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedListWithNamespace(const char* value) { m_flattenedListWithNamespaceHasBeenSet = true; m_flattenedListWithNamespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetStructureList() const{ return m_structureList; }
    inline bool StructureListHasBeenSet() const { return m_structureListHasBeenSet; }
    inline void SetStructureList(const Aws::Vector<StructureListMember>& value) { m_structureListHasBeenSet = true; m_structureList = value; }
    inline void SetStructureList(Aws::Vector<StructureListMember>&& value) { m_structureListHasBeenSet = true; m_structureList = std::move(value); }
    inline XmlEmptyListsRequest& WithStructureList(const Aws::Vector<StructureListMember>& value) { SetStructureList(value); return *this;}
    inline XmlEmptyListsRequest& WithStructureList(Aws::Vector<StructureListMember>&& value) { SetStructureList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddStructureList(const StructureListMember& value) { m_structureListHasBeenSet = true; m_structureList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddStructureList(StructureListMember&& value) { m_structureListHasBeenSet = true; m_structureList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetFlattenedStructureList() const{ return m_flattenedStructureList; }
    inline bool FlattenedStructureListHasBeenSet() const { return m_flattenedStructureListHasBeenSet; }
    inline void SetFlattenedStructureList(const Aws::Vector<StructureListMember>& value) { m_flattenedStructureListHasBeenSet = true; m_flattenedStructureList = value; }
    inline void SetFlattenedStructureList(Aws::Vector<StructureListMember>&& value) { m_flattenedStructureListHasBeenSet = true; m_flattenedStructureList = std::move(value); }
    inline XmlEmptyListsRequest& WithFlattenedStructureList(const Aws::Vector<StructureListMember>& value) { SetFlattenedStructureList(value); return *this;}
    inline XmlEmptyListsRequest& WithFlattenedStructureList(Aws::Vector<StructureListMember>&& value) { SetFlattenedStructureList(std::move(value)); return *this;}
    inline XmlEmptyListsRequest& AddFlattenedStructureList(const StructureListMember& value) { m_flattenedStructureListHasBeenSet = true; m_flattenedStructureList.push_back(value); return *this; }
    inline XmlEmptyListsRequest& AddFlattenedStructureList(StructureListMember&& value) { m_flattenedStructureListHasBeenSet = true; m_flattenedStructureList.push_back(std::move(value)); return *this; }
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

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
