/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RoutePassThroughPlace.h>
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
   * <p>If the waypoint should be treated as a stop. If yes, the route is split up
   * into different legs around the stop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePassThroughWaypoint">AWS
   * API Reference</a></p>
   */
  class RoutePassThroughWaypoint
  {
  public:
    AWS_GEOROUTES_API RoutePassThroughWaypoint() = default;
    AWS_GEOROUTES_API RoutePassThroughWaypoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePassThroughWaypoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this step.</p>
     */
    inline int GetGeometryOffset() const { return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RoutePassThroughWaypoint& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place details.</p>
     */
    inline const RoutePassThroughPlace& GetPlace() const { return m_place; }
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
    template<typename PlaceT = RoutePassThroughPlace>
    void SetPlace(PlaceT&& value) { m_placeHasBeenSet = true; m_place = std::forward<PlaceT>(value); }
    template<typename PlaceT = RoutePassThroughPlace>
    RoutePassThroughWaypoint& WithPlace(PlaceT&& value) { SetPlace(std::forward<PlaceT>(value)); return *this;}
    ///@}
  private:

    int m_geometryOffset{0};
    bool m_geometryOffsetHasBeenSet = false;

    RoutePassThroughPlace m_place;
    bool m_placeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
