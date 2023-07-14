/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InsufficientSensorData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

InsufficientSensorData::InsufficientSensorData() : 
    m_missingCompleteSensorDataHasBeenSet(false),
    m_sensorsWithShortDateRangeHasBeenSet(false)
{
}

InsufficientSensorData::InsufficientSensorData(JsonView jsonValue) : 
    m_missingCompleteSensorDataHasBeenSet(false),
    m_sensorsWithShortDateRangeHasBeenSet(false)
{
  *this = jsonValue;
}

InsufficientSensorData& InsufficientSensorData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MissingCompleteSensorData"))
  {
    m_missingCompleteSensorData = jsonValue.GetObject("MissingCompleteSensorData");

    m_missingCompleteSensorDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SensorsWithShortDateRange"))
  {
    m_sensorsWithShortDateRange = jsonValue.GetObject("SensorsWithShortDateRange");

    m_sensorsWithShortDateRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue InsufficientSensorData::Jsonize() const
{
  JsonValue payload;

  if(m_missingCompleteSensorDataHasBeenSet)
  {
   payload.WithObject("MissingCompleteSensorData", m_missingCompleteSensorData.Jsonize());

  }

  if(m_sensorsWithShortDateRangeHasBeenSet)
  {
   payload.WithObject("SensorsWithShortDateRange", m_sensorsWithShortDateRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
