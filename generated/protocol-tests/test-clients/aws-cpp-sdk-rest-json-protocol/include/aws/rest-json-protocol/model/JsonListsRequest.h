/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <aws/rest-json-protocol/model/StructureListMember.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class JsonListsRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonLists"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringListHasBeenSet = true; m_stringList = value; }
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringListHasBeenSet = true; m_stringList = std::move(value); }
    inline JsonListsRequest& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}
    inline JsonListsRequest& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}
    inline JsonListsRequest& AddStringList(const Aws::String& value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }
    inline JsonListsRequest& AddStringList(Aws::String&& value) { m_stringListHasBeenSet = true; m_stringList.push_back(std::move(value)); return *this; }
    inline JsonListsRequest& AddStringList(const char* value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringSet() const{ return m_stringSet; }
    inline bool StringSetHasBeenSet() const { return m_stringSetHasBeenSet; }
    inline void SetStringSet(const Aws::Vector<Aws::String>& value) { m_stringSetHasBeenSet = true; m_stringSet = value; }
    inline void SetStringSet(Aws::Vector<Aws::String>&& value) { m_stringSetHasBeenSet = true; m_stringSet = std::move(value); }
    inline JsonListsRequest& WithStringSet(const Aws::Vector<Aws::String>& value) { SetStringSet(value); return *this;}
    inline JsonListsRequest& WithStringSet(Aws::Vector<Aws::String>&& value) { SetStringSet(std::move(value)); return *this;}
    inline JsonListsRequest& AddStringSet(const Aws::String& value) { m_stringSetHasBeenSet = true; m_stringSet.push_back(value); return *this; }
    inline JsonListsRequest& AddStringSet(Aws::String&& value) { m_stringSetHasBeenSet = true; m_stringSet.push_back(std::move(value)); return *this; }
    inline JsonListsRequest& AddStringSet(const char* value) { m_stringSetHasBeenSet = true; m_stringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerList() const{ return m_integerList; }
    inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }
    inline void SetIntegerList(const Aws::Vector<int>& value) { m_integerListHasBeenSet = true; m_integerList = value; }
    inline void SetIntegerList(Aws::Vector<int>&& value) { m_integerListHasBeenSet = true; m_integerList = std::move(value); }
    inline JsonListsRequest& WithIntegerList(const Aws::Vector<int>& value) { SetIntegerList(value); return *this;}
    inline JsonListsRequest& WithIntegerList(Aws::Vector<int>&& value) { SetIntegerList(std::move(value)); return *this;}
    inline JsonListsRequest& AddIntegerList(int value) { m_integerListHasBeenSet = true; m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetBooleanList() const{ return m_booleanList; }
    inline bool BooleanListHasBeenSet() const { return m_booleanListHasBeenSet; }
    inline void SetBooleanList(const Aws::Vector<bool>& value) { m_booleanListHasBeenSet = true; m_booleanList = value; }
    inline void SetBooleanList(Aws::Vector<bool>&& value) { m_booleanListHasBeenSet = true; m_booleanList = std::move(value); }
    inline JsonListsRequest& WithBooleanList(const Aws::Vector<bool>& value) { SetBooleanList(value); return *this;}
    inline JsonListsRequest& WithBooleanList(Aws::Vector<bool>&& value) { SetBooleanList(std::move(value)); return *this;}
    inline JsonListsRequest& AddBooleanList(bool value) { m_booleanListHasBeenSet = true; m_booleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const{ return m_timestampList; }
    inline bool TimestampListHasBeenSet() const { return m_timestampListHasBeenSet; }
    inline void SetTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampListHasBeenSet = true; m_timestampList = value; }
    inline void SetTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampListHasBeenSet = true; m_timestampList = std::move(value); }
    inline JsonListsRequest& WithTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestampList(value); return *this;}
    inline JsonListsRequest& WithTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestampList(std::move(value)); return *this;}
    inline JsonListsRequest& AddTimestampList(const Aws::Utils::DateTime& value) { m_timestampListHasBeenSet = true; m_timestampList.push_back(value); return *this; }
    inline JsonListsRequest& AddTimestampList(Aws::Utils::DateTime&& value) { m_timestampListHasBeenSet = true; m_timestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetEnumList() const{ return m_enumList; }
    inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }
    inline void SetEnumList(const Aws::Vector<FooEnum>& value) { m_enumListHasBeenSet = true; m_enumList = value; }
    inline void SetEnumList(Aws::Vector<FooEnum>&& value) { m_enumListHasBeenSet = true; m_enumList = std::move(value); }
    inline JsonListsRequest& WithEnumList(const Aws::Vector<FooEnum>& value) { SetEnumList(value); return *this;}
    inline JsonListsRequest& WithEnumList(Aws::Vector<FooEnum>&& value) { SetEnumList(std::move(value)); return *this;}
    inline JsonListsRequest& AddEnumList(const FooEnum& value) { m_enumListHasBeenSet = true; m_enumList.push_back(value); return *this; }
    inline JsonListsRequest& AddEnumList(FooEnum&& value) { m_enumListHasBeenSet = true; m_enumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline bool IntEnumListHasBeenSet() const { return m_intEnumListHasBeenSet; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumListHasBeenSet = true; m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumListHasBeenSet = true; m_intEnumList = std::move(value); }
    inline JsonListsRequest& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline JsonListsRequest& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline JsonListsRequest& AddIntEnumList(int value) { m_intEnumListHasBeenSet = true; m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const{ return m_nestedStringList; }
    inline bool NestedStringListHasBeenSet() const { return m_nestedStringListHasBeenSet; }
    inline void SetNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList = value; }
    inline void SetNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList = std::move(value); }
    inline JsonListsRequest& WithNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetNestedStringList(value); return *this;}
    inline JsonListsRequest& WithNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetNestedStringList(std::move(value)); return *this;}
    inline JsonListsRequest& AddNestedStringList(const Aws::Vector<Aws::String>& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList.push_back(value); return *this; }
    inline JsonListsRequest& AddNestedStringList(Aws::Vector<Aws::String>&& value) { m_nestedStringListHasBeenSet = true; m_nestedStringList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetStructureList() const{ return m_structureList; }
    inline bool StructureListHasBeenSet() const { return m_structureListHasBeenSet; }
    inline void SetStructureList(const Aws::Vector<StructureListMember>& value) { m_structureListHasBeenSet = true; m_structureList = value; }
    inline void SetStructureList(Aws::Vector<StructureListMember>&& value) { m_structureListHasBeenSet = true; m_structureList = std::move(value); }
    inline JsonListsRequest& WithStructureList(const Aws::Vector<StructureListMember>& value) { SetStructureList(value); return *this;}
    inline JsonListsRequest& WithStructureList(Aws::Vector<StructureListMember>&& value) { SetStructureList(std::move(value)); return *this;}
    inline JsonListsRequest& AddStructureList(const StructureListMember& value) { m_structureListHasBeenSet = true; m_structureList.push_back(value); return *this; }
    inline JsonListsRequest& AddStructureList(StructureListMember&& value) { m_structureListHasBeenSet = true; m_structureList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline JsonListsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonListsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonListsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
