/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabaseParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabaseParameter::RelationalDatabaseParameter() : 
    m_allowedValuesHasBeenSet(false),
    m_applyMethodHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
}

RelationalDatabaseParameter::RelationalDatabaseParameter(JsonView jsonValue) : 
    m_allowedValuesHasBeenSet(false),
    m_applyMethodHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseParameter& RelationalDatabaseParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedValues"))
  {
    m_allowedValues = jsonValue.GetString("allowedValues");

    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applyMethod"))
  {
    m_applyMethod = jsonValue.GetString("applyMethod");

    m_applyMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applyType"))
  {
    m_applyType = jsonValue.GetString("applyType");

    m_applyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = jsonValue.GetString("dataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isModifiable"))
  {
    m_isModifiable = jsonValue.GetBool("isModifiable");

    m_isModifiableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterName"))
  {
    m_parameterName = jsonValue.GetString("parameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterValue"))
  {
    m_parameterValue = jsonValue.GetString("parameterValue");

    m_parameterValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseParameter::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   payload.WithString("allowedValues", m_allowedValues);

  }

  if(m_applyMethodHasBeenSet)
  {
   payload.WithString("applyMethod", m_applyMethod);

  }

  if(m_applyTypeHasBeenSet)
  {
   payload.WithString("applyType", m_applyType);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", m_dataType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_isModifiableHasBeenSet)
  {
   payload.WithBool("isModifiable", m_isModifiable);

  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("parameterName", m_parameterName);

  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("parameterValue", m_parameterValue);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
