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

#include <aws/dynamodb/model/TransactGetItem.h>
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

TransactGetItem::TransactGetItem() : 
    m_getHasBeenSet(false)
{
}

TransactGetItem::TransactGetItem(JsonView jsonValue) : 
    m_getHasBeenSet(false)
{
  *this = jsonValue;
}

TransactGetItem& TransactGetItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Get"))
  {
    m_get = jsonValue.GetObject("Get");

    m_getHasBeenSet = true;
  }

  return *this;
}

JsonValue TransactGetItem::Jsonize() const
{
  JsonValue payload;

  if(m_getHasBeenSet)
  {
   payload.WithObject("Get", m_get.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
