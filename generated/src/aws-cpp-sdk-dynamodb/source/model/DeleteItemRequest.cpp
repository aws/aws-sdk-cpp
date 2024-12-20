/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DeleteItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteItemRequest::DeleteItemRequest() : 
    m_tableNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_expectedHasBeenSet(false),
    m_returnValues(ReturnValue::NOT_SET),
    m_returnValuesHasBeenSet(false)
{
}

Aws::String DeleteItemRequest::SerializePayload() const
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

  if(m_expectedHasBeenSet)
  {
   JsonValue expectedJsonMap;
   for(auto& expectedItem : m_expected)
   {
     expectedJsonMap.WithObject(expectedItem.first, expectedItem.second.Jsonize());
   }
   payload.WithObject("Expected", std::move(expectedJsonMap));

  }

  if(m_returnValuesHasBeenSet)
  {
   payload.WithString("ReturnValues", ReturnValueMapper::GetNameForReturnValue(m_returnValues));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20111205.DeleteItem"));
  return headers;

}




