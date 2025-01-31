﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/JsonEnumsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonEnumsResult::JsonEnumsResult() : 
    m_fooEnum1(FooEnum::NOT_SET),
    m_fooEnum2(FooEnum::NOT_SET),
    m_fooEnum3(FooEnum::NOT_SET)
{
}

JsonEnumsResult::JsonEnumsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : JsonEnumsResult()
{
  *this = result;
}

JsonEnumsResult& JsonEnumsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fooEnum1"))
  {
    m_fooEnum1 = FooEnumMapper::GetFooEnumForName(jsonValue.GetString("fooEnum1"));

  }

  if(jsonValue.ValueExists("fooEnum2"))
  {
    m_fooEnum2 = FooEnumMapper::GetFooEnumForName(jsonValue.GetString("fooEnum2"));

  }

  if(jsonValue.ValueExists("fooEnum3"))
  {
    m_fooEnum3 = FooEnumMapper::GetFooEnumForName(jsonValue.GetString("fooEnum3"));

  }

  if(jsonValue.ValueExists("fooEnumList"))
  {
    Aws::Utils::Array<JsonView> fooEnumListJsonList = jsonValue.GetArray("fooEnumList");
    for(unsigned fooEnumListIndex = 0; fooEnumListIndex < fooEnumListJsonList.GetLength(); ++fooEnumListIndex)
    {
      m_fooEnumList.push_back(FooEnumMapper::GetFooEnumForName(fooEnumListJsonList[fooEnumListIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("fooEnumSet"))
  {
    Aws::Utils::Array<JsonView> fooEnumSetJsonList = jsonValue.GetArray("fooEnumSet");
    for(unsigned fooEnumSetIndex = 0; fooEnumSetIndex < fooEnumSetJsonList.GetLength(); ++fooEnumSetIndex)
    {
      m_fooEnumSet.push_back(FooEnumMapper::GetFooEnumForName(fooEnumSetJsonList[fooEnumSetIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("fooEnumMap"))
  {
    Aws::Map<Aws::String, JsonView> fooEnumMapJsonMap = jsonValue.GetObject("fooEnumMap").GetAllObjects();
    for(auto& fooEnumMapItem : fooEnumMapJsonMap)
    {
      m_fooEnumMap[fooEnumMapItem.first] = FooEnumMapper::GetFooEnumForName(fooEnumMapItem.second.AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
