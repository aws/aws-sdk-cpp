﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dynamodb/model/BatchGetItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetItemResult::BatchGetItemResult()
{
}

BatchGetItemResult::BatchGetItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetItemResult& BatchGetItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Responses"))
  {
    Aws::Map<Aws::String, JsonView> responsesJsonMap = jsonValue.GetObject("Responses").GetAllObjects();
    for(auto& responsesItem : responsesJsonMap)
    {
      Array<JsonView> itemListJsonList = responsesItem.second.AsArray();
      Aws::Vector<Aws::Map<Aws::String, AttributeValue>> itemListList;
      itemListList.reserve((size_t)itemListJsonList.GetLength());
      for(unsigned itemListIndex = 0; itemListIndex < itemListJsonList.GetLength(); ++itemListIndex)
      {
        Aws::Map<Aws::String, JsonView> attributeMapJsonMap = itemListJsonList[itemListIndex].GetAllObjects();
        Aws::Map<Aws::String, AttributeValue> attributeMapMap;
        for(auto& attributeMapItem : attributeMapJsonMap)
        {
          attributeMapMap[attributeMapItem.first] = attributeMapItem.second.AsObject();
        }
        itemListList.push_back(std::move(attributeMapMap));
      }
      m_responses[responsesItem.first] = std::move(itemListList);
    }
  }

  if(jsonValue.ValueExists("UnprocessedKeys"))
  {
    Aws::Map<Aws::String, JsonView> unprocessedKeysJsonMap = jsonValue.GetObject("UnprocessedKeys").GetAllObjects();
    for(auto& unprocessedKeysItem : unprocessedKeysJsonMap)
    {
      m_unprocessedKeys[unprocessedKeysItem.first] = unprocessedKeysItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    Array<JsonView> consumedCapacityJsonList = jsonValue.GetArray("ConsumedCapacity");
    for(unsigned consumedCapacityIndex = 0; consumedCapacityIndex < consumedCapacityJsonList.GetLength(); ++consumedCapacityIndex)
    {
      m_consumedCapacity.push_back(consumedCapacityJsonList[consumedCapacityIndex].AsObject());
    }
  }



  return *this;
}
