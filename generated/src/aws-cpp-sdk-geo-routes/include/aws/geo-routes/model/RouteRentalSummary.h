/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteRentalOverviewSummary.h>
#include <aws/geo-routes/model/RouteRentalTravelOnlySummary.h>

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
 * <p>Summary of the rental leg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteRentalSummary">AWS
 * API Reference</a></p>
 */
class RouteRentalSummary {
 public:
  AWS_GEOROUTES_API RouteRentalSummary() = default;
  AWS_GEOROUTES_API RouteRentalSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteRentalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Summary including duration and distance for the entire leg.</p>
   */
  inline const RouteRentalOverviewSummary& GetOverview() const { return m_overview; }
  inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
  template <typename OverviewT = RouteRentalOverviewSummary>
  void SetOverview(OverviewT&& value) {
    m_overviewHasBeenSet = true;
    m_overview = std::forward<OverviewT>(value);
  }
  template <typename OverviewT = RouteRentalOverviewSummary>
  RouteRentalSummary& WithOverview(OverviewT&& value) {
    SetOverview(std::forward<OverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary including duration and distance for the travel portion of the leg
   * only.</p>
   */
  inline const RouteRentalTravelOnlySummary& GetTravelOnly() const { return m_travelOnly; }
  inline bool TravelOnlyHasBeenSet() const { return m_travelOnlyHasBeenSet; }
  template <typename TravelOnlyT = RouteRentalTravelOnlySummary>
  void SetTravelOnly(TravelOnlyT&& value) {
    m_travelOnlyHasBeenSet = true;
    m_travelOnly = std::forward<TravelOnlyT>(value);
  }
  template <typename TravelOnlyT = RouteRentalTravelOnlySummary>
  RouteRentalSummary& WithTravelOnly(TravelOnlyT&& value) {
    SetTravelOnly(std::forward<TravelOnlyT>(value));
    return *this;
  }
  ///@}
 private:
  RouteRentalOverviewSummary m_overview;

  RouteRentalTravelOnlySummary m_travelOnly;
  bool m_overviewHasBeenSet = false;
  bool m_travelOnlyHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
