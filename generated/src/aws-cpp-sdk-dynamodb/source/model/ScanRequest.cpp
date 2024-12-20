/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScanRequest::ScanRequest() : 
    m_tableNameHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_count(false),
    m_countHasBeenSet(false),
    m_scanFilterHasBeenSet(false),
    m_exclusiveStartKeyHasBeenSet(false)
{
}

Aws::String ScanRequest::SerializePayload() const
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

  if(m_countHasBeenSet)
  {
   payload.WithBool("Count", m_count);

  }

  if(m_scanFilterHasBeenSet)
  {
   JsonValue scanFilterJsonMap;
   for(auto& scanFilterItem : m_scanFilter)
   {
     scanFilterJsonMap.WithObject(scanFilterItem.first, scanFilterItem.second.Jsonize());
   }
   payload.WithObject("ScanFilter", std::move(scanFilterJsonMap));

  }

  if(m_exclusiveStartKeyHasBeenSet)
  {
   payload.WithObject("ExclusiveStartKey", m_exclusiveStartKey.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ScanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20111205.Scan"));
  return headers;

}




