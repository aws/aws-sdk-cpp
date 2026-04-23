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

#include <aws/dynamodb/model/CancellationReason.h>
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

CancellationReason::CancellationReason() : 
    m_itemHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CancellationReason::CancellationReason(JsonView jsonValue) : 
    m_itemHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

CancellationReason& CancellationReason::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue CancellationReason::Jsonize() const
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

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
