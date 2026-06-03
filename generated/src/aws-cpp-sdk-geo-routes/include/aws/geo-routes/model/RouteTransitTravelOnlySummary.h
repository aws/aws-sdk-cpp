/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

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
 * <p>Summary including duration and distance for the travel portion of the leg
 * only.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitTravelOnlySummary">AWS
 * API Reference</a></p>
 */
class RouteTransitTravelOnlySummary {
 public:
  AWS_GEOROUTES_API RouteTransitTravelOnlySummary() = default;
  AWS_GEOROUTES_API RouteTransitTravelOnlySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitTravelOnlySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Duration of the travel portion of the transit leg.</p> <p> <b>Unit</b>:
   * <code>seconds</code> </p>
   */
  inline long long GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(long long value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline RouteTransitTravelOnlySummary& WithDuration(long long value) {
    SetDuration(value);
    return *this;
  }
  ///@}
 private:
  long long m_duration{0};
  bool m_durationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
