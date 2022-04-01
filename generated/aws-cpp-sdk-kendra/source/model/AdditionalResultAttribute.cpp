/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AdditionalResultAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AdditionalResultAttribute::AdditionalResultAttribute() : 
    m_keyHasBeenSet(false),
    m_valueType(AdditionalResultAttributeValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AdditionalResultAttribute::AdditionalResultAttribute(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueType(AdditionalResultAttributeValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalResultAttribute& AdditionalResultAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueType"))
  {
    m_valueType = AdditionalResultAttributeValueTypeMapper::GetAdditionalResultAttributeValueTypeForName(jsonValue.GetString("ValueType"));

    m_valueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalResultAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("ValueType", AdditionalResultAttributeValueTypeMapper::GetNameForAdditionalResultAttributeValueType(m_valueType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
