/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Dimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

Dimension::Dimension() : 
    m_name(DimensionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Dimension::Dimension(JsonView jsonValue) : 
    m_name(DimensionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Dimension& Dimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = DimensionNameMapper::GetDimensionNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Dimension::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", DimensionNameMapper::GetNameForDimensionName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
