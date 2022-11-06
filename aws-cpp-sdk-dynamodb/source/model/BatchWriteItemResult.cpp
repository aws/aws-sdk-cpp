/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      Aws::Utils::Array<JsonView> writeRequestsJsonList = unprocessedItemsItem.second.AsArray();
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
      Aws::Utils::Array<JsonView> itemCollectionMetricsMultipleJsonList = itemCollectionMetricsItem.second.AsArray();
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
    Aws::Utils::Array<JsonView> consumedCapacityJsonList = jsonValue.GetArray("ConsumedCapacity");
    for(unsigned consumedCapacityIndex = 0; consumedCapacityIndex < consumedCapacityJsonList.GetLength(); ++consumedCapacityIndex)
    {
      m_consumedCapacity.push_back(consumedCapacityJsonList[consumedCapacityIndex].AsObject());
    }
  }



  return *this;
}
