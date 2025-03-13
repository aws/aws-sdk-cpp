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
   * <p>Driving distance related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationDrivingDistanceOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationDrivingDistanceOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationDrivingDistanceOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationDrivingDistanceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationDrivingDistanceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>DrivingDistance assigns all the waypoints that are within driving distance of
     * each other into a single cluster.</p>
     */
    inline long long GetDrivingDistance() const { return m_drivingDistance; }
    inline bool DrivingDistanceHasBeenSet() const { return m_drivingDistanceHasBeenSet; }
    inline void SetDrivingDistance(long long value) { m_drivingDistanceHasBeenSet = true; m_drivingDistance = value; }
    inline WaypointOptimizationDrivingDistanceOptions& WithDrivingDistance(long long value) { SetDrivingDistance(value); return *this;}
    ///@}
  private:

    long long m_drivingDistance{0};
    bool m_drivingDistanceHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
