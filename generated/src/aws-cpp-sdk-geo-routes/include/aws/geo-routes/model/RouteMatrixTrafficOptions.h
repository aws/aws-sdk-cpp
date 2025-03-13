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
   * <p>Traffic related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixTrafficOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixTrafficOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixTrafficOptions() = default;
    AWS_GEOROUTES_API RouteMatrixTrafficOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixTrafficOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration for which flow traffic is considered valid. For this period, the
     * flow traffic is used over historical traffic data. Flow traffic refers to
     * congestion, which changes very quickly. Duration in seconds for which flow
     * traffic event would be considered valid. While flow traffic event is valid it
     * will be used over the historical traffic data. </p>
     */
    inline long long GetFlowEventThresholdOverride() const { return m_flowEventThresholdOverride; }
    inline bool FlowEventThresholdOverrideHasBeenSet() const { return m_flowEventThresholdOverrideHasBeenSet; }
    inline void SetFlowEventThresholdOverride(long long value) { m_flowEventThresholdOverrideHasBeenSet = true; m_flowEventThresholdOverride = value; }
    inline RouteMatrixTrafficOptions& WithFlowEventThresholdOverride(long long value) { SetFlowEventThresholdOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if traffic should be used or ignored while calculating the
     * route.</p> <p>Default Value: <code>UseTrafficData</code> </p>
     */
    inline TrafficUsage GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(TrafficUsage value) { m_usageHasBeenSet = true; m_usage = value; }
    inline RouteMatrixTrafficOptions& WithUsage(TrafficUsage value) { SetUsage(value); return *this;}
    ///@}
  private:

    long long m_flowEventThresholdOverride{0};
    bool m_flowEventThresholdOverrideHasBeenSet = false;

    TrafficUsage m_usage{TrafficUsage::NOT_SET};
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
