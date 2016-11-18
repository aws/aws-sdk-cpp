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

DeleteRequest::DeleteRequest(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteRequest& DeleteRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    Aws::Map<Aws::String, JsonValue> keyJsonMap = jsonValue.GetObject("Key").GetAllObjects();
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