/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

Action::Action() : 
    m_attributeNameHasBeenSet(false),
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = OperationMapper::GetOperationForName(jsonValue.GetString("Operation"));

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", OperationMapper::GetNameForOperation(m_operation));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
