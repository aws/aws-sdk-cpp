/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/CalculateRouteCarModeOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/location/model/DistanceUnit.h>
#include <aws/location/model/TravelMode.h>
#include <aws/location/model/CalculateRouteTruckModeOptions.h>
#include <utility>

namespace Aws
{
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


    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = value; }

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::move(value); }

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline void SetCalculatorName(const char* value) { m_calculatorNameHasBeenSet = true; m_calculatorName.assign(value); }

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline CalculateRouteRequest& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline CalculateRouteRequest& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the route calculator resource that you want to use to calculate
     * the route. </p>
     */
    inline CalculateRouteRequest& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}


    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline const CalculateRouteCarModeOptions& GetCarModeOptions() const{ return m_carModeOptions; }

    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline bool CarModeOptionsHasBeenSet() const { return m_carModeOptionsHasBeenSet; }

    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline void SetCarModeOptions(const CalculateRouteCarModeOptions& value) { m_carModeOptionsHasBeenSet = true; m_carModeOptions = value; }

    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline void SetCarModeOptions(CalculateRouteCarModeOptions&& value) { m_carModeOptionsHasBeenSet = true; m_carModeOptions = std::move(value); }

    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline CalculateRouteRequest& WithCarModeOptions(const CalculateRouteCarModeOptions& value) { SetCarModeOptions(value); return *this;}

    /**
     * <p>Specifies route preferences when traveling by <code>Car</code>, such as
     * avoiding routes that use ferries or tolls.</p> <p>Requirements:
     * <code>TravelMode</code> must be specified as <code>Car</code>.</p>
     */
    inline CalculateRouteRequest& WithCarModeOptions(CalculateRouteCarModeOptions&& value) { SetCarModeOptions(std::move(value)); return *this;}


    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate a route. Otherwise, the best time of day to travel with the best
     * traffic conditions is used to calculate the route.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetDepartNow() const{ return m_departNow; }

    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate a route. Otherwise, the best time of day to travel with the best
     * traffic conditions is used to calculate the route.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }

    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate a route. Otherwise, the best time of day to travel with the best
     * traffic conditions is used to calculate the route.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }

    /**
     * <p>Sets the time of departure as the current time. Uses the current time to
     * calculate a route. Otherwise, the best time of day to travel with the best
     * traffic conditions is used to calculate the route.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline CalculateRouteRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}


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
    inline bool DeparturePositionHasBeenSet() const { return m_departurePositionHasBeenSet; }

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
    inline void SetDeparturePosition(const Aws::Vector<double>& value) { m_departurePositionHasBeenSet = true; m_departurePosition = value; }

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
    inline void SetDeparturePosition(Aws::Vector<double>&& value) { m_departurePositionHasBeenSet = true; m_departurePosition = std::move(value); }

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
    inline CalculateRouteRequest& WithDeparturePosition(const Aws::Vector<double>& value) { SetDeparturePosition(value); return *this;}

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
    inline CalculateRouteRequest& WithDeparturePosition(Aws::Vector<double>&& value) { SetDeparturePosition(std::move(value)); return *this;}

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
    inline CalculateRouteRequest& AddDeparturePosition(double value) { m_departurePositionHasBeenSet = true; m_departurePosition.push_back(value); return *this; }


    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>Setting a departure
     * time in the past returns a <code>400 ValidationException</code> error.</p>
     *  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetDepartureTime() const{ return m_departureTime; }

    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>Setting a departure
     * time in the past returns a <code>400 ValidationException</code> error.</p>
     *  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }

    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>Setting a departure
     * time in the past returns a <code>400 ValidationException</code> error.</p>
     *  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline void SetDepartureTime(const Aws::Utils::DateTime& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }

    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>Setting a departure
     * time in the past returns a <code>400 ValidationException</code> error.</p>
     *  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline void SetDepartureTime(Aws::Utils::DateTime&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }

    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>Setting a departure
     * time in the past returns a <code>400 ValidationException</code> error.</p>
     *  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline CalculateRouteRequest& WithDepartureTime(const Aws::Utils::DateTime& value) { SetDepartureTime(value); return *this;}

    /**
     * <p>Specifies the desired time of departure. Uses the given time to calculate the
     * route. Otherwise, the best time of day to travel with the best traffic
     * conditions is used to calculate the route.</p>  <p>Setting a departure
     * time in the past returns a <code>400 ValidationException</code> error.</p>
     *  <ul> <li> <p>In <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline CalculateRouteRequest& WithDepartureTime(Aws::Utils::DateTime&& value) { SetDepartureTime(std::move(value)); return *this;}


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
    inline bool DestinationPositionHasBeenSet() const { return m_destinationPositionHasBeenSet; }

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
    inline void SetDestinationPosition(const Aws::Vector<double>& value) { m_destinationPositionHasBeenSet = true; m_destinationPosition = value; }

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
    inline void SetDestinationPosition(Aws::Vector<double>&& value) { m_destinationPositionHasBeenSet = true; m_destinationPosition = std::move(value); }

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
    inline CalculateRouteRequest& WithDestinationPosition(const Aws::Vector<double>& value) { SetDestinationPosition(value); return *this;}

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
    inline CalculateRouteRequest& WithDestinationPosition(Aws::Vector<double>&& value) { SetDestinationPosition(std::move(value)); return *this;}

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
    inline CalculateRouteRequest& AddDestinationPosition(double value) { m_destinationPositionHasBeenSet = true; m_destinationPosition.push_back(value); return *this; }


    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline CalculateRouteRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>Set the unit system to specify the distance.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline CalculateRouteRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>Set to include the geometry details in the result for each path between a
     * pair of positions.</p> <p>Default Value: <code>false</code> </p> <p>Valid
     * Values: <code>false</code> | <code>true</code> </p>
     */
    inline bool GetIncludeLegGeometry() const{ return m_includeLegGeometry; }

    /**
     * <p>Set to include the geometry details in the result for each path between a
     * pair of positions.</p> <p>Default Value: <code>false</code> </p> <p>Valid
     * Values: <code>false</code> | <code>true</code> </p>
     */
    inline bool IncludeLegGeometryHasBeenSet() const { return m_includeLegGeometryHasBeenSet; }

    /**
     * <p>Set to include the geometry details in the result for each path between a
     * pair of positions.</p> <p>Default Value: <code>false</code> </p> <p>Valid
     * Values: <code>false</code> | <code>true</code> </p>
     */
    inline void SetIncludeLegGeometry(bool value) { m_includeLegGeometryHasBeenSet = true; m_includeLegGeometry = value; }

    /**
     * <p>Set to include the geometry details in the result for each path between a
     * pair of positions.</p> <p>Default Value: <code>false</code> </p> <p>Valid
     * Values: <code>false</code> | <code>true</code> </p>
     */
    inline CalculateRouteRequest& WithIncludeLegGeometry(bool value) { SetIncludeLegGeometry(value); return *this;}


    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, or <code>Walking</code> as options for the
     * <code>TravelMode</code>.</p> <p>The <code>TravelMode</code> you specify also
     * determines how you specify route preferences: </p> <ul> <li> <p>If traveling by
     * <code>Car</code> use the <code>CarModeOptions</code> parameter.</p> </li> <li>
     * <p>If traveling by <code>Truck</code> use the <code>TruckModeOptions</code>
     * parameter.</p> </li> </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline const TravelMode& GetTravelMode() const{ return m_travelMode; }

    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, or <code>Walking</code> as options for the
     * <code>TravelMode</code>.</p> <p>The <code>TravelMode</code> you specify also
     * determines how you specify route preferences: </p> <ul> <li> <p>If traveling by
     * <code>Car</code> use the <code>CarModeOptions</code> parameter.</p> </li> <li>
     * <p>If traveling by <code>Truck</code> use the <code>TruckModeOptions</code>
     * parameter.</p> </li> </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }

    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, or <code>Walking</code> as options for the
     * <code>TravelMode</code>.</p> <p>The <code>TravelMode</code> you specify also
     * determines how you specify route preferences: </p> <ul> <li> <p>If traveling by
     * <code>Car</code> use the <code>CarModeOptions</code> parameter.</p> </li> <li>
     * <p>If traveling by <code>Truck</code> use the <code>TruckModeOptions</code>
     * parameter.</p> </li> </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline void SetTravelMode(const TravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }

    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, or <code>Walking</code> as options for the
     * <code>TravelMode</code>.</p> <p>The <code>TravelMode</code> you specify also
     * determines how you specify route preferences: </p> <ul> <li> <p>If traveling by
     * <code>Car</code> use the <code>CarModeOptions</code> parameter.</p> </li> <li>
     * <p>If traveling by <code>Truck</code> use the <code>TruckModeOptions</code>
     * parameter.</p> </li> </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline void SetTravelMode(TravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }

    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, or <code>Walking</code> as options for the
     * <code>TravelMode</code>.</p> <p>The <code>TravelMode</code> you specify also
     * determines how you specify route preferences: </p> <ul> <li> <p>If traveling by
     * <code>Car</code> use the <code>CarModeOptions</code> parameter.</p> </li> <li>
     * <p>If traveling by <code>Truck</code> use the <code>TruckModeOptions</code>
     * parameter.</p> </li> </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline CalculateRouteRequest& WithTravelMode(const TravelMode& value) { SetTravelMode(value); return *this;}

    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility. You can choose <code>Car</code>,
     * <code>Truck</code>, or <code>Walking</code> as options for the
     * <code>TravelMode</code>.</p> <p>The <code>TravelMode</code> you specify also
     * determines how you specify route preferences: </p> <ul> <li> <p>If traveling by
     * <code>Car</code> use the <code>CarModeOptions</code> parameter.</p> </li> <li>
     * <p>If traveling by <code>Truck</code> use the <code>TruckModeOptions</code>
     * parameter.</p> </li> </ul> <p>Default Value: <code>Car</code> </p>
     */
    inline CalculateRouteRequest& WithTravelMode(TravelMode&& value) { SetTravelMode(std::move(value)); return *this;}


    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline const CalculateRouteTruckModeOptions& GetTruckModeOptions() const{ return m_truckModeOptions; }

    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline bool TruckModeOptionsHasBeenSet() const { return m_truckModeOptionsHasBeenSet; }

    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline void SetTruckModeOptions(const CalculateRouteTruckModeOptions& value) { m_truckModeOptionsHasBeenSet = true; m_truckModeOptions = value; }

    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline void SetTruckModeOptions(CalculateRouteTruckModeOptions&& value) { m_truckModeOptionsHasBeenSet = true; m_truckModeOptions = std::move(value); }

    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline CalculateRouteRequest& WithTruckModeOptions(const CalculateRouteTruckModeOptions& value) { SetTruckModeOptions(value); return *this;}

    /**
     * <p>Specifies route preferences when traveling by <code>Truck</code>, such as
     * avoiding routes that use ferries or tolls, and truck specifications to consider
     * when choosing an optimal road.</p> <p>Requirements: <code>TravelMode</code> must
     * be specified as <code>Truck</code>.</p>
     */
    inline CalculateRouteRequest& WithTruckModeOptions(CalculateRouteTruckModeOptions&& value) { SetTruckModeOptions(std::move(value)); return *this;}


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
    inline bool WaypointPositionsHasBeenSet() const { return m_waypointPositionsHasBeenSet; }

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
    inline void SetWaypointPositions(const Aws::Vector<Aws::Vector<double>>& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions = value; }

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
    inline void SetWaypointPositions(Aws::Vector<Aws::Vector<double>>&& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions = std::move(value); }

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
    inline CalculateRouteRequest& WithWaypointPositions(const Aws::Vector<Aws::Vector<double>>& value) { SetWaypointPositions(value); return *this;}

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
    inline CalculateRouteRequest& WithWaypointPositions(Aws::Vector<Aws::Vector<double>>&& value) { SetWaypointPositions(std::move(value)); return *this;}

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
    inline CalculateRouteRequest& AddWaypointPositions(const Aws::Vector<double>& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions.push_back(value); return *this; }

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
    inline CalculateRouteRequest& AddWaypointPositions(Aws::Vector<double>&& value) { m_waypointPositionsHasBeenSet = true; m_waypointPositions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    CalculateRouteCarModeOptions m_carModeOptions;
    bool m_carModeOptionsHasBeenSet = false;

    bool m_departNow;
    bool m_departNowHasBeenSet = false;

    Aws::Vector<double> m_departurePosition;
    bool m_departurePositionHasBeenSet = false;

    Aws::Utils::DateTime m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<double> m_destinationPosition;
    bool m_destinationPositionHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    bool m_includeLegGeometry;
    bool m_includeLegGeometryHasBeenSet = false;

    TravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    CalculateRouteTruckModeOptions m_truckModeOptions;
    bool m_truckModeOptionsHasBeenSet = false;

    Aws::Vector<Aws::Vector<double>> m_waypointPositions;
    bool m_waypointPositionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
