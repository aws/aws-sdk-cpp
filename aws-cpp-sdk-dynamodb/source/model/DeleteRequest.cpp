/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DeleteRequest.h>
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

DeleteRequest::DeleteRequest() : 
    m_keyHasBeenSet(false)
{
}

DeleteRequest::DeleteRequest(JsonView jsonValue) : 
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteRequest& DeleteRequest::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue DeleteRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
