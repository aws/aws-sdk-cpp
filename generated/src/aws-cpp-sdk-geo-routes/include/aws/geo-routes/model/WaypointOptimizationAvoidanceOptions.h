/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceArea.h>
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
   * <p>Specifies options for areas to avoid. This is a best-effort avoidance
   * setting, meaning the router will try to honor the avoidance preferences but may
   * still include restricted areas if no feasible alternative route exists. If
   * avoidance options are not followed, the response will indicate that the
   * avoidance criteria were violated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationAvoidanceOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationAvoidanceOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Areas to be avoided.</p>
     */
    inline const Aws::Vector<WaypointOptimizationAvoidanceArea>& GetAreas() const { return m_areas; }
    inline bool AreasHasBeenSet() const { return m_areasHasBeenSet; }
    template<typename AreasT = Aws::Vector<WaypointOptimizationAvoidanceArea>>
    void SetAreas(AreasT&& value) { m_areasHasBeenSet = true; m_areas = std::forward<AreasT>(value); }
    template<typename AreasT = Aws::Vector<WaypointOptimizationAvoidanceArea>>
    WaypointOptimizationAvoidanceOptions& WithAreas(AreasT&& value) { SetAreas(std::forward<AreasT>(value)); return *this;}
    template<typename AreasT = WaypointOptimizationAvoidanceArea>
    WaypointOptimizationAvoidanceOptions& AddAreas(AreasT&& value) { m_areasHasBeenSet = true; m_areas.emplace_back(std::forward<AreasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Avoidance options for cars-shuttles-trains.</p>
     */
    inline bool GetCarShuttleTrains() const { return m_carShuttleTrains; }
    inline bool CarShuttleTrainsHasBeenSet() const { return m_carShuttleTrainsHasBeenSet; }
    inline void SetCarShuttleTrains(bool value) { m_carShuttleTrainsHasBeenSet = true; m_carShuttleTrains = value; }
    inline WaypointOptimizationAvoidanceOptions& WithCarShuttleTrains(bool value) { SetCarShuttleTrains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid controlled access highways while calculating the route.</p>
     */
    inline bool GetControlledAccessHighways() const { return m_controlledAccessHighways; }
    inline bool ControlledAccessHighwaysHasBeenSet() const { return m_controlledAccessHighwaysHasBeenSet; }
    inline void SetControlledAccessHighways(bool value) { m_controlledAccessHighwaysHasBeenSet = true; m_controlledAccessHighways = value; }
    inline WaypointOptimizationAvoidanceOptions& WithControlledAccessHighways(bool value) { SetControlledAccessHighways(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid dirt roads while calculating the route.</p>
     */
    inline bool GetDirtRoads() const { return m_dirtRoads; }
    inline bool DirtRoadsHasBeenSet() const { return m_dirtRoadsHasBeenSet; }
    inline void SetDirtRoads(bool value) { m_dirtRoadsHasBeenSet = true; m_dirtRoads = value; }
    inline WaypointOptimizationAvoidanceOptions& WithDirtRoads(bool value) { SetDirtRoads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoidance options for ferries.</p>
     */
    inline bool GetFerries() const { return m_ferries; }
    inline bool FerriesHasBeenSet() const { return m_ferriesHasBeenSet; }
    inline void SetFerries(bool value) { m_ferriesHasBeenSet = true; m_ferries = value; }
    inline WaypointOptimizationAvoidanceOptions& WithFerries(bool value) { SetFerries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoids roads where the specified toll transponders are the only mode of
     * payment.</p>
     */
    inline bool GetTollRoads() const { return m_tollRoads; }
    inline bool TollRoadsHasBeenSet() const { return m_tollRoadsHasBeenSet; }
    inline void SetTollRoads(bool value) { m_tollRoadsHasBeenSet = true; m_tollRoads = value; }
    inline WaypointOptimizationAvoidanceOptions& WithTollRoads(bool value) { SetTollRoads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid tunnels while calculating the route.</p>
     */
    inline bool GetTunnels() const { return m_tunnels; }
    inline bool TunnelsHasBeenSet() const { return m_tunnelsHasBeenSet; }
    inline void SetTunnels(bool value) { m_tunnelsHasBeenSet = true; m_tunnels = value; }
    inline WaypointOptimizationAvoidanceOptions& WithTunnels(bool value) { SetTunnels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid U-turns for calculation on highways and motorways.</p>
     */
    inline bool GetUTurns() const { return m_uTurns; }
    inline bool UTurnsHasBeenSet() const { return m_uTurnsHasBeenSet; }
    inline void SetUTurns(bool value) { m_uTurnsHasBeenSet = true; m_uTurns = value; }
    inline WaypointOptimizationAvoidanceOptions& WithUTurns(bool value) { SetUTurns(value); return *this;}
    ///@}
  private:

    Aws::Vector<WaypointOptimizationAvoidanceArea> m_areas;
    bool m_areasHasBeenSet = false;

    bool m_carShuttleTrains{false};
    bool m_carShuttleTrainsHasBeenSet = false;

    bool m_controlledAccessHighways{false};
    bool m_controlledAccessHighwaysHasBeenSet = false;

    bool m_dirtRoads{false};
    bool m_dirtRoadsHasBeenSet = false;

    bool m_ferries{false};
    bool m_ferriesHasBeenSet = false;

    bool m_tollRoads{false};
    bool m_tollRoadsHasBeenSet = false;

    bool m_tunnels{false};
    bool m_tunnelsHasBeenSet = false;

    bool m_uTurns{false};
    bool m_uTurnsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
