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
    AWS_LOCATIONSERVICE_API ForecastGeofenceEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ForecastGeofenceEvents"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the geofence collection.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline ForecastGeofenceEventsRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline ForecastGeofenceEventsRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the geofence collection.</p>
     */
    inline ForecastGeofenceEventsRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The device's state, including current position and speed.</p>
     */
    inline const ForecastGeofenceEventsDeviceState& GetDeviceState() const{ return m_deviceState; }

    /**
     * <p>The device's state, including current position and speed.</p>
     */
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }

    /**
     * <p>The device's state, including current position and speed.</p>
     */
    inline void SetDeviceState(const ForecastGeofenceEventsDeviceState& value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }

    /**
     * <p>The device's state, including current position and speed.</p>
     */
    inline void SetDeviceState(ForecastGeofenceEventsDeviceState&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::move(value); }

    /**
     * <p>The device's state, including current position and speed.</p>
     */
    inline ForecastGeofenceEventsRequest& WithDeviceState(const ForecastGeofenceEventsDeviceState& value) { SetDeviceState(value); return *this;}

    /**
     * <p>The device's state, including current position and speed.</p>
     */
    inline ForecastGeofenceEventsRequest& WithDeviceState(ForecastGeofenceEventsDeviceState&& value) { SetDeviceState(std::move(value)); return *this;}


    /**
     * <p>Specifies the time horizon in minutes for the forecasted events.</p>
     */
    inline double GetTimeHorizonMinutes() const{ return m_timeHorizonMinutes; }

    /**
     * <p>Specifies the time horizon in minutes for the forecasted events.</p>
     */
    inline bool TimeHorizonMinutesHasBeenSet() const { return m_timeHorizonMinutesHasBeenSet; }

    /**
     * <p>Specifies the time horizon in minutes for the forecasted events.</p>
     */
    inline void SetTimeHorizonMinutes(double value) { m_timeHorizonMinutesHasBeenSet = true; m_timeHorizonMinutes = value; }

    /**
     * <p>Specifies the time horizon in minutes for the forecasted events.</p>
     */
    inline ForecastGeofenceEventsRequest& WithTimeHorizonMinutes(double value) { SetTimeHorizonMinutes(value); return *this;}


    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline ForecastGeofenceEventsRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit used for the <code>NearestDistance</code> property returned
     * in a forecasted event. The measurement system must match for
     * <code>DistanceUnit</code> and <code>SpeedUnit</code>; if <code>Kilometers</code>
     * is specified for <code>DistanceUnit</code>, then <code>SpeedUnit</code> must be
     * <code>KilometersPerHour</code>. </p> <p>Default Value: <code>Kilometers</code>
     * </p>
     */
    inline ForecastGeofenceEventsRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline const SpeedUnit& GetSpeedUnit() const{ return m_speedUnit; }

    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline bool SpeedUnitHasBeenSet() const { return m_speedUnitHasBeenSet; }

    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline void SetSpeedUnit(const SpeedUnit& value) { m_speedUnitHasBeenSet = true; m_speedUnit = value; }

    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline void SetSpeedUnit(SpeedUnit&& value) { m_speedUnitHasBeenSet = true; m_speedUnit = std::move(value); }

    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline ForecastGeofenceEventsRequest& WithSpeedUnit(const SpeedUnit& value) { SetSpeedUnit(value); return *this;}

    /**
     * <p>The speed unit for the device captured by the device state. The measurement
     * system must match for <code>DistanceUnit</code> and <code>SpeedUnit</code>; if
     * <code>Kilometers</code> is specified for <code>DistanceUnit</code>, then
     * <code>SpeedUnit</code> must be <code>KilometersPerHour</code>.</p> <p>Default
     * Value: <code>KilometersPerHour</code>.</p>
     */
    inline ForecastGeofenceEventsRequest& WithSpeedUnit(SpeedUnit&& value) { SetSpeedUnit(std::move(value)); return *this;}


    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline ForecastGeofenceEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline ForecastGeofenceEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page.</p>
     * <p>Default value: <code>null</code> </p>
     */
    inline ForecastGeofenceEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An optional limit for the number of resources returned in a single call.</p>
     * <p>Default value: <code>20</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional limit for the number of resources returned in a single call.</p>
     * <p>Default value: <code>20</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional limit for the number of resources returned in a single call.</p>
     * <p>Default value: <code>20</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional limit for the number of resources returned in a single call.</p>
     * <p>Default value: <code>20</code> </p>
     */
    inline ForecastGeofenceEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    ForecastGeofenceEventsDeviceState m_deviceState;
    bool m_deviceStateHasBeenSet = false;

    double m_timeHorizonMinutes;
    bool m_timeHorizonMinutesHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    SpeedUnit m_speedUnit;
    bool m_speedUnitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
