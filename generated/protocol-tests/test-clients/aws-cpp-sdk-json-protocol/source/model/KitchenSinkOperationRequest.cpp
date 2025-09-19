/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String KitchenSinkOperationRequest::SerializePayload() const {
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
    payload.WithObject("RecursiveStruct", m_recursiveStruct.Jsonize());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection KitchenSinkOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.KitchenSinkOperation"));
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
