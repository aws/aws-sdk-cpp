/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ForecastGeofenceEventsDeviceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

ForecastGeofenceEventsDeviceState::ForecastGeofenceEventsDeviceState(JsonView jsonValue)
{
  *this = jsonValue;
}

ForecastGeofenceEventsDeviceState& ForecastGeofenceEventsDeviceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Speed"))
  {
    m_speed = jsonValue.GetDouble("Speed");
    m_speedHasBeenSet = true;
  }
  return *this;
}

JsonValue ForecastGeofenceEventsDeviceState::Jsonize() const
{
  JsonValue payload;

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_speedHasBeenSet)
  {
   payload.WithDouble("Speed", m_speed);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
