/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ForecastGeofenceEventsDeviceState.h>
#include <aws/location/model/DistanceUnit.h>
#include <aws/location/model/SpeedUnit.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class ForecastGeofenceEventsRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ForecastGeofenceEvents"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the geofence collection.</p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    ForecastGeofenceEventsRequest& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the device's state, including its current position and speed. When
     * speed is omitted, this API performs a <i>containment check</i>. The
     * <i>containment check</i> operation returns <code>IDLE</code> events for
     * geofences where the device is currently inside of, but no other events.</p>
     */
    inline const ForecastGeofenceEventsDeviceState& GetDeviceState() const { return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    template<typename DeviceStateT = ForecastGeofenceEventsDeviceState>
    void SetDeviceState(DeviceStateT&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::forward<DeviceStateT>(value); }
    template<typename DeviceStateT = ForecastGeofenceEventsDeviceState>
    ForecastGeofenceEventsRequest& WithDeviceState(DeviceStateT&& value) { SetDeviceState(std::forward<DeviceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forward-looking time window for forecasting, specified in minutes. The
     * API only returns events that are predicted to occur within this time horizon.
     * When no value is specified, this API performs a <i>containment check</i>. The
     * <i>containment check</i> operation returns <code>IDLE</code> events for
     * geofences where the device is currently inside of, but no other events.</p>
     */
    inline double GetTimeHorizonMinutes() const { return m_timeHorizonMinutes; }
    inline bool TimeHorizonMinutesHasBeenSet() const { return m_timeHorizonMinutesHasBeenSet; }
    inline void SetTimeHorizonMinutes(double value) { m_timeHorizonMinutesHasBeenSet = true; m_timeHorizonMinutes = value; }
    inline ForecastGeofenceEventsRequest& WithTimeHorizonMinutes(double value) { SetTimeHorizonMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline DistanceUnit GetDistanceUnit() const { return m_distanceUnit; }
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }
    inline void SetDistanceUnit(DistanceUnit value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline ForecastGeofenceEventsRequest& WithDistanceUnit(DistanceUnit value) { SetDistanceUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline SpeedUnit GetSpeedUnit() const { return m_speedUnit; }
    inline bool SpeedUnitHasBeenSet() const { return m_speedUnitHasBeenSet; }
    inline void SetSpeedUnit(SpeedUnit value) { m_speedUnitHasBeenSet = true; m_speedUnit = value; }
    inline ForecastGeofenceEventsRequest& WithSpeedUnit(SpeedUnit value) { SetSpeedUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ForecastGeofenceEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional limit for the number of resources returned in a single call.</p>
     * <p>Default value: <code>20</code> </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ForecastGeofenceEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    ForecastGeofenceEventsDeviceState m_deviceState;
    bool m_deviceStateHasBeenSet = false;

    double m_timeHorizonMinutes{0.0};
    bool m_timeHorizonMinutesHasBeenSet = false;

    DistanceUnit m_distanceUnit{DistanceUnit::NOT_SET};
    bool m_distanceUnitHasBeenSet = false;

    SpeedUnit m_speedUnit{SpeedUnit::NOT_SET};
    bool m_speedUnitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
