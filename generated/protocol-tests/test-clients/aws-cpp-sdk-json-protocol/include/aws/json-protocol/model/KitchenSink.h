/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/model/EmptyStruct.h>
#include <aws/json-protocol/model/SimpleStruct.h>
#include <aws/json-protocol/model/StructWithJsonName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {

class KitchenSink {
 public:
  AWS_JSONPROTOCOL_API KitchenSink() = default;
  AWS_JSONPROTOCOL_API KitchenSink(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API KitchenSink& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBlob() const { return m_blob; }
  inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
  template <typename BlobT = Aws::Utils::ByteBuffer>
  void SetBlob(BlobT&& value) {
    m_blobHasBeenSet = true;
    m_blob = std::forward<BlobT>(value);
  }
  template <typename BlobT = Aws::Utils::ByteBuffer>
  KitchenSink& WithBlob(BlobT&& value) {
    SetBlob(std::forward<BlobT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetBoolean() const { return m_boolean; }
  inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
  inline void SetBoolean(bool value) {
    m_booleanHasBeenSet = true;
    m_boolean = value;
  }
  inline KitchenSink& WithBoolean(bool value) {
    SetBoolean(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDouble() const { return m_double; }
  inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }
  inline void SetDouble(double value) {
    m_doubleHasBeenSet = true;
    m_double = value;
  }
  inline KitchenSink& WithDouble(double value) {
    SetDouble(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EmptyStruct& GetEmptyStruct() const { return m_emptyStruct; }
  inline bool EmptyStructHasBeenSet() const { return m_emptyStructHasBeenSet; }
  template <typename EmptyStructT = EmptyStruct>
  void SetEmptyStruct(EmptyStructT&& value) {
    m_emptyStructHasBeenSet = true;
    m_emptyStruct = std::forward<EmptyStructT>(value);
  }
  template <typename EmptyStructT = EmptyStruct>
  KitchenSink& WithEmptyStruct(EmptyStructT&& value) {
    SetEmptyStruct(std::forward<EmptyStructT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloat() const { return m_float; }
  inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
  inline void SetFloat(double value) {
    m_floatHasBeenSet = true;
    m_float = value;
  }
  inline KitchenSink& WithFloat(double value) {
    SetFloat(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetHttpdateTimestamp() const { return m_httpdateTimestamp; }
  inline bool HttpdateTimestampHasBeenSet() const { return m_httpdateTimestampHasBeenSet; }
  template <typename HttpdateTimestampT = Aws::Utils::DateTime>
  void SetHttpdateTimestamp(HttpdateTimestampT&& value) {
    m_httpdateTimestampHasBeenSet = true;
    m_httpdateTimestamp = std::forward<HttpdateTimestampT>(value);
  }
  template <typename HttpdateTimestampT = Aws::Utils::DateTime>
  KitchenSink& WithHttpdateTimestamp(HttpdateTimestampT&& value) {
    SetHttpdateTimestamp(std::forward<HttpdateTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetInteger() const { return m_integer; }
  inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }
  inline void SetInteger(int value) {
    m_integerHasBeenSet = true;
    m_integer = value;
  }
  inline KitchenSink& WithInteger(int value) {
    SetInteger(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetIso8601Timestamp() const { return m_iso8601Timestamp; }
  inline bool Iso8601TimestampHasBeenSet() const { return m_iso8601TimestampHasBeenSet; }
  template <typename Iso8601TimestampT = Aws::Utils::DateTime>
  void SetIso8601Timestamp(Iso8601TimestampT&& value) {
    m_iso8601TimestampHasBeenSet = true;
    m_iso8601Timestamp = std::forward<Iso8601TimestampT>(value);
  }
  template <typename Iso8601TimestampT = Aws::Utils::DateTime>
  KitchenSink& WithIso8601Timestamp(Iso8601TimestampT&& value) {
    SetIso8601Timestamp(std::forward<Iso8601TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetJsonValue() const { return m_jsonValue; }
  inline bool JsonValueHasBeenSet() const { return m_jsonValueHasBeenSet; }
  template <typename JsonValueT = Aws::String>
  void SetJsonValue(JsonValueT&& value) {
    m_jsonValueHasBeenSet = true;
    m_jsonValue = std::forward<JsonValueT>(value);
  }
  template <typename JsonValueT = Aws::String>
  KitchenSink& WithJsonValue(JsonValueT&& value) {
    SetJsonValue(std::forward<JsonValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Vector<Aws::String>>& GetListOfLists() const { return m_listOfLists; }
  inline bool ListOfListsHasBeenSet() const { return m_listOfListsHasBeenSet; }
  template <typename ListOfListsT = Aws::Vector<Aws::Vector<Aws::String>>>
  void SetListOfLists(ListOfListsT&& value) {
    m_listOfListsHasBeenSet = true;
    m_listOfLists = std::forward<ListOfListsT>(value);
  }
  template <typename ListOfListsT = Aws::Vector<Aws::Vector<Aws::String>>>
  KitchenSink& WithListOfLists(ListOfListsT&& value) {
    SetListOfLists(std::forward<ListOfListsT>(value));
    return *this;
  }
  template <typename ListOfListsT = Aws::Vector<Aws::String>>
  KitchenSink& AddListOfLists(ListOfListsT&& value) {
    m_listOfListsHasBeenSet = true;
    m_listOfLists.emplace_back(std::forward<ListOfListsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetListOfMapsOfStrings() const { return m_listOfMapsOfStrings; }
  inline bool ListOfMapsOfStringsHasBeenSet() const { return m_listOfMapsOfStringsHasBeenSet; }
  template <typename ListOfMapsOfStringsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  void SetListOfMapsOfStrings(ListOfMapsOfStringsT&& value) {
    m_listOfMapsOfStringsHasBeenSet = true;
    m_listOfMapsOfStrings = std::forward<ListOfMapsOfStringsT>(value);
  }
  template <typename ListOfMapsOfStringsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  KitchenSink& WithListOfMapsOfStrings(ListOfMapsOfStringsT&& value) {
    SetListOfMapsOfStrings(std::forward<ListOfMapsOfStringsT>(value));
    return *this;
  }
  template <typename ListOfMapsOfStringsT = Aws::Map<Aws::String, Aws::String>>
  KitchenSink& AddListOfMapsOfStrings(ListOfMapsOfStringsT&& value) {
    m_listOfMapsOfStringsHasBeenSet = true;
    m_listOfMapsOfStrings.emplace_back(std::forward<ListOfMapsOfStringsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetListOfStrings() const { return m_listOfStrings; }
  inline bool ListOfStringsHasBeenSet() const { return m_listOfStringsHasBeenSet; }
  template <typename ListOfStringsT = Aws::Vector<Aws::String>>
  void SetListOfStrings(ListOfStringsT&& value) {
    m_listOfStringsHasBeenSet = true;
    m_listOfStrings = std::forward<ListOfStringsT>(value);
  }
  template <typename ListOfStringsT = Aws::Vector<Aws::String>>
  KitchenSink& WithListOfStrings(ListOfStringsT&& value) {
    SetListOfStrings(std::forward<ListOfStringsT>(value));
    return *this;
  }
  template <typename ListOfStringsT = Aws::String>
  KitchenSink& AddListOfStrings(ListOfStringsT&& value) {
    m_listOfStringsHasBeenSet = true;
    m_listOfStrings.emplace_back(std::forward<ListOfStringsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<SimpleStruct>& GetListOfStructs() const { return m_listOfStructs; }
  inline bool ListOfStructsHasBeenSet() const { return m_listOfStructsHasBeenSet; }
  template <typename ListOfStructsT = Aws::Vector<SimpleStruct>>
  void SetListOfStructs(ListOfStructsT&& value) {
    m_listOfStructsHasBeenSet = true;
    m_listOfStructs = std::forward<ListOfStructsT>(value);
  }
  template <typename ListOfStructsT = Aws::Vector<SimpleStruct>>
  KitchenSink& WithListOfStructs(ListOfStructsT&& value) {
    SetListOfStructs(std::forward<ListOfStructsT>(value));
    return *this;
  }
  template <typename ListOfStructsT = SimpleStruct>
  KitchenSink& AddListOfStructs(ListOfStructsT&& value) {
    m_listOfStructsHasBeenSet = true;
    m_listOfStructs.emplace_back(std::forward<ListOfStructsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLong() const { return m_long; }
  inline bool LongHasBeenSet() const { return m_longHasBeenSet; }
  inline void SetLong(long long value) {
    m_longHasBeenSet = true;
    m_long = value;
  }
  inline KitchenSink& WithLong(long long value) {
    SetLong(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMapOfListsOfStrings() const { return m_mapOfListsOfStrings; }
  inline bool MapOfListsOfStringsHasBeenSet() const { return m_mapOfListsOfStringsHasBeenSet; }
  template <typename MapOfListsOfStringsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetMapOfListsOfStrings(MapOfListsOfStringsT&& value) {
    m_mapOfListsOfStringsHasBeenSet = true;
    m_mapOfListsOfStrings = std::forward<MapOfListsOfStringsT>(value);
  }
  template <typename MapOfListsOfStringsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  KitchenSink& WithMapOfListsOfStrings(MapOfListsOfStringsT&& value) {
    SetMapOfListsOfStrings(std::forward<MapOfListsOfStringsT>(value));
    return *this;
  }
  template <typename MapOfListsOfStringsKeyT = Aws::String, typename MapOfListsOfStringsValueT = Aws::Vector<Aws::String>>
  KitchenSink& AddMapOfListsOfStrings(MapOfListsOfStringsKeyT&& key, MapOfListsOfStringsValueT&& value) {
    m_mapOfListsOfStringsHasBeenSet = true;
    m_mapOfListsOfStrings.emplace(std::forward<MapOfListsOfStringsKeyT>(key), std::forward<MapOfListsOfStringsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetMapOfMaps() const { return m_mapOfMaps; }
  inline bool MapOfMapsHasBeenSet() const { return m_mapOfMapsHasBeenSet; }
  template <typename MapOfMapsT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  void SetMapOfMaps(MapOfMapsT&& value) {
    m_mapOfMapsHasBeenSet = true;
    m_mapOfMaps = std::forward<MapOfMapsT>(value);
  }
  template <typename MapOfMapsT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  KitchenSink& WithMapOfMaps(MapOfMapsT&& value) {
    SetMapOfMaps(std::forward<MapOfMapsT>(value));
    return *this;
  }
  template <typename MapOfMapsKeyT = Aws::String, typename MapOfMapsValueT = Aws::Map<Aws::String, Aws::String>>
  KitchenSink& AddMapOfMaps(MapOfMapsKeyT&& key, MapOfMapsValueT&& value) {
    m_mapOfMapsHasBeenSet = true;
    m_mapOfMaps.emplace(std::forward<MapOfMapsKeyT>(key), std::forward<MapOfMapsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMapOfStrings() const { return m_mapOfStrings; }
  inline bool MapOfStringsHasBeenSet() const { return m_mapOfStringsHasBeenSet; }
  template <typename MapOfStringsT = Aws::Map<Aws::String, Aws::String>>
  void SetMapOfStrings(MapOfStringsT&& value) {
    m_mapOfStringsHasBeenSet = true;
    m_mapOfStrings = std::forward<MapOfStringsT>(value);
  }
  template <typename MapOfStringsT = Aws::Map<Aws::String, Aws::String>>
  KitchenSink& WithMapOfStrings(MapOfStringsT&& value) {
    SetMapOfStrings(std::forward<MapOfStringsT>(value));
    return *this;
  }
  template <typename MapOfStringsKeyT = Aws::String, typename MapOfStringsValueT = Aws::String>
  KitchenSink& AddMapOfStrings(MapOfStringsKeyT&& key, MapOfStringsValueT&& value) {
    m_mapOfStringsHasBeenSet = true;
    m_mapOfStrings.emplace(std::forward<MapOfStringsKeyT>(key), std::forward<MapOfStringsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, SimpleStruct>& GetMapOfStructs() const { return m_mapOfStructs; }
  inline bool MapOfStructsHasBeenSet() const { return m_mapOfStructsHasBeenSet; }
  template <typename MapOfStructsT = Aws::Map<Aws::String, SimpleStruct>>
  void SetMapOfStructs(MapOfStructsT&& value) {
    m_mapOfStructsHasBeenSet = true;
    m_mapOfStructs = std::forward<MapOfStructsT>(value);
  }
  template <typename MapOfStructsT = Aws::Map<Aws::String, SimpleStruct>>
  KitchenSink& WithMapOfStructs(MapOfStructsT&& value) {
    SetMapOfStructs(std::forward<MapOfStructsT>(value));
    return *this;
  }
  template <typename MapOfStructsKeyT = Aws::String, typename MapOfStructsValueT = SimpleStruct>
  KitchenSink& AddMapOfStructs(MapOfStructsKeyT&& key, MapOfStructsValueT&& value) {
    m_mapOfStructsHasBeenSet = true;
    m_mapOfStructs.emplace(std::forward<MapOfStructsKeyT>(key), std::forward<MapOfStructsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<KitchenSink>& GetRecursiveList() const { return m_recursiveList; }
  inline bool RecursiveListHasBeenSet() const { return m_recursiveListHasBeenSet; }
  template <typename RecursiveListT = Aws::Vector<KitchenSink>>
  void SetRecursiveList(RecursiveListT&& value) {
    m_recursiveListHasBeenSet = true;
    m_recursiveList = std::forward<RecursiveListT>(value);
  }
  template <typename RecursiveListT = Aws::Vector<KitchenSink>>
  KitchenSink& WithRecursiveList(RecursiveListT&& value) {
    SetRecursiveList(std::forward<RecursiveListT>(value));
    return *this;
  }
  template <typename RecursiveListT = KitchenSink>
  KitchenSink& AddRecursiveList(RecursiveListT&& value) {
    m_recursiveListHasBeenSet = true;
    m_recursiveList.emplace_back(std::forward<RecursiveListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, KitchenSink>& GetRecursiveMap() const { return m_recursiveMap; }
  inline bool RecursiveMapHasBeenSet() const { return m_recursiveMapHasBeenSet; }
  template <typename RecursiveMapT = Aws::Map<Aws::String, KitchenSink>>
  void SetRecursiveMap(RecursiveMapT&& value) {
    m_recursiveMapHasBeenSet = true;
    m_recursiveMap = std::forward<RecursiveMapT>(value);
  }
  template <typename RecursiveMapT = Aws::Map<Aws::String, KitchenSink>>
  KitchenSink& WithRecursiveMap(RecursiveMapT&& value) {
    SetRecursiveMap(std::forward<RecursiveMapT>(value));
    return *this;
  }
  template <typename RecursiveMapKeyT = Aws::String, typename RecursiveMapValueT = KitchenSink>
  KitchenSink& AddRecursiveMap(RecursiveMapKeyT&& key, RecursiveMapValueT&& value) {
    m_recursiveMapHasBeenSet = true;
    m_recursiveMap.emplace(std::forward<RecursiveMapKeyT>(key), std::forward<RecursiveMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const KitchenSink& GetRecursiveStruct() const { return *m_recursiveStruct; }
  inline bool RecursiveStructHasBeenSet() const { return m_recursiveStructHasBeenSet; }
  template <typename RecursiveStructT = KitchenSink>
  void SetRecursiveStruct(RecursiveStructT&& value) {
    m_recursiveStructHasBeenSet = true;
    m_recursiveStruct = Aws::MakeShared<KitchenSink>("KitchenSink", std::forward<RecursiveStructT>(value));
  }
  template <typename RecursiveStructT = KitchenSink>
  KitchenSink& WithRecursiveStruct(RecursiveStructT&& value) {
    SetRecursiveStruct(std::forward<RecursiveStructT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SimpleStruct& GetSimpleStruct() const { return m_simpleStruct; }
  inline bool SimpleStructHasBeenSet() const { return m_simpleStructHasBeenSet; }
  template <typename SimpleStructT = SimpleStruct>
  void SetSimpleStruct(SimpleStructT&& value) {
    m_simpleStructHasBeenSet = true;
    m_simpleStruct = std::forward<SimpleStructT>(value);
  }
  template <typename SimpleStructT = SimpleStruct>
  KitchenSink& WithSimpleStruct(SimpleStructT&& value) {
    SetSimpleStruct(std::forward<SimpleStructT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetString() const { return m_string; }
  inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
  template <typename StringT = Aws::String>
  void SetString(StringT&& value) {
    m_stringHasBeenSet = true;
    m_string = std::forward<StringT>(value);
  }
  template <typename StringT = Aws::String>
  KitchenSink& WithString(StringT&& value) {
    SetString(std::forward<StringT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StructWithJsonName& GetStructWithJsonName() const { return m_structWithJsonName; }
  inline bool StructWithJsonNameHasBeenSet() const { return m_structWithJsonNameHasBeenSet; }
  template <typename StructWithJsonNameT = StructWithJsonName>
  void SetStructWithJsonName(StructWithJsonNameT&& value) {
    m_structWithJsonNameHasBeenSet = true;
    m_structWithJsonName = std::forward<StructWithJsonNameT>(value);
  }
  template <typename StructWithJsonNameT = StructWithJsonName>
  KitchenSink& WithStructWithJsonName(StructWithJsonNameT&& value) {
    SetStructWithJsonName(std::forward<StructWithJsonNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  KitchenSink& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetUnixTimestamp() const { return m_unixTimestamp; }
  inline bool UnixTimestampHasBeenSet() const { return m_unixTimestampHasBeenSet; }
  template <typename UnixTimestampT = Aws::Utils::DateTime>
  void SetUnixTimestamp(UnixTimestampT&& value) {
    m_unixTimestampHasBeenSet = true;
    m_unixTimestamp = std::forward<UnixTimestampT>(value);
  }
  template <typename UnixTimestampT = Aws::Utils::DateTime>
  KitchenSink& WithUnixTimestamp(UnixTimestampT&& value) {
    SetUnixTimestamp(std::forward<UnixTimestampT>(value));
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
  KitchenSink& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_blob{};
  bool m_blobHasBeenSet = false;

  bool m_boolean{false};
  bool m_booleanHasBeenSet = false;

  double m_double{0.0};
  bool m_doubleHasBeenSet = false;

  EmptyStruct m_emptyStruct;
  bool m_emptyStructHasBeenSet = false;

  double m_float{0.0};
  bool m_floatHasBeenSet = false;

  Aws::Utils::DateTime m_httpdateTimestamp{};
  bool m_httpdateTimestampHasBeenSet = false;

  int m_integer{0};
  bool m_integerHasBeenSet = false;

  Aws::Utils::DateTime m_iso8601Timestamp{};
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

  long long m_long{0};
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

  std::shared_ptr<KitchenSink> m_recursiveStruct;
  bool m_recursiveStructHasBeenSet = false;

  SimpleStruct m_simpleStruct;
  bool m_simpleStructHasBeenSet = false;

  Aws::String m_string;
  bool m_stringHasBeenSet = false;

  StructWithJsonName m_structWithJsonName;
  bool m_structWithJsonNameHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  Aws::Utils::DateTime m_unixTimestamp{};
  bool m_unixTimestampHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
