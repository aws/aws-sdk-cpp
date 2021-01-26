/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
