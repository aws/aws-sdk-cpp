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
    m_requestItemsHasBeenSet(false)
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20111205.BatchGetItem"));
  return headers;

}




