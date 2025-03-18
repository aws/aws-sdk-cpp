/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RoutePedestrianOverviewSummary.h>
#include <aws/geo-routes/model/RoutePedestrianTravelOnlySummary.h>
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
   * <p>Summarized details for the leg including before travel, travel and after
   * travel steps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePedestrianSummary">AWS
   * API Reference</a></p>
   */
  class RoutePedestrianSummary
  {
  public:
    AWS_GEOROUTES_API RoutePedestrianSummary() = default;
    AWS_GEOROUTES_API RoutePedestrianSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Summarized details for the leg including before travel, travel and after
     * travel steps.</p>
     */
    inline const RoutePedestrianOverviewSummary& GetOverview() const { return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    template<typename OverviewT = RoutePedestrianOverviewSummary>
    void SetOverview(OverviewT&& value) { m_overviewHasBeenSet = true; m_overview = std::forward<OverviewT>(value); }
    template<typename OverviewT = RoutePedestrianOverviewSummary>
    RoutePedestrianSummary& WithOverview(OverviewT&& value) { SetOverview(std::forward<OverviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summarized details for the leg including travel steps only. The Distance for
     * the travel only portion of the journey is in meters</p>
     */
    inline const RoutePedestrianTravelOnlySummary& GetTravelOnly() const { return m_travelOnly; }
    inline bool TravelOnlyHasBeenSet() const { return m_travelOnlyHasBeenSet; }
    template<typename TravelOnlyT = RoutePedestrianTravelOnlySummary>
    void SetTravelOnly(TravelOnlyT&& value) { m_travelOnlyHasBeenSet = true; m_travelOnly = std::forward<TravelOnlyT>(value); }
    template<typename TravelOnlyT = RoutePedestrianTravelOnlySummary>
    RoutePedestrianSummary& WithTravelOnly(TravelOnlyT&& value) { SetTravelOnly(std::forward<TravelOnlyT>(value)); return *this;}
    ///@}
  private:

    RoutePedestrianOverviewSummary m_overview;
    bool m_overviewHasBeenSet = false;

    RoutePedestrianTravelOnlySummary m_travelOnly;
    bool m_travelOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
