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

ComponentConditionProperty::ComponentConditionProperty() : 
    m_propertyHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operandHasBeenSet(false),
    m_thenHasBeenSet(false),
    m_elseHasBeenSet(false),
    m_operandTypeHasBeenSet(false)
{
}

ComponentConditionProperty::ComponentConditionProperty(JsonView jsonValue) : 
    m_propertyHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operandHasBeenSet(false),
    m_thenHasBeenSet(false),
    m_elseHasBeenSet(false),
    m_operandTypeHasBeenSet(false)
{
  *this = jsonValue;
}

const ComponentProperty& ComponentConditionProperty::GetThen() const{ return *m_then; }
bool ComponentConditionProperty::ThenHasBeenSet() const { return m_thenHasBeenSet; }
void ComponentConditionProperty::SetThen(const ComponentProperty& value) { m_thenHasBeenSet = true; m_then = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", value); }
void ComponentConditionProperty::SetThen(ComponentProperty&& value) { m_thenHasBeenSet = true; m_then = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", std::move(value)); }
ComponentConditionProperty& ComponentConditionProperty::WithThen(const ComponentProperty& value) { SetThen(value); return *this;}
ComponentConditionProperty& ComponentConditionProperty::WithThen(ComponentProperty&& value) { SetThen(std::move(value)); return *this;}

const ComponentProperty& ComponentConditionProperty::GetElse() const{ return *m_else; }
bool ComponentConditionProperty::ElseHasBeenSet() const { return m_elseHasBeenSet; }
void ComponentConditionProperty::SetElse(const ComponentProperty& value) { m_elseHasBeenSet = true; m_else = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", value); }
void ComponentConditionProperty::SetElse(ComponentProperty&& value) { m_elseHasBeenSet = true; m_else = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", std::move(value)); }
ComponentConditionProperty& ComponentConditionProperty::WithElse(const ComponentProperty& value) { SetElse(value); return *this;}
ComponentConditionProperty& ComponentConditionProperty::WithElse(ComponentProperty&& value) { SetElse(std::move(value)); return *this;}

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
