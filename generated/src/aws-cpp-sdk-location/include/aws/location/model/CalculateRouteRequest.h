/**
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
#include <aws/location/model/OptimizationMode.h>
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
  class CalculateRouteRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateRoute"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = value; }
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::move(value); }
    inline void SetCalculatorName(const char* value) { m_calculatorNameHasBeenSet = true; m_calculatorName.assign(value); }
    inline CalculateRouteRequest& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}
    inline CalculateRouteRequest& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}
    inline CalculateRouteRequest& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position for the route. Defined in <a
     * href="https://earth-info.nga.mil/index.php?dir=wgs84&amp;action=wgs84">World
     * Geodetic System (WGS 84)</a> format: <code>[longitude, latitude]</code>.</p>
     * <ul> <li> <p>For example, <code>[-123.115, 49.285]</code> </p> </li> </ul>
     *  <p>If you specify a departure that's not located on a road, Amazon
     * Location <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">moves
     * the position to the nearest road</a>. If Esri is the provider for your route
     * calculator, specifying a route that is longer than 400 km returns a <code>400
     * RoutesValidationException</code> error.</p>  <p>Valid Values: <code>[-180
     * to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<double>& GetDeparturePosition() const{ return m_departurePosition; }
    inline bool DeparturePositionHasBeenSet() const { return m_departurePositionHasBeenSet; }
    inline void SetDeparturePosition(const Aws::Vector<double>& value) { m_departurePositionHasBeenSet = true; m_departurePosition = value; }
    inline void SetDeparturePosition(Aws::Vector<double>&& value) { m_departurePositionHasBeenSet = true; m_departurePosition = std::move(value); }
    inline CalculateRouteRequest& WithDeparturePosition(const Aws::Vector<double>& value) { SetDeparturePosition(value); return *this;}
    inline CalculateRouteRequest& WithDeparturePosition(Aws::Vector<double>&& value) { SetDeparturePosition(std::move(value)); return *this;}
    inline CalculateRouteRequest& AddDeparturePosition(double value) { m_departurePositionHasBeenSet = true; m_departurePosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The finish position for the route. Defined in <a
     * href="https://earth-info.nga.mil/index.php?dir=wgs84&amp;action=wgs84">World
     * Geodetic System (WGS 84)</a> format: <code>[longitude, latitude]</code>.</p>
     * <ul> <li> <p> For example, <code>[-122.339, 47.615]</code> </p> </li> </ul>
     *  <p>If you specify a destination that's not located on a road, Amazon
     * Location <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">moves
     * the position to the nearest road</a>. </p>  <p>Valid Values: <code>[-180
     * to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<double>& GetDestinationPosition() const{ return m_destinationPosition; }
    inline bool DestinationPositionHasBeenSet() const { return m_destinationPositionHasBeenSet; }
    inline void SetDestinationPosition(const Aws::Vector<double>& value) { m_destinationPositionHasBeenSet = true; m_destinationPosition = value; }
    inline void SetDestinationPosition(Aws::Vector<double>&& value) { m_destinationPositionHasBeenSet = true; m_destinationPosition = std::move(value); }
    inline CalculateRouteRequest& WithDestinationPosition(const Aws::Vector<double>& value) { SetDestinationPosition(value); return *this;}
    inline CalculateRouteRequest& WithDestinationPosition(Aws::Vector<double>&& value) { SetDestinationPosition(std::move(value)); return *this;}
    inline CalculateRouteRequest& AddDestinationPosition(double value) { m_destinationPositionHasBeenSet = true; m_destinationPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies an ordered list of up to 23 intermediate positions to include along
     * a route between the departure position and destination position. </p> <ul> <li>
     * <p>For example, from the <code>DeparturePosition</code> <code>[-123.115,
     * 49.285]</code>, the route follows the order that the waypoint positions are
     * given <code>[[-122.757, 49.0021],[-122.349, 47.620]]</code> </p> </li> </ul>
     *  <p>If you specify a waypoint position that's not located on a road,
     * Amazon Location <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">moves
     * the position to the nearest road</a>. </p> <p>Specifying more than 23 waypoints
     * returns a <code>400 ValidationException</code> error.</p> <p>If Esri is the
     * provider for your route calculator, specifying a route that is longer than 400
     * km returns a <code>400 RoutesValidationException</code> error.</p> 
     * <p>Valid Values: <code>[-180 to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetWaypointPositions() const{ return m_waypointPositions; }
    inline bool WaypointPositionsHasBeenSet() const { return m_waypointPositionsHasBeenSet; }
    inline void SetWaypointPositions(const Aws::Vector<Aws::Vector<double>>& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions = value; }
    inline void SetWaypointPositions(Aws::Vector<Aws::Vector<double>>&& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions = std::move(value); }
    inline CalculateRouteRequest& WithWaypointPositions(const Aws::Vector<Aws::Vector<double>>& value) { SetWaypointPositions(value); return *this;}
    inline CalculateRouteRequest& WithWaypointPositions(Aws::Vector<Aws::Vector<double>>&& value) { SetWaypointPositions(std::move(value)); return *this;}
    inline CalculateRouteRequest& AddWaypointPositions(const Aws::Vector<double>& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions.push_back(value); return *this; }
    inline CalculateRouteRequest& AddWaypointPositions(Aws::Vector<double>&& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, <code>Walking</code>, <code>Bicycle</code> or
     * <code>Motorcycle</code> as options for the <code>TravelMode</code>.</p> 
     * <p> <code>Bicycle</code> and <code>Motorcycle</code> are only valid when using
     * Grab as a data provider, and only within Southeast Asia.</p> <p>
     * <code>Truck</code> is not available for Grab.</p> <p>For more details on the
     * using Grab for routing, including areas of coverage, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps</a>
     * in the <i>Amazon Location Service Developer Guide</i>.</p>  <p>The
     * <code>TravelMode</code> you specify also determines how you specify route
     * preferences: </p> <ul> <li> <p>If traveling by <code>Car</code> use the
     * <code>CarModeOptions</code> parameter.</p> </li> <li> <p>If traveling by
     * <code>Truck</code> use the <code>TruckModeOptions</code> parameter.</p> </li>
     * </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline const TravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const TravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(TravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline CalculateRouteRequest& WithTravelMode(const TravelMode& value) { SetTravelMode(value); return *this;}
    inline CalculateRouteRequest& WithTravelMode(TravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p> <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetDepartureTime() const{ return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    inline void SetDepartureTime(const Aws::Utils::DateTime& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }
    inline void SetDepartureTime(Aws::Utils::DateTime&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }
    inline CalculateRouteRequest& WithDepartureTime(const Aws::Utils::DateTime& value) { SetDepartureTime(value); return *this;}
    inline CalculateRouteRequest& WithDepartureTime(Aws::Utils::DateTime&& value) { SetDepartureTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate a route. Otherwise, the best time of day to travel with the best
     * traffic conditions is used to calculate the route.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetDepartNow() const{ return m_departNow; }
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }
    inline CalculateRouteRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}
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
    inline CalculateRouteRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}
    inline CalculateRouteRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to include the geometry details in the result for each path between a
     * pair of positions.</p> <p>Default Value: <code>false</code> </p> <p>Valid
     * Values: <code>false</code> | <code>true</code> </p>
     */
    inline bool GetIncludeLegGeometry() const{ return m_includeLegGeometry; }
    inline bool IncludeLegGeometryHasBeenSet() const { return m_includeLegGeometryHasBeenSet; }
    inline void SetIncludeLegGeometry(bool value) { m_includeLegGeometryHasBeenSet = true; m_includeLegGeometry = value; }
    inline CalculateRouteRequest& WithIncludeLegGeometry(bool value) { SetIncludeLegGeometry(value); return *this;}
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
    inline CalculateRouteRequest& WithCarModeOptions(const CalculateRouteCarModeOptions& value) { SetCarModeOptions(value); return *this;}
    inline CalculateRouteRequest& WithCarModeOptions(CalculateRouteCarModeOptions&& value) { SetCarModeOptions(std::move(value)); return *this;}
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
    inline CalculateRouteRequest& WithTruckModeOptions(const CalculateRouteTruckModeOptions& value) { SetTruckModeOptions(value); return *this;}
    inline CalculateRouteRequest& WithTruckModeOptions(CalculateRouteTruckModeOptions&& value) { SetTruckModeOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the desired time of arrival. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>ArrivalTime is not
     * supported Esri.</p> 
     */
    inline const Aws::Utils::DateTime& GetArrivalTime() const{ return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    inline void SetArrivalTime(const Aws::Utils::DateTime& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = value; }
    inline void SetArrivalTime(Aws::Utils::DateTime&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::move(value); }
    inline CalculateRouteRequest& WithArrivalTime(const Aws::Utils::DateTime& value) { SetArrivalTime(value); return *this;}
    inline CalculateRouteRequest& WithArrivalTime(Aws::Utils::DateTime&& value) { SetArrivalTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the distance to optimize for when calculating a route.</p>
     */
    inline const OptimizationMode& GetOptimizeFor() const{ return m_optimizeFor; }
    inline bool OptimizeForHasBeenSet() const { return m_optimizeForHasBeenSet; }
    inline void SetOptimizeFor(const OptimizationMode& value) { m_optimizeForHasBeenSet = true; m_optimizeFor = value; }
    inline void SetOptimizeFor(OptimizationMode&& value) { m_optimizeForHasBeenSet = true; m_optimizeFor = std::move(value); }
    inline CalculateRouteRequest& WithOptimizeFor(const OptimizationMode& value) { SetOptimizeFor(value); return *this;}
    inline CalculateRouteRequest& WithOptimizeFor(OptimizationMode&& value) { SetOptimizeFor(std::move(value)); return *this;}
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
    inline CalculateRouteRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline CalculateRouteRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline CalculateRouteRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::Vector<double> m_departurePosition;
    bool m_departurePositionHasBeenSet = false;

    Aws::Vector<double> m_destinationPosition;
    bool m_destinationPositionHasBeenSet = false;

    Aws::Vector<Aws::Vector<double>> m_waypointPositions;
    bool m_waypointPositionsHasBeenSet = false;

    TravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    Aws::Utils::DateTime m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    bool m_departNow;
    bool m_departNowHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    bool m_includeLegGeometry;
    bool m_includeLegGeometryHasBeenSet = false;

    CalculateRouteCarModeOptions m_carModeOptions;
    bool m_carModeOptionsHasBeenSet = false;

    CalculateRouteTruckModeOptions m_truckModeOptions;
    bool m_truckModeOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    OptimizationMode m_optimizeFor;
    bool m_optimizeForHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
