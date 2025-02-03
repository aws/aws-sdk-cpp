/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <aws/rest-json-protocol/model/StructureListMember.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RestJsonProtocol
{
namespace Model
{
  class JsonListsResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonListsResult();
    AWS_RESTJSONPROTOCOL_API JsonListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API JsonListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringList = value; }
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringList = std::move(value); }
    inline JsonListsResult& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}
    inline JsonListsResult& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}
    inline JsonListsResult& AddStringList(const Aws::String& value) { m_stringList.push_back(value); return *this; }
    inline JsonListsResult& AddStringList(Aws::String&& value) { m_stringList.push_back(std::move(value)); return *this; }
    inline JsonListsResult& AddStringList(const char* value) { m_stringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringSet() const{ return m_stringSet; }
    inline void SetStringSet(const Aws::Vector<Aws::String>& value) { m_stringSet = value; }
    inline void SetStringSet(Aws::Vector<Aws::String>&& value) { m_stringSet = std::move(value); }
    inline JsonListsResult& WithStringSet(const Aws::Vector<Aws::String>& value) { SetStringSet(value); return *this;}
    inline JsonListsResult& WithStringSet(Aws::Vector<Aws::String>&& value) { SetStringSet(std::move(value)); return *this;}
    inline JsonListsResult& AddStringSet(const Aws::String& value) { m_stringSet.push_back(value); return *this; }
    inline JsonListsResult& AddStringSet(Aws::String&& value) { m_stringSet.push_back(std::move(value)); return *this; }
    inline JsonListsResult& AddStringSet(const char* value) { m_stringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerList() const{ return m_integerList; }
    inline void SetIntegerList(const Aws::Vector<int>& value) { m_integerList = value; }
    inline void SetIntegerList(Aws::Vector<int>&& value) { m_integerList = std::move(value); }
    inline JsonListsResult& WithIntegerList(const Aws::Vector<int>& value) { SetIntegerList(value); return *this;}
    inline JsonListsResult& WithIntegerList(Aws::Vector<int>&& value) { SetIntegerList(std::move(value)); return *this;}
    inline JsonListsResult& AddIntegerList(int value) { m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetBooleanList() const{ return m_booleanList; }
    inline void SetBooleanList(const Aws::Vector<bool>& value) { m_booleanList = value; }
    inline void SetBooleanList(Aws::Vector<bool>&& value) { m_booleanList = std::move(value); }
    inline JsonListsResult& WithBooleanList(const Aws::Vector<bool>& value) { SetBooleanList(value); return *this;}
    inline JsonListsResult& WithBooleanList(Aws::Vector<bool>&& value) { SetBooleanList(std::move(value)); return *this;}
    inline JsonListsResult& AddBooleanList(bool value) { m_booleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const{ return m_timestampList; }
    inline void SetTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampList = value; }
    inline void SetTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampList = std::move(value); }
    inline JsonListsResult& WithTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestampList(value); return *this;}
    inline JsonListsResult& WithTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestampList(std::move(value)); return *this;}
    inline JsonListsResult& AddTimestampList(const Aws::Utils::DateTime& value) { m_timestampList.push_back(value); return *this; }
    inline JsonListsResult& AddTimestampList(Aws::Utils::DateTime&& value) { m_timestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetEnumList() const{ return m_enumList; }
    inline void SetEnumList(const Aws::Vector<FooEnum>& value) { m_enumList = value; }
    inline void SetEnumList(Aws::Vector<FooEnum>&& value) { m_enumList = std::move(value); }
    inline JsonListsResult& WithEnumList(const Aws::Vector<FooEnum>& value) { SetEnumList(value); return *this;}
    inline JsonListsResult& WithEnumList(Aws::Vector<FooEnum>&& value) { SetEnumList(std::move(value)); return *this;}
    inline JsonListsResult& AddEnumList(const FooEnum& value) { m_enumList.push_back(value); return *this; }
    inline JsonListsResult& AddEnumList(FooEnum&& value) { m_enumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumList = std::move(value); }
    inline JsonListsResult& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline JsonListsResult& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline JsonListsResult& AddIntEnumList(int value) { m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const{ return m_nestedStringList; }
    inline void SetNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_nestedStringList = value; }
    inline void SetNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_nestedStringList = std::move(value); }
    inline JsonListsResult& WithNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetNestedStringList(value); return *this;}
    inline JsonListsResult& WithNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetNestedStringList(std::move(value)); return *this;}
    inline JsonListsResult& AddNestedStringList(const Aws::Vector<Aws::String>& value) { m_nestedStringList.push_back(value); return *this; }
    inline JsonListsResult& AddNestedStringList(Aws::Vector<Aws::String>&& value) { m_nestedStringList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetStructureList() const{ return m_structureList; }
    inline void SetStructureList(const Aws::Vector<StructureListMember>& value) { m_structureList = value; }
    inline void SetStructureList(Aws::Vector<StructureListMember>&& value) { m_structureList = std::move(value); }
    inline JsonListsResult& WithStructureList(const Aws::Vector<StructureListMember>& value) { SetStructureList(value); return *this;}
    inline JsonListsResult& WithStructureList(Aws::Vector<StructureListMember>&& value) { SetStructureList(std::move(value)); return *this;}
    inline JsonListsResult& AddStructureList(const StructureListMember& value) { m_structureList.push_back(value); return *this; }
    inline JsonListsResult& AddStructureList(StructureListMember&& value) { m_structureList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline JsonListsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonListsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonListsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

    Aws::Vector<StructureListMember> m_structureList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
