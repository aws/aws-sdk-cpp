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
   * <p>Time breakdown for the sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationTimeBreakdown">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationTimeBreakdown
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationTimeBreakdown() = default;
    AWS_GEOROUTES_API WaypointOptimizationTimeBreakdown(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationTimeBreakdown& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resting phase of the cycle.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetRestDuration() const { return m_restDuration; }
    inline bool RestDurationHasBeenSet() const { return m_restDurationHasBeenSet; }
    inline void SetRestDuration(long long value) { m_restDurationHasBeenSet = true; m_restDuration = value; }
    inline WaypointOptimizationTimeBreakdown& WithRestDuration(long long value) { SetRestDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Service time spent at the destination. At an appointment, the service time
     * should be the appointment duration.</p> <p> <b>Unit</b>: <code>seconds</code>
     * </p>
     */
    inline long long GetServiceDuration() const { return m_serviceDuration; }
    inline bool ServiceDurationHasBeenSet() const { return m_serviceDurationHasBeenSet; }
    inline void SetServiceDuration(long long value) { m_serviceDurationHasBeenSet = true; m_serviceDuration = value; }
    inline WaypointOptimizationTimeBreakdown& WithServiceDuration(long long value) { SetServiceDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traveling phase of the cycle.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTravelDuration() const { return m_travelDuration; }
    inline bool TravelDurationHasBeenSet() const { return m_travelDurationHasBeenSet; }
    inline void SetTravelDuration(long long value) { m_travelDurationHasBeenSet = true; m_travelDuration = value; }
    inline WaypointOptimizationTimeBreakdown& WithTravelDuration(long long value) { SetTravelDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Waiting phase of the cycle.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetWaitDuration() const { return m_waitDuration; }
    inline bool WaitDurationHasBeenSet() const { return m_waitDurationHasBeenSet; }
    inline void SetWaitDuration(long long value) { m_waitDurationHasBeenSet = true; m_waitDuration = value; }
    inline WaypointOptimizationTimeBreakdown& WithWaitDuration(long long value) { SetWaitDuration(value); return *this;}
    ///@}
  private:

    long long m_restDuration{0};
    bool m_restDurationHasBeenSet = false;

    long long m_serviceDuration{0};
    bool m_serviceDurationHasBeenSet = false;

    long long m_travelDuration{0};
    bool m_travelDurationHasBeenSet = false;

    long long m_waitDuration{0};
    bool m_waitDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
