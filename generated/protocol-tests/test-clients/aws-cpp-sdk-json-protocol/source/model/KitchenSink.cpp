/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/KitchenSink.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

KitchenSink::KitchenSink(JsonView jsonValue) { *this = jsonValue; }

KitchenSink& KitchenSink::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Blob")) {
    m_blob = HashingUtils::Base64Decode(jsonValue.GetString("Blob"));
    m_blobHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Boolean")) {
    m_boolean = jsonValue.GetBool("Boolean");
    m_booleanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Double")) {
    m_double = jsonValue.GetDouble("Double");
    m_doubleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EmptyStruct")) {
    m_emptyStruct = jsonValue.GetObject("EmptyStruct");
    m_emptyStructHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Float")) {
    m_float = jsonValue.GetDouble("Float");
    m_floatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HttpdateTimestamp")) {
    m_httpdateTimestamp = jsonValue.GetString("HttpdateTimestamp");
    m_httpdateTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Integer")) {
    m_integer = jsonValue.GetInteger("Integer");
    m_integerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Iso8601Timestamp")) {
    m_iso8601Timestamp = jsonValue.GetString("Iso8601Timestamp");
    m_iso8601TimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JsonValue")) {
    m_jsonValue = jsonValue.GetString("JsonValue");
    m_jsonValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListOfLists")) {
    Aws::Utils::Array<JsonView> listOfListsJsonList = jsonValue.GetArray("ListOfLists");
    for (unsigned listOfListsIndex = 0; listOfListsIndex < listOfListsJsonList.GetLength(); ++listOfListsIndex) {
      Aws::Utils::Array<JsonView> listOfStringsJsonList = listOfListsJsonList[listOfListsIndex].AsArray();
      Aws::Vector<Aws::String> listOfStringsList;
      listOfStringsList.reserve((size_t)listOfStringsJsonList.GetLength());
      for (unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex) {
        listOfStringsList.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
      }
      m_listOfLists.push_back(std::move(listOfStringsList));
    }
    m_listOfListsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListOfMapsOfStrings")) {
    Aws::Utils::Array<JsonView> listOfMapsOfStringsJsonList = jsonValue.GetArray("ListOfMapsOfStrings");
    for (unsigned listOfMapsOfStringsIndex = 0; listOfMapsOfStringsIndex < listOfMapsOfStringsJsonList.GetLength();
         ++listOfMapsOfStringsIndex) {
      Aws::Map<Aws::String, JsonView> mapOfStringsJsonMap = listOfMapsOfStringsJsonList[listOfMapsOfStringsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> mapOfStringsMap;
      for (auto& mapOfStringsItem : mapOfStringsJsonMap) {
        mapOfStringsMap[mapOfStringsItem.first] = mapOfStringsItem.second.AsString();
      }
      m_listOfMapsOfStrings.push_back(std::move(mapOfStringsMap));
    }
    m_listOfMapsOfStringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListOfStrings")) {
    Aws::Utils::Array<JsonView> listOfStringsJsonList = jsonValue.GetArray("ListOfStrings");
    for (unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex) {
      m_listOfStrings.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
    }
    m_listOfStringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListOfStructs")) {
    Aws::Utils::Array<JsonView> listOfStructsJsonList = jsonValue.GetArray("ListOfStructs");
    for (unsigned listOfStructsIndex = 0; listOfStructsIndex < listOfStructsJsonList.GetLength(); ++listOfStructsIndex) {
      m_listOfStructs.push_back(listOfStructsJsonList[listOfStructsIndex].AsObject());
    }
    m_listOfStructsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Long")) {
    m_long = jsonValue.GetInt64("Long");
    m_longHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapOfListsOfStrings")) {
    Aws::Map<Aws::String, JsonView> mapOfListsOfStringsJsonMap = jsonValue.GetObject("MapOfListsOfStrings").GetAllObjects();
    for (auto& mapOfListsOfStringsItem : mapOfListsOfStringsJsonMap) {
      Aws::Utils::Array<JsonView> listOfStringsJsonList = mapOfListsOfStringsItem.second.AsArray();
      Aws::Vector<Aws::String> listOfStringsList;
      listOfStringsList.reserve((size_t)listOfStringsJsonList.GetLength());
      for (unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex) {
        listOfStringsList.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
      }
      m_mapOfListsOfStrings[mapOfListsOfStringsItem.first] = std::move(listOfStringsList);
    }
    m_mapOfListsOfStringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapOfMaps")) {
    Aws::Map<Aws::String, JsonView> mapOfMapsJsonMap = jsonValue.GetObject("MapOfMaps").GetAllObjects();
    for (auto& mapOfMapsItem : mapOfMapsJsonMap) {
      Aws::Map<Aws::String, JsonView> mapOfStringsJsonMap = mapOfMapsItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> mapOfStringsMap;
      for (auto& mapOfStringsItem : mapOfStringsJsonMap) {
        mapOfStringsMap[mapOfStringsItem.first] = mapOfStringsItem.second.AsString();
      }
      m_mapOfMaps[mapOfMapsItem.first] = std::move(mapOfStringsMap);
    }
    m_mapOfMapsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapOfStrings")) {
    Aws::Map<Aws::String, JsonView> mapOfStringsJsonMap = jsonValue.GetObject("MapOfStrings").GetAllObjects();
    for (auto& mapOfStringsItem : mapOfStringsJsonMap) {
      m_mapOfStrings[mapOfStringsItem.first] = mapOfStringsItem.second.AsString();
    }
    m_mapOfStringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapOfStructs")) {
    Aws::Map<Aws::String, JsonView> mapOfStructsJsonMap = jsonValue.GetObject("MapOfStructs").GetAllObjects();
    for (auto& mapOfStructsItem : mapOfStructsJsonMap) {
      m_mapOfStructs[mapOfStructsItem.first] = mapOfStructsItem.second.AsObject();
    }
    m_mapOfStructsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecursiveList")) {
    Aws::Utils::Array<JsonView> recursiveListJsonList = jsonValue.GetArray("RecursiveList");
    for (unsigned recursiveListIndex = 0; recursiveListIndex < recursiveListJsonList.GetLength(); ++recursiveListIndex) {
      m_recursiveList.push_back(recursiveListJsonList[recursiveListIndex].AsObject());
    }
    m_recursiveListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecursiveMap")) {
    Aws::Map<Aws::String, JsonView> recursiveMapJsonMap = jsonValue.GetObject("RecursiveMap").GetAllObjects();
    for (auto& recursiveMapItem : recursiveMapJsonMap) {
      m_recursiveMap[recursiveMapItem.first] = recursiveMapItem.second.AsObject();
    }
    m_recursiveMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecursiveStruct")) {
    m_recursiveStruct = Aws::MakeShared<KitchenSink>("KitchenSink", jsonValue.GetObject("RecursiveStruct"));
    m_recursiveStructHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SimpleStruct")) {
    m_simpleStruct = jsonValue.GetObject("SimpleStruct");
    m_simpleStructHasBeenSet = true;
  }
  if (jsonValue.ValueExists("String")) {
    m_string = jsonValue.GetString("String");
    m_stringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StructWithJsonName")) {
    m_structWithJsonName = jsonValue.GetObject("StructWithJsonName");
    m_structWithJsonNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnixTimestamp")) {
    m_unixTimestamp = jsonValue.GetDouble("UnixTimestamp");
    m_unixTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue KitchenSink::Jsonize() const {
  JsonValue payload;

  if (m_blobHasBeenSet) {
    payload.WithString("Blob", HashingUtils::Base64Encode(m_blob));
  }

  if (m_booleanHasBeenSet) {
    payload.WithBool("Boolean", m_boolean);
  }

  if (m_doubleHasBeenSet) {
    payload.WithDouble("Double", m_double);
  }

  if (m_emptyStructHasBeenSet) {
    payload.WithObject("EmptyStruct", m_emptyStruct.Jsonize());
  }

  if (m_floatHasBeenSet) {
    payload.WithDouble("Float", m_float);
  }

  if (m_httpdateTimestampHasBeenSet) {
    payload.WithString("HttpdateTimestamp", m_httpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if (m_integerHasBeenSet) {
    payload.WithInteger("Integer", m_integer);
  }

  if (m_iso8601TimestampHasBeenSet) {
    payload.WithString("Iso8601Timestamp", m_iso8601Timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_jsonValueHasBeenSet) {
    payload.WithString("JsonValue", m_jsonValue);
  }

  if (m_listOfListsHasBeenSet) {
    Aws::Utils::Array<JsonValue> listOfListsJsonList(m_listOfLists.size());
    for (unsigned listOfListsIndex = 0; listOfListsIndex < listOfListsJsonList.GetLength(); ++listOfListsIndex) {
      Aws::Utils::Array<JsonValue> listOfStringsJsonList(m_listOfLists[listOfListsIndex].size());
      for (unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex) {
        listOfStringsJsonList[listOfStringsIndex].AsString(m_listOfLists[listOfListsIndex][listOfStringsIndex]);
      }
      listOfListsJsonList[listOfListsIndex].AsArray(std::move(listOfStringsJsonList));
    }
    payload.WithArray("ListOfLists", std::move(listOfListsJsonList));
  }

  if (m_listOfMapsOfStringsHasBeenSet) {
    Aws::Utils::Array<JsonValue> listOfMapsOfStringsJsonList(m_listOfMapsOfStrings.size());
    for (unsigned listOfMapsOfStringsIndex = 0; listOfMapsOfStringsIndex < listOfMapsOfStringsJsonList.GetLength();
         ++listOfMapsOfStringsIndex) {
      JsonValue mapOfStringsJsonMap;
      for (auto& mapOfStringsItem : m_listOfMapsOfStrings[listOfMapsOfStringsIndex]) {
        mapOfStringsJsonMap.WithString(mapOfStringsItem.first, mapOfStringsItem.second);
      }
      listOfMapsOfStringsJsonList[listOfMapsOfStringsIndex].AsObject(std::move(mapOfStringsJsonMap));
    }
    payload.WithArray("ListOfMapsOfStrings", std::move(listOfMapsOfStringsJsonList));
  }

  if (m_listOfStringsHasBeenSet) {
    Aws::Utils::Array<JsonValue> listOfStringsJsonList(m_listOfStrings.size());
    for (unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex) {
      listOfStringsJsonList[listOfStringsIndex].AsString(m_listOfStrings[listOfStringsIndex]);
    }
    payload.WithArray("ListOfStrings", std::move(listOfStringsJsonList));
  }

  if (m_listOfStructsHasBeenSet) {
    Aws::Utils::Array<JsonValue> listOfStructsJsonList(m_listOfStructs.size());
    for (unsigned listOfStructsIndex = 0; listOfStructsIndex < listOfStructsJsonList.GetLength(); ++listOfStructsIndex) {
      listOfStructsJsonList[listOfStructsIndex].AsObject(m_listOfStructs[listOfStructsIndex].Jsonize());
    }
    payload.WithArray("ListOfStructs", std::move(listOfStructsJsonList));
  }

  if (m_longHasBeenSet) {
    payload.WithInt64("Long", m_long);
  }

  if (m_mapOfListsOfStringsHasBeenSet) {
    JsonValue mapOfListsOfStringsJsonMap;
    for (auto& mapOfListsOfStringsItem : m_mapOfListsOfStrings) {
      Aws::Utils::Array<JsonValue> listOfStringsJsonList(mapOfListsOfStringsItem.second.size());
      for (unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex) {
        listOfStringsJsonList[listOfStringsIndex].AsString(mapOfListsOfStringsItem.second[listOfStringsIndex]);
      }
      mapOfListsOfStringsJsonMap.WithArray(mapOfListsOfStringsItem.first, std::move(listOfStringsJsonList));
    }
    payload.WithObject("MapOfListsOfStrings", std::move(mapOfListsOfStringsJsonMap));
  }

  if (m_mapOfMapsHasBeenSet) {
    JsonValue mapOfMapsJsonMap;
    for (auto& mapOfMapsItem : m_mapOfMaps) {
      JsonValue mapOfStringsJsonMap;
      for (auto& mapOfStringsItem : mapOfMapsItem.second) {
        mapOfStringsJsonMap.WithString(mapOfStringsItem.first, mapOfStringsItem.second);
      }
      mapOfMapsJsonMap.WithObject(mapOfMapsItem.first, std::move(mapOfStringsJsonMap));
    }
    payload.WithObject("MapOfMaps", std::move(mapOfMapsJsonMap));
  }

  if (m_mapOfStringsHasBeenSet) {
    JsonValue mapOfStringsJsonMap;
    for (auto& mapOfStringsItem : m_mapOfStrings) {
      mapOfStringsJsonMap.WithString(mapOfStringsItem.first, mapOfStringsItem.second);
    }
    payload.WithObject("MapOfStrings", std::move(mapOfStringsJsonMap));
  }

  if (m_mapOfStructsHasBeenSet) {
    JsonValue mapOfStructsJsonMap;
    for (auto& mapOfStructsItem : m_mapOfStructs) {
      mapOfStructsJsonMap.WithObject(mapOfStructsItem.first, mapOfStructsItem.second.Jsonize());
    }
    payload.WithObject("MapOfStructs", std::move(mapOfStructsJsonMap));
  }

  if (m_recursiveListHasBeenSet) {
    Aws::Utils::Array<JsonValue> recursiveListJsonList(m_recursiveList.size());
    for (unsigned recursiveListIndex = 0; recursiveListIndex < recursiveListJsonList.GetLength(); ++recursiveListIndex) {
      recursiveListJsonList[recursiveListIndex].AsObject(m_recursiveList[recursiveListIndex].Jsonize());
    }
    payload.WithArray("RecursiveList", std::move(recursiveListJsonList));
  }

  if (m_recursiveMapHasBeenSet) {
    JsonValue recursiveMapJsonMap;
    for (auto& recursiveMapItem : m_recursiveMap) {
      recursiveMapJsonMap.WithObject(recursiveMapItem.first, recursiveMapItem.second.Jsonize());
    }
    payload.WithObject("RecursiveMap", std::move(recursiveMapJsonMap));
  }

  if (m_recursiveStructHasBeenSet) {
    payload.WithObject("RecursiveStruct", m_recursiveStruct->Jsonize());
  }

  if (m_simpleStructHasBeenSet) {
    payload.WithObject("SimpleStruct", m_simpleStruct.Jsonize());
  }

  if (m_stringHasBeenSet) {
    payload.WithString("String", m_string);
  }

  if (m_structWithJsonNameHasBeenSet) {
    payload.WithObject("StructWithJsonName", m_structWithJsonName.Jsonize());
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_unixTimestampHasBeenSet) {
    payload.WithDouble("UnixTimestamp", m_unixTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
