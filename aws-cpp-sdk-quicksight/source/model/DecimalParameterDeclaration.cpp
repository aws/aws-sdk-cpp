/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DecimalParameterDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DecimalParameterDeclaration::DecimalParameterDeclaration() : 
    m_parameterValueType(ParameterValueType::NOT_SET),
    m_parameterValueTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultValuesHasBeenSet(false),
    m_valueWhenUnsetHasBeenSet(false)
{
}

DecimalParameterDeclaration::DecimalParameterDeclaration(JsonView jsonValue) : 
    m_parameterValueType(ParameterValueType::NOT_SET),
    m_parameterValueTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultValuesHasBeenSet(false),
    m_valueWhenUnsetHasBeenSet(false)
{
  *this = jsonValue;
}

DecimalParameterDeclaration& DecimalParameterDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterValueType"))
  {
    m_parameterValueType = ParameterValueTypeMapper::GetParameterValueTypeForName(jsonValue.GetString("ParameterValueType"));

    m_parameterValueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValues"))
  {
    m_defaultValues = jsonValue.GetObject("DefaultValues");

    m_defaultValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueWhenUnset"))
  {
    m_valueWhenUnset = jsonValue.GetObject("ValueWhenUnset");

    m_valueWhenUnsetHasBeenSet = true;
  }

  return *this;
}

JsonValue DecimalParameterDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_parameterValueTypeHasBeenSet)
  {
   payload.WithString("ParameterValueType", ParameterValueTypeMapper::GetNameForParameterValueType(m_parameterValueType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultValuesHasBeenSet)
  {
   payload.WithObject("DefaultValues", m_defaultValues.Jsonize());

  }

  if(m_valueWhenUnsetHasBeenSet)
  {
   payload.WithObject("ValueWhenUnset", m_valueWhenUnset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
