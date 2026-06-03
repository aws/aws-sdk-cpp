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
 * <p>Summary including duration and distance for the entire leg.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitOverviewSummary">AWS
 * API Reference</a></p>
 */
class RouteTransitOverviewSummary {
 public:
  AWS_GEOROUTES_API RouteTransitOverviewSummary() = default;
  AWS_GEOROUTES_API RouteTransitOverviewSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitOverviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Distance of the entire leg.</p> <p> <b>Unit</b>: <code>meters</code> </p>
   */
  inline long long GetDistance() const { return m_distance; }
  inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
  inline void SetDistance(long long value) {
    m_distanceHasBeenSet = true;
    m_distance = value;
  }
  inline RouteTransitOverviewSummary& WithDistance(long long value) {
    SetDistance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Duration of the entire leg.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
   */
  inline long long GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(long long value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline RouteTransitOverviewSummary& WithDuration(long long value) {
    SetDuration(value);
    return *this;
  }
  ///@}
 private:
  long long m_distance{0};

  long long m_duration{0};
  bool m_distanceHasBeenSet = false;
  bool m_durationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
