/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/Corridor.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/PolylineCorridor.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteAvoidanceAreaGeometry">AWS
   * API Reference</a></p>
   */
  class RouteAvoidanceAreaGeometry
  {
  public:
    AWS_GEOROUTES_API RouteAvoidanceAreaGeometry() = default;
    AWS_GEOROUTES_API RouteAvoidanceAreaGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteAvoidanceAreaGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geometry defined as a corridor - a LineString with a radius that defines the
     * width of the corridor.</p>
     */
    inline const Corridor& GetCorridor() const { return m_corridor; }
    inline bool CorridorHasBeenSet() const { return m_corridorHasBeenSet; }
    template<typename CorridorT = Corridor>
    void SetCorridor(CorridorT&& value) { m_corridorHasBeenSet = true; m_corridor = std::forward<CorridorT>(value); }
    template<typename CorridorT = Corridor>
    RouteAvoidanceAreaGeometry& WithCorridor(CorridorT&& value) { SetCorridor(std::forward<CorridorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geometry defined as a bounding box. The first pair represents the X and Y
     * coordinates (longitude and latitude,) of the southwest corner of the bounding
     * box; the second pair represents the X and Y coordinates (longitude and latitude)
     * of the northeast corner.</p>
     */
    inline const Aws::Vector<double>& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = Aws::Vector<double>>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = Aws::Vector<double>>
    RouteAvoidanceAreaGeometry& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    inline RouteAvoidanceAreaGeometry& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry defined as a polygon with only one linear ring.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const { return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    template<typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    void SetPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon = std::forward<PolygonT>(value); }
    template<typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    RouteAvoidanceAreaGeometry& WithPolygon(PolygonT&& value) { SetPolygon(std::forward<PolygonT>(value)); return *this;}
    template<typename PolygonT = Aws::Vector<Aws::Vector<double>>>
    RouteAvoidanceAreaGeometry& AddPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon.emplace_back(std::forward<PolygonT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry defined as an encoded corridor - an encoded polyline with a radius
     * that defines the width of the corridor.</p>
     */
    inline const PolylineCorridor& GetPolylineCorridor() const { return m_polylineCorridor; }
    inline bool PolylineCorridorHasBeenSet() const { return m_polylineCorridorHasBeenSet; }
    template<typename PolylineCorridorT = PolylineCorridor>
    void SetPolylineCorridor(PolylineCorridorT&& value) { m_polylineCorridorHasBeenSet = true; m_polylineCorridor = std::forward<PolylineCorridorT>(value); }
    template<typename PolylineCorridorT = PolylineCorridor>
    RouteAvoidanceAreaGeometry& WithPolylineCorridor(PolylineCorridorT&& value) { SetPolylineCorridor(std::forward<PolylineCorridorT>(value)); return *this;}
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
    RouteAvoidanceAreaGeometry& WithPolylinePolygon(PolylinePolygonT&& value) { SetPolylinePolygon(std::forward<PolylinePolygonT>(value)); return *this;}
    template<typename PolylinePolygonT = Aws::String>
    RouteAvoidanceAreaGeometry& AddPolylinePolygon(PolylinePolygonT&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.emplace_back(std::forward<PolylinePolygonT>(value)); return *this; }
    ///@}
  private:

    Corridor m_corridor;
    bool m_corridorHasBeenSet = false;

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;

    PolylineCorridor m_polylineCorridor;
    bool m_polylineCorridorHasBeenSet = false;

    Aws::Vector<Aws::String> m_polylinePolygon;
    bool m_polylinePolygonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
