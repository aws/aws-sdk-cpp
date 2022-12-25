/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/LegGeometry.h>
#include <aws/location/model/Step.h>
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
   * <p>Contains the calculated route's details for each path between a pair of
   * positions. The number of legs returned corresponds to one fewer than the total
   * number of positions in the request. </p> <p>For example, a route with a
   * departure position and destination position returns one leg with the positions
   * <a
   * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
   * to a nearby road</a>:</p> <ul> <li> <p>The <code>StartPosition</code> is the
   * departure position.</p> </li> <li> <p>The <code>EndPosition</code> is the
   * destination position.</p> </li> </ul> <p>A route with a waypoint between the
   * departure and destination position returns two legs with the positions snapped
   * to a nearby road:</p> <ul> <li> <p>Leg 1: The <code>StartPosition</code> is the
   * departure position . The <code>EndPosition</code> is the waypoint positon.</p>
   * </li> <li> <p>Leg 2: The <code>StartPosition</code> is the waypoint position.
   * The <code>EndPosition</code> is the destination position.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/Leg">AWS API
   * Reference</a></p>
   */
  class Leg
  {
  public:
    AWS_LOCATIONSERVICE_API Leg();
    AWS_LOCATIONSERVICE_API Leg(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Leg& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The distance between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code> along a calculated route. </p> <ul> <li> <p>The default
     * measurement is <code>Kilometers</code> unless the request specifies a
     * <code>DistanceUnit</code> of <code>Miles</code>.</p> </li> </ul>
     */
    inline double GetDistance() const{ return m_distance; }

    /**
     * <p>The distance between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code> along a calculated route. </p> <ul> <li> <p>The default
     * measurement is <code>Kilometers</code> unless the request specifies a
     * <code>DistanceUnit</code> of <code>Miles</code>.</p> </li> </ul>
     */
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }

    /**
     * <p>The distance between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code> along a calculated route. </p> <ul> <li> <p>The default
     * measurement is <code>Kilometers</code> unless the request specifies a
     * <code>DistanceUnit</code> of <code>Miles</code>.</p> </li> </ul>
     */
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }

    /**
     * <p>The distance between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code> along a calculated route. </p> <ul> <li> <p>The default
     * measurement is <code>Kilometers</code> unless the request specifies a
     * <code>DistanceUnit</code> of <code>Miles</code>.</p> </li> </ul>
     */
    inline Leg& WithDistance(double value) { SetDistance(value); return *this;}


    /**
     * <p>The estimated travel time between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code>. The travel mode and departure time that you specify in
     * the request determines the calculated time.</p>
     */
    inline double GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The estimated travel time between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code>. The travel mode and departure time that you specify in
     * the request determines the calculated time.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The estimated travel time between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code>. The travel mode and departure time that you specify in
     * the request determines the calculated time.</p>
     */
    inline void SetDurationSeconds(double value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The estimated travel time between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code>. The travel mode and departure time that you specify in
     * the request determines the calculated time.</p>
     */
    inline Leg& WithDurationSeconds(double value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline const Aws::Vector<double>& GetEndPosition() const{ return m_endPosition; }

    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline bool EndPositionHasBeenSet() const { return m_endPositionHasBeenSet; }

    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline void SetEndPosition(const Aws::Vector<double>& value) { m_endPositionHasBeenSet = true; m_endPosition = value; }

    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline void SetEndPosition(Aws::Vector<double>&& value) { m_endPositionHasBeenSet = true; m_endPosition = std::move(value); }

    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline Leg& WithEndPosition(const Aws::Vector<double>& value) { SetEndPosition(value); return *this;}

    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline Leg& WithEndPosition(Aws::Vector<double>&& value) { SetEndPosition(std::move(value)); return *this;}

    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline Leg& AddEndPosition(double value) { m_endPositionHasBeenSet = true; m_endPosition.push_back(value); return *this; }


    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline const LegGeometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline void SetGeometry(const LegGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline void SetGeometry(LegGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline Leg& WithGeometry(const LegGeometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline Leg& WithGeometry(LegGeometry&& value) { SetGeometry(std::move(value)); return *this;}


    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline const Aws::Vector<double>& GetStartPosition() const{ return m_startPosition; }

    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }

    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline void SetStartPosition(const Aws::Vector<double>& value) { m_startPositionHasBeenSet = true; m_startPosition = value; }

    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline void SetStartPosition(Aws::Vector<double>&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::move(value); }

    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline Leg& WithStartPosition(const Aws::Vector<double>& value) { SetStartPosition(value); return *this;}

    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline Leg& WithStartPosition(Aws::Vector<double>&& value) { SetStartPosition(std::move(value)); return *this;}

    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline Leg& AddStartPosition(double value) { m_startPositionHasBeenSet = true; m_startPosition.push_back(value); return *this; }


    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline void SetSteps(const Aws::Vector<Step>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline void SetSteps(Aws::Vector<Step>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline Leg& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline Leg& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline Leg& AddSteps(const Step& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline Leg& AddSteps(Step&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    double m_distance;
    bool m_distanceHasBeenSet = false;

    double m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    Aws::Vector<double> m_endPosition;
    bool m_endPositionHasBeenSet = false;

    LegGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::Vector<double> m_startPosition;
    bool m_startPositionHasBeenSet = false;

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
