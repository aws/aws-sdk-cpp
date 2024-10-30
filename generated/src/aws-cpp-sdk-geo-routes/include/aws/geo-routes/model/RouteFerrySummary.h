/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteFerryOverviewSummary.h>
#include <aws/geo-routes/model/RouteFerryTravelOnlySummary.h>
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
   * <p>Summarized details for the leg including travel steps only. The Distance for
   * the travel only portion of the journey is the same as the Distance within the
   * Overview summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerrySummary">AWS
   * API Reference</a></p>
   */
  class RouteFerrySummary
  {
  public:
    AWS_GEOROUTES_API RouteFerrySummary();
    AWS_GEOROUTES_API RouteFerrySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerrySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Summarized details for the leg including before travel, travel and after
     * travel steps.</p>
     */
    inline const RouteFerryOverviewSummary& GetOverview() const{ return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    inline void SetOverview(const RouteFerryOverviewSummary& value) { m_overviewHasBeenSet = true; m_overview = value; }
    inline void SetOverview(RouteFerryOverviewSummary&& value) { m_overviewHasBeenSet = true; m_overview = std::move(value); }
    inline RouteFerrySummary& WithOverview(const RouteFerryOverviewSummary& value) { SetOverview(value); return *this;}
    inline RouteFerrySummary& WithOverview(RouteFerryOverviewSummary&& value) { SetOverview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summarized details for the leg including travel steps only. The Distance for
     * the travel only portion of the journey is in meters</p>
     */
    inline const RouteFerryTravelOnlySummary& GetTravelOnly() const{ return m_travelOnly; }
    inline bool TravelOnlyHasBeenSet() const { return m_travelOnlyHasBeenSet; }
    inline void SetTravelOnly(const RouteFerryTravelOnlySummary& value) { m_travelOnlyHasBeenSet = true; m_travelOnly = value; }
    inline void SetTravelOnly(RouteFerryTravelOnlySummary&& value) { m_travelOnlyHasBeenSet = true; m_travelOnly = std::move(value); }
    inline RouteFerrySummary& WithTravelOnly(const RouteFerryTravelOnlySummary& value) { SetTravelOnly(value); return *this;}
    inline RouteFerrySummary& WithTravelOnly(RouteFerryTravelOnlySummary&& value) { SetTravelOnly(std::move(value)); return *this;}
    ///@}
  private:

    RouteFerryOverviewSummary m_overview;
    bool m_overviewHasBeenSet = false;

    RouteFerryTravelOnlySummary m_travelOnly;
    bool m_travelOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
