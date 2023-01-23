/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/Delete.h>
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

Delete::Delete() : 
    m_keyHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false),
    m_returnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure::NOT_SET),
    m_returnValuesOnConditionCheckFailureHasBeenSet(false)
{
}

Delete::Delete(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false),
    m_returnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure::NOT_SET),
    m_returnValuesOnConditionCheckFailureHasBeenSet(false)
{
  *this = jsonValue;
}

Delete& Delete::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    Aws::Map<Aws::String, JsonView> keyJsonMap = jsonValue.GetObject("Key").GetAllObjects();
    for(auto& keyItem : keyJsonMap)
    {
      m_key[keyItem.first] = keyItem.second.AsObject();
    }
    m_keyHasBeenSet = true;
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

JsonValue Delete::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   JsonValue keyJsonMap;
   for(auto& keyItem : m_key)
   {
     keyJsonMap.WithObject(keyItem.first, keyItem.second.Jsonize());
   }
   payload.WithObject("Key", std::move(keyJsonMap));

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
