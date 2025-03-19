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
   * <p>Summarized details of the route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleTravelOnlySummary">AWS
   * API Reference</a></p>
   */
  class RouteVehicleTravelOnlySummary
  {
  public:
    AWS_GEOROUTES_API RouteVehicleTravelOnlySummary() = default;
    AWS_GEOROUTES_API RouteVehicleTravelOnlySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleTravelOnlySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total duration in free flowing traffic, which is the best case or shortest
     * duration possible to cover the leg.</p> <p> <b>Unit</b>: <code>seconds</code>
     * </p>
     */
    inline long long GetBestCaseDuration() const { return m_bestCaseDuration; }
    inline bool BestCaseDurationHasBeenSet() const { return m_bestCaseDurationHasBeenSet; }
    inline void SetBestCaseDuration(long long value) { m_bestCaseDurationHasBeenSet = true; m_bestCaseDuration = value; }
    inline RouteVehicleTravelOnlySummary& WithBestCaseDuration(long long value) { SetBestCaseDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteVehicleTravelOnlySummary& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span under typical traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTypicalDuration() const { return m_typicalDuration; }
    inline bool TypicalDurationHasBeenSet() const { return m_typicalDurationHasBeenSet; }
    inline void SetTypicalDuration(long long value) { m_typicalDurationHasBeenSet = true; m_typicalDuration = value; }
    inline RouteVehicleTravelOnlySummary& WithTypicalDuration(long long value) { SetTypicalDuration(value); return *this;}
    ///@}
  private:

    long long m_bestCaseDuration{0};
    bool m_bestCaseDurationHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    long long m_typicalDuration{0};
    bool m_typicalDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
