/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/WaypointOptimizationFailedConstraint.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The impeding waypoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationImpedingWaypoint">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationImpedingWaypoint
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationImpedingWaypoint() = default;
    AWS_GEOROUTES_API WaypointOptimizationImpedingWaypoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationImpedingWaypoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Failed constraints for an impeding waypoint.</p>
     */
    inline const Aws::Vector<WaypointOptimizationFailedConstraint>& GetFailedConstraints() const { return m_failedConstraints; }
    inline bool FailedConstraintsHasBeenSet() const { return m_failedConstraintsHasBeenSet; }
    template<typename FailedConstraintsT = Aws::Vector<WaypointOptimizationFailedConstraint>>
    void SetFailedConstraints(FailedConstraintsT&& value) { m_failedConstraintsHasBeenSet = true; m_failedConstraints = std::forward<FailedConstraintsT>(value); }
    template<typename FailedConstraintsT = Aws::Vector<WaypointOptimizationFailedConstraint>>
    WaypointOptimizationImpedingWaypoint& WithFailedConstraints(FailedConstraintsT&& value) { SetFailedConstraints(std::forward<FailedConstraintsT>(value)); return *this;}
    template<typename FailedConstraintsT = WaypointOptimizationFailedConstraint>
    WaypointOptimizationImpedingWaypoint& AddFailedConstraints(FailedConstraintsT&& value) { m_failedConstraintsHasBeenSet = true; m_failedConstraints.emplace_back(std::forward<FailedConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The waypoint Id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WaypointOptimizationImpedingWaypoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    WaypointOptimizationImpedingWaypoint& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline WaypointOptimizationImpedingWaypoint& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<WaypointOptimizationFailedConstraint> m_failedConstraints;
    bool m_failedConstraintsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
