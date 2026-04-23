/*
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

#include <aws/dynamodb/model/Put.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

Put::Put() : 
    m_itemHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false),
    m_returnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure::NOT_SET),
    m_returnValuesOnConditionCheckFailureHasBeenSet(false)
{
}

Put::Put(JsonView jsonValue) : 
    m_itemHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false),
    m_returnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure::NOT_SET),
    m_returnValuesOnConditionCheckFailureHasBeenSet(false)
{
  *this = jsonValue;
}

Put& Put::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Item"))
  {
    Aws::Map<Aws::String, JsonView> itemJsonMap = jsonValue.GetObject("Item").GetAllObjects();
    for(auto& itemItem : itemJsonMap)
    {
      m_item[itemItem.first] = itemItem.second.AsObject();
    }
    m_itemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionExpression"))
  {
    m_conditionExpression = jsonValue.GetString("ConditionExpression");

    m_conditionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpressionAttributeNames"))
  {
    Aws::Map<Aws::String, JsonView> expressionAttributeNamesJsonMap = jsonValue.GetObject("ExpressionAttributeNames").GetAllObjects();
    for(auto& expressionAttributeNamesItem : expressionAttributeNamesJsonMap)
    {
      m_expressionAttributeNames[expressionAttributeNamesItem.first] = expressionAttributeNamesItem.second.AsString();
    }
    m_expressionAttributeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpressionAttributeValues"))
  {
    Aws::Map<Aws::String, JsonView> expressionAttributeValuesJsonMap = jsonValue.GetObject("ExpressionAttributeValues").GetAllObjects();
    for(auto& expressionAttributeValuesItem : expressionAttributeValuesJsonMap)
    {
      m_expressionAttributeValues[expressionAttributeValuesItem.first] = expressionAttributeValuesItem.second.AsObject();
    }
    m_expressionAttributeValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReturnValuesOnConditionCheckFailure"))
  {
    m_returnValuesOnConditionCheckFailure = ReturnValuesOnConditionCheckFailureMapper::GetReturnValuesOnConditionCheckFailureForName(jsonValue.GetString("ReturnValuesOnConditionCheckFailure"));

    m_returnValuesOnConditionCheckFailureHasBeenSet = true;
  }

  return *this;
}

JsonValue Put::Jsonize() const
{
  JsonValue payload;

  if(m_itemHasBeenSet)
  {
   JsonValue itemJsonMap;
   for(auto& itemItem : m_item)
   {
     itemJsonMap.WithObject(itemItem.first, itemItem.second.Jsonize());
   }
   payload.WithObject("Item", std::move(itemJsonMap));

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

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

  if(m_returnValuesOnConditionCheckFailureHasBeenSet)
  {
   payload.WithString("ReturnValuesOnConditionCheckFailure", ReturnValuesOnConditionCheckFailureMapper::GetNameForReturnValuesOnConditionCheckFailure(m_returnValuesOnConditionCheckFailure));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
