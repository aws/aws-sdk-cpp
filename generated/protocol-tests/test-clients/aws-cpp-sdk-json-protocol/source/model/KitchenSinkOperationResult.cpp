/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/KitchenSinkOperationResult.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

KitchenSinkOperationResult::KitchenSinkOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

KitchenSinkOperationResult& KitchenSinkOperationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
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
    m_recursiveStruct = jsonValue.GetObject("RecursiveStruct");
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
