/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchGetItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetItemRequest::BatchGetItemRequest() : 
    m_requestItemsHasBeenSet(false),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false)
{
}

Aws::String BatchGetItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestItemsHasBeenSet)
  {
   JsonValue requestItemsJsonMap;
   for(auto& requestItemsItem : m_requestItems)
   {
     requestItemsJsonMap.WithObject(requestItemsItem.first, requestItemsItem.second.Jsonize());
   }
   payload.WithObject("RequestItems", std::move(requestItemsJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.BatchGetItem"));
  return headers;

}




