/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentConditionProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ComponentConditionProperty::ComponentConditionProperty(JsonView jsonValue)
{
  *this = jsonValue;
}

ComponentConditionProperty& ComponentConditionProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("property"))
  {
    m_property = jsonValue.GetString("property");
    m_propertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");
    m_fieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = jsonValue.GetString("operator");
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operand"))
  {
    m_operand = jsonValue.GetString("operand");
    m_operandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("then"))
  {
    m_then = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", jsonValue.GetObject("then"));
    m_thenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("else"))
  {
    m_else = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", jsonValue.GetObject("else"));
    m_elseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operandType"))
  {
    m_operandType = jsonValue.GetString("operandType");
    m_operandTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ComponentConditionProperty::Jsonize() const
{
  JsonValue payload;

  if(m_propertyHasBeenSet)
  {
   payload.WithString("property", m_property);

  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", m_operator);

  }

  if(m_operandHasBeenSet)
  {
   payload.WithString("operand", m_operand);

  }

  if(m_thenHasBeenSet)
  {
   payload.WithObject("then", m_then->Jsonize());

  }

  if(m_elseHasBeenSet)
  {
   payload.WithObject("else", m_else->Jsonize());

  }

  if(m_operandTypeHasBeenSet)
  {
   payload.WithString("operandType", m_operandType);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
