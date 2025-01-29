/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/json-protocol/model/EmptyStruct.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/json-protocol/model/KitchenSink.h>
#include <aws/json-protocol/model/SimpleStruct.h>
#include <aws/json-protocol/model/StructWithJsonName.h>
#include <utility>

namespace Aws
{
namespace JsonProtocol
{
namespace Model
{

  /**
   */
  class KitchenSinkOperationRequest : public JsonProtocolRequest
  {
  public:
    AWS_JSONPROTOCOL_API KitchenSinkOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "KitchenSinkOperation"; }

    AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Utils::ByteBuffer& GetBlob() const{ return m_blob; }
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
    inline void SetBlob(const Aws::Utils::ByteBuffer& value) { m_blobHasBeenSet = true; m_blob = value; }
    inline void SetBlob(Aws::Utils::ByteBuffer&& value) { m_blobHasBeenSet = true; m_blob = std::move(value); }
    inline KitchenSinkOperationRequest& WithBlob(const Aws::Utils::ByteBuffer& value) { SetBlob(value); return *this;}
    inline KitchenSinkOperationRequest& WithBlob(Aws::Utils::ByteBuffer&& value) { SetBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetBoolean() const{ return m_boolean; }
    inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
    inline void SetBoolean(bool value) { m_booleanHasBeenSet = true; m_boolean = value; }
    inline KitchenSinkOperationRequest& WithBoolean(bool value) { SetBoolean(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDouble() const{ return m_double; }
    inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }
    inline void SetDouble(double value) { m_doubleHasBeenSet = true; m_double = value; }
    inline KitchenSinkOperationRequest& WithDouble(double value) { SetDouble(value); return *this;}
    ///@}

    ///@{
    
    inline const EmptyStruct& GetEmptyStruct() const{ return m_emptyStruct; }
    inline bool EmptyStructHasBeenSet() const { return m_emptyStructHasBeenSet; }
    inline void SetEmptyStruct(const EmptyStruct& value) { m_emptyStructHasBeenSet = true; m_emptyStruct = value; }
    inline void SetEmptyStruct(EmptyStruct&& value) { m_emptyStructHasBeenSet = true; m_emptyStruct = std::move(value); }
    inline KitchenSinkOperationRequest& WithEmptyStruct(const EmptyStruct& value) { SetEmptyStruct(value); return *this;}
    inline KitchenSinkOperationRequest& WithEmptyStruct(EmptyStruct&& value) { SetEmptyStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline double GetFloat() const{ return m_float; }
    inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
    inline void SetFloat(double value) { m_floatHasBeenSet = true; m_float = value; }
    inline KitchenSinkOperationRequest& WithFloat(double value) { SetFloat(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpdateTimestamp() const{ return m_httpdateTimestamp; }
    inline bool HttpdateTimestampHasBeenSet() const { return m_httpdateTimestampHasBeenSet; }
    inline void SetHttpdateTimestamp(const Aws::Utils::DateTime& value) { m_httpdateTimestampHasBeenSet = true; m_httpdateTimestamp = value; }
    inline void SetHttpdateTimestamp(Aws::Utils::DateTime&& value) { m_httpdateTimestampHasBeenSet = true; m_httpdateTimestamp = std::move(value); }
    inline KitchenSinkOperationRequest& WithHttpdateTimestamp(const Aws::Utils::DateTime& value) { SetHttpdateTimestamp(value); return *this;}
    inline KitchenSinkOperationRequest& WithHttpdateTimestamp(Aws::Utils::DateTime&& value) { SetHttpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetInteger() const{ return m_integer; }
    inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }
    inline void SetInteger(int value) { m_integerHasBeenSet = true; m_integer = value; }
    inline KitchenSinkOperationRequest& WithInteger(int value) { SetInteger(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetIso8601Timestamp() const{ return m_iso8601Timestamp; }
    inline bool Iso8601TimestampHasBeenSet() const { return m_iso8601TimestampHasBeenSet; }
    inline void SetIso8601Timestamp(const Aws::Utils::DateTime& value) { m_iso8601TimestampHasBeenSet = true; m_iso8601Timestamp = value; }
    inline void SetIso8601Timestamp(Aws::Utils::DateTime&& value) { m_iso8601TimestampHasBeenSet = true; m_iso8601Timestamp = std::move(value); }
    inline KitchenSinkOperationRequest& WithIso8601Timestamp(const Aws::Utils::DateTime& value) { SetIso8601Timestamp(value); return *this;}
    inline KitchenSinkOperationRequest& WithIso8601Timestamp(Aws::Utils::DateTime&& value) { SetIso8601Timestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetJsonValue() const{ return m_jsonValue; }
    inline bool JsonValueHasBeenSet() const { return m_jsonValueHasBeenSet; }
    inline void SetJsonValue(const Aws::String& value) { m_jsonValueHasBeenSet = true; m_jsonValue = value; }
    inline void SetJsonValue(Aws::String&& value) { m_jsonValueHasBeenSet = true; m_jsonValue = std::move(value); }
    inline void SetJsonValue(const char* value) { m_jsonValueHasBeenSet = true; m_jsonValue.assign(value); }
    inline KitchenSinkOperationRequest& WithJsonValue(const Aws::String& value) { SetJsonValue(value); return *this;}
    inline KitchenSinkOperationRequest& WithJsonValue(Aws::String&& value) { SetJsonValue(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& WithJsonValue(const char* value) { SetJsonValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetListOfLists() const{ return m_listOfLists; }
    inline bool ListOfListsHasBeenSet() const { return m_listOfListsHasBeenSet; }
    inline void SetListOfLists(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_listOfListsHasBeenSet = true; m_listOfLists = value; }
    inline void SetListOfLists(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_listOfListsHasBeenSet = true; m_listOfLists = std::move(value); }
    inline KitchenSinkOperationRequest& WithListOfLists(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetListOfLists(value); return *this;}
    inline KitchenSinkOperationRequest& WithListOfLists(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetListOfLists(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddListOfLists(const Aws::Vector<Aws::String>& value) { m_listOfListsHasBeenSet = true; m_listOfLists.push_back(value); return *this; }
    inline KitchenSinkOperationRequest& AddListOfLists(Aws::Vector<Aws::String>&& value) { m_listOfListsHasBeenSet = true; m_listOfLists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetListOfMapsOfStrings() const{ return m_listOfMapsOfStrings; }
    inline bool ListOfMapsOfStringsHasBeenSet() const { return m_listOfMapsOfStringsHasBeenSet; }
    inline void SetListOfMapsOfStrings(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_listOfMapsOfStringsHasBeenSet = true; m_listOfMapsOfStrings = value; }
    inline void SetListOfMapsOfStrings(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_listOfMapsOfStringsHasBeenSet = true; m_listOfMapsOfStrings = std::move(value); }
    inline KitchenSinkOperationRequest& WithListOfMapsOfStrings(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetListOfMapsOfStrings(value); return *this;}
    inline KitchenSinkOperationRequest& WithListOfMapsOfStrings(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetListOfMapsOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddListOfMapsOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { m_listOfMapsOfStringsHasBeenSet = true; m_listOfMapsOfStrings.push_back(value); return *this; }
    inline KitchenSinkOperationRequest& AddListOfMapsOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { m_listOfMapsOfStringsHasBeenSet = true; m_listOfMapsOfStrings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListOfStrings() const{ return m_listOfStrings; }
    inline bool ListOfStringsHasBeenSet() const { return m_listOfStringsHasBeenSet; }
    inline void SetListOfStrings(const Aws::Vector<Aws::String>& value) { m_listOfStringsHasBeenSet = true; m_listOfStrings = value; }
    inline void SetListOfStrings(Aws::Vector<Aws::String>&& value) { m_listOfStringsHasBeenSet = true; m_listOfStrings = std::move(value); }
    inline KitchenSinkOperationRequest& WithListOfStrings(const Aws::Vector<Aws::String>& value) { SetListOfStrings(value); return *this;}
    inline KitchenSinkOperationRequest& WithListOfStrings(Aws::Vector<Aws::String>&& value) { SetListOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddListOfStrings(const Aws::String& value) { m_listOfStringsHasBeenSet = true; m_listOfStrings.push_back(value); return *this; }
    inline KitchenSinkOperationRequest& AddListOfStrings(Aws::String&& value) { m_listOfStringsHasBeenSet = true; m_listOfStrings.push_back(std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddListOfStrings(const char* value) { m_listOfStringsHasBeenSet = true; m_listOfStrings.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<SimpleStruct>& GetListOfStructs() const{ return m_listOfStructs; }
    inline bool ListOfStructsHasBeenSet() const { return m_listOfStructsHasBeenSet; }
    inline void SetListOfStructs(const Aws::Vector<SimpleStruct>& value) { m_listOfStructsHasBeenSet = true; m_listOfStructs = value; }
    inline void SetListOfStructs(Aws::Vector<SimpleStruct>&& value) { m_listOfStructsHasBeenSet = true; m_listOfStructs = std::move(value); }
    inline KitchenSinkOperationRequest& WithListOfStructs(const Aws::Vector<SimpleStruct>& value) { SetListOfStructs(value); return *this;}
    inline KitchenSinkOperationRequest& WithListOfStructs(Aws::Vector<SimpleStruct>&& value) { SetListOfStructs(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddListOfStructs(const SimpleStruct& value) { m_listOfStructsHasBeenSet = true; m_listOfStructs.push_back(value); return *this; }
    inline KitchenSinkOperationRequest& AddListOfStructs(SimpleStruct&& value) { m_listOfStructsHasBeenSet = true; m_listOfStructs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline long long GetLong() const{ return m_long; }
    inline bool LongHasBeenSet() const { return m_longHasBeenSet; }
    inline void SetLong(long long value) { m_longHasBeenSet = true; m_long = value; }
    inline KitchenSinkOperationRequest& WithLong(long long value) { SetLong(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMapOfListsOfStrings() const{ return m_mapOfListsOfStrings; }
    inline bool MapOfListsOfStringsHasBeenSet() const { return m_mapOfListsOfStringsHasBeenSet; }
    inline void SetMapOfListsOfStrings(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings = value; }
    inline void SetMapOfListsOfStrings(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings = std::move(value); }
    inline KitchenSinkOperationRequest& WithMapOfListsOfStrings(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMapOfListsOfStrings(value); return *this;}
    inline KitchenSinkOperationRequest& WithMapOfListsOfStrings(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMapOfListsOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddMapOfListsOfStrings(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings.emplace(key, value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfListsOfStrings(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfListsOfStrings(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfListsOfStrings(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfListsOfStrings(const char* key, Aws::Vector<Aws::String>&& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfListsOfStrings(const char* key, const Aws::Vector<Aws::String>& value) { m_mapOfListsOfStringsHasBeenSet = true; m_mapOfListsOfStrings.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetMapOfMaps() const{ return m_mapOfMaps; }
    inline bool MapOfMapsHasBeenSet() const { return m_mapOfMapsHasBeenSet; }
    inline void SetMapOfMaps(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps = value; }
    inline void SetMapOfMaps(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps = std::move(value); }
    inline KitchenSinkOperationRequest& WithMapOfMaps(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetMapOfMaps(value); return *this;}
    inline KitchenSinkOperationRequest& WithMapOfMaps(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetMapOfMaps(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddMapOfMaps(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps.emplace(key, value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfMaps(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfMaps(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfMaps(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfMaps(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfMaps(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfMapsHasBeenSet = true; m_mapOfMaps.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapOfStrings() const{ return m_mapOfStrings; }
    inline bool MapOfStringsHasBeenSet() const { return m_mapOfStringsHasBeenSet; }
    inline void SetMapOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings = value; }
    inline void SetMapOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings = std::move(value); }
    inline KitchenSinkOperationRequest& WithMapOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { SetMapOfStrings(value); return *this;}
    inline KitchenSinkOperationRequest& WithMapOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { SetMapOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddMapOfStrings(const Aws::String& key, const Aws::String& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(key, value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStrings(Aws::String&& key, const Aws::String& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStrings(const Aws::String& key, Aws::String&& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStrings(Aws::String&& key, Aws::String&& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStrings(const char* key, Aws::String&& value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStrings(Aws::String&& key, const char* value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStrings(const char* key, const char* value) { m_mapOfStringsHasBeenSet = true; m_mapOfStrings.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, SimpleStruct>& GetMapOfStructs() const{ return m_mapOfStructs; }
    inline bool MapOfStructsHasBeenSet() const { return m_mapOfStructsHasBeenSet; }
    inline void SetMapOfStructs(const Aws::Map<Aws::String, SimpleStruct>& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs = value; }
    inline void SetMapOfStructs(Aws::Map<Aws::String, SimpleStruct>&& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs = std::move(value); }
    inline KitchenSinkOperationRequest& WithMapOfStructs(const Aws::Map<Aws::String, SimpleStruct>& value) { SetMapOfStructs(value); return *this;}
    inline KitchenSinkOperationRequest& WithMapOfStructs(Aws::Map<Aws::String, SimpleStruct>&& value) { SetMapOfStructs(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddMapOfStructs(const Aws::String& key, const SimpleStruct& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs.emplace(key, value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStructs(Aws::String&& key, const SimpleStruct& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStructs(const Aws::String& key, SimpleStruct&& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStructs(Aws::String&& key, SimpleStruct&& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStructs(const char* key, SimpleStruct&& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddMapOfStructs(const char* key, const SimpleStruct& value) { m_mapOfStructsHasBeenSet = true; m_mapOfStructs.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<KitchenSink>& GetRecursiveList() const{ return m_recursiveList; }
    inline bool RecursiveListHasBeenSet() const { return m_recursiveListHasBeenSet; }
    inline void SetRecursiveList(const Aws::Vector<KitchenSink>& value) { m_recursiveListHasBeenSet = true; m_recursiveList = value; }
    inline void SetRecursiveList(Aws::Vector<KitchenSink>&& value) { m_recursiveListHasBeenSet = true; m_recursiveList = std::move(value); }
    inline KitchenSinkOperationRequest& WithRecursiveList(const Aws::Vector<KitchenSink>& value) { SetRecursiveList(value); return *this;}
    inline KitchenSinkOperationRequest& WithRecursiveList(Aws::Vector<KitchenSink>&& value) { SetRecursiveList(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddRecursiveList(const KitchenSink& value) { m_recursiveListHasBeenSet = true; m_recursiveList.push_back(value); return *this; }
    inline KitchenSinkOperationRequest& AddRecursiveList(KitchenSink&& value) { m_recursiveListHasBeenSet = true; m_recursiveList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, KitchenSink>& GetRecursiveMap() const{ return m_recursiveMap; }
    inline bool RecursiveMapHasBeenSet() const { return m_recursiveMapHasBeenSet; }
    inline void SetRecursiveMap(const Aws::Map<Aws::String, KitchenSink>& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap = value; }
    inline void SetRecursiveMap(Aws::Map<Aws::String, KitchenSink>&& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap = std::move(value); }
    inline KitchenSinkOperationRequest& WithRecursiveMap(const Aws::Map<Aws::String, KitchenSink>& value) { SetRecursiveMap(value); return *this;}
    inline KitchenSinkOperationRequest& WithRecursiveMap(Aws::Map<Aws::String, KitchenSink>&& value) { SetRecursiveMap(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& AddRecursiveMap(const Aws::String& key, const KitchenSink& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap.emplace(key, value); return *this; }
    inline KitchenSinkOperationRequest& AddRecursiveMap(Aws::String&& key, const KitchenSink& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationRequest& AddRecursiveMap(const Aws::String& key, KitchenSink&& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddRecursiveMap(Aws::String&& key, KitchenSink&& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddRecursiveMap(const char* key, KitchenSink&& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationRequest& AddRecursiveMap(const char* key, const KitchenSink& value) { m_recursiveMapHasBeenSet = true; m_recursiveMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const KitchenSink& GetRecursiveStruct() const{ return m_recursiveStruct; }
    inline bool RecursiveStructHasBeenSet() const { return m_recursiveStructHasBeenSet; }
    inline void SetRecursiveStruct(const KitchenSink& value) { m_recursiveStructHasBeenSet = true; m_recursiveStruct = value; }
    inline void SetRecursiveStruct(KitchenSink&& value) { m_recursiveStructHasBeenSet = true; m_recursiveStruct = std::move(value); }
    inline KitchenSinkOperationRequest& WithRecursiveStruct(const KitchenSink& value) { SetRecursiveStruct(value); return *this;}
    inline KitchenSinkOperationRequest& WithRecursiveStruct(KitchenSink&& value) { SetRecursiveStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SimpleStruct& GetSimpleStruct() const{ return m_simpleStruct; }
    inline bool SimpleStructHasBeenSet() const { return m_simpleStructHasBeenSet; }
    inline void SetSimpleStruct(const SimpleStruct& value) { m_simpleStructHasBeenSet = true; m_simpleStruct = value; }
    inline void SetSimpleStruct(SimpleStruct&& value) { m_simpleStructHasBeenSet = true; m_simpleStruct = std::move(value); }
    inline KitchenSinkOperationRequest& WithSimpleStruct(const SimpleStruct& value) { SetSimpleStruct(value); return *this;}
    inline KitchenSinkOperationRequest& WithSimpleStruct(SimpleStruct&& value) { SetSimpleStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetString() const{ return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    inline void SetString(const Aws::String& value) { m_stringHasBeenSet = true; m_string = value; }
    inline void SetString(Aws::String&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }
    inline void SetString(const char* value) { m_stringHasBeenSet = true; m_string.assign(value); }
    inline KitchenSinkOperationRequest& WithString(const Aws::String& value) { SetString(value); return *this;}
    inline KitchenSinkOperationRequest& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& WithString(const char* value) { SetString(value); return *this;}
    ///@}

    ///@{
    
    inline const StructWithJsonName& GetStructWithJsonName() const{ return m_structWithJsonName; }
    inline bool StructWithJsonNameHasBeenSet() const { return m_structWithJsonNameHasBeenSet; }
    inline void SetStructWithJsonName(const StructWithJsonName& value) { m_structWithJsonNameHasBeenSet = true; m_structWithJsonName = value; }
    inline void SetStructWithJsonName(StructWithJsonName&& value) { m_structWithJsonNameHasBeenSet = true; m_structWithJsonName = std::move(value); }
    inline KitchenSinkOperationRequest& WithStructWithJsonName(const StructWithJsonName& value) { SetStructWithJsonName(value); return *this;}
    inline KitchenSinkOperationRequest& WithStructWithJsonName(StructWithJsonName&& value) { SetStructWithJsonName(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline KitchenSinkOperationRequest& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline KitchenSinkOperationRequest& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUnixTimestamp() const{ return m_unixTimestamp; }
    inline bool UnixTimestampHasBeenSet() const { return m_unixTimestampHasBeenSet; }
    inline void SetUnixTimestamp(const Aws::Utils::DateTime& value) { m_unixTimestampHasBeenSet = true; m_unixTimestamp = value; }
    inline void SetUnixTimestamp(Aws::Utils::DateTime&& value) { m_unixTimestampHasBeenSet = true; m_unixTimestamp = std::move(value); }
    inline KitchenSinkOperationRequest& WithUnixTimestamp(const Aws::Utils::DateTime& value) { SetUnixTimestamp(value); return *this;}
    inline KitchenSinkOperationRequest& WithUnixTimestamp(Aws::Utils::DateTime&& value) { SetUnixTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline KitchenSinkOperationRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline KitchenSinkOperationRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline KitchenSinkOperationRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_blob;
    bool m_blobHasBeenSet = false;

    bool m_boolean;
    bool m_booleanHasBeenSet = false;

    double m_double;
    bool m_doubleHasBeenSet = false;

    EmptyStruct m_emptyStruct;
    bool m_emptyStructHasBeenSet = false;

    double m_float;
    bool m_floatHasBeenSet = false;

    Aws::Utils::DateTime m_httpdateTimestamp;
    bool m_httpdateTimestampHasBeenSet = false;

    int m_integer;
    bool m_integerHasBeenSet = false;

    Aws::Utils::DateTime m_iso8601Timestamp;
    bool m_iso8601TimestampHasBeenSet = false;

    Aws::String m_jsonValue;
    bool m_jsonValueHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_listOfLists;
    bool m_listOfListsHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_listOfMapsOfStrings;
    bool m_listOfMapsOfStringsHasBeenSet = false;

    Aws::Vector<Aws::String> m_listOfStrings;
    bool m_listOfStringsHasBeenSet = false;

    Aws::Vector<SimpleStruct> m_listOfStructs;
    bool m_listOfStructsHasBeenSet = false;

    long long m_long;
    bool m_longHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_mapOfListsOfStrings;
    bool m_mapOfListsOfStringsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_mapOfMaps;
    bool m_mapOfMapsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mapOfStrings;
    bool m_mapOfStringsHasBeenSet = false;

    Aws::Map<Aws::String, SimpleStruct> m_mapOfStructs;
    bool m_mapOfStructsHasBeenSet = false;

    Aws::Vector<KitchenSink> m_recursiveList;
    bool m_recursiveListHasBeenSet = false;

    Aws::Map<Aws::String, KitchenSink> m_recursiveMap;
    bool m_recursiveMapHasBeenSet = false;

    KitchenSink m_recursiveStruct;
    bool m_recursiveStructHasBeenSet = false;

    SimpleStruct m_simpleStruct;
    bool m_simpleStructHasBeenSet = false;

    Aws::String m_string;
    bool m_stringHasBeenSet = false;

    StructWithJsonName m_structWithJsonName;
    bool m_structWithJsonNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::Utils::DateTime m_unixTimestamp;
    bool m_unixTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
