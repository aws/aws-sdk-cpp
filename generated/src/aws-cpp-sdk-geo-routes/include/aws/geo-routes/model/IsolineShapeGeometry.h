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
    AWS_GEOROUTES_API IsolineShapeGeometry();
    AWS_GEOROUTES_API IsolineShapeGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineShapeGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Isoline Polygons, for each isoline polygon, it contains polygons of
     * the first linear ring (the outer ring) and from 2nd item to the last item (the
     * inner rings).</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }
    inline IsolineShapeGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}
    inline IsolineShapeGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}
    inline IsolineShapeGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }
    inline IsolineShapeGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Isoline PolylinePolygon, for each isoline PolylinePolygon, it
     * contains PolylinePolygon of the first linear ring (the outer ring) and from 2nd
     * item to the last item (the inner rings). For more information on polyline
     * encoding, see <a
     * href="https://github.com/heremaps/flexiblepolyline/blob/master/README.md">https://github.com/heremaps/flexiblepolyline/blob/master/README.md</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolylinePolygon() const{ return m_polylinePolygon; }
    inline bool PolylinePolygonHasBeenSet() const { return m_polylinePolygonHasBeenSet; }
    inline void SetPolylinePolygon(const Aws::Vector<Aws::String>& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = value; }
    inline void SetPolylinePolygon(Aws::Vector<Aws::String>&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = std::move(value); }
    inline IsolineShapeGeometry& WithPolylinePolygon(const Aws::Vector<Aws::String>& value) { SetPolylinePolygon(value); return *this;}
    inline IsolineShapeGeometry& WithPolylinePolygon(Aws::Vector<Aws::String>&& value) { SetPolylinePolygon(std::move(value)); return *this;}
    inline IsolineShapeGeometry& AddPolylinePolygon(const Aws::String& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(value); return *this; }
    inline IsolineShapeGeometry& AddPolylinePolygon(Aws::String&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(std::move(value)); return *this; }
    inline IsolineShapeGeometry& AddPolylinePolygon(const char* value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(value); return *this; }
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
