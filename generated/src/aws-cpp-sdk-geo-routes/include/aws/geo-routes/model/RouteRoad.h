/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteRoadType.h>
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
   * <p>The road on the route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteRoad">AWS
   * API Reference</a></p>
   */
  class RouteRoad
  {
  public:
    AWS_GEOROUTES_API RouteRoad() = default;
    AWS_GEOROUTES_API RouteRoad(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteRoad& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the road (localized).</p>
     */
    inline const Aws::Vector<LocalizedString>& GetRoadName() const { return m_roadName; }
    inline bool RoadNameHasBeenSet() const { return m_roadNameHasBeenSet; }
    template<typename RoadNameT = Aws::Vector<LocalizedString>>
    void SetRoadName(RoadNameT&& value) { m_roadNameHasBeenSet = true; m_roadName = std::forward<RoadNameT>(value); }
    template<typename RoadNameT = Aws::Vector<LocalizedString>>
    RouteRoad& WithRoadName(RoadNameT&& value) { SetRoadName(std::forward<RoadNameT>(value)); return *this;}
    template<typename RoadNameT = LocalizedString>
    RouteRoad& AddRoadName(RoadNameT&& value) { m_roadNameHasBeenSet = true; m_roadName.emplace_back(std::forward<RoadNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Route number of the road.</p>
     */
    inline const Aws::Vector<RouteNumber>& GetRouteNumber() const { return m_routeNumber; }
    inline bool RouteNumberHasBeenSet() const { return m_routeNumberHasBeenSet; }
    template<typename RouteNumberT = Aws::Vector<RouteNumber>>
    void SetRouteNumber(RouteNumberT&& value) { m_routeNumberHasBeenSet = true; m_routeNumber = std::forward<RouteNumberT>(value); }
    template<typename RouteNumberT = Aws::Vector<RouteNumber>>
    RouteRoad& WithRouteNumber(RouteNumberT&& value) { SetRouteNumber(std::forward<RouteNumberT>(value)); return *this;}
    template<typename RouteNumberT = RouteNumber>
    RouteRoad& AddRouteNumber(RouteNumberT&& value) { m_routeNumberHasBeenSet = true; m_routeNumber.emplace_back(std::forward<RouteNumberT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Names of destinations that can be reached when traveling on the road.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetTowards() const { return m_towards; }
    inline bool TowardsHasBeenSet() const { return m_towardsHasBeenSet; }
    template<typename TowardsT = Aws::Vector<LocalizedString>>
    void SetTowards(TowardsT&& value) { m_towardsHasBeenSet = true; m_towards = std::forward<TowardsT>(value); }
    template<typename TowardsT = Aws::Vector<LocalizedString>>
    RouteRoad& WithTowards(TowardsT&& value) { SetTowards(std::forward<TowardsT>(value)); return *this;}
    template<typename TowardsT = LocalizedString>
    RouteRoad& AddTowards(TowardsT&& value) { m_towardsHasBeenSet = true; m_towards.emplace_back(std::forward<TowardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of road.</p>
     */
    inline RouteRoadType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RouteRoadType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RouteRoad& WithType(RouteRoadType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<LocalizedString> m_roadName;
    bool m_roadNameHasBeenSet = false;

    Aws::Vector<RouteNumber> m_routeNumber;
    bool m_routeNumberHasBeenSet = false;

    Aws::Vector<LocalizedString> m_towards;
    bool m_towardsHasBeenSet = false;

    RouteRoadType m_type{RouteRoadType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
