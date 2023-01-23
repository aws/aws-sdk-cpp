/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/Frequency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

Frequency::Frequency() : 
    m_units(FrequencyUnits::NOT_SET),
    m_unitsHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

Frequency::Frequency(JsonView jsonValue) : 
    m_units(FrequencyUnits::NOT_SET),
    m_unitsHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Frequency& Frequency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("units"))
  {
    m_units = FrequencyUnitsMapper::GetFrequencyUnitsForName(jsonValue.GetString("units"));

    m_unitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Frequency::Jsonize() const
{
  JsonValue payload;

  if(m_unitsHasBeenSet)
  {
   payload.WithString("units", FrequencyUnitsMapper::GetNameForFrequencyUnits(m_units));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
