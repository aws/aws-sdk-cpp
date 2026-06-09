/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTaxiOverviewSummary.h>
#include <aws/geo-routes/model/RouteTaxiTravelOnlySummary.h>

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
 * <p>Summary of the taxi leg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTaxiSummary">AWS
 * API Reference</a></p>
 */
class RouteTaxiSummary {
 public:
  AWS_GEOROUTES_API RouteTaxiSummary() = default;
  AWS_GEOROUTES_API RouteTaxiSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTaxiSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Summary including duration and distance for the entire leg.</p>
   */
  inline const RouteTaxiOverviewSummary& GetOverview() const { return m_overview; }
  inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
  template <typename OverviewT = RouteTaxiOverviewSummary>
  void SetOverview(OverviewT&& value) {
    m_overviewHasBeenSet = true;
    m_overview = std::forward<OverviewT>(value);
  }
  template <typename OverviewT = RouteTaxiOverviewSummary>
  RouteTaxiSummary& WithOverview(OverviewT&& value) {
    SetOverview(std::forward<OverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary including duration and distance for the travel portion of the leg
   * only.</p>
   */
  inline const RouteTaxiTravelOnlySummary& GetTravelOnly() const { return m_travelOnly; }
  inline bool TravelOnlyHasBeenSet() const { return m_travelOnlyHasBeenSet; }
  template <typename TravelOnlyT = RouteTaxiTravelOnlySummary>
  void SetTravelOnly(TravelOnlyT&& value) {
    m_travelOnlyHasBeenSet = true;
    m_travelOnly = std::forward<TravelOnlyT>(value);
  }
  template <typename TravelOnlyT = RouteTaxiTravelOnlySummary>
  RouteTaxiSummary& WithTravelOnly(TravelOnlyT&& value) {
    SetTravelOnly(std::forward<TravelOnlyT>(value));
    return *this;
  }
  ///@}
 private:
  RouteTaxiOverviewSummary m_overview;

  RouteTaxiTravelOnlySummary m_travelOnly;
  bool m_overviewHasBeenSet = false;
  bool m_travelOnlyHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
