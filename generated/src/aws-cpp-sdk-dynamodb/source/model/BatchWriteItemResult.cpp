/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/BatchWriteItemResult.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchWriteItemResult::BatchWriteItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchWriteItemResult& BatchWriteItemResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("UnprocessedItems")) {
    Aws::Map<Aws::String, JsonView> unprocessedItemsJsonMap = jsonValue.GetObject("UnprocessedItems").GetAllObjects();
    for (auto& unprocessedItemsItem : unprocessedItemsJsonMap) {
      Aws::Utils::Array<JsonView> writeRequests2JsonList = unprocessedItemsItem.second.AsArray();
      Aws::Vector<WriteRequest> writeRequests2List;
      writeRequests2List.reserve((size_t)writeRequests2JsonList.GetLength());
      for (unsigned writeRequests2Index = 0; writeRequests2Index < writeRequests2JsonList.GetLength(); ++writeRequests2Index) {
        writeRequests2List.push_back(writeRequests2JsonList[writeRequests2Index].AsObject());
      }
      m_unprocessedItems[unprocessedItemsItem.first] = std::move(writeRequests2List);
    }
    m_unprocessedItemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ItemCollectionMetrics")) {
    Aws::Map<Aws::String, JsonView> itemCollectionMetricsJsonMap = jsonValue.GetObject("ItemCollectionMetrics").GetAllObjects();
    for (auto& itemCollectionMetricsItem : itemCollectionMetricsJsonMap) {
      Aws::Utils::Array<JsonView> itemCollectionMetricsMultiple2JsonList = itemCollectionMetricsItem.second.AsArray();
      Aws::Vector<ItemCollectionMetrics> itemCollectionMetricsMultiple2List;
      itemCollectionMetricsMultiple2List.reserve((size_t)itemCollectionMetricsMultiple2JsonList.GetLength());
      for (unsigned itemCollectionMetricsMultiple2Index = 0;
           itemCollectionMetricsMultiple2Index < itemCollectionMetricsMultiple2JsonList.GetLength();
           ++itemCollectionMetricsMultiple2Index) {
        itemCollectionMetricsMultiple2List.push_back(
            itemCollectionMetricsMultiple2JsonList[itemCollectionMetricsMultiple2Index].AsObject());
      }
      m_itemCollectionMetrics[itemCollectionMetricsItem.first] = std::move(itemCollectionMetricsMultiple2List);
    }
    m_itemCollectionMetricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConsumedCapacity")) {
    Aws::Utils::Array<JsonView> consumedCapacityJsonList = jsonValue.GetArray("ConsumedCapacity");
    for (unsigned consumedCapacityIndex = 0; consumedCapacityIndex < consumedCapacityJsonList.GetLength(); ++consumedCapacityIndex) {
      m_consumedCapacity.push_back(consumedCapacityJsonList[consumedCapacityIndex].AsObject());
    }
    m_consumedCapacityHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
