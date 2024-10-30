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
    AWS_GEOROUTES_API RouteRoad();
    AWS_GEOROUTES_API RouteRoad(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteRoad& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the road (localized).</p>
     */
    inline const Aws::Vector<LocalizedString>& GetRoadName() const{ return m_roadName; }
    inline bool RoadNameHasBeenSet() const { return m_roadNameHasBeenSet; }
    inline void SetRoadName(const Aws::Vector<LocalizedString>& value) { m_roadNameHasBeenSet = true; m_roadName = value; }
    inline void SetRoadName(Aws::Vector<LocalizedString>&& value) { m_roadNameHasBeenSet = true; m_roadName = std::move(value); }
    inline RouteRoad& WithRoadName(const Aws::Vector<LocalizedString>& value) { SetRoadName(value); return *this;}
    inline RouteRoad& WithRoadName(Aws::Vector<LocalizedString>&& value) { SetRoadName(std::move(value)); return *this;}
    inline RouteRoad& AddRoadName(const LocalizedString& value) { m_roadNameHasBeenSet = true; m_roadName.push_back(value); return *this; }
    inline RouteRoad& AddRoadName(LocalizedString&& value) { m_roadNameHasBeenSet = true; m_roadName.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Route number of the road.</p>
     */
    inline const Aws::Vector<RouteNumber>& GetRouteNumber() const{ return m_routeNumber; }
    inline bool RouteNumberHasBeenSet() const { return m_routeNumberHasBeenSet; }
    inline void SetRouteNumber(const Aws::Vector<RouteNumber>& value) { m_routeNumberHasBeenSet = true; m_routeNumber = value; }
    inline void SetRouteNumber(Aws::Vector<RouteNumber>&& value) { m_routeNumberHasBeenSet = true; m_routeNumber = std::move(value); }
    inline RouteRoad& WithRouteNumber(const Aws::Vector<RouteNumber>& value) { SetRouteNumber(value); return *this;}
    inline RouteRoad& WithRouteNumber(Aws::Vector<RouteNumber>&& value) { SetRouteNumber(std::move(value)); return *this;}
    inline RouteRoad& AddRouteNumber(const RouteNumber& value) { m_routeNumberHasBeenSet = true; m_routeNumber.push_back(value); return *this; }
    inline RouteRoad& AddRouteNumber(RouteNumber&& value) { m_routeNumberHasBeenSet = true; m_routeNumber.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Names of destinations that can be reached when traveling on the road.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetTowards() const{ return m_towards; }
    inline bool TowardsHasBeenSet() const { return m_towardsHasBeenSet; }
    inline void SetTowards(const Aws::Vector<LocalizedString>& value) { m_towardsHasBeenSet = true; m_towards = value; }
    inline void SetTowards(Aws::Vector<LocalizedString>&& value) { m_towardsHasBeenSet = true; m_towards = std::move(value); }
    inline RouteRoad& WithTowards(const Aws::Vector<LocalizedString>& value) { SetTowards(value); return *this;}
    inline RouteRoad& WithTowards(Aws::Vector<LocalizedString>&& value) { SetTowards(std::move(value)); return *this;}
    inline RouteRoad& AddTowards(const LocalizedString& value) { m_towardsHasBeenSet = true; m_towards.push_back(value); return *this; }
    inline RouteRoad& AddTowards(LocalizedString&& value) { m_towardsHasBeenSet = true; m_towards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of road.</p>
     */
    inline const RouteRoadType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RouteRoadType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RouteRoadType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RouteRoad& WithType(const RouteRoadType& value) { SetType(value); return *this;}
    inline RouteRoad& WithType(RouteRoadType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalizedString> m_roadName;
    bool m_roadNameHasBeenSet = false;

    Aws::Vector<RouteNumber> m_routeNumber;
    bool m_routeNumberHasBeenSet = false;

    Aws::Vector<LocalizedString> m_towards;
    bool m_towardsHasBeenSet = false;

    RouteRoadType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
