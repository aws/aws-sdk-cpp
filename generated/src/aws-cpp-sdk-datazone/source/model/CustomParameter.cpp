/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CustomParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

CustomParameter::CustomParameter() : 
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_isEditable(false),
    m_isEditableHasBeenSet(false),
    m_isOptional(false),
    m_isOptionalHasBeenSet(false),
    m_keyNameHasBeenSet(false)
{
}

CustomParameter::CustomParameter(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_isEditable(false),
    m_isEditableHasBeenSet(false),
    m_isOptional(false),
    m_isOptionalHasBeenSet(false),
    m_keyNameHasBeenSet(false)
{
  *this = jsonValue;
}

CustomParameter& CustomParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldType"))
  {
    m_fieldType = jsonValue.GetString("fieldType");

    m_fieldTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isEditable"))
  {
    m_isEditable = jsonValue.GetBool("isEditable");

    m_isEditableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isOptional"))
  {
    m_isOptional = jsonValue.GetBool("isOptional");

    m_isOptionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyName"))
  {
    m_keyName = jsonValue.GetString("keyName");

    m_keyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomParameter::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_fieldTypeHasBeenSet)
  {
   payload.WithString("fieldType", m_fieldType);

  }

  if(m_isEditableHasBeenSet)
  {
   payload.WithBool("isEditable", m_isEditable);

  }

  if(m_isOptionalHasBeenSet)
  {
   payload.WithBool("isOptional", m_isOptional);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("keyName", m_keyName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
