/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationRestCycleDurations.h>
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
   * <p>Resting phase of the cycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationRestCycles">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationRestCycles
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationRestCycles() = default;
    AWS_GEOROUTES_API WaypointOptimizationRestCycles(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationRestCycles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Long cycle for a driver work-rest schedule.</p>
     */
    inline const WaypointOptimizationRestCycleDurations& GetLongCycle() const { return m_longCycle; }
    inline bool LongCycleHasBeenSet() const { return m_longCycleHasBeenSet; }
    template<typename LongCycleT = WaypointOptimizationRestCycleDurations>
    void SetLongCycle(LongCycleT&& value) { m_longCycleHasBeenSet = true; m_longCycle = std::forward<LongCycleT>(value); }
    template<typename LongCycleT = WaypointOptimizationRestCycleDurations>
    WaypointOptimizationRestCycles& WithLongCycle(LongCycleT&& value) { SetLongCycle(std::forward<LongCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Short cycle for a driver work-rest schedule</p>
     */
    inline const WaypointOptimizationRestCycleDurations& GetShortCycle() const { return m_shortCycle; }
    inline bool ShortCycleHasBeenSet() const { return m_shortCycleHasBeenSet; }
    template<typename ShortCycleT = WaypointOptimizationRestCycleDurations>
    void SetShortCycle(ShortCycleT&& value) { m_shortCycleHasBeenSet = true; m_shortCycle = std::forward<ShortCycleT>(value); }
    template<typename ShortCycleT = WaypointOptimizationRestCycleDurations>
    WaypointOptimizationRestCycles& WithShortCycle(ShortCycleT&& value) { SetShortCycle(std::forward<ShortCycleT>(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationRestCycleDurations m_longCycle;
    bool m_longCycleHasBeenSet = false;

    WaypointOptimizationRestCycleDurations m_shortCycle;
    bool m_shortCycleHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
