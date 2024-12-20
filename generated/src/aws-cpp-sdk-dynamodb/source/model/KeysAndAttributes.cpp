/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_consistentReadHasBeenSet(false)
{
}

KeysAndAttributes::KeysAndAttributes(JsonView jsonValue)
  : KeysAndAttributes()
{
  *this = jsonValue;
}

KeysAndAttributes& KeysAndAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsObject());
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributesToGet"))
  {
    Aws::Utils::Array<JsonView> attributesToGetJsonList = jsonValue.GetArray("AttributesToGet");
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

  return *this;
}

JsonValue KeysAndAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsObject(m_keys[keysIndex].Jsonize());
   }
   payload.WithArray("Keys", std::move(keysJsonList));

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

  if(m_consistentReadHasBeenSet)
  {
   payload.WithBool("ConsistentRead", m_consistentRead);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
