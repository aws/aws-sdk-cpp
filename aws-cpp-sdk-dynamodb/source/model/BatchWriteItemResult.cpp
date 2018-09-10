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

#include <aws/dynamodb/model/BatchWriteItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchWriteItemResult::BatchWriteItemResult()
{
}

BatchWriteItemResult::BatchWriteItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchWriteItemResult& BatchWriteItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UnprocessedItems"))
  {
    Aws::Map<Aws::String, JsonView> unprocessedItemsJsonMap = jsonValue.GetObject("UnprocessedItems").GetAllObjects();
    for(auto& unprocessedItemsItem : unprocessedItemsJsonMap)
    {
      Array<JsonView> writeRequestsJsonList = unprocessedItemsItem.second.AsArray();
      Aws::Vector<WriteRequest> writeRequestsList;
      writeRequestsList.reserve((size_t)writeRequestsJsonList.GetLength());
      for(unsigned writeRequestsIndex = 0; writeRequestsIndex < writeRequestsJsonList.GetLength(); ++writeRequestsIndex)
      {
        writeRequestsList.push_back(writeRequestsJsonList[writeRequestsIndex].AsObject());
      }
      m_unprocessedItems[unprocessedItemsItem.first] = std::move(writeRequestsList);
    }
  }

  if(jsonValue.ValueExists("ItemCollectionMetrics"))
  {
    Aws::Map<Aws::String, JsonView> itemCollectionMetricsJsonMap = jsonValue.GetObject("ItemCollectionMetrics").GetAllObjects();
    for(auto& itemCollectionMetricsItem : itemCollectionMetricsJsonMap)
    {
      Array<JsonView> itemCollectionMetricsMultipleJsonList = itemCollectionMetricsItem.second.AsArray();
      Aws::Vector<ItemCollectionMetrics> itemCollectionMetricsMultipleList;
      itemCollectionMetricsMultipleList.reserve((size_t)itemCollectionMetricsMultipleJsonList.GetLength());
      for(unsigned itemCollectionMetricsMultipleIndex = 0; itemCollectionMetricsMultipleIndex < itemCollectionMetricsMultipleJsonList.GetLength(); ++itemCollectionMetricsMultipleIndex)
      {
        itemCollectionMetricsMultipleList.push_back(itemCollectionMetricsMultipleJsonList[itemCollectionMetricsMultipleIndex].AsObject());
      }
      m_itemCollectionMetrics[itemCollectionMetricsItem.first] = std::move(itemCollectionMetricsMultipleList);
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
