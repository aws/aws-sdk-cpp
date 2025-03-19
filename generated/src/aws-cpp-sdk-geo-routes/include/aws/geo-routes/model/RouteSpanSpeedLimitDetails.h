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
   * <p>Details about the speed limit corresponding to the span.</p> <p> <b>Unit</b>:
   * <code>KilometersPerHour</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteSpanSpeedLimitDetails">AWS
   * API Reference</a></p>
   */
  class RouteSpanSpeedLimitDetails
  {
  public:
    AWS_GEOROUTES_API RouteSpanSpeedLimitDetails() = default;
    AWS_GEOROUTES_API RouteSpanSpeedLimitDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteSpanSpeedLimitDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum speed.</p> <p> <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetMaxSpeed() const { return m_maxSpeed; }
    inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
    inline void SetMaxSpeed(double value) { m_maxSpeedHasBeenSet = true; m_maxSpeed = value; }
    inline RouteSpanSpeedLimitDetails& WithMaxSpeed(double value) { SetMaxSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the span doesn't have a speed limit like the Autobahn.</p>
     */
    inline bool GetUnlimited() const { return m_unlimited; }
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }
    inline RouteSpanSpeedLimitDetails& WithUnlimited(bool value) { SetUnlimited(value); return *this;}
    ///@}
  private:

    double m_maxSpeed{0.0};
    bool m_maxSpeedHasBeenSet = false;

    bool m_unlimited{false};
    bool m_unlimitedHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
