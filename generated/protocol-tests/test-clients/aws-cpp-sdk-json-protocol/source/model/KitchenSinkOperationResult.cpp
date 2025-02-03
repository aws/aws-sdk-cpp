/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/model/KitchenSinkOperationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

KitchenSinkOperationResult::KitchenSinkOperationResult() : 
    m_boolean(false),
    m_double(0.0),
    m_float(0.0),
    m_integer(0),
    m_long(0)
{
}

KitchenSinkOperationResult::KitchenSinkOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : KitchenSinkOperationResult()
{
  *this = result;
}

KitchenSinkOperationResult& KitchenSinkOperationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Blob"))
  {
    m_blob = HashingUtils::Base64Decode(jsonValue.GetString("Blob"));
  }

  if(jsonValue.ValueExists("Boolean"))
  {
    m_boolean = jsonValue.GetBool("Boolean");

  }

  if(jsonValue.ValueExists("Double"))
  {
    m_double = jsonValue.GetDouble("Double");

  }

  if(jsonValue.ValueExists("EmptyStruct"))
  {
    m_emptyStruct = jsonValue.GetObject("EmptyStruct");

  }

  if(jsonValue.ValueExists("Float"))
  {
    m_float = jsonValue.GetDouble("Float");

  }

  if(jsonValue.ValueExists("HttpdateTimestamp"))
  {
    m_httpdateTimestamp = jsonValue.GetString("HttpdateTimestamp");

  }

  if(jsonValue.ValueExists("Integer"))
  {
    m_integer = jsonValue.GetInteger("Integer");

  }

  if(jsonValue.ValueExists("Iso8601Timestamp"))
  {
    m_iso8601Timestamp = jsonValue.GetString("Iso8601Timestamp");

  }

  if(jsonValue.ValueExists("JsonValue"))
  {
    m_jsonValue = jsonValue.GetString("JsonValue");

  }

  if(jsonValue.ValueExists("ListOfLists"))
  {
    Aws::Utils::Array<JsonView> listOfListsJsonList = jsonValue.GetArray("ListOfLists");
    for(unsigned listOfListsIndex = 0; listOfListsIndex < listOfListsJsonList.GetLength(); ++listOfListsIndex)
    {
      Aws::Utils::Array<JsonView> listOfStringsJsonList = listOfListsJsonList[listOfListsIndex].AsArray();
      Aws::Vector<Aws::String> listOfStringsList;
      listOfStringsList.reserve((size_t)listOfStringsJsonList.GetLength());
      for(unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex)
      {
        listOfStringsList.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
      }
      m_listOfLists.push_back(std::move(listOfStringsList));
    }
  }

  if(jsonValue.ValueExists("ListOfMapsOfStrings"))
  {
    Aws::Utils::Array<JsonView> listOfMapsOfStringsJsonList = jsonValue.GetArray("ListOfMapsOfStrings");
    for(unsigned listOfMapsOfStringsIndex = 0; listOfMapsOfStringsIndex < listOfMapsOfStringsJsonList.GetLength(); ++listOfMapsOfStringsIndex)
    {
      Aws::Map<Aws::String, JsonView> mapOfStringsJsonMap = listOfMapsOfStringsJsonList[listOfMapsOfStringsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> mapOfStringsMap;
      for(auto& mapOfStringsItem : mapOfStringsJsonMap)
      {
        mapOfStringsMap[mapOfStringsItem.first] = mapOfStringsItem.second.AsString();
      }
      m_listOfMapsOfStrings.push_back(std::move(mapOfStringsMap));
    }
  }

  if(jsonValue.ValueExists("ListOfStrings"))
  {
    Aws::Utils::Array<JsonView> listOfStringsJsonList = jsonValue.GetArray("ListOfStrings");
    for(unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex)
    {
      m_listOfStrings.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ListOfStructs"))
  {
    Aws::Utils::Array<JsonView> listOfStructsJsonList = jsonValue.GetArray("ListOfStructs");
    for(unsigned listOfStructsIndex = 0; listOfStructsIndex < listOfStructsJsonList.GetLength(); ++listOfStructsIndex)
    {
      m_listOfStructs.push_back(listOfStructsJsonList[listOfStructsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Long"))
  {
    m_long = jsonValue.GetInt64("Long");

  }

  if(jsonValue.ValueExists("MapOfListsOfStrings"))
  {
    Aws::Map<Aws::String, JsonView> mapOfListsOfStringsJsonMap = jsonValue.GetObject("MapOfListsOfStrings").GetAllObjects();
    for(auto& mapOfListsOfStringsItem : mapOfListsOfStringsJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfStringsJsonList = mapOfListsOfStringsItem.second.AsArray();
      Aws::Vector<Aws::String> listOfStringsList;
      listOfStringsList.reserve((size_t)listOfStringsJsonList.GetLength());
      for(unsigned listOfStringsIndex = 0; listOfStringsIndex < listOfStringsJsonList.GetLength(); ++listOfStringsIndex)
      {
        listOfStringsList.push_back(listOfStringsJsonList[listOfStringsIndex].AsString());
      }
      m_mapOfListsOfStrings[mapOfListsOfStringsItem.first] = std::move(listOfStringsList);
    }
  }

  if(jsonValue.ValueExists("MapOfMaps"))
  {
    Aws::Map<Aws::String, JsonView> mapOfMapsJsonMap = jsonValue.GetObject("MapOfMaps").GetAllObjects();
    for(auto& mapOfMapsItem : mapOfMapsJsonMap)
    {
      Aws::Map<Aws::String, JsonView> mapOfStringsJsonMap = mapOfMapsItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> mapOfStringsMap;
      for(auto& mapOfStringsItem : mapOfStringsJsonMap)
      {
        mapOfStringsMap[mapOfStringsItem.first] = mapOfStringsItem.second.AsString();
      }
      m_mapOfMaps[mapOfMapsItem.first] = std::move(mapOfStringsMap);
    }
  }

  if(jsonValue.ValueExists("MapOfStrings"))
  {
    Aws::Map<Aws::String, JsonView> mapOfStringsJsonMap = jsonValue.GetObject("MapOfStrings").GetAllObjects();
    for(auto& mapOfStringsItem : mapOfStringsJsonMap)
    {
      m_mapOfStrings[mapOfStringsItem.first] = mapOfStringsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("MapOfStructs"))
  {
    Aws::Map<Aws::String, JsonView> mapOfStructsJsonMap = jsonValue.GetObject("MapOfStructs").GetAllObjects();
    for(auto& mapOfStructsItem : mapOfStructsJsonMap)
    {
      m_mapOfStructs[mapOfStructsItem.first] = mapOfStructsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("RecursiveList"))
  {
    Aws::Utils::Array<JsonView> recursiveListJsonList = jsonValue.GetArray("RecursiveList");
    for(unsigned recursiveListIndex = 0; recursiveListIndex < recursiveListJsonList.GetLength(); ++recursiveListIndex)
    {
      m_recursiveList.push_back(recursiveListJsonList[recursiveListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RecursiveMap"))
  {
    Aws::Map<Aws::String, JsonView> recursiveMapJsonMap = jsonValue.GetObject("RecursiveMap").GetAllObjects();
    for(auto& recursiveMapItem : recursiveMapJsonMap)
    {
      m_recursiveMap[recursiveMapItem.first] = recursiveMapItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("RecursiveStruct"))
  {
    m_recursiveStruct = jsonValue.GetObject("RecursiveStruct");

  }

  if(jsonValue.ValueExists("SimpleStruct"))
  {
    m_simpleStruct = jsonValue.GetObject("SimpleStruct");

  }

  if(jsonValue.ValueExists("String"))
  {
    m_string = jsonValue.GetString("String");

  }

  if(jsonValue.ValueExists("StructWithJsonName"))
  {
    m_structWithJsonName = jsonValue.GetObject("StructWithJsonName");

  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

  }

  if(jsonValue.ValueExists("UnixTimestamp"))
  {
    m_unixTimestamp = jsonValue.GetDouble("UnixTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
