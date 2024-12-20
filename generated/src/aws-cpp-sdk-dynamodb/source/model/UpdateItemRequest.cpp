/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateItemRequest::UpdateItemRequest() : 
    m_tableNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false),
    m_expectedHasBeenSet(false),
    m_returnValues(ReturnValue::NOT_SET),
    m_returnValuesHasBeenSet(false)
{
}

Aws::String UpdateItemRequest::SerializePayload() const
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

  if(m_attributeUpdatesHasBeenSet)
  {
   JsonValue attributeUpdatesJsonMap;
   for(auto& attributeUpdatesItem : m_attributeUpdates)
   {
     attributeUpdatesJsonMap.WithObject(attributeUpdatesItem.first, attributeUpdatesItem.second.Jsonize());
   }
   payload.WithObject("AttributeUpdates", std::move(attributeUpdatesJsonMap));

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

Aws::Http::HeaderValueCollection UpdateItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20111205.UpdateItem"));
  return headers;

}




