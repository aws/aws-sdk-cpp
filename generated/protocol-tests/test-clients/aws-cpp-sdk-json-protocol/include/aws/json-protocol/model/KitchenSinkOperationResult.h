/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace JsonProtocol
{
namespace Model
{
  class KitchenSinkOperationResult
  {
  public:
    AWS_JSONPROTOCOL_API KitchenSinkOperationResult();
    AWS_JSONPROTOCOL_API KitchenSinkOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API KitchenSinkOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Utils::ByteBuffer& GetBlob() const{ return m_blob; }
    inline void SetBlob(const Aws::Utils::ByteBuffer& value) { m_blob = value; }
    inline void SetBlob(Aws::Utils::ByteBuffer&& value) { m_blob = std::move(value); }
    inline KitchenSinkOperationResult& WithBlob(const Aws::Utils::ByteBuffer& value) { SetBlob(value); return *this;}
    inline KitchenSinkOperationResult& WithBlob(Aws::Utils::ByteBuffer&& value) { SetBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetBoolean() const{ return m_boolean; }
    inline void SetBoolean(bool value) { m_boolean = value; }
    inline KitchenSinkOperationResult& WithBoolean(bool value) { SetBoolean(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDouble() const{ return m_double; }
    inline void SetDouble(double value) { m_double = value; }
    inline KitchenSinkOperationResult& WithDouble(double value) { SetDouble(value); return *this;}
    ///@}

    ///@{
    
    inline const EmptyStruct& GetEmptyStruct() const{ return m_emptyStruct; }
    inline void SetEmptyStruct(const EmptyStruct& value) { m_emptyStruct = value; }
    inline void SetEmptyStruct(EmptyStruct&& value) { m_emptyStruct = std::move(value); }
    inline KitchenSinkOperationResult& WithEmptyStruct(const EmptyStruct& value) { SetEmptyStruct(value); return *this;}
    inline KitchenSinkOperationResult& WithEmptyStruct(EmptyStruct&& value) { SetEmptyStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline double GetFloat() const{ return m_float; }
    inline void SetFloat(double value) { m_float = value; }
    inline KitchenSinkOperationResult& WithFloat(double value) { SetFloat(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpdateTimestamp() const{ return m_httpdateTimestamp; }
    inline void SetHttpdateTimestamp(const Aws::Utils::DateTime& value) { m_httpdateTimestamp = value; }
    inline void SetHttpdateTimestamp(Aws::Utils::DateTime&& value) { m_httpdateTimestamp = std::move(value); }
    inline KitchenSinkOperationResult& WithHttpdateTimestamp(const Aws::Utils::DateTime& value) { SetHttpdateTimestamp(value); return *this;}
    inline KitchenSinkOperationResult& WithHttpdateTimestamp(Aws::Utils::DateTime&& value) { SetHttpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetInteger() const{ return m_integer; }
    inline void SetInteger(int value) { m_integer = value; }
    inline KitchenSinkOperationResult& WithInteger(int value) { SetInteger(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetIso8601Timestamp() const{ return m_iso8601Timestamp; }
    inline void SetIso8601Timestamp(const Aws::Utils::DateTime& value) { m_iso8601Timestamp = value; }
    inline void SetIso8601Timestamp(Aws::Utils::DateTime&& value) { m_iso8601Timestamp = std::move(value); }
    inline KitchenSinkOperationResult& WithIso8601Timestamp(const Aws::Utils::DateTime& value) { SetIso8601Timestamp(value); return *this;}
    inline KitchenSinkOperationResult& WithIso8601Timestamp(Aws::Utils::DateTime&& value) { SetIso8601Timestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetJsonValue() const{ return m_jsonValue; }
    inline void SetJsonValue(const Aws::String& value) { m_jsonValue = value; }
    inline void SetJsonValue(Aws::String&& value) { m_jsonValue = std::move(value); }
    inline void SetJsonValue(const char* value) { m_jsonValue.assign(value); }
    inline KitchenSinkOperationResult& WithJsonValue(const Aws::String& value) { SetJsonValue(value); return *this;}
    inline KitchenSinkOperationResult& WithJsonValue(Aws::String&& value) { SetJsonValue(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& WithJsonValue(const char* value) { SetJsonValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetListOfLists() const{ return m_listOfLists; }
    inline void SetListOfLists(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_listOfLists = value; }
    inline void SetListOfLists(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_listOfLists = std::move(value); }
    inline KitchenSinkOperationResult& WithListOfLists(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetListOfLists(value); return *this;}
    inline KitchenSinkOperationResult& WithListOfLists(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetListOfLists(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddListOfLists(const Aws::Vector<Aws::String>& value) { m_listOfLists.push_back(value); return *this; }
    inline KitchenSinkOperationResult& AddListOfLists(Aws::Vector<Aws::String>&& value) { m_listOfLists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetListOfMapsOfStrings() const{ return m_listOfMapsOfStrings; }
    inline void SetListOfMapsOfStrings(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_listOfMapsOfStrings = value; }
    inline void SetListOfMapsOfStrings(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_listOfMapsOfStrings = std::move(value); }
    inline KitchenSinkOperationResult& WithListOfMapsOfStrings(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetListOfMapsOfStrings(value); return *this;}
    inline KitchenSinkOperationResult& WithListOfMapsOfStrings(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetListOfMapsOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddListOfMapsOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { m_listOfMapsOfStrings.push_back(value); return *this; }
    inline KitchenSinkOperationResult& AddListOfMapsOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { m_listOfMapsOfStrings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListOfStrings() const{ return m_listOfStrings; }
    inline void SetListOfStrings(const Aws::Vector<Aws::String>& value) { m_listOfStrings = value; }
    inline void SetListOfStrings(Aws::Vector<Aws::String>&& value) { m_listOfStrings = std::move(value); }
    inline KitchenSinkOperationResult& WithListOfStrings(const Aws::Vector<Aws::String>& value) { SetListOfStrings(value); return *this;}
    inline KitchenSinkOperationResult& WithListOfStrings(Aws::Vector<Aws::String>&& value) { SetListOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddListOfStrings(const Aws::String& value) { m_listOfStrings.push_back(value); return *this; }
    inline KitchenSinkOperationResult& AddListOfStrings(Aws::String&& value) { m_listOfStrings.push_back(std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddListOfStrings(const char* value) { m_listOfStrings.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<SimpleStruct>& GetListOfStructs() const{ return m_listOfStructs; }
    inline void SetListOfStructs(const Aws::Vector<SimpleStruct>& value) { m_listOfStructs = value; }
    inline void SetListOfStructs(Aws::Vector<SimpleStruct>&& value) { m_listOfStructs = std::move(value); }
    inline KitchenSinkOperationResult& WithListOfStructs(const Aws::Vector<SimpleStruct>& value) { SetListOfStructs(value); return *this;}
    inline KitchenSinkOperationResult& WithListOfStructs(Aws::Vector<SimpleStruct>&& value) { SetListOfStructs(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddListOfStructs(const SimpleStruct& value) { m_listOfStructs.push_back(value); return *this; }
    inline KitchenSinkOperationResult& AddListOfStructs(SimpleStruct&& value) { m_listOfStructs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline long long GetLong() const{ return m_long; }
    inline void SetLong(long long value) { m_long = value; }
    inline KitchenSinkOperationResult& WithLong(long long value) { SetLong(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMapOfListsOfStrings() const{ return m_mapOfListsOfStrings; }
    inline void SetMapOfListsOfStrings(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_mapOfListsOfStrings = value; }
    inline void SetMapOfListsOfStrings(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_mapOfListsOfStrings = std::move(value); }
    inline KitchenSinkOperationResult& WithMapOfListsOfStrings(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMapOfListsOfStrings(value); return *this;}
    inline KitchenSinkOperationResult& WithMapOfListsOfStrings(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMapOfListsOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddMapOfListsOfStrings(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_mapOfListsOfStrings.emplace(key, value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfListsOfStrings(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_mapOfListsOfStrings.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfListsOfStrings(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_mapOfListsOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfListsOfStrings(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_mapOfListsOfStrings.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfListsOfStrings(const char* key, Aws::Vector<Aws::String>&& value) { m_mapOfListsOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfListsOfStrings(const char* key, const Aws::Vector<Aws::String>& value) { m_mapOfListsOfStrings.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetMapOfMaps() const{ return m_mapOfMaps; }
    inline void SetMapOfMaps(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_mapOfMaps = value; }
    inline void SetMapOfMaps(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_mapOfMaps = std::move(value); }
    inline KitchenSinkOperationResult& WithMapOfMaps(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetMapOfMaps(value); return *this;}
    inline KitchenSinkOperationResult& WithMapOfMaps(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetMapOfMaps(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddMapOfMaps(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfMaps.emplace(key, value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfMaps(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfMaps.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfMaps(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfMaps.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfMaps(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfMaps.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfMaps(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfMaps.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfMaps(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfMaps.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapOfStrings() const{ return m_mapOfStrings; }
    inline void SetMapOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfStrings = value; }
    inline void SetMapOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfStrings = std::move(value); }
    inline KitchenSinkOperationResult& WithMapOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { SetMapOfStrings(value); return *this;}
    inline KitchenSinkOperationResult& WithMapOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { SetMapOfStrings(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddMapOfStrings(const Aws::String& key, const Aws::String& value) { m_mapOfStrings.emplace(key, value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStrings(Aws::String&& key, const Aws::String& value) { m_mapOfStrings.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStrings(const Aws::String& key, Aws::String&& value) { m_mapOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStrings(Aws::String&& key, Aws::String&& value) { m_mapOfStrings.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStrings(const char* key, Aws::String&& value) { m_mapOfStrings.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStrings(Aws::String&& key, const char* value) { m_mapOfStrings.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStrings(const char* key, const char* value) { m_mapOfStrings.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, SimpleStruct>& GetMapOfStructs() const{ return m_mapOfStructs; }
    inline void SetMapOfStructs(const Aws::Map<Aws::String, SimpleStruct>& value) { m_mapOfStructs = value; }
    inline void SetMapOfStructs(Aws::Map<Aws::String, SimpleStruct>&& value) { m_mapOfStructs = std::move(value); }
    inline KitchenSinkOperationResult& WithMapOfStructs(const Aws::Map<Aws::String, SimpleStruct>& value) { SetMapOfStructs(value); return *this;}
    inline KitchenSinkOperationResult& WithMapOfStructs(Aws::Map<Aws::String, SimpleStruct>&& value) { SetMapOfStructs(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddMapOfStructs(const Aws::String& key, const SimpleStruct& value) { m_mapOfStructs.emplace(key, value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStructs(Aws::String&& key, const SimpleStruct& value) { m_mapOfStructs.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStructs(const Aws::String& key, SimpleStruct&& value) { m_mapOfStructs.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStructs(Aws::String&& key, SimpleStruct&& value) { m_mapOfStructs.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStructs(const char* key, SimpleStruct&& value) { m_mapOfStructs.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddMapOfStructs(const char* key, const SimpleStruct& value) { m_mapOfStructs.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<KitchenSink>& GetRecursiveList() const{ return m_recursiveList; }
    inline void SetRecursiveList(const Aws::Vector<KitchenSink>& value) { m_recursiveList = value; }
    inline void SetRecursiveList(Aws::Vector<KitchenSink>&& value) { m_recursiveList = std::move(value); }
    inline KitchenSinkOperationResult& WithRecursiveList(const Aws::Vector<KitchenSink>& value) { SetRecursiveList(value); return *this;}
    inline KitchenSinkOperationResult& WithRecursiveList(Aws::Vector<KitchenSink>&& value) { SetRecursiveList(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddRecursiveList(const KitchenSink& value) { m_recursiveList.push_back(value); return *this; }
    inline KitchenSinkOperationResult& AddRecursiveList(KitchenSink&& value) { m_recursiveList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, KitchenSink>& GetRecursiveMap() const{ return m_recursiveMap; }
    inline void SetRecursiveMap(const Aws::Map<Aws::String, KitchenSink>& value) { m_recursiveMap = value; }
    inline void SetRecursiveMap(Aws::Map<Aws::String, KitchenSink>&& value) { m_recursiveMap = std::move(value); }
    inline KitchenSinkOperationResult& WithRecursiveMap(const Aws::Map<Aws::String, KitchenSink>& value) { SetRecursiveMap(value); return *this;}
    inline KitchenSinkOperationResult& WithRecursiveMap(Aws::Map<Aws::String, KitchenSink>&& value) { SetRecursiveMap(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& AddRecursiveMap(const Aws::String& key, const KitchenSink& value) { m_recursiveMap.emplace(key, value); return *this; }
    inline KitchenSinkOperationResult& AddRecursiveMap(Aws::String&& key, const KitchenSink& value) { m_recursiveMap.emplace(std::move(key), value); return *this; }
    inline KitchenSinkOperationResult& AddRecursiveMap(const Aws::String& key, KitchenSink&& value) { m_recursiveMap.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddRecursiveMap(Aws::String&& key, KitchenSink&& value) { m_recursiveMap.emplace(std::move(key), std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddRecursiveMap(const char* key, KitchenSink&& value) { m_recursiveMap.emplace(key, std::move(value)); return *this; }
    inline KitchenSinkOperationResult& AddRecursiveMap(const char* key, const KitchenSink& value) { m_recursiveMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const KitchenSink& GetRecursiveStruct() const{ return m_recursiveStruct; }
    inline void SetRecursiveStruct(const KitchenSink& value) { m_recursiveStruct = value; }
    inline void SetRecursiveStruct(KitchenSink&& value) { m_recursiveStruct = std::move(value); }
    inline KitchenSinkOperationResult& WithRecursiveStruct(const KitchenSink& value) { SetRecursiveStruct(value); return *this;}
    inline KitchenSinkOperationResult& WithRecursiveStruct(KitchenSink&& value) { SetRecursiveStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SimpleStruct& GetSimpleStruct() const{ return m_simpleStruct; }
    inline void SetSimpleStruct(const SimpleStruct& value) { m_simpleStruct = value; }
    inline void SetSimpleStruct(SimpleStruct&& value) { m_simpleStruct = std::move(value); }
    inline KitchenSinkOperationResult& WithSimpleStruct(const SimpleStruct& value) { SetSimpleStruct(value); return *this;}
    inline KitchenSinkOperationResult& WithSimpleStruct(SimpleStruct&& value) { SetSimpleStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetString() const{ return m_string; }
    inline void SetString(const Aws::String& value) { m_string = value; }
    inline void SetString(Aws::String&& value) { m_string = std::move(value); }
    inline void SetString(const char* value) { m_string.assign(value); }
    inline KitchenSinkOperationResult& WithString(const Aws::String& value) { SetString(value); return *this;}
    inline KitchenSinkOperationResult& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& WithString(const char* value) { SetString(value); return *this;}
    ///@}

    ///@{
    
    inline const StructWithJsonName& GetStructWithJsonName() const{ return m_structWithJsonName; }
    inline void SetStructWithJsonName(const StructWithJsonName& value) { m_structWithJsonName = value; }
    inline void SetStructWithJsonName(StructWithJsonName&& value) { m_structWithJsonName = std::move(value); }
    inline KitchenSinkOperationResult& WithStructWithJsonName(const StructWithJsonName& value) { SetStructWithJsonName(value); return *this;}
    inline KitchenSinkOperationResult& WithStructWithJsonName(StructWithJsonName&& value) { SetStructWithJsonName(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }
    inline KitchenSinkOperationResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline KitchenSinkOperationResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUnixTimestamp() const{ return m_unixTimestamp; }
    inline void SetUnixTimestamp(const Aws::Utils::DateTime& value) { m_unixTimestamp = value; }
    inline void SetUnixTimestamp(Aws::Utils::DateTime&& value) { m_unixTimestamp = std::move(value); }
    inline KitchenSinkOperationResult& WithUnixTimestamp(const Aws::Utils::DateTime& value) { SetUnixTimestamp(value); return *this;}
    inline KitchenSinkOperationResult& WithUnixTimestamp(Aws::Utils::DateTime&& value) { SetUnixTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline KitchenSinkOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline KitchenSinkOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline KitchenSinkOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_blob;

    bool m_boolean;

    double m_double;

    EmptyStruct m_emptyStruct;

    double m_float;

    Aws::Utils::DateTime m_httpdateTimestamp;

    int m_integer;

    Aws::Utils::DateTime m_iso8601Timestamp;

    Aws::String m_jsonValue;

    Aws::Vector<Aws::Vector<Aws::String>> m_listOfLists;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_listOfMapsOfStrings;

    Aws::Vector<Aws::String> m_listOfStrings;

    Aws::Vector<SimpleStruct> m_listOfStructs;

    long long m_long;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_mapOfListsOfStrings;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_mapOfMaps;

    Aws::Map<Aws::String, Aws::String> m_mapOfStrings;

    Aws::Map<Aws::String, SimpleStruct> m_mapOfStructs;

    Aws::Vector<KitchenSink> m_recursiveList;

    Aws::Map<Aws::String, KitchenSink> m_recursiveMap;

    KitchenSink m_recursiveStruct;

    SimpleStruct m_simpleStruct;

    Aws::String m_string;

    StructWithJsonName m_structWithJsonName;

    Aws::Utils::DateTime m_timestamp;

    Aws::Utils::DateTime m_unixTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
