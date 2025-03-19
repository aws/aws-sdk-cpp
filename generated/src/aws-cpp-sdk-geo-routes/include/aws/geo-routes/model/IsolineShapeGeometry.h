/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Geometry of the connection between different Isoline
   * components.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineShapeGeometry">AWS
   * API Reference</a></p>
   */
  class IsolineShapeGeometry
  {
  public:
    AWS_GEOROUTES_API IsolineShapeGeometry() = default;
    AWS_GEOROUTES_API IsolineShapeGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineShapeGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Isoline Polygons, for each isoline polygon, it contains polygons of
     * the first linear ring (the outer ring) and from 2nd item to the last item (the
     * inner rings).</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const { return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    template<typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    void SetPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon = std::forward<PolygonT>(value); }
    template<typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    IsolineShapeGeometry& WithPolygon(PolygonT&& value) { SetPolygon(std::forward<PolygonT>(value)); return *this;}
    template<typename PolygonT = Aws::Vector<Aws::Vector<double>>>
    IsolineShapeGeometry& AddPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon.emplace_back(std::forward<PolygonT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Isoline PolylinePolygon, for each isoline PolylinePolygon, it
     * contains PolylinePolygon of the first linear ring (the outer ring) and from 2nd
     * item to the last item (the inner rings). For more information on polyline
     * encoding, see <a
     * href="https://github.com/heremaps/flexiblepolyline/blob/master/README.md">https://github.com/heremaps/flexiblepolyline/blob/master/README.md</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolylinePolygon() const { return m_polylinePolygon; }
    inline bool PolylinePolygonHasBeenSet() const { return m_polylinePolygonHasBeenSet; }
    template<typename PolylinePolygonT = Aws::Vector<Aws::String>>
    void SetPolylinePolygon(PolylinePolygonT&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = std::forward<PolylinePolygonT>(value); }
    template<typename PolylinePolygonT = Aws::Vector<Aws::String>>
    IsolineShapeGeometry& WithPolylinePolygon(PolylinePolygonT&& value) { SetPolylinePolygon(std::forward<PolylinePolygonT>(value)); return *this;}
    template<typename PolylinePolygonT = Aws::String>
    IsolineShapeGeometry& AddPolylinePolygon(PolylinePolygonT&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.emplace_back(std::forward<PolylinePolygonT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;

    Aws::Vector<Aws::String> m_polylinePolygon;
    bool m_polylinePolygonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
