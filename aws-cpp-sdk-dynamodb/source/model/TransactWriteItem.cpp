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
