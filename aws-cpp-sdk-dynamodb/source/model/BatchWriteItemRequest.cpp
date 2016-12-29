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
#include <aws/dynamodb/model/BatchWriteItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchWriteItemRequest::BatchWriteItemRequest() : 
    m_requestItemsHasBeenSet(false),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false),
    m_returnItemCollectionMetrics(ReturnItemCollectionMetrics::NOT_SET),
    m_returnItemCollectionMetricsHasBeenSet(false)
{
}

Aws::String BatchWriteItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestItemsHasBeenSet)
  {
   JsonValue requestItemsJsonMap;
   for(auto& requestItemsItem : m_requestItems)
   {
     Array<JsonValue> writeRequestsJsonList(requestItemsItem.second.size());
     for(unsigned writeRequestsIndex = 0; writeRequestsIndex < writeRequestsJsonList.GetLength(); ++writeRequestsIndex)
     {
       writeRequestsJsonList[writeRequestsIndex].AsObject(requestItemsItem.second[writeRequestsIndex].Jsonize());
     }
     requestItemsJsonMap.WithArray(requestItemsItem.first, std::move(writeRequestsJsonList));
   }
   payload.WithObject("RequestItems", std::move(requestItemsJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  if(m_returnItemCollectionMetricsHasBeenSet)
  {
   payload.WithString("ReturnItemCollectionMetrics", ReturnItemCollectionMetricsMapper::GetNameForReturnItemCollectionMetrics(m_returnItemCollectionMetrics));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchWriteItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.BatchWriteItem"));
  return headers;

}



