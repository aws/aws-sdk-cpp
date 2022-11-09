/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FieldInputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

FieldInputConfig::FieldInputConfig() : 
    m_defaultChecked(false),
    m_defaultCheckedHasBeenSet(false),
    m_defaultCountryCodeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptiveTextHasBeenSet(false),
    m_isArray(false),
    m_isArrayHasBeenSet(false),
    m_maxValue(0.0),
    m_maxValueHasBeenSet(false),
    m_minValue(0.0),
    m_minValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_placeholderHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_step(0.0),
    m_stepHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueMappingsHasBeenSet(false)
{
}

FieldInputConfig::FieldInputConfig(JsonView jsonValue) : 
    m_defaultChecked(false),
    m_defaultCheckedHasBeenSet(false),
    m_defaultCountryCodeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptiveTextHasBeenSet(false),
    m_isArray(false),
    m_isArrayHasBeenSet(false),
    m_maxValue(0.0),
    m_maxValueHasBeenSet(false),
    m_minValue(0.0),
    m_minValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_placeholderHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_step(0.0),
    m_stepHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

FieldInputConfig& FieldInputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultChecked"))
  {
    m_defaultChecked = jsonValue.GetBool("defaultChecked");

    m_defaultCheckedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultCountryCode"))
  {
    m_defaultCountryCode = jsonValue.GetString("defaultCountryCode");

    m_defaultCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("descriptiveText"))
  {
    m_descriptiveText = jsonValue.GetString("descriptiveText");

    m_descriptiveTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isArray"))
  {
    m_isArray = jsonValue.GetBool("isArray");

    m_isArrayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxValue"))
  {
    m_maxValue = jsonValue.GetDouble("maxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minValue"))
  {
    m_minValue = jsonValue.GetDouble("minValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placeholder"))
  {
    m_placeholder = jsonValue.GetString("placeholder");

    m_placeholderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("step"))
  {
    m_step = jsonValue.GetDouble("step");

    m_stepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueMappings"))
  {
    m_valueMappings = jsonValue.GetObject("valueMappings");

    m_valueMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldInputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_defaultCheckedHasBeenSet)
  {
   payload.WithBool("defaultChecked", m_defaultChecked);

  }

  if(m_defaultCountryCodeHasBeenSet)
  {
   payload.WithString("defaultCountryCode", m_defaultCountryCode);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_descriptiveTextHasBeenSet)
  {
   payload.WithString("descriptiveText", m_descriptiveText);

  }

  if(m_isArrayHasBeenSet)
  {
   payload.WithBool("isArray", m_isArray);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithDouble("maxValue", m_maxValue);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithDouble("minValue", m_minValue);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_placeholderHasBeenSet)
  {
   payload.WithString("placeholder", m_placeholder);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("readOnly", m_readOnly);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  if(m_stepHasBeenSet)
  {
   payload.WithDouble("step", m_step);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_valueMappingsHasBeenSet)
  {
   payload.WithObject("valueMappings", m_valueMappings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
