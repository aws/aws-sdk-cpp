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
   * <p>Details about the dynamic speed.</p> <p> <b>Unit</b>:
   * <code>KilometersPerHour</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteSpanDynamicSpeedDetails">AWS
   * API Reference</a></p>
   */
  class RouteSpanDynamicSpeedDetails
  {
  public:
    AWS_GEOROUTES_API RouteSpanDynamicSpeedDetails() = default;
    AWS_GEOROUTES_API RouteSpanDynamicSpeedDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteSpanDynamicSpeedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Estimated speed while traversing the span without traffic congestion.</p> <p>
     * <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetBestCaseSpeed() const { return m_bestCaseSpeed; }
    inline bool BestCaseSpeedHasBeenSet() const { return m_bestCaseSpeedHasBeenSet; }
    inline void SetBestCaseSpeed(double value) { m_bestCaseSpeedHasBeenSet = true; m_bestCaseSpeed = value; }
    inline RouteSpanDynamicSpeedDetails& WithBestCaseSpeed(double value) { SetBestCaseSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated time to turn from this span into the next. </p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetTurnDuration() const { return m_turnDuration; }
    inline bool TurnDurationHasBeenSet() const { return m_turnDurationHasBeenSet; }
    inline void SetTurnDuration(long long value) { m_turnDurationHasBeenSet = true; m_turnDuration = value; }
    inline RouteSpanDynamicSpeedDetails& WithTurnDuration(long long value) { SetTurnDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated speed while traversing the span under typical traffic
     * congestion.</p> <p> <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetTypicalSpeed() const { return m_typicalSpeed; }
    inline bool TypicalSpeedHasBeenSet() const { return m_typicalSpeedHasBeenSet; }
    inline void SetTypicalSpeed(double value) { m_typicalSpeedHasBeenSet = true; m_typicalSpeed = value; }
    inline RouteSpanDynamicSpeedDetails& WithTypicalSpeed(double value) { SetTypicalSpeed(value); return *this;}
    ///@}
  private:

    double m_bestCaseSpeed{0.0};
    bool m_bestCaseSpeedHasBeenSet = false;

    long long m_turnDuration{0};
    bool m_turnDurationHasBeenSet = false;

    double m_typicalSpeed{0.0};
    bool m_typicalSpeedHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
