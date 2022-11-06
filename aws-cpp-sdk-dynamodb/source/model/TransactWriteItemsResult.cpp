/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactWriteItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TransactWriteItemsResult::TransactWriteItemsResult()
{
}

TransactWriteItemsResult::TransactWriteItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TransactWriteItemsResult& TransactWriteItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    Aws::Utils::Array<JsonView> consumedCapacityJsonList = jsonValue.GetArray("ConsumedCapacity");
    for(unsigned consumedCapacityIndex = 0; consumedCapacityIndex < consumedCapacityJsonList.GetLength(); ++consumedCapacityIndex)
    {
      m_consumedCapacity.push_back(consumedCapacityJsonList[consumedCapacityIndex].AsObject());
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



  return *this;
}
