/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ValueMapping.h>
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

ValueMapping::ValueMapping() : 
    m_displayValueHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ValueMapping::ValueMapping(JsonView jsonValue) : 
    m_displayValueHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ValueMapping& ValueMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayValue"))
  {
    m_displayValue = jsonValue.GetObject("displayValue");

    m_displayValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ValueMapping::Jsonize() const
{
  JsonValue payload;

  if(m_displayValueHasBeenSet)
  {
   payload.WithObject("displayValue", m_displayValue.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
