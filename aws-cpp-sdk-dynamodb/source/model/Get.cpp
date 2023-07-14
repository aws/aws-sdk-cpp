/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/Get.h>
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

Get::Get() : 
    m_keyHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_projectionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false)
{
}

Get::Get(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_projectionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

Get& Get::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ProjectionExpression"))
  {
    m_projectionExpression = jsonValue.GetString("ProjectionExpression");

    m_projectionExpressionHasBeenSet = true;
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

  return *this;
}

JsonValue Get::Jsonize() const
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

  if(m_projectionExpressionHasBeenSet)
  {
   payload.WithString("ProjectionExpression", m_projectionExpression);

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

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
