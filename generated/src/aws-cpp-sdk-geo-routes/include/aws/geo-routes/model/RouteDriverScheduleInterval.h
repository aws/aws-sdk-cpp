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
   * <p>Interval of the driver work-rest schedule. Stops are added to fulfil the
   * provided rest schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteDriverScheduleInterval">AWS
   * API Reference</a></p>
   */
  class RouteDriverScheduleInterval
  {
  public:
    AWS_GEOROUTES_API RouteDriverScheduleInterval() = default;
    AWS_GEOROUTES_API RouteDriverScheduleInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteDriverScheduleInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum allowed driving time before stopping to rest.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDriveDuration() const { return m_driveDuration; }
    inline bool DriveDurationHasBeenSet() const { return m_driveDurationHasBeenSet; }
    inline void SetDriveDuration(long long value) { m_driveDurationHasBeenSet = true; m_driveDuration = value; }
    inline RouteDriverScheduleInterval& WithDriveDuration(long long value) { SetDriveDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resting time before the driver can continue driving.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetRestDuration() const { return m_restDuration; }
    inline bool RestDurationHasBeenSet() const { return m_restDurationHasBeenSet; }
    inline void SetRestDuration(long long value) { m_restDurationHasBeenSet = true; m_restDuration = value; }
    inline RouteDriverScheduleInterval& WithRestDuration(long long value) { SetRestDuration(value); return *this;}
    ///@}
  private:

    long long m_driveDuration{0};
    bool m_driveDurationHasBeenSet = false;

    long long m_restDuration{0};
    bool m_restDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
