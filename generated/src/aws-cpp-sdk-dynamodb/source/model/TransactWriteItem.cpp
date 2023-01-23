/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactWriteItem.h>
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

TransactWriteItem::TransactWriteItem() : 
    m_conditionCheckHasBeenSet(false),
    m_putHasBeenSet(false),
    m_deleteHasBeenSet(false),
    m_updateHasBeenSet(false)
{
}

TransactWriteItem::TransactWriteItem(JsonView jsonValue) : 
    m_conditionCheckHasBeenSet(false),
    m_putHasBeenSet(false),
    m_deleteHasBeenSet(false),
    m_updateHasBeenSet(false)
{
  *this = jsonValue;
}

TransactWriteItem& TransactWriteItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionCheck"))
  {
    m_conditionCheck = jsonValue.GetObject("ConditionCheck");

    m_conditionCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Put"))
  {
    m_put = jsonValue.GetObject("Put");

    m_putHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delete"))
  {
    m_delete = jsonValue.GetObject("Delete");

    m_deleteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Update"))
  {
    m_update = jsonValue.GetObject("Update");

    m_updateHasBeenSet = true;
  }

  return *this;
}

JsonValue TransactWriteItem::Jsonize() const
{
  JsonValue payload;

  if(m_conditionCheckHasBeenSet)
  {
   payload.WithObject("ConditionCheck", m_conditionCheck.Jsonize());

  }

  if(m_putHasBeenSet)
  {
   payload.WithObject("Put", m_put.Jsonize());

  }

  if(m_deleteHasBeenSet)
  {
   payload.WithObject("Delete", m_delete.Jsonize());

  }

  if(m_updateHasBeenSet)
  {
   payload.WithObject("Update", m_update.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
