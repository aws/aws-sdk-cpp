/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AttributeValueUpdate.h>
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

AttributeValueUpdate::AttributeValueUpdate() : 
    m_valueHasBeenSet(false),
    m_action(AttributeAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

AttributeValueUpdate::AttributeValueUpdate(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_action(AttributeAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeValueUpdate& AttributeValueUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = AttributeActionMapper::GetAttributeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeValueUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", AttributeActionMapper::GetNameForAttributeAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
