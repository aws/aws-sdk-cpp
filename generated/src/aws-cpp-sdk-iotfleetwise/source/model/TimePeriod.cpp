/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimePeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

TimePeriod::TimePeriod() : 
    m_unit(TimeUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

TimePeriod::TimePeriod(JsonView jsonValue)
  : TimePeriod()
{
  *this = jsonValue;
}

TimePeriod& TimePeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = TimeUnitMapper::GetTimeUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue TimePeriod::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", TimeUnitMapper::GetNameForTimeUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
