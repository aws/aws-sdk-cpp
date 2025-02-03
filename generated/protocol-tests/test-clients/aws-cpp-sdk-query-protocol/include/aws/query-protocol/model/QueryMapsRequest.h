/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/query-protocol/model/NestedStructWithMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/model/GreetingStruct.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class QueryMapsRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API QueryMapsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryMaps"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapArg() const{ return m_mapArg; }
    inline bool MapArgHasBeenSet() const { return m_mapArgHasBeenSet; }
    inline void SetMapArg(const Aws::Map<Aws::String, Aws::String>& value) { m_mapArgHasBeenSet = true; m_mapArg = value; }
    inline void SetMapArg(Aws::Map<Aws::String, Aws::String>&& value) { m_mapArgHasBeenSet = true; m_mapArg = std::move(value); }
    inline QueryMapsRequest& WithMapArg(const Aws::Map<Aws::String, Aws::String>& value) { SetMapArg(value); return *this;}
    inline QueryMapsRequest& WithMapArg(Aws::Map<Aws::String, Aws::String>&& value) { SetMapArg(std::move(value)); return *this;}
    inline QueryMapsRequest& AddMapArg(const Aws::String& key, const Aws::String& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddMapArg(Aws::String&& key, const Aws::String& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddMapArg(const Aws::String& key, Aws::String&& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapArg(Aws::String&& key, Aws::String&& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapArg(const char* key, Aws::String&& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapArg(Aws::String&& key, const char* value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddMapArg(const char* key, const char* value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetRenamedMapArg() const{ return m_renamedMapArg; }
    inline bool RenamedMapArgHasBeenSet() const { return m_renamedMapArgHasBeenSet; }
    inline void SetRenamedMapArg(const Aws::Map<Aws::String, Aws::String>& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg = value; }
    inline void SetRenamedMapArg(Aws::Map<Aws::String, Aws::String>&& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg = std::move(value); }
    inline QueryMapsRequest& WithRenamedMapArg(const Aws::Map<Aws::String, Aws::String>& value) { SetRenamedMapArg(value); return *this;}
    inline QueryMapsRequest& WithRenamedMapArg(Aws::Map<Aws::String, Aws::String>&& value) { SetRenamedMapArg(std::move(value)); return *this;}
    inline QueryMapsRequest& AddRenamedMapArg(const Aws::String& key, const Aws::String& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddRenamedMapArg(Aws::String&& key, const Aws::String& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddRenamedMapArg(const Aws::String& key, Aws::String&& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddRenamedMapArg(Aws::String&& key, Aws::String&& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddRenamedMapArg(const char* key, Aws::String&& value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddRenamedMapArg(Aws::String&& key, const char* value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddRenamedMapArg(const char* key, const char* value) { m_renamedMapArgHasBeenSet = true; m_renamedMapArg.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetComplexMapArg() const{ return m_complexMapArg; }
    inline bool ComplexMapArgHasBeenSet() const { return m_complexMapArgHasBeenSet; }
    inline void SetComplexMapArg(const Aws::Map<Aws::String, GreetingStruct>& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg = value; }
    inline void SetComplexMapArg(Aws::Map<Aws::String, GreetingStruct>&& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg = std::move(value); }
    inline QueryMapsRequest& WithComplexMapArg(const Aws::Map<Aws::String, GreetingStruct>& value) { SetComplexMapArg(value); return *this;}
    inline QueryMapsRequest& WithComplexMapArg(Aws::Map<Aws::String, GreetingStruct>&& value) { SetComplexMapArg(std::move(value)); return *this;}
    inline QueryMapsRequest& AddComplexMapArg(const Aws::String& key, const GreetingStruct& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddComplexMapArg(Aws::String&& key, const GreetingStruct& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddComplexMapArg(const Aws::String& key, GreetingStruct&& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddComplexMapArg(Aws::String&& key, GreetingStruct&& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddComplexMapArg(const char* key, GreetingStruct&& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddComplexMapArg(const char* key, const GreetingStruct& value) { m_complexMapArgHasBeenSet = true; m_complexMapArg.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapWithXmlMemberName() const{ return m_mapWithXmlMemberName; }
    inline bool MapWithXmlMemberNameHasBeenSet() const { return m_mapWithXmlMemberNameHasBeenSet; }
    inline void SetMapWithXmlMemberName(const Aws::Map<Aws::String, Aws::String>& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName = value; }
    inline void SetMapWithXmlMemberName(Aws::Map<Aws::String, Aws::String>&& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName = std::move(value); }
    inline QueryMapsRequest& WithMapWithXmlMemberName(const Aws::Map<Aws::String, Aws::String>& value) { SetMapWithXmlMemberName(value); return *this;}
    inline QueryMapsRequest& WithMapWithXmlMemberName(Aws::Map<Aws::String, Aws::String>&& value) { SetMapWithXmlMemberName(std::move(value)); return *this;}
    inline QueryMapsRequest& AddMapWithXmlMemberName(const Aws::String& key, const Aws::String& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddMapWithXmlMemberName(Aws::String&& key, const Aws::String& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddMapWithXmlMemberName(const Aws::String& key, Aws::String&& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapWithXmlMemberName(Aws::String&& key, Aws::String&& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapWithXmlMemberName(const char* key, Aws::String&& value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapWithXmlMemberName(Aws::String&& key, const char* value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddMapWithXmlMemberName(const char* key, const char* value) { m_mapWithXmlMemberNameHasBeenSet = true; m_mapWithXmlMemberName.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetFlattenedMap() const{ return m_flattenedMap; }
    inline bool FlattenedMapHasBeenSet() const { return m_flattenedMapHasBeenSet; }
    inline void SetFlattenedMap(const Aws::Map<Aws::String, Aws::String>& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap = value; }
    inline void SetFlattenedMap(Aws::Map<Aws::String, Aws::String>&& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap = std::move(value); }
    inline QueryMapsRequest& WithFlattenedMap(const Aws::Map<Aws::String, Aws::String>& value) { SetFlattenedMap(value); return *this;}
    inline QueryMapsRequest& WithFlattenedMap(Aws::Map<Aws::String, Aws::String>&& value) { SetFlattenedMap(std::move(value)); return *this;}
    inline QueryMapsRequest& AddFlattenedMap(const Aws::String& key, const Aws::String& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddFlattenedMap(Aws::String&& key, const Aws::String& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddFlattenedMap(const Aws::String& key, Aws::String&& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddFlattenedMap(Aws::String&& key, Aws::String&& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddFlattenedMap(const char* key, Aws::String&& value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddFlattenedMap(Aws::String&& key, const char* value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddFlattenedMap(const char* key, const char* value) { m_flattenedMapHasBeenSet = true; m_flattenedMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetFlattenedMapWithXmlName() const{ return m_flattenedMapWithXmlName; }
    inline bool FlattenedMapWithXmlNameHasBeenSet() const { return m_flattenedMapWithXmlNameHasBeenSet; }
    inline void SetFlattenedMapWithXmlName(const Aws::Map<Aws::String, Aws::String>& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName = value; }
    inline void SetFlattenedMapWithXmlName(Aws::Map<Aws::String, Aws::String>&& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName = std::move(value); }
    inline QueryMapsRequest& WithFlattenedMapWithXmlName(const Aws::Map<Aws::String, Aws::String>& value) { SetFlattenedMapWithXmlName(value); return *this;}
    inline QueryMapsRequest& WithFlattenedMapWithXmlName(Aws::Map<Aws::String, Aws::String>&& value) { SetFlattenedMapWithXmlName(std::move(value)); return *this;}
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(const Aws::String& key, const Aws::String& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(Aws::String&& key, const Aws::String& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(const Aws::String& key, Aws::String&& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(Aws::String&& key, Aws::String&& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(const char* key, Aws::String&& value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(Aws::String&& key, const char* value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddFlattenedMapWithXmlName(const char* key, const char* value) { m_flattenedMapWithXmlNameHasBeenSet = true; m_flattenedMapWithXmlName.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMapOfLists() const{ return m_mapOfLists; }
    inline bool MapOfListsHasBeenSet() const { return m_mapOfListsHasBeenSet; }
    inline void SetMapOfLists(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists = value; }
    inline void SetMapOfLists(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists = std::move(value); }
    inline QueryMapsRequest& WithMapOfLists(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMapOfLists(value); return *this;}
    inline QueryMapsRequest& WithMapOfLists(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMapOfLists(std::move(value)); return *this;}
    inline QueryMapsRequest& AddMapOfLists(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists.emplace(key, value); return *this; }
    inline QueryMapsRequest& AddMapOfLists(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists.emplace(std::move(key), value); return *this; }
    inline QueryMapsRequest& AddMapOfLists(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapOfLists(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapOfLists(const char* key, Aws::Vector<Aws::String>&& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists.emplace(key, std::move(value)); return *this; }
    inline QueryMapsRequest& AddMapOfLists(const char* key, const Aws::Vector<Aws::String>& value) { m_mapOfListsHasBeenSet = true; m_mapOfLists.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const NestedStructWithMap& GetNestedStructWithMap() const{ return m_nestedStructWithMap; }
    inline bool NestedStructWithMapHasBeenSet() const { return m_nestedStructWithMapHasBeenSet; }
    inline void SetNestedStructWithMap(const NestedStructWithMap& value) { m_nestedStructWithMapHasBeenSet = true; m_nestedStructWithMap = value; }
    inline void SetNestedStructWithMap(NestedStructWithMap&& value) { m_nestedStructWithMapHasBeenSet = true; m_nestedStructWithMap = std::move(value); }
    inline QueryMapsRequest& WithNestedStructWithMap(const NestedStructWithMap& value) { SetNestedStructWithMap(value); return *this;}
    inline QueryMapsRequest& WithNestedStructWithMap(NestedStructWithMap&& value) { SetNestedStructWithMap(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_mapArg;
    bool m_mapArgHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_renamedMapArg;
    bool m_renamedMapArgHasBeenSet = false;

    Aws::Map<Aws::String, GreetingStruct> m_complexMapArg;
    bool m_complexMapArgHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mapWithXmlMemberName;
    bool m_mapWithXmlMemberNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_flattenedMap;
    bool m_flattenedMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_flattenedMapWithXmlName;
    bool m_flattenedMapWithXmlNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_mapOfLists;
    bool m_mapOfListsHasBeenSet = false;

    NestedStructWithMap m_nestedStructWithMap;
    bool m_nestedStructWithMapHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
