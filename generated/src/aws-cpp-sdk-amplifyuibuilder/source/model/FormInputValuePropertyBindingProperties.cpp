/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormInputValuePropertyBindingProperties.h>
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

FormInputValuePropertyBindingProperties::FormInputValuePropertyBindingProperties() : 
    m_propertyHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
}

FormInputValuePropertyBindingProperties::FormInputValuePropertyBindingProperties(JsonView jsonValue) : 
    m_propertyHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
  *this = jsonValue;
}

FormInputValuePropertyBindingProperties& FormInputValuePropertyBindingProperties::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue FormInputValuePropertyBindingProperties::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
