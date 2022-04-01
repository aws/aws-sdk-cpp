/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormBindingElement.h>
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

FormBindingElement::FormBindingElement() : 
    m_elementHasBeenSet(false),
    m_propertyHasBeenSet(false)
{
}

FormBindingElement::FormBindingElement(JsonView jsonValue) : 
    m_elementHasBeenSet(false),
    m_propertyHasBeenSet(false)
{
  *this = jsonValue;
}

FormBindingElement& FormBindingElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("element"))
  {
    m_element = jsonValue.GetString("element");

    m_elementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("property"))
  {
    m_property = jsonValue.GetString("property");

    m_propertyHasBeenSet = true;
  }

  return *this;
}

JsonValue FormBindingElement::Jsonize() const
{
  JsonValue payload;

  if(m_elementHasBeenSet)
  {
   payload.WithString("element", m_element);

  }

  if(m_propertyHasBeenSet)
  {
   payload.WithString("property", m_property);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
