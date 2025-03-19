/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationWaypoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

WaypointOptimizationWaypoint::WaypointOptimizationWaypoint(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationWaypoint& WaypointOptimizationWaypoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessHours"))
  {
    m_accessHours = jsonValue.GetObject("AccessHours");
    m_accessHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppointmentTime"))
  {
    m_appointmentTime = jsonValue.GetString("AppointmentTime");
    m_appointmentTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Before"))
  {
    Aws::Utils::Array<JsonView> beforeJsonList = jsonValue.GetArray("Before");
    for(unsigned beforeIndex = 0; beforeIndex < beforeJsonList.GetLength(); ++beforeIndex)
    {
      m_before.push_back(beforeJsonList[beforeIndex].AsInteger());
    }
    m_beforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Heading"))
  {
    m_heading = jsonValue.GetDouble("Heading");
    m_headingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceDuration"))
  {
    m_serviceDuration = jsonValue.GetInt64("ServiceDuration");
    m_serviceDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SideOfStreet"))
  {
    m_sideOfStreet = jsonValue.GetObject("SideOfStreet");
    m_sideOfStreetHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationWaypoint::Jsonize() const
{
  JsonValue payload;

  if(m_accessHoursHasBeenSet)
  {
   payload.WithObject("AccessHours", m_accessHours.Jsonize());

  }

  if(m_appointmentTimeHasBeenSet)
  {
   payload.WithString("AppointmentTime", m_appointmentTime);

  }

  if(m_beforeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> beforeJsonList(m_before.size());
   for(unsigned beforeIndex = 0; beforeIndex < beforeJsonList.GetLength(); ++beforeIndex)
   {
     beforeJsonList[beforeIndex].AsInteger(m_before[beforeIndex]);
   }
   payload.WithArray("Before", std::move(beforeJsonList));

  }

  if(m_headingHasBeenSet)
  {
   payload.WithDouble("Heading", m_heading);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_serviceDurationHasBeenSet)
  {
   payload.WithInt64("ServiceDuration", m_serviceDuration);

  }

  if(m_sideOfStreetHasBeenSet)
  {
   payload.WithObject("SideOfStreet", m_sideOfStreet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
