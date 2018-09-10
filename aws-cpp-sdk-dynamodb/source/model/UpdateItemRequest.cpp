﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_conditionalOperator(ConditionalOperator::NOT_SET),
    m_conditionalOperatorHasBeenSet(false),
    m_returnValues(ReturnValue::NOT_SET),
    m_returnValuesHasBeenSet(false),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false),
    m_returnItemCollectionMetrics(ReturnItemCollectionMetrics::NOT_SET),
    m_returnItemCollectionMetricsHasBeenSet(false),
    m_updateExpressionHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false)
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
   JsonValue keyJsonMap;
   for(auto& keyItem : m_key)
   {
     keyJsonMap.WithObject(keyItem.first, keyItem.second.Jsonize());
   }
   payload.WithObject("Key", std::move(keyJsonMap));

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

  if(m_conditionalOperatorHasBeenSet)
  {
   payload.WithString("ConditionalOperator", ConditionalOperatorMapper::GetNameForConditionalOperator(m_conditionalOperator));
  }

  if(m_returnValuesHasBeenSet)
  {
   payload.WithString("ReturnValues", ReturnValueMapper::GetNameForReturnValue(m_returnValues));
  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  if(m_returnItemCollectionMetricsHasBeenSet)
  {
   payload.WithString("ReturnItemCollectionMetrics", ReturnItemCollectionMetricsMapper::GetNameForReturnItemCollectionMetrics(m_returnItemCollectionMetrics));
  }

  if(m_updateExpressionHasBeenSet)
  {
   payload.WithString("UpdateExpression", m_updateExpression);

  }

  if(m_conditionExpressionHasBeenSet)
  {
   payload.WithString("ConditionExpression", m_conditionExpression);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateItem"));
  return headers;

}




