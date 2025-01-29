/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2-protocol/model/FooEnum.h>
#include <aws/ec2-protocol/model/StructureListMember.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2Protocol
{
namespace Model
{
  class XmlEmptyListsResponse
  {
  public:
    AWS_EC2PROTOCOL_API XmlEmptyListsResponse();
    AWS_EC2PROTOCOL_API XmlEmptyListsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API XmlEmptyListsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringList = value; }
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringList = std::move(value); }
    inline XmlEmptyListsResponse& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}
    inline XmlEmptyListsResponse& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddStringList(const Aws::String& value) { m_stringList.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddStringList(Aws::String&& value) { m_stringList.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddStringList(const char* value) { m_stringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringSet() const{ return m_stringSet; }
    inline void SetStringSet(const Aws::Vector<Aws::String>& value) { m_stringSet = value; }
    inline void SetStringSet(Aws::Vector<Aws::String>&& value) { m_stringSet = std::move(value); }
    inline XmlEmptyListsResponse& WithStringSet(const Aws::Vector<Aws::String>& value) { SetStringSet(value); return *this;}
    inline XmlEmptyListsResponse& WithStringSet(Aws::Vector<Aws::String>&& value) { SetStringSet(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddStringSet(const Aws::String& value) { m_stringSet.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddStringSet(Aws::String&& value) { m_stringSet.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddStringSet(const char* value) { m_stringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerList() const{ return m_integerList; }
    inline void SetIntegerList(const Aws::Vector<int>& value) { m_integerList = value; }
    inline void SetIntegerList(Aws::Vector<int>&& value) { m_integerList = std::move(value); }
    inline XmlEmptyListsResponse& WithIntegerList(const Aws::Vector<int>& value) { SetIntegerList(value); return *this;}
    inline XmlEmptyListsResponse& WithIntegerList(Aws::Vector<int>&& value) { SetIntegerList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddIntegerList(int value) { m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetBooleanList() const{ return m_booleanList; }
    inline void SetBooleanList(const Aws::Vector<bool>& value) { m_booleanList = value; }
    inline void SetBooleanList(Aws::Vector<bool>&& value) { m_booleanList = std::move(value); }
    inline XmlEmptyListsResponse& WithBooleanList(const Aws::Vector<bool>& value) { SetBooleanList(value); return *this;}
    inline XmlEmptyListsResponse& WithBooleanList(Aws::Vector<bool>&& value) { SetBooleanList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddBooleanList(bool value) { m_booleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const{ return m_timestampList; }
    inline void SetTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampList = value; }
    inline void SetTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampList = std::move(value); }
    inline XmlEmptyListsResponse& WithTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestampList(value); return *this;}
    inline XmlEmptyListsResponse& WithTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestampList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddTimestampList(const Aws::Utils::DateTime& value) { m_timestampList.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddTimestampList(Aws::Utils::DateTime&& value) { m_timestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetEnumList() const{ return m_enumList; }
    inline void SetEnumList(const Aws::Vector<FooEnum>& value) { m_enumList = value; }
    inline void SetEnumList(Aws::Vector<FooEnum>&& value) { m_enumList = std::move(value); }
    inline XmlEmptyListsResponse& WithEnumList(const Aws::Vector<FooEnum>& value) { SetEnumList(value); return *this;}
    inline XmlEmptyListsResponse& WithEnumList(Aws::Vector<FooEnum>&& value) { SetEnumList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddEnumList(const FooEnum& value) { m_enumList.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddEnumList(FooEnum&& value) { m_enumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumList = std::move(value); }
    inline XmlEmptyListsResponse& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline XmlEmptyListsResponse& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddIntEnumList(int value) { m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const{ return m_nestedStringList; }
    inline void SetNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_nestedStringList = value; }
    inline void SetNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_nestedStringList = std::move(value); }
    inline XmlEmptyListsResponse& WithNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetNestedStringList(value); return *this;}
    inline XmlEmptyListsResponse& WithNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetNestedStringList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddNestedStringList(const Aws::Vector<Aws::String>& value) { m_nestedStringList.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddNestedStringList(Aws::Vector<Aws::String>&& value) { m_nestedStringList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetRenamedListMembers() const{ return m_renamedListMembers; }
    inline void SetRenamedListMembers(const Aws::Vector<Aws::String>& value) { m_renamedListMembers = value; }
    inline void SetRenamedListMembers(Aws::Vector<Aws::String>&& value) { m_renamedListMembers = std::move(value); }
    inline XmlEmptyListsResponse& WithRenamedListMembers(const Aws::Vector<Aws::String>& value) { SetRenamedListMembers(value); return *this;}
    inline XmlEmptyListsResponse& WithRenamedListMembers(Aws::Vector<Aws::String>&& value) { SetRenamedListMembers(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddRenamedListMembers(const Aws::String& value) { m_renamedListMembers.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddRenamedListMembers(Aws::String&& value) { m_renamedListMembers.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddRenamedListMembers(const char* value) { m_renamedListMembers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedList() const{ return m_flattenedList; }
    inline void SetFlattenedList(const Aws::Vector<Aws::String>& value) { m_flattenedList = value; }
    inline void SetFlattenedList(Aws::Vector<Aws::String>&& value) { m_flattenedList = std::move(value); }
    inline XmlEmptyListsResponse& WithFlattenedList(const Aws::Vector<Aws::String>& value) { SetFlattenedList(value); return *this;}
    inline XmlEmptyListsResponse& WithFlattenedList(Aws::Vector<Aws::String>&& value) { SetFlattenedList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddFlattenedList(const Aws::String& value) { m_flattenedList.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedList(Aws::String&& value) { m_flattenedList.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedList(const char* value) { m_flattenedList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedList2() const{ return m_flattenedList2; }
    inline void SetFlattenedList2(const Aws::Vector<Aws::String>& value) { m_flattenedList2 = value; }
    inline void SetFlattenedList2(Aws::Vector<Aws::String>&& value) { m_flattenedList2 = std::move(value); }
    inline XmlEmptyListsResponse& WithFlattenedList2(const Aws::Vector<Aws::String>& value) { SetFlattenedList2(value); return *this;}
    inline XmlEmptyListsResponse& WithFlattenedList2(Aws::Vector<Aws::String>&& value) { SetFlattenedList2(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddFlattenedList2(const Aws::String& value) { m_flattenedList2.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedList2(Aws::String&& value) { m_flattenedList2.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedList2(const char* value) { m_flattenedList2.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListWithMemberNamespace() const{ return m_flattenedListWithMemberNamespace; }
    inline void SetFlattenedListWithMemberNamespace(const Aws::Vector<Aws::String>& value) { m_flattenedListWithMemberNamespace = value; }
    inline void SetFlattenedListWithMemberNamespace(Aws::Vector<Aws::String>&& value) { m_flattenedListWithMemberNamespace = std::move(value); }
    inline XmlEmptyListsResponse& WithFlattenedListWithMemberNamespace(const Aws::Vector<Aws::String>& value) { SetFlattenedListWithMemberNamespace(value); return *this;}
    inline XmlEmptyListsResponse& WithFlattenedListWithMemberNamespace(Aws::Vector<Aws::String>&& value) { SetFlattenedListWithMemberNamespace(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddFlattenedListWithMemberNamespace(const Aws::String& value) { m_flattenedListWithMemberNamespace.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedListWithMemberNamespace(Aws::String&& value) { m_flattenedListWithMemberNamespace.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedListWithMemberNamespace(const char* value) { m_flattenedListWithMemberNamespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListWithNamespace() const{ return m_flattenedListWithNamespace; }
    inline void SetFlattenedListWithNamespace(const Aws::Vector<Aws::String>& value) { m_flattenedListWithNamespace = value; }
    inline void SetFlattenedListWithNamespace(Aws::Vector<Aws::String>&& value) { m_flattenedListWithNamespace = std::move(value); }
    inline XmlEmptyListsResponse& WithFlattenedListWithNamespace(const Aws::Vector<Aws::String>& value) { SetFlattenedListWithNamespace(value); return *this;}
    inline XmlEmptyListsResponse& WithFlattenedListWithNamespace(Aws::Vector<Aws::String>&& value) { SetFlattenedListWithNamespace(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddFlattenedListWithNamespace(const Aws::String& value) { m_flattenedListWithNamespace.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedListWithNamespace(Aws::String&& value) { m_flattenedListWithNamespace.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResponse& AddFlattenedListWithNamespace(const char* value) { m_flattenedListWithNamespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetStructureList() const{ return m_structureList; }
    inline void SetStructureList(const Aws::Vector<StructureListMember>& value) { m_structureList = value; }
    inline void SetStructureList(Aws::Vector<StructureListMember>&& value) { m_structureList = std::move(value); }
    inline XmlEmptyListsResponse& WithStructureList(const Aws::Vector<StructureListMember>& value) { SetStructureList(value); return *this;}
    inline XmlEmptyListsResponse& WithStructureList(Aws::Vector<StructureListMember>&& value) { SetStructureList(std::move(value)); return *this;}
    inline XmlEmptyListsResponse& AddStructureList(const StructureListMember& value) { m_structureList.push_back(value); return *this; }
    inline XmlEmptyListsResponse& AddStructureList(StructureListMember&& value) { m_structureList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline XmlEmptyListsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline XmlEmptyListsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_stringList;

    Aws::Vector<Aws::String> m_stringSet;

    Aws::Vector<int> m_integerList;

    Aws::Vector<bool> m_booleanList;

    Aws::Vector<Aws::Utils::DateTime> m_timestampList;

    Aws::Vector<FooEnum> m_enumList;

    Aws::Vector<int> m_intEnumList;

    Aws::Vector<Aws::Vector<Aws::String>> m_nestedStringList;

    Aws::Vector<Aws::String> m_renamedListMembers;

    Aws::Vector<Aws::String> m_flattenedList;

    Aws::Vector<Aws::String> m_flattenedList2;

    Aws::Vector<Aws::String> m_flattenedListWithMemberNamespace;

    Aws::Vector<Aws::String> m_flattenedListWithNamespace;

    Aws::Vector<StructureListMember> m_structureList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
