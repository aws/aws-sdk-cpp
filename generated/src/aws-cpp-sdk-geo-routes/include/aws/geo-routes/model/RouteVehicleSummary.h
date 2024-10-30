/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteVehicleOverviewSummary.h>
#include <aws/geo-routes/model/RouteVehicleTravelOnlySummary.h>
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
   * <p>Summarized details of the route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleSummary">AWS
   * API Reference</a></p>
   */
  class RouteVehicleSummary
  {
  public:
    AWS_GEOROUTES_API RouteVehicleSummary();
    AWS_GEOROUTES_API RouteVehicleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Summarized details for the leg including before travel, travel and after
     * travel steps.</p>
     */
    inline const RouteVehicleOverviewSummary& GetOverview() const{ return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    inline void SetOverview(const RouteVehicleOverviewSummary& value) { m_overviewHasBeenSet = true; m_overview = value; }
    inline void SetOverview(RouteVehicleOverviewSummary&& value) { m_overviewHasBeenSet = true; m_overview = std::move(value); }
    inline RouteVehicleSummary& WithOverview(const RouteVehicleOverviewSummary& value) { SetOverview(value); return *this;}
    inline RouteVehicleSummary& WithOverview(RouteVehicleOverviewSummary&& value) { SetOverview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summarized details for the leg including travel steps only. The Distance for
     * the travel only portion of the journey is in meters</p>
     */
    inline const RouteVehicleTravelOnlySummary& GetTravelOnly() const{ return m_travelOnly; }
    inline bool TravelOnlyHasBeenSet() const { return m_travelOnlyHasBeenSet; }
    inline void SetTravelOnly(const RouteVehicleTravelOnlySummary& value) { m_travelOnlyHasBeenSet = true; m_travelOnly = value; }
    inline void SetTravelOnly(RouteVehicleTravelOnlySummary&& value) { m_travelOnlyHasBeenSet = true; m_travelOnly = std::move(value); }
    inline RouteVehicleSummary& WithTravelOnly(const RouteVehicleTravelOnlySummary& value) { SetTravelOnly(value); return *this;}
    inline RouteVehicleSummary& WithTravelOnly(RouteVehicleTravelOnlySummary&& value) { SetTravelOnly(std::move(value)); return *this;}
    ///@}
  private:

    RouteVehicleOverviewSummary m_overview;
    bool m_overviewHasBeenSet = false;

    RouteVehicleTravelOnlySummary m_travelOnly;
    bool m_travelOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
