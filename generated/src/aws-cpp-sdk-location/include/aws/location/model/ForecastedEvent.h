/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ForecastedGeofenceEventType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{

  /**
   * <p>A forecasted event represents a geofence event in relation to the requested
   * device state, that may occur given the provided device state and time
   * horizon.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ForecastedEvent">AWS
   * API Reference</a></p>
   */
  class ForecastedEvent
  {
  public:
    AWS_LOCATIONSERVICE_API ForecastedEvent();
    AWS_LOCATIONSERVICE_API ForecastedEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ForecastedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The forecasted event identifier.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline ForecastedEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline ForecastedEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline ForecastedEvent& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geofence identifier pertaining to the forecasted event.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }
    inline ForecastedEvent& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}
    inline ForecastedEvent& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}
    inline ForecastedEvent& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the device is located within the geofence.</p>
     */
    inline bool GetIsDeviceInGeofence() const{ return m_isDeviceInGeofence; }
    inline bool IsDeviceInGeofenceHasBeenSet() const { return m_isDeviceInGeofenceHasBeenSet; }
    inline void SetIsDeviceInGeofence(bool value) { m_isDeviceInGeofenceHasBeenSet = true; m_isDeviceInGeofence = value; }
    inline ForecastedEvent& WithIsDeviceInGeofence(bool value) { SetIsDeviceInGeofence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The closest distance from the device's position to the geofence.</p>
     */
    inline double GetNearestDistance() const{ return m_nearestDistance; }
    inline bool NearestDistanceHasBeenSet() const { return m_nearestDistanceHasBeenSet; }
    inline void SetNearestDistance(double value) { m_nearestDistanceHasBeenSet = true; m_nearestDistance = value; }
    inline ForecastedEvent& WithNearestDistance(double value) { SetNearestDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type, forecasting three states for which a device can be in
     * relative to a geofence:</p> <p> <code>ENTER</code>: If a device is outside of a
     * geofence, but would breach the fence if the device is moving at its current
     * speed within time horizon window.</p> <p> <code>EXIT</code>: If a device is
     * inside of a geofence, but would breach the fence if the device is moving at its
     * current speed within time horizon window.</p> <p> <code>IDLE</code>: If a device
     * is inside of a geofence, and the device is not moving.</p>
     */
    inline const ForecastedGeofenceEventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const ForecastedGeofenceEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(ForecastedGeofenceEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline ForecastedEvent& WithEventType(const ForecastedGeofenceEventType& value) { SetEventType(value); return *this;}
    inline ForecastedEvent& WithEventType(ForecastedGeofenceEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecasted time the device will breach the geofence in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetForecastedBreachTime() const{ return m_forecastedBreachTime; }
    inline bool ForecastedBreachTimeHasBeenSet() const { return m_forecastedBreachTimeHasBeenSet; }
    inline void SetForecastedBreachTime(const Aws::Utils::DateTime& value) { m_forecastedBreachTimeHasBeenSet = true; m_forecastedBreachTime = value; }
    inline void SetForecastedBreachTime(Aws::Utils::DateTime&& value) { m_forecastedBreachTimeHasBeenSet = true; m_forecastedBreachTime = std::move(value); }
    inline ForecastedEvent& WithForecastedBreachTime(const Aws::Utils::DateTime& value) { SetForecastedBreachTime(value); return *this;}
    inline ForecastedEvent& WithForecastedBreachTime(Aws::Utils::DateTime&& value) { SetForecastedBreachTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geofence properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeofenceProperties() const{ return m_geofenceProperties; }
    inline bool GeofencePropertiesHasBeenSet() const { return m_geofencePropertiesHasBeenSet; }
    inline void SetGeofenceProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = value; }
    inline void SetGeofenceProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = std::move(value); }
    inline ForecastedEvent& WithGeofenceProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetGeofenceProperties(value); return *this;}
    inline ForecastedEvent& WithGeofenceProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetGeofenceProperties(std::move(value)); return *this;}
    inline ForecastedEvent& AddGeofenceProperties(const Aws::String& key, const Aws::String& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, value); return *this; }
    inline ForecastedEvent& AddGeofenceProperties(Aws::String&& key, const Aws::String& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), value); return *this; }
    inline ForecastedEvent& AddGeofenceProperties(const Aws::String& key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, std::move(value)); return *this; }
    inline ForecastedEvent& AddGeofenceProperties(Aws::String&& key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline ForecastedEvent& AddGeofenceProperties(const char* key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, std::move(value)); return *this; }
    inline ForecastedEvent& AddGeofenceProperties(Aws::String&& key, const char* value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), value); return *this; }
    inline ForecastedEvent& AddGeofenceProperties(const char* key, const char* value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    bool m_isDeviceInGeofence;
    bool m_isDeviceInGeofenceHasBeenSet = false;

    double m_nearestDistance;
    bool m_nearestDistanceHasBeenSet = false;

    ForecastedGeofenceEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_forecastedBreachTime;
    bool m_forecastedBreachTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_geofenceProperties;
    bool m_geofencePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
