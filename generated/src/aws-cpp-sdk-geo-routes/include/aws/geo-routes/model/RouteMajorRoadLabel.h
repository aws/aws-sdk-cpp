/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/LocalizedString.h>
#include <aws/geo-routes/model/RouteNumber.h>
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
   * <p>Important labels including names and route numbers that differentiate the
   * current route from the alternatives presented.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMajorRoadLabel">AWS
   * API Reference</a></p>
   */
  class RouteMajorRoadLabel
  {
  public:
    AWS_GEOROUTES_API RouteMajorRoadLabel() = default;
    AWS_GEOROUTES_API RouteMajorRoadLabel(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMajorRoadLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the road (localized).</p>
     */
    inline const LocalizedString& GetRoadName() const { return m_roadName; }
    inline bool RoadNameHasBeenSet() const { return m_roadNameHasBeenSet; }
    template<typename RoadNameT = LocalizedString>
    void SetRoadName(RoadNameT&& value) { m_roadNameHasBeenSet = true; m_roadName = std::forward<RoadNameT>(value); }
    template<typename RoadNameT = LocalizedString>
    RouteMajorRoadLabel& WithRoadName(RoadNameT&& value) { SetRoadName(std::forward<RoadNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Route number of the road.</p>
     */
    inline const RouteNumber& GetRouteNumber() const { return m_routeNumber; }
    inline bool RouteNumberHasBeenSet() const { return m_routeNumberHasBeenSet; }
    template<typename RouteNumberT = RouteNumber>
    void SetRouteNumber(RouteNumberT&& value) { m_routeNumberHasBeenSet = true; m_routeNumber = std::forward<RouteNumberT>(value); }
    template<typename RouteNumberT = RouteNumber>
    RouteMajorRoadLabel& WithRouteNumber(RouteNumberT&& value) { SetRouteNumber(std::forward<RouteNumberT>(value)); return *this;}
    ///@}
  private:

    LocalizedString m_roadName;
    bool m_roadNameHasBeenSet = false;

    RouteNumber m_routeNumber;
    bool m_routeNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
