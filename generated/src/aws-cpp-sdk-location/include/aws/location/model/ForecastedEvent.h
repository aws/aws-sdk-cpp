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
    AWS_LOCATIONSERVICE_API ForecastedEvent() = default;
    AWS_LOCATIONSERVICE_API ForecastedEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ForecastedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The forecasted event identifier.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    ForecastedEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geofence identifier pertaining to the forecasted event.</p>
     */
    inline const Aws::String& GetGeofenceId() const { return m_geofenceId; }
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }
    template<typename GeofenceIdT = Aws::String>
    void SetGeofenceId(GeofenceIdT&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::forward<GeofenceIdT>(value); }
    template<typename GeofenceIdT = Aws::String>
    ForecastedEvent& WithGeofenceId(GeofenceIdT&& value) { SetGeofenceId(std::forward<GeofenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the device is located within the geofence.</p>
     */
    inline bool GetIsDeviceInGeofence() const { return m_isDeviceInGeofence; }
    inline bool IsDeviceInGeofenceHasBeenSet() const { return m_isDeviceInGeofenceHasBeenSet; }
    inline void SetIsDeviceInGeofence(bool value) { m_isDeviceInGeofenceHasBeenSet = true; m_isDeviceInGeofence = value; }
    inline ForecastedEvent& WithIsDeviceInGeofence(bool value) { SetIsDeviceInGeofence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The closest distance from the device's position to the geofence.</p>
     */
    inline double GetNearestDistance() const { return m_nearestDistance; }
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
    inline ForecastedGeofenceEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(ForecastedGeofenceEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline ForecastedEvent& WithEventType(ForecastedGeofenceEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecasted time the device will breach the geofence in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetForecastedBreachTime() const { return m_forecastedBreachTime; }
    inline bool ForecastedBreachTimeHasBeenSet() const { return m_forecastedBreachTimeHasBeenSet; }
    template<typename ForecastedBreachTimeT = Aws::Utils::DateTime>
    void SetForecastedBreachTime(ForecastedBreachTimeT&& value) { m_forecastedBreachTimeHasBeenSet = true; m_forecastedBreachTime = std::forward<ForecastedBreachTimeT>(value); }
    template<typename ForecastedBreachTimeT = Aws::Utils::DateTime>
    ForecastedEvent& WithForecastedBreachTime(ForecastedBreachTimeT&& value) { SetForecastedBreachTime(std::forward<ForecastedBreachTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geofence properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeofenceProperties() const { return m_geofenceProperties; }
    inline bool GeofencePropertiesHasBeenSet() const { return m_geofencePropertiesHasBeenSet; }
    template<typename GeofencePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetGeofenceProperties(GeofencePropertiesT&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = std::forward<GeofencePropertiesT>(value); }
    template<typename GeofencePropertiesT = Aws::Map<Aws::String, Aws::String>>
    ForecastedEvent& WithGeofenceProperties(GeofencePropertiesT&& value) { SetGeofenceProperties(std::forward<GeofencePropertiesT>(value)); return *this;}
    template<typename GeofencePropertiesKeyT = Aws::String, typename GeofencePropertiesValueT = Aws::String>
    ForecastedEvent& AddGeofenceProperties(GeofencePropertiesKeyT&& key, GeofencePropertiesValueT&& value) {
      m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::forward<GeofencePropertiesKeyT>(key), std::forward<GeofencePropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    bool m_isDeviceInGeofence{false};
    bool m_isDeviceInGeofenceHasBeenSet = false;

    double m_nearestDistance{0.0};
    bool m_nearestDistanceHasBeenSet = false;

    ForecastedGeofenceEventType m_eventType{ForecastedGeofenceEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_forecastedBreachTime{};
    bool m_forecastedBreachTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_geofenceProperties;
    bool m_geofencePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
