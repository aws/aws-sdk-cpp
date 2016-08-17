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
#include <aws/dynamodb/model/KeysAndAttributes.h>
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

KeysAndAttributes::KeysAndAttributes() : 
    m_keysHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false),
    m_projectionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false)
{
}

KeysAndAttributes::KeysAndAttributes(const JsonValue& jsonValue) : 
    m_keysHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false),
    m_projectionExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

KeysAndAttributes& KeysAndAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Keys"))
  {
    Array<JsonValue> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      Aws::Map<Aws::String, JsonValue> keyJsonMap = keysJsonList[keysIndex].GetAllObjects();
      Aws::Map<Aws::String, AttributeValue> keyMap;
      for(auto& keyItem : keyJsonMap)
      {
        keyMap[keyItem.first] = keyItem.second.AsObject();
      }
      m_keys.push_back(std::move(keyMap));
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributesToGet"))
  {
    Array<JsonValue> attributesToGetJsonList = jsonValue.GetArray("AttributesToGet");
    for(unsigned attributesToGetIndex = 0; attributesToGetIndex < attributesToGetJsonList.GetLength(); ++attributesToGetIndex)
    {
      m_attributesToGet.push_back(attributesToGetJsonList[attributesToGetIndex].AsString());
    }
    m_attributesToGetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsistentRead"))
  {
    m_consistentRead = jsonValue.GetBool("ConsistentRead");

    m_consistentReadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectionExpression"))
  {
    m_projectionExpression = jsonValue.GetString("ProjectionExpression");

    m_projectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpressionAttributeNames"))
  {
    Aws::Map<Aws::String, JsonValue> expressionAttributeNamesJsonMap = jsonValue.GetObject("ExpressionAttributeNames").GetAllObjects();
    for(auto& expressionAttributeNamesItem : expressionAttributeNamesJsonMap)
    {
      m_expressionAttributeNames[expressionAttributeNamesItem.first] = expressionAttributeNamesItem.second.AsString();
    }
    m_expressionAttributeNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue KeysAndAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_keysHasBeenSet)
  {
   Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     JsonValue keyJsonMap;
     for(auto& keyItem : m_keys[keysIndex])
     {
       keyJsonMap.WithObject(keyItem.first, keyItem.second.Jsonize());
     }
     keysJsonList[keysIndex].AsObject(std::move(keyJsonMap));
   }
   payload.WithArray("Keys", std::move(keysJsonList));

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

  if(m_consistentReadHasBeenSet)
  {
   payload.WithBool("ConsistentRead", m_consistentRead);

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