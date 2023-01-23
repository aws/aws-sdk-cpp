/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/CalculateRouteSummary.h>
#include <aws/location/model/Leg.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  /**
   * <p>Returns the result of the route calculation. Metadata includes legs and route
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteResponse">AWS
   * API Reference</a></p>
   */
  class CalculateRouteResult
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteResult();
    AWS_LOCATIONSERVICE_API CalculateRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CalculateRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline const Aws::Vector<Leg>& GetLegs() const{ return m_legs; }

    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline void SetLegs(const Aws::Vector<Leg>& value) { m_legs = value; }

    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline void SetLegs(Aws::Vector<Leg>&& value) { m_legs = std::move(value); }

    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline CalculateRouteResult& WithLegs(const Aws::Vector<Leg>& value) { SetLegs(value); return *this;}

    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline CalculateRouteResult& WithLegs(Aws::Vector<Leg>&& value) { SetLegs(std::move(value)); return *this;}

    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline CalculateRouteResult& AddLegs(const Leg& value) { m_legs.push_back(value); return *this; }

    /**
     * <p>Contains details about each path between a pair of positions included along a
     * route such as: <code>StartPosition</code>, <code>EndPosition</code>,
     * <code>Distance</code>, <code>DurationSeconds</code>, <code>Geometry</code>, and
     * <code>Steps</code>. The number of legs returned corresponds to one fewer than
     * the total number of positions in the request. </p> <p>For example, a route with
     * a departure position and destination position returns one leg with the positions
     * <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
     * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
     * destination position.</p> </li> </ul> <p>A route with a waypoint between the
     * departure and destination position returns two legs with the positions snapped
     * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
     * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
     * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
     * The <code>EndPosition</code> is the destination position.</p> </li> </ul>
     */
    inline CalculateRouteResult& AddLegs(Leg&& value) { m_legs.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains information about the whole route, such as: <code>RouteBBox</code>,
     * <code>DataSource</code>, <code>Distance</code>, <code>DistanceUnit</code>, and
     * <code>DurationSeconds</code>.</p>
     */
    inline const CalculateRouteSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Contains information about the whole route, such as: <code>RouteBBox</code>,
     * <code>DataSource</code>, <code>Distance</code>, <code>DistanceUnit</code>, and
     * <code>DurationSeconds</code>.</p>
     */
    inline void SetSummary(const CalculateRouteSummary& value) { m_summary = value; }

    /**
     * <p>Contains information about the whole route, such as: <code>RouteBBox</code>,
     * <code>DataSource</code>, <code>Distance</code>, <code>DistanceUnit</code>, and
     * <code>DurationSeconds</code>.</p>
     */
    inline void SetSummary(CalculateRouteSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Contains information about the whole route, such as: <code>RouteBBox</code>,
     * <code>DataSource</code>, <code>Distance</code>, <code>DistanceUnit</code>, and
     * <code>DurationSeconds</code>.</p>
     */
    inline CalculateRouteResult& WithSummary(const CalculateRouteSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Contains information about the whole route, such as: <code>RouteBBox</code>,
     * <code>DataSource</code>, <code>Distance</code>, <code>DistanceUnit</code>, and
     * <code>DurationSeconds</code>.</p>
     */
    inline CalculateRouteResult& WithSummary(CalculateRouteSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::Vector<Leg> m_legs;

    CalculateRouteSummary m_summary;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
