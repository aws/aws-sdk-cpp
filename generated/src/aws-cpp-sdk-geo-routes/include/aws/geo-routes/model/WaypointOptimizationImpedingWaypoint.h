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
    AWS_GEOROUTES_API WaypointOptimizationImpedingWaypoint();
    AWS_GEOROUTES_API WaypointOptimizationImpedingWaypoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationImpedingWaypoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Failed constraints for an impeding waypoint.</p>
     */
    inline const Aws::Vector<WaypointOptimizationFailedConstraint>& GetFailedConstraints() const{ return m_failedConstraints; }
    inline bool FailedConstraintsHasBeenSet() const { return m_failedConstraintsHasBeenSet; }
    inline void SetFailedConstraints(const Aws::Vector<WaypointOptimizationFailedConstraint>& value) { m_failedConstraintsHasBeenSet = true; m_failedConstraints = value; }
    inline void SetFailedConstraints(Aws::Vector<WaypointOptimizationFailedConstraint>&& value) { m_failedConstraintsHasBeenSet = true; m_failedConstraints = std::move(value); }
    inline WaypointOptimizationImpedingWaypoint& WithFailedConstraints(const Aws::Vector<WaypointOptimizationFailedConstraint>& value) { SetFailedConstraints(value); return *this;}
    inline WaypointOptimizationImpedingWaypoint& WithFailedConstraints(Aws::Vector<WaypointOptimizationFailedConstraint>&& value) { SetFailedConstraints(std::move(value)); return *this;}
    inline WaypointOptimizationImpedingWaypoint& AddFailedConstraints(const WaypointOptimizationFailedConstraint& value) { m_failedConstraintsHasBeenSet = true; m_failedConstraints.push_back(value); return *this; }
    inline WaypointOptimizationImpedingWaypoint& AddFailedConstraints(WaypointOptimizationFailedConstraint&& value) { m_failedConstraintsHasBeenSet = true; m_failedConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The waypoint Id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WaypointOptimizationImpedingWaypoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WaypointOptimizationImpedingWaypoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WaypointOptimizationImpedingWaypoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline WaypointOptimizationImpedingWaypoint& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline WaypointOptimizationImpedingWaypoint& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
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
