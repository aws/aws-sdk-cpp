/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/QueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryRequest::QueryRequest() : 
    m_tableNameHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false),
    m_count(false),
    m_countHasBeenSet(false),
    m_hashKeyValueHasBeenSet(false),
    m_rangeKeyConditionHasBeenSet(false),
    m_scanIndexForward(false),
    m_scanIndexForwardHasBeenSet(false),
    m_exclusiveStartKeyHasBeenSet(false)
{
}

Aws::String QueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

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

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_consistentReadHasBeenSet)
  {
   payload.WithBool("ConsistentRead", m_consistentRead);

  }

  if(m_countHasBeenSet)
  {
   payload.WithBool("Count", m_count);

  }

  if(m_hashKeyValueHasBeenSet)
  {
   payload.WithObject("HashKeyValue", m_hashKeyValue.Jsonize());

  }

  if(m_rangeKeyConditionHasBeenSet)
  {
   payload.WithObject("RangeKeyCondition", m_rangeKeyCondition.Jsonize());

  }

  if(m_scanIndexForwardHasBeenSet)
  {
   payload.WithBool("ScanIndexForward", m_scanIndexForward);

  }

  if(m_exclusiveStartKeyHasBeenSet)
  {
   payload.WithObject("ExclusiveStartKey", m_exclusiveStartKey.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection QueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20111205.Query"));
  return headers;

}




