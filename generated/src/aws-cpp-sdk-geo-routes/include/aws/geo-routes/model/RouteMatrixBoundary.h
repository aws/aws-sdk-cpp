/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixBoundaryGeometry.h>
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
   * <p>Boundary within which the matrix is to be calculated. All data, origins and
   * destinations outside the boundary are considered invalid.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixBoundary">AWS
   * API Reference</a></p>
   */
  class RouteMatrixBoundary
  {
  public:
    AWS_GEOROUTES_API RouteMatrixBoundary() = default;
    AWS_GEOROUTES_API RouteMatrixBoundary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixBoundary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const RouteMatrixBoundaryGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = RouteMatrixBoundaryGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = RouteMatrixBoundaryGeometry>
    RouteMatrixBoundary& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>No restrictions in terms of a routing boundary, and is typically used for
     * longer routes.</p>
     */
    inline bool GetUnbounded() const { return m_unbounded; }
    inline bool UnboundedHasBeenSet() const { return m_unboundedHasBeenSet; }
    inline void SetUnbounded(bool value) { m_unboundedHasBeenSet = true; m_unbounded = value; }
    inline RouteMatrixBoundary& WithUnbounded(bool value) { SetUnbounded(value); return *this;}
    ///@}
  private:

    RouteMatrixBoundaryGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    bool m_unbounded{false};
    bool m_unboundedHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
