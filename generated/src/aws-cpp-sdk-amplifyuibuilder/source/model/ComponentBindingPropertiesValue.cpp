/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentBindingPropertiesValue.h>
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

ComponentBindingPropertiesValue::ComponentBindingPropertiesValue() : 
    m_typeHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

ComponentBindingPropertiesValue::ComponentBindingPropertiesValue(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentBindingPropertiesValue& ComponentBindingPropertiesValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bindingProperties"))
  {
    m_bindingProperties = jsonValue.GetObject("bindingProperties");

    m_bindingPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentBindingPropertiesValue::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_bindingPropertiesHasBeenSet)
  {
   payload.WithObject("bindingProperties", m_bindingProperties.Jsonize());

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
