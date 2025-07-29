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
   * href="https://docs.aws.amazon.com/location/previous/developerguide/snap-to-nearby-road.html">snapped
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
    AWS_LOCATIONSERVICE_API Leg() = default;
    AWS_LOCATIONSERVICE_API Leg(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Leg& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the
     * <code>StartPosition</code> isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/snap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline const Aws::Vector<double>& GetStartPosition() const { return m_startPosition; }
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }
    template<typename StartPositionT = Aws::Vector<double>>
    void SetStartPosition(StartPositionT&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::forward<StartPositionT>(value); }
    template<typename StartPositionT = Aws::Vector<double>>
    Leg& WithStartPosition(StartPositionT&& value) { SetStartPosition(std::forward<StartPositionT>(value)); return *this;}
    inline Leg& AddStartPosition(double value) { m_startPositionHasBeenSet = true; m_startPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The terminating position of the leg. Follows the format
     * <code>[longitude,latitude]</code>.</p>  <p>If the <code>EndPosition</code>
     * isn't located on a road, it's <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/nap-to-nearby-road.html">snapped
     * to a nearby road</a>. </p> 
     */
    inline const Aws::Vector<double>& GetEndPosition() const { return m_endPosition; }
    inline bool EndPositionHasBeenSet() const { return m_endPositionHasBeenSet; }
    template<typename EndPositionT = Aws::Vector<double>>
    void SetEndPosition(EndPositionT&& value) { m_endPositionHasBeenSet = true; m_endPosition = std::forward<EndPositionT>(value); }
    template<typename EndPositionT = Aws::Vector<double>>
    Leg& WithEndPosition(EndPositionT&& value) { SetEndPosition(std::forward<EndPositionT>(value)); return *this;}
    inline Leg& AddEndPosition(double value) { m_endPositionHasBeenSet = true; m_endPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distance between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code> along a calculated route. </p> <ul> <li> <p>The default
     * measurement is <code>Kilometers</code> unless the request specifies a
     * <code>DistanceUnit</code> of <code>Miles</code>.</p> </li> </ul>
     */
    inline double GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline Leg& WithDistance(double value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated travel time between the leg's <code>StartPosition</code> and
     * <code>EndPosition</code>. The travel mode and departure time that you specify in
     * the request determines the calculated time.</p>
     */
    inline double GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(double value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline Leg& WithDurationSeconds(double value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the calculated route's path as a linestring geometry.</p>
     */
    inline const LegGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = LegGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = LegGeometry>
    Leg& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of steps, which represent subsections of a leg. Each step
     * provides instructions for how to move to the next step in the leg such as the
     * step's start position, end position, travel distance, travel duration, and
     * geometry offset.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<Step>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<Step>>
    Leg& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = Step>
    Leg& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_startPosition;
    bool m_startPositionHasBeenSet = false;

    Aws::Vector<double> m_endPosition;
    bool m_endPositionHasBeenSet = false;

    double m_distance{0.0};
    bool m_distanceHasBeenSet = false;

    double m_durationSeconds{0.0};
    bool m_durationSecondsHasBeenSet = false;

    LegGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
