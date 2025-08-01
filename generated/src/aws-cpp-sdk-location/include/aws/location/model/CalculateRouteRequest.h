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
    AWS_LOCATIONSERVICE_API CalculateRouteRequest() = default;

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
    inline const Aws::String& GetCalculatorName() const { return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    template<typename CalculatorNameT = Aws::String>
    void SetCalculatorName(CalculatorNameT&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::forward<CalculatorNameT>(value); }
    template<typename CalculatorNameT = Aws::String>
    CalculateRouteRequest& WithCalculatorName(CalculatorNameT&& value) { SetCalculatorName(std::forward<CalculatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position for the route. Defined in <a
     * href="https://earth-info.nga.mil/index.php?dir=wgs84&amp;action=wgs84">World
     * Geodetic System (WGS 84)</a> format: <code>[longitude, latitude]</code>.</p>
     * <ul> <li> <p>For example, <code>[-123.115, 49.285]</code> </p> </li> </ul>
     *  <p>If you specify a departure that's not located on a road, Amazon
     * Location <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/snap-to-nearby-road.html">moves
     * the position to the nearest road</a>. If Esri is the provider for your route
     * calculator, specifying a route that is longer than 400 km returns a <code>400
     * RoutesValidationException</code> error.</p>  <p>Valid Values: <code>[-180
     * to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<double>& GetDeparturePosition() const { return m_departurePosition; }
    inline bool DeparturePositionHasBeenSet() const { return m_departurePositionHasBeenSet; }
    template<typename DeparturePositionT = Aws::Vector<double>>
    void SetDeparturePosition(DeparturePositionT&& value) { m_departurePositionHasBeenSet = true; m_departurePosition = std::forward<DeparturePositionT>(value); }
    template<typename DeparturePositionT = Aws::Vector<double>>
    CalculateRouteRequest& WithDeparturePosition(DeparturePositionT&& value) { SetDeparturePosition(std::forward<DeparturePositionT>(value)); return *this;}
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
     * href="https://docs.aws.amazon.com/location/previous/developerguide/snap-to-nearby-road.html">moves
     * the position to the nearest road</a>. </p>  <p>Valid Values: <code>[-180
     * to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<double>& GetDestinationPosition() const { return m_destinationPosition; }
    inline bool DestinationPositionHasBeenSet() const { return m_destinationPositionHasBeenSet; }
    template<typename DestinationPositionT = Aws::Vector<double>>
    void SetDestinationPosition(DestinationPositionT&& value) { m_destinationPositionHasBeenSet = true; m_destinationPosition = std::forward<DestinationPositionT>(value); }
    template<typename DestinationPositionT = Aws::Vector<double>>
    CalculateRouteRequest& WithDestinationPosition(DestinationPositionT&& value) { SetDestinationPosition(std::forward<DestinationPositionT>(value)); return *this;}
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
     * href="https://docs.aws.amazon.com/location/previous/developerguide/snap-to-nearby-road.html">moves
     * the position to the nearest road</a>. </p> <p>Specifying more than 23 waypoints
     * returns a <code>400 ValidationException</code> error.</p> <p>If Esri is the
     * provider for your route calculator, specifying a route that is longer than 400
     * km returns a <code>400 RoutesValidationException</code> error.</p> 
     * <p>Valid Values: <code>[-180 to 180,-90 to 90]</code> </p>
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetWaypointPositions() const { return m_waypointPositions; }
    inline bool WaypointPositionsHasBeenSet() const { return m_waypointPositionsHasBeenSet; }
    template<typename WaypointPositionsT = Aws::Vector<Aws::Vector<double>>>
    void SetWaypointPositions(WaypointPositionsT&& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions = std::forward<WaypointPositionsT>(value); }
    template<typename WaypointPositionsT = Aws::Vector<Aws::Vector<double>>>
    CalculateRouteRequest& WithWaypointPositions(WaypointPositionsT&& value) { SetWaypointPositions(std::forward<WaypointPositionsT>(value)); return *this;}
    template<typename WaypointPositionsT = Aws::Vector<double>>
    CalculateRouteRequest& AddWaypointPositions(WaypointPositionsT&& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions.emplace_back(std::forward<WaypointPositionsT>(value)); return *this; }
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
     * href="https://docs.aws.amazon.com/location/previous/developerguide/grab.html">GrabMaps</a>
     * in the <i>Amazon Location Service Developer Guide</i>.</p>  <p>The
     * <code>TravelMode</code> you specify also determines how you specify route
     * preferences: </p> <ul> <li> <p>If traveling by <code>Car</code> use the
     * <code>CarModeOptions</code> parameter.</p> </li> <li> <p>If traveling by
     * <code>Truck</code> use the <code>TruckModeOptions</code> parameter.</p> </li>
     * </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline TravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(TravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline CalculateRouteRequest& WithTravelMode(TravelMode value) { SetTravelMode(value); return *this;}
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
    inline const Aws::Utils::DateTime& GetDepartureTime() const { return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    template<typename DepartureTimeT = Aws::Utils::DateTime>
    void SetDepartureTime(DepartureTimeT&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::forward<DepartureTimeT>(value); }
    template<typename DepartureTimeT = Aws::Utils::DateTime>
    CalculateRouteRequest& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate a route. Otherwise, the best time of day to travel with the best
     * traffic conditions is used to calculate the route.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetDepartNow() const { return m_departNow; }
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }
    inline CalculateRouteRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline DistanceUnit GetDistanceUnit() const { return m_distanceUnit; }
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }
    inline void SetDistanceUnit(DistanceUnit value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline CalculateRouteRequest& WithDistanceUnit(DistanceUnit value) { SetDistanceUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to include the geometry details in the result for each path between a
     * pair of positions.</p> <p>Default Value: <code>false</code> </p> <p>Valid
     * Values: <code>false</code> | <code>true</code> </p>
     */
    inline bool GetIncludeLegGeometry() const { return m_includeLegGeometry; }
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
    inline const CalculateRouteCarModeOptions& GetCarModeOptions() const { return m_carModeOptions; }
    inline bool CarModeOptionsHasBeenSet() const { return m_carModeOptionsHasBeenSet; }
    template<typename CarModeOptionsT = CalculateRouteCarModeOptions>
    void SetCarModeOptions(CarModeOptionsT&& value) { m_carModeOptionsHasBeenSet = true; m_carModeOptions = std::forward<CarModeOptionsT>(value); }
    template<typename CarModeOptionsT = CalculateRouteCarModeOptions>
    CalculateRouteRequest& WithCarModeOptions(CarModeOptionsT&& value) { SetCarModeOptions(std::forward<CarModeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline const CalculateRouteTruckModeOptions& GetTruckModeOptions() const { return m_truckModeOptions; }
    inline bool TruckModeOptionsHasBeenSet() const { return m_truckModeOptionsHasBeenSet; }
    template<typename TruckModeOptionsT = CalculateRouteTruckModeOptions>
    void SetTruckModeOptions(TruckModeOptionsT&& value) { m_truckModeOptionsHasBeenSet = true; m_truckModeOptions = std::forward<TruckModeOptionsT>(value); }
    template<typename TruckModeOptionsT = CalculateRouteTruckModeOptions>
    CalculateRouteRequest& WithTruckModeOptions(TruckModeOptionsT&& value) { SetTruckModeOptions(std::forward<TruckModeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the desired time of arrival. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>ArrivalTime is not
     * supported Esri.</p> 
     */
    inline const Aws::Utils::DateTime& GetArrivalTime() const { return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    template<typename ArrivalTimeT = Aws::Utils::DateTime>
    void SetArrivalTime(ArrivalTimeT&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::forward<ArrivalTimeT>(value); }
    template<typename ArrivalTimeT = Aws::Utils::DateTime>
    CalculateRouteRequest& WithArrivalTime(ArrivalTimeT&& value) { SetArrivalTime(std::forward<ArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the distance to optimize for when calculating a route.</p>
     */
    inline OptimizationMode GetOptimizeFor() const { return m_optimizeFor; }
    inline bool OptimizeForHasBeenSet() const { return m_optimizeForHasBeenSet; }
    inline void SetOptimizeFor(OptimizationMode value) { m_optimizeForHasBeenSet = true; m_optimizeFor = value; }
    inline CalculateRouteRequest& WithOptimizeFor(OptimizationMode value) { SetOptimizeFor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CalculateRouteRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
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

    TravelMode m_travelMode{TravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    Aws::Utils::DateTime m_departureTime{};
    bool m_departureTimeHasBeenSet = false;

    bool m_departNow{false};
    bool m_departNowHasBeenSet = false;

    DistanceUnit m_distanceUnit{DistanceUnit::NOT_SET};
    bool m_distanceUnitHasBeenSet = false;

    bool m_includeLegGeometry{false};
    bool m_includeLegGeometryHasBeenSet = false;

    CalculateRouteCarModeOptions m_carModeOptions;
    bool m_carModeOptionsHasBeenSet = false;

    CalculateRouteTruckModeOptions m_truckModeOptions;
    bool m_truckModeOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_arrivalTime{};
    bool m_arrivalTimeHasBeenSet = false;

    OptimizationMode m_optimizeFor{OptimizationMode::NOT_SET};
    bool m_optimizeForHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
