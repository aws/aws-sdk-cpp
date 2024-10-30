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
    AWS_GEOROUTES_API WaypointOptimizationRestCycles();
    AWS_GEOROUTES_API WaypointOptimizationRestCycles(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationRestCycles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Long cycle for a driver work-rest schedule.</p>
     */
    inline const WaypointOptimizationRestCycleDurations& GetLongCycle() const{ return m_longCycle; }
    inline bool LongCycleHasBeenSet() const { return m_longCycleHasBeenSet; }
    inline void SetLongCycle(const WaypointOptimizationRestCycleDurations& value) { m_longCycleHasBeenSet = true; m_longCycle = value; }
    inline void SetLongCycle(WaypointOptimizationRestCycleDurations&& value) { m_longCycleHasBeenSet = true; m_longCycle = std::move(value); }
    inline WaypointOptimizationRestCycles& WithLongCycle(const WaypointOptimizationRestCycleDurations& value) { SetLongCycle(value); return *this;}
    inline WaypointOptimizationRestCycles& WithLongCycle(WaypointOptimizationRestCycleDurations&& value) { SetLongCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Short cycle for a driver work-rest schedule</p>
     */
    inline const WaypointOptimizationRestCycleDurations& GetShortCycle() const{ return m_shortCycle; }
    inline bool ShortCycleHasBeenSet() const { return m_shortCycleHasBeenSet; }
    inline void SetShortCycle(const WaypointOptimizationRestCycleDurations& value) { m_shortCycleHasBeenSet = true; m_shortCycle = value; }
    inline void SetShortCycle(WaypointOptimizationRestCycleDurations&& value) { m_shortCycleHasBeenSet = true; m_shortCycle = std::move(value); }
    inline WaypointOptimizationRestCycles& WithShortCycle(const WaypointOptimizationRestCycleDurations& value) { SetShortCycle(value); return *this;}
    inline WaypointOptimizationRestCycles& WithShortCycle(WaypointOptimizationRestCycleDurations&& value) { SetShortCycle(std::move(value)); return *this;}
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
