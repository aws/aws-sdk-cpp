/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineConnectionGeometry.h>
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
   * <p>Isolines may contain multiple components, if these components are connected
   * by ferry links. These components are returned as separate polygons while the
   * ferry links are returned as connections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineConnection">AWS
   * API Reference</a></p>
   */
  class IsolineConnection
  {
  public:
    AWS_GEOROUTES_API IsolineConnection() = default;
    AWS_GEOROUTES_API IsolineConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Index of the polygon corresponding to the "from" component of the connection.
     * The polygon is available from <code>Isoline[].Geometries</code>.</p>
     */
    inline int GetFromPolygonIndex() const { return m_fromPolygonIndex; }
    inline bool FromPolygonIndexHasBeenSet() const { return m_fromPolygonIndexHasBeenSet; }
    inline void SetFromPolygonIndex(int value) { m_fromPolygonIndexHasBeenSet = true; m_fromPolygonIndex = value; }
    inline IsolineConnection& WithFromPolygonIndex(int value) { SetFromPolygonIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The isoline geometry.</p>
     */
    inline const IsolineConnectionGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = IsolineConnectionGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = IsolineConnectionGeometry>
    IsolineConnection& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Index of the polygon corresponding to the "to" component of the connection.
     * The polygon is available from <code>Isoline[].Geometries</code>.</p>
     */
    inline int GetToPolygonIndex() const { return m_toPolygonIndex; }
    inline bool ToPolygonIndexHasBeenSet() const { return m_toPolygonIndexHasBeenSet; }
    inline void SetToPolygonIndex(int value) { m_toPolygonIndexHasBeenSet = true; m_toPolygonIndex = value; }
    inline IsolineConnection& WithToPolygonIndex(int value) { SetToPolygonIndex(value); return *this;}
    ///@}
  private:

    int m_fromPolygonIndex{0};
    bool m_fromPolygonIndexHasBeenSet = false;

    IsolineConnectionGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    int m_toPolygonIndex{0};
    bool m_toPolygonIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
