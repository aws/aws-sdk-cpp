/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Scale.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Scale::Scale() : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_unit(ScaleUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Scale::Scale(JsonView jsonValue) : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_unit(ScaleUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

Scale& Scale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = ScaleUnitMapper::GetScaleUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue Scale::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", ScaleUnitMapper::GetNameForScaleUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
