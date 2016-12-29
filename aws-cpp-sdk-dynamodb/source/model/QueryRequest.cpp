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
#include <aws/dynamodb/model/QueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryRequest::QueryRequest() : 
    m_tableNameHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_select(Select::NOT_SET),
    m_selectHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false),
    m_keyConditionsHasBeenSet(false),
    m_queryFilterHasBeenSet(false),
    m_conditionalOperator(ConditionalOperator::NOT_SET),
    m_conditionalOperatorHasBeenSet(false),
    m_scanIndexForward(false),
    m_scanIndexForwardHasBeenSet(false),
    m_exclusiveStartKeyHasBeenSet(false),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false),
    m_projectionExpressionHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_keyConditionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false)
{
}

Aws::String QueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_selectHasBeenSet)
  {
   payload.WithString("Select", SelectMapper::GetNameForSelect(m_select));
  }

  if(m_attributesToGetHasBeenSet)
  {
   Array<JsonValue> attributesToGetJsonList(m_attributesToGet.size());
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

  if(m_keyConditionsHasBeenSet)
  {
   JsonValue keyConditionsJsonMap;
   for(auto& keyConditionsItem : m_keyConditions)
   {
     keyConditionsJsonMap.WithObject(keyConditionsItem.first, keyConditionsItem.second.Jsonize());
   }
   payload.WithObject("KeyConditions", std::move(keyConditionsJsonMap));

  }

  if(m_queryFilterHasBeenSet)
  {
   JsonValue queryFilterJsonMap;
   for(auto& queryFilterItem : m_queryFilter)
   {
     queryFilterJsonMap.WithObject(queryFilterItem.first, queryFilterItem.second.Jsonize());
   }
   payload.WithObject("QueryFilter", std::move(queryFilterJsonMap));

  }

  if(m_conditionalOperatorHasBeenSet)
  {
   payload.WithString("ConditionalOperator", ConditionalOperatorMapper::GetNameForConditionalOperator(m_conditionalOperator));
  }

  if(m_scanIndexForwardHasBeenSet)
  {
   payload.WithBool("ScanIndexForward", m_scanIndexForward);

  }

  if(m_exclusiveStartKeyHasBeenSet)
  {
   JsonValue exclusiveStartKeyJsonMap;
   for(auto& exclusiveStartKeyItem : m_exclusiveStartKey)
   {
     exclusiveStartKeyJsonMap.WithObject(exclusiveStartKeyItem.first, exclusiveStartKeyItem.second.Jsonize());
   }
   payload.WithObject("ExclusiveStartKey", std::move(exclusiveStartKeyJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  if(m_projectionExpressionHasBeenSet)
  {
   payload.WithString("ProjectionExpression", m_projectionExpression);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_keyConditionExpressionHasBeenSet)
  {
   payload.WithString("KeyConditionExpression", m_keyConditionExpression);

  }

  if(m_expressionAttributeNamesHasBeenSet)
  {
   JsonValue expressionAttributeNamesJsonMap;
   for(auto& expressionAttributeNamesItem : m_expressionAttributeNames)
   {
     expressionAttributeNamesJsonMap.WithString(expressionAttributeNamesItem.first, expressionAttributeNamesItem.second);
   }
   payload.WithObject("ExpressionAttributeNames", std::move(expressionAttributeNamesJsonMap));

  }

  if(m_expressionAttributeValuesHasBeenSet)
  {
   JsonValue expressionAttributeValuesJsonMap;
   for(auto& expressionAttributeValuesItem : m_expressionAttributeValues)
   {
     expressionAttributeValuesJsonMap.WithObject(expressionAttributeValuesItem.first, expressionAttributeValuesItem.second.Jsonize());
   }
   payload.WithObject("ExpressionAttributeValues", std::move(expressionAttributeValuesJsonMap));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection QueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.Query"));
  return headers;

}



