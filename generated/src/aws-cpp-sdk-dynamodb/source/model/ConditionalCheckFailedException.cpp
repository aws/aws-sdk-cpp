/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ConditionalCheckFailedException.h>
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

ConditionalCheckFailedException::ConditionalCheckFailedException() : 
    m_messageHasBeenSet(false),
    m_itemHasBeenSet(false)
{
}

ConditionalCheckFailedException::ConditionalCheckFailedException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_itemHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalCheckFailedException& ConditionalCheckFailedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Item"))
  {
    Aws::Map<Aws::String, JsonView> itemJsonMap = jsonValue.GetObject("Item").GetAllObjects();
    for(auto& itemItem : itemJsonMap)
    {
      m_item[itemItem.first] = itemItem.second.AsObject();
    }
    m_itemHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalCheckFailedException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_itemHasBeenSet)
  {
   JsonValue itemJsonMap;
   for(auto& itemItem : m_item)
   {
     itemJsonMap.WithObject(itemItem.first, itemItem.second.Jsonize());
   }
   payload.WithObject("Item", std::move(itemJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
