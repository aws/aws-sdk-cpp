/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactGetItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TransactGetItemsRequest::TransactGetItemsRequest() : 
    m_transactItemsHasBeenSet(false),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false)
{
}

Aws::String TransactGetItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transactItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transactItemsJsonList(m_transactItems.size());
   for(unsigned transactItemsIndex = 0; transactItemsIndex < transactItemsJsonList.GetLength(); ++transactItemsIndex)
   {
     transactItemsJsonList[transactItemsIndex].AsObject(m_transactItems[transactItemsIndex].Jsonize());
   }
   payload.WithArray("TransactItems", std::move(transactItemsJsonList));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TransactGetItemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.TransactGetItems"));
  return headers;

}




