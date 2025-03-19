/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationDestinationOptions.h>
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

WaypointOptimizationDestinationOptions::WaypointOptimizationDestinationOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationDestinationOptions& WaypointOptimizationDestinationOptions::operator =(JsonView jsonValue)
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

JsonValue WaypointOptimizationDestinationOptions::Jsonize() const
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

  if(m_headingHasBeenSet)
  {
   payload.WithDouble("Heading", m_heading);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

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
