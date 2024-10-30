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
   * <p>Geometry of the area to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixAvoidanceAreaGeometry">AWS
   * API Reference</a></p>
   */
  class RouteMatrixAvoidanceAreaGeometry
  {
  public:
    AWS_GEOROUTES_API RouteMatrixAvoidanceAreaGeometry();
    AWS_GEOROUTES_API RouteMatrixAvoidanceAreaGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixAvoidanceAreaGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geometry defined as a bounding box. The first pair represents the X and Y
     * coordinates (longitude and latitude,) of the southwest corner of the bounding
     * box; the second pair represents the X and Y coordinates (longitude and latitude)
     * of the northeast corner.</p>
     */
    inline const Aws::Vector<double>& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const Aws::Vector<double>& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(Aws::Vector<double>&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline RouteMatrixAvoidanceAreaGeometry& WithBoundingBox(const Aws::Vector<double>& value) { SetBoundingBox(value); return *this;}
    inline RouteMatrixAvoidanceAreaGeometry& WithBoundingBox(Aws::Vector<double>&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline RouteMatrixAvoidanceAreaGeometry& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry defined as a polygon with only one linear ring.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }
    inline RouteMatrixAvoidanceAreaGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}
    inline RouteMatrixAvoidanceAreaGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}
    inline RouteMatrixAvoidanceAreaGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }
    inline RouteMatrixAvoidanceAreaGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Isoline PolylinePolygon, for each isoline PolylinePolygon, it
     * contains PolylinePolygon of the first linear ring (the outer ring) and from
     * second item to the last item (the inner rings). For more information on polyline
     * encoding, see <a
     * href="https://github.com/heremaps/flexiblepolyline/blob/master/README.md">https://github.com/heremaps/flexiblepolyline/blob/master/README.md</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolylinePolygon() const{ return m_polylinePolygon; }
    inline bool PolylinePolygonHasBeenSet() const { return m_polylinePolygonHasBeenSet; }
    inline void SetPolylinePolygon(const Aws::Vector<Aws::String>& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = value; }
    inline void SetPolylinePolygon(Aws::Vector<Aws::String>&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = std::move(value); }
    inline RouteMatrixAvoidanceAreaGeometry& WithPolylinePolygon(const Aws::Vector<Aws::String>& value) { SetPolylinePolygon(value); return *this;}
    inline RouteMatrixAvoidanceAreaGeometry& WithPolylinePolygon(Aws::Vector<Aws::String>&& value) { SetPolylinePolygon(std::move(value)); return *this;}
    inline RouteMatrixAvoidanceAreaGeometry& AddPolylinePolygon(const Aws::String& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(value); return *this; }
    inline RouteMatrixAvoidanceAreaGeometry& AddPolylinePolygon(Aws::String&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(std::move(value)); return *this; }
    inline RouteMatrixAvoidanceAreaGeometry& AddPolylinePolygon(const char* value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;

    Aws::Vector<Aws::String> m_polylinePolygon;
    bool m_polylinePolygonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
