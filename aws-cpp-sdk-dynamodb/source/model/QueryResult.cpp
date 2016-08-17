/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/QueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryResult::QueryResult() : 
    m_count(0),
    m_scannedCount(0)
{
}

QueryResult::QueryResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_count(0),
    m_scannedCount(0)
{
  *this = result;
}

QueryResult& QueryResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Items"))
  {
    Array<JsonValue> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      Aws::Map<Aws::String, JsonValue> attributeMapJsonMap = itemsJsonList[itemsIndex].GetAllObjects();
      Aws::Map<Aws::String, AttributeValue> attributeMapMap;
      for(auto& attributeMapItem : attributeMapJsonMap)
      {
        attributeMapMap[attributeMapItem.first] = attributeMapItem.second.AsObject();
      }
      m_items.push_back(std::move(attributeMapMap));
    }
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

  }

  if(jsonValue.ValueExists("ScannedCount"))
  {
    m_scannedCount = jsonValue.GetInteger("ScannedCount");

  }

  if(jsonValue.ValueExists("LastEvaluatedKey"))
  {
    Aws::Map<Aws::String, JsonValue> lastEvaluatedKeyJsonMap = jsonValue.GetObject("LastEvaluatedKey").GetAllObjects();
    for(auto& lastEvaluatedKeyItem : lastEvaluatedKeyJsonMap)
    {
      m_lastEvaluatedKey[lastEvaluatedKeyItem.first] = lastEvaluatedKeyItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    m_consumedCapacity = jsonValue.GetObject("ConsumedCapacity");

  }



  return *this;
}
