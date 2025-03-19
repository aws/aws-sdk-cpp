/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/TrafficUsage.h>
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
   * <p>Options related to traffic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationTrafficOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationTrafficOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationTrafficOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationTrafficOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationTrafficOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines if traffic should be used or ignored while calculating the
     * route.</p> <p>Default Value: <code>UseTrafficData</code> </p>
     */
    inline TrafficUsage GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(TrafficUsage value) { m_usageHasBeenSet = true; m_usage = value; }
    inline WaypointOptimizationTrafficOptions& WithUsage(TrafficUsage value) { SetUsage(value); return *this;}
    ///@}
  private:

    TrafficUsage m_usage{TrafficUsage::NOT_SET};
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
