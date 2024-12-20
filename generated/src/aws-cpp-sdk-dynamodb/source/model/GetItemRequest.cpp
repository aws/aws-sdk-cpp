/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetItemRequest::GetItemRequest() : 
    m_tableNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
}

Aws::String GetItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithObject("Key", m_key.Jsonize());

  }

  if(m_attributesToGetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToGetJsonList(m_attributesToGet.size());
   for(unsigned attributesToGetIndex = 0; attributesToGetIndex < attributesToGetJsonList.GetLength(); ++attributesToGetIndex)
   {
     attributesToGetJsonList[attributesToGetIndex].AsString(m_attributesToGet[attributesToGetIndex]);
   }
   payload.WithArray("AttributesToGet", std::move(attributesToGetJsonList));

  }

  if(m_consistentReadHasBeenSet)
  {
   payload.WithBool("ConsistentRead", m_consistentRead);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20111205.GetItem"));
  return headers;

}




