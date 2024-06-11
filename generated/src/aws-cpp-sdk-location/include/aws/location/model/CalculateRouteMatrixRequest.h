﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/TravelMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/location/model/DistanceUnit.h>
#include <aws/location/model/CalculateRouteCarModeOptions.h>
#include <aws/location/model/CalculateRouteTruckModeOptions.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LocationService
{
namespace Model
{

  /**
   */
  class CalculateRouteMatrixRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateRouteMatrix"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route matrix. </p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = value; }
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::move(value); }
    inline void SetCalculatorName(const char* value) { m_calculatorNameHasBeenSet = true; m_calculatorName.assign(value); }
    inline CalculateRouteMatrixRequest& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}
    inline CalculateRouteMatrixRequest& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of departure (origin) positions for the route matrix. An array of
     * points, each of which is itself a 2-value array defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[longitude, latitude]</code>. For example, <code>[-123.115,
     * 49.285]</code>.</p>  <p>Depending on the data provider selected in
     * the route calculator resource there may be additional restrictions on the inputs
     * you can choose. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route-matrix.html#matrix-routing-position-limits">
     * Position restrictions</a> in the <i>Amazon Location Service Developer
     * Guide</i>.</p>   <p>For route calculators that use Esri as the
     * data provider, if you specify a departure that's not located on a road, Amazon
     * Location <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">
     * moves the position to the nearest road</a>. The snapped value is available in
     * the result in <code>SnappedDeparturePositions</code>.</p>  <p>Valid
     * Values: <code>[-180 to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetDeparturePositions() const{ return m_departurePositions; }
    inline bool DeparturePositionsHasBeenSet() const { return m_departurePositionsHasBeenSet; }
    inline void SetDeparturePositions(const Aws::Vector<Aws::Vector<double>>& value) { m_departurePositionsHasBeenSet = true; m_departurePositions = value; }
    inline void SetDeparturePositions(Aws::Vector<Aws::Vector<double>>&& value) { m_departurePositionsHasBeenSet = true; m_departurePositions = std::move(value); }
    inline CalculateRouteMatrixRequest& WithDeparturePositions(const Aws::Vector<Aws::Vector<double>>& value) { SetDeparturePositions(value); return *this;}
    inline CalculateRouteMatrixRequest& WithDeparturePositions(Aws::Vector<Aws::Vector<double>>&& value) { SetDeparturePositions(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& AddDeparturePositions(const Aws::Vector<double>& value) { m_departurePositionsHasBeenSet = true; m_departurePositions.push_back(value); return *this; }
    inline CalculateRouteMatrixRequest& AddDeparturePositions(Aws::Vector<double>&& value) { m_departurePositionsHasBeenSet = true; m_departurePositions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of destination positions for the route matrix. An array of points,
     * each of which is itself a 2-value array defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[longitude, latitude]</code>. For example, <code>[-122.339, 47.615]</code>
     * </p>  <p>Depending on the data provider selected in the route
     * calculator resource there may be additional restrictions on the inputs you can
     * choose. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route-matrix.html#matrix-routing-position-limits">
     * Position restrictions</a> in the <i>Amazon Location Service Developer
     * Guide</i>.</p>   <p>For route calculators that use Esri as the
     * data provider, if you specify a destination that's not located on a road, Amazon
     * Location <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">
     * moves the position to the nearest road</a>. The snapped value is available in
     * the result in <code>SnappedDestinationPositions</code>.</p>  <p>Valid
     * Values: <code>[-180 to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetDestinationPositions() const{ return m_destinationPositions; }
    inline bool DestinationPositionsHasBeenSet() const { return m_destinationPositionsHasBeenSet; }
    inline void SetDestinationPositions(const Aws::Vector<Aws::Vector<double>>& value) { m_destinationPositionsHasBeenSet = true; m_destinationPositions = value; }
    inline void SetDestinationPositions(Aws::Vector<Aws::Vector<double>>&& value) { m_destinationPositionsHasBeenSet = true; m_destinationPositions = std::move(value); }
    inline CalculateRouteMatrixRequest& WithDestinationPositions(const Aws::Vector<Aws::Vector<double>>& value) { SetDestinationPositions(value); return *this;}
    inline CalculateRouteMatrixRequest& WithDestinationPositions(Aws::Vector<Aws::Vector<double>>&& value) { SetDestinationPositions(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& AddDestinationPositions(const Aws::Vector<double>& value) { m_destinationPositionsHasBeenSet = true; m_destinationPositions.push_back(value); return *this; }
    inline CalculateRouteMatrixRequest& AddDestinationPositions(Aws::Vector<double>&& value) { m_destinationPositionsHasBeenSet = true; m_destinationPositions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>The <code>TravelMode</code>
     * you specify also determines how you specify route preferences: </p> <ul> <li>
     * <p>If traveling by <code>Car</code> use the <code>CarModeOptions</code>
     * parameter.</p> </li> <li> <p>If traveling by <code>Truck</code> use the
     * <code>TruckModeOptions</code> parameter.</p> </li> </ul>  <p>
     * <code>Bicycle</code> or <code>Motorcycle</code> are only valid when using
     * <code>Grab</code> as a data provider, and only within Southeast Asia.</p> <p>
     * <code>Truck</code> is not available for Grab.</p> <p>For more information about
     * using Grab as a data provider, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps</a>
     * in the <i>Amazon Location Service Developer Guide</i>.</p>  <p>Default
     * Value: <code>Car</code> </p>
     */
    inline const TravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const TravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(TravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline CalculateRouteMatrixRequest& WithTravelMode(const TravelMode& value) { SetTravelMode(value); return *this;}
    inline CalculateRouteMatrixRequest& WithTravelMode(TravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route matrix. You can't set both <code>DepartureTime</code> and
     * <code>DepartNow</code>. If neither is set, the best time of day to travel with
     * the best traffic conditions is used to calculate the route matrix.</p> 
     * <p>Setting a departure time in the past returns a <code>400
     * ValidationException</code> error.</p>  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetDepartureTime() const{ return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    inline void SetDepartureTime(const Aws::Utils::DateTime& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }
    inline void SetDepartureTime(Aws::Utils::DateTime&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }
    inline CalculateRouteMatrixRequest& WithDepartureTime(const Aws::Utils::DateTime& value) { SetDepartureTime(value); return *this;}
    inline CalculateRouteMatrixRequest& WithDepartureTime(Aws::Utils::DateTime&& value) { SetDepartureTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate the route matrix. You can't set both <code>DepartureTime</code> and
     * <code>DepartNow</code>. If neither is set, the best time of day to travel with
     * the best traffic conditions is used to calculate the route matrix.</p>
     * <p>Default Value: <code>false</code> </p> <p>Valid Values: <code>false</code> |
     * <code>true</code> </p>
     */
    inline bool GetDepartNow() const{ return m_departNow; }
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }
    inline CalculateRouteMatrixRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }
    inline CalculateRouteMatrixRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}
    inline CalculateRouteMatrixRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline const CalculateRouteCarModeOptions& GetCarModeOptions() const{ return m_carModeOptions; }
    inline bool CarModeOptionsHasBeenSet() const { return m_carModeOptionsHasBeenSet; }
    inline void SetCarModeOptions(const CalculateRouteCarModeOptions& value) { m_carModeOptionsHasBeenSet = true; m_carModeOptions = value; }
    inline void SetCarModeOptions(CalculateRouteCarModeOptions&& value) { m_carModeOptionsHasBeenSet = true; m_carModeOptions = std::move(value); }
    inline CalculateRouteMatrixRequest& WithCarModeOptions(const CalculateRouteCarModeOptions& value) { SetCarModeOptions(value); return *this;}
    inline CalculateRouteMatrixRequest& WithCarModeOptions(CalculateRouteCarModeOptions&& value) { SetCarModeOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline const CalculateRouteTruckModeOptions& GetTruckModeOptions() const{ return m_truckModeOptions; }
    inline bool TruckModeOptionsHasBeenSet() const { return m_truckModeOptionsHasBeenSet; }
    inline void SetTruckModeOptions(const CalculateRouteTruckModeOptions& value) { m_truckModeOptionsHasBeenSet = true; m_truckModeOptions = value; }
    inline void SetTruckModeOptions(CalculateRouteTruckModeOptions&& value) { m_truckModeOptionsHasBeenSet = true; m_truckModeOptions = std::move(value); }
    inline CalculateRouteMatrixRequest& WithTruckModeOptions(const CalculateRouteTruckModeOptions& value) { SetTruckModeOptions(value); return *this;}
    inline CalculateRouteMatrixRequest& WithTruckModeOptions(CalculateRouteTruckModeOptions&& value) { SetTruckModeOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline CalculateRouteMatrixRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline CalculateRouteMatrixRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::Vector<Aws::Vector<double>> m_departurePositions;
    bool m_departurePositionsHasBeenSet = false;

    Aws::Vector<Aws::Vector<double>> m_destinationPositions;
    bool m_destinationPositionsHasBeenSet = false;

    TravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    Aws::Utils::DateTime m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    bool m_departNow;
    bool m_departNowHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    CalculateRouteCarModeOptions m_carModeOptions;
    bool m_carModeOptionsHasBeenSet = false;

    CalculateRouteTruckModeOptions m_truckModeOptions;
    bool m_truckModeOptionsHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
