/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ForecastedEvent.h>
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

ForecastedEvent::ForecastedEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ForecastedEvent& ForecastedEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");
    m_eventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeofenceId"))
  {
    m_geofenceId = jsonValue.GetString("GeofenceId");
    m_geofenceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsDeviceInGeofence"))
  {
    m_isDeviceInGeofence = jsonValue.GetBool("IsDeviceInGeofence");
    m_isDeviceInGeofenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NearestDistance"))
  {
    m_nearestDistance = jsonValue.GetDouble("NearestDistance");
    m_nearestDistanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = ForecastedGeofenceEventTypeMapper::GetForecastedGeofenceEventTypeForName(jsonValue.GetString("EventType"));
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastedBreachTime"))
  {
    m_forecastedBreachTime = jsonValue.GetString("ForecastedBreachTime");
    m_forecastedBreachTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeofenceProperties"))
  {
    Aws::Map<Aws::String, JsonView> geofencePropertiesJsonMap = jsonValue.GetObject("GeofenceProperties").GetAllObjects();
    for(auto& geofencePropertiesItem : geofencePropertiesJsonMap)
    {
      m_geofenceProperties[geofencePropertiesItem.first] = geofencePropertiesItem.second.AsString();
    }
    m_geofencePropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ForecastedEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_geofenceIdHasBeenSet)
  {
   payload.WithString("GeofenceId", m_geofenceId);

  }

  if(m_isDeviceInGeofenceHasBeenSet)
  {
   payload.WithBool("IsDeviceInGeofence", m_isDeviceInGeofence);

  }

  if(m_nearestDistanceHasBeenSet)
  {
   payload.WithDouble("NearestDistance", m_nearestDistance);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", ForecastedGeofenceEventTypeMapper::GetNameForForecastedGeofenceEventType(m_eventType));
  }

  if(m_forecastedBreachTimeHasBeenSet)
  {
   payload.WithString("ForecastedBreachTime", m_forecastedBreachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_geofencePropertiesHasBeenSet)
  {
   JsonValue geofencePropertiesJsonMap;
   for(auto& geofencePropertiesItem : m_geofenceProperties)
   {
     geofencePropertiesJsonMap.WithString(geofencePropertiesItem.first, geofencePropertiesItem.second);
   }
   payload.WithObject("GeofenceProperties", std::move(geofencePropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
