/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormInputBindingPropertiesValue.h>
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

FormInputBindingPropertiesValue::FormInputBindingPropertiesValue() : 
    m_typeHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false)
{
}

FormInputBindingPropertiesValue::FormInputBindingPropertiesValue(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

FormInputBindingPropertiesValue& FormInputBindingPropertiesValue::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue FormInputBindingPropertiesValue::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
