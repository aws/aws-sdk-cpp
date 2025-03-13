/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

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
   * <p>Driver work-rest schedules defined by a short and long cycle. A rest needs to
   * be taken after the short work duration. The short cycle can be repeated until
   * you hit the long work duration, at which point the long rest duration should be
   * taken before restarting.</p> <p> <b>Unit</b>: <code>seconds</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationRestCycleDurations">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationRestCycleDurations
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationRestCycleDurations() = default;
    AWS_GEOROUTES_API WaypointOptimizationRestCycleDurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationRestCycleDurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resting phase of the cycle.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetRestDuration() const { return m_restDuration; }
    inline bool RestDurationHasBeenSet() const { return m_restDurationHasBeenSet; }
    inline void SetRestDuration(long long value) { m_restDurationHasBeenSet = true; m_restDuration = value; }
    inline WaypointOptimizationRestCycleDurations& WithRestDuration(long long value) { SetRestDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Working phase of the cycle.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetWorkDuration() const { return m_workDuration; }
    inline bool WorkDurationHasBeenSet() const { return m_workDurationHasBeenSet; }
    inline void SetWorkDuration(long long value) { m_workDurationHasBeenSet = true; m_workDuration = value; }
    inline WaypointOptimizationRestCycleDurations& WithWorkDuration(long long value) { SetWorkDuration(value); return *this;}
    ///@}
  private:

    long long m_restDuration{0};
    bool m_restDurationHasBeenSet = false;

    long long m_workDuration{0};
    bool m_workDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
