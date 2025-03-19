/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Represents an element of a leg within a route. A step contains instructions
   * for how to move to the next step in the leg. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/Step">AWS API
   * Reference</a></p>
   */
  class Step
  {
  public:
    AWS_LOCATIONSERVICE_API Step() = default;
    AWS_LOCATIONSERVICE_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting position of a step. If the position is the first step in the
     * leg, this position is the same as the start position of the leg.</p>
     */
    inline const Aws::Vector<double>& GetStartPosition() const { return m_startPosition; }
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }
    template<typename StartPositionT = Aws::Vector<double>>
    void SetStartPosition(StartPositionT&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::forward<StartPositionT>(value); }
    template<typename StartPositionT = Aws::Vector<double>>
    Step& WithStartPosition(StartPositionT&& value) { SetStartPosition(std::forward<StartPositionT>(value)); return *this;}
    inline Step& AddStartPosition(double value) { m_startPositionHasBeenSet = true; m_startPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The end position of a step. If the position the last step in the leg, this
     * position is the same as the end position of the leg.</p>
     */
    inline const Aws::Vector<double>& GetEndPosition() const { return m_endPosition; }
    inline bool EndPositionHasBeenSet() const { return m_endPositionHasBeenSet; }
    template<typename EndPositionT = Aws::Vector<double>>
    void SetEndPosition(EndPositionT&& value) { m_endPositionHasBeenSet = true; m_endPosition = std::forward<EndPositionT>(value); }
    template<typename EndPositionT = Aws::Vector<double>>
    Step& WithEndPosition(EndPositionT&& value) { SetEndPosition(std::forward<EndPositionT>(value)); return *this;}
    inline Step& AddEndPosition(double value) { m_endPositionHasBeenSet = true; m_endPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The travel distance between the step's <code>StartPosition</code> and
     * <code>EndPosition</code>.</p>
     */
    inline double GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline Step& WithDistance(double value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated travel time, in seconds, from the step's
     * <code>StartPosition</code> to the <code>EndPosition</code>. . The travel mode
     * and departure time that you specify in the request determines the calculated
     * time.</p>
     */
    inline double GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(double value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline Step& WithDurationSeconds(double value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the start position, or index, in a sequence of steps within the
     * leg's line string geometry. For example, the index of the first step in a leg
     * geometry is <code>0</code>. </p> <p>Included in the response for queries that
     * set <code>IncludeLegGeometry</code> to <code>True</code>. </p>
     */
    inline int GetGeometryOffset() const { return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline Step& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
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

    int m_geometryOffset{0};
    bool m_geometryOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
