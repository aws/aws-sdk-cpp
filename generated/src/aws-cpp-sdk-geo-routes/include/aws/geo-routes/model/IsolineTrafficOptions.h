/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/TrafficUsage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Controls how real-time and historical traffic data is used when calculating
 * reachable areas. This affects both the size and shape of isolines by accounting
 * for expected travel speeds based on congestion patterns.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineTrafficOptions">AWS
 * API Reference</a></p>
 */
class IsolineTrafficOptions {
 public:
  AWS_GEOROUTES_API IsolineTrafficOptions() = default;
  AWS_GEOROUTES_API IsolineTrafficOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineTrafficOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration in seconds that real-time congestion data is considered valid
   * before reverting to historical traffic patterns. This helps balance between
   * using current conditions and more predictable historical data when calculating
   * travel times.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
   */
  inline long long GetFlowEventThresholdOverride() const { return m_flowEventThresholdOverride; }
  inline bool FlowEventThresholdOverrideHasBeenSet() const { return m_flowEventThresholdOverrideHasBeenSet; }
  inline void SetFlowEventThresholdOverride(long long value) {
    m_flowEventThresholdOverrideHasBeenSet = true;
    m_flowEventThresholdOverride = value;
  }
  inline IsolineTrafficOptions& WithFlowEventThresholdOverride(long long value) {
    SetFlowEventThresholdOverride(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls whether traffic data is used in calculations.
   * <code>UseTrafficData</code> considers both real-time congestion and historical
   * patterns, while <code>IgnoreTrafficData</code> calculates routes based solely on
   * road types and speed limits. Using traffic data provides more accurate
   * real-world estimates but may produce different results at different times of
   * day.</p> <p>Default value: <code>UseTrafficData</code> </p>
   */
  inline TrafficUsage GetUsage() const { return m_usage; }
  inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
  inline void SetUsage(TrafficUsage value) {
    m_usageHasBeenSet = true;
    m_usage = value;
  }
  inline IsolineTrafficOptions& WithUsage(TrafficUsage value) {
    SetUsage(value);
    return *this;
  }
  ///@}
 private:
  long long m_flowEventThresholdOverride{0};

  TrafficUsage m_usage{TrafficUsage::NOT_SET};
  bool m_flowEventThresholdOverrideHasBeenSet = false;
  bool m_usageHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
