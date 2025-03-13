/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceAreaGeometry.h>
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
   * <p>Area to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixAvoidanceArea">AWS
   * API Reference</a></p>
   */
  class RouteMatrixAvoidanceArea
  {
  public:
    AWS_GEOROUTES_API RouteMatrixAvoidanceArea() = default;
    AWS_GEOROUTES_API RouteMatrixAvoidanceArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixAvoidanceArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const RouteMatrixAvoidanceAreaGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = RouteMatrixAvoidanceAreaGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = RouteMatrixAvoidanceAreaGeometry>
    RouteMatrixAvoidanceArea& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}
  private:

    RouteMatrixAvoidanceAreaGeometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
