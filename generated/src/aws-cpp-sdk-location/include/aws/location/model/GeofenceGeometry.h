/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/Circle.h>
#include <aws/core/utils/Array.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains the geofence geometry details.</p> <p>A geofence geometry can be a
   * circle, a polygon, or a multipolygon. <code>Polygon</code> and
   * <code>MultiPolygon</code> geometries can be defined using their respective
   * parameters, or encoded in Geobuf format using the <code>Geobuf</code> parameter.
   * Including multiple geometry types in the same request will return a validation
   * error.</p>  <p>Amazon Location doesn't currently support polygons that
   * cross the antimeridian.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GeofenceGeometry">AWS
   * API Reference</a></p>
   */
  class GeofenceGeometry
  {
  public:
    AWS_LOCATIONSERVICE_API GeofenceGeometry() = default;
    AWS_LOCATIONSERVICE_API GeofenceGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API GeofenceGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>Polygon</code> is a list of up to 250 linear rings which represent
     * the shape of a geofence. This list <i>must</i> include 1 exterior ring
     * (representing the outer perimeter of the geofence), and can optionally include
     * up to 249 interior rings (representing polygonal spaces within the perimeter,
     * which are excluded from the geofence area).</p> <p>A linear ring is an array of
     * 4 or more vertices, where the first and last vertex are the same (to form a
     * closed boundary). Each vertex is a 2-dimensional point represented as an array
     * of doubles of length 2: <code>[longitude, latitude]</code>.</p> <p>Each linear
     * ring is represented as an array of arrays of doubles (<code>[[longitude,
     * latitude], [longitude, latitude], ...]</code>). The vertices for the exterior
     * ring must be listed in <i>counter-clockwise</i> sequence. Vertices for all
     * interior rings must be listed in <i>clockwise</i> sequence.</p> <p>The list of
     * linear rings that describe the entire <code>Polygon</code> is represented as an
     * array of arrays of arrays of doubles (<code>[[[longitude, latitude], [longitude,
     * latitude], ...], [[longitude, latitude], [longitude, latitude], ...],
     * ...]</code>). The exterior ring must be listed first, before any interior
     * rings.</p>  <p>The following additional requirements and limitations apply
     * to geometries defined using the <code>Polygon</code> parameter:</p> <ul> <li>
     * <p>The entire <code>Polygon</code> must consist of no more than 1,000 vertices,
     * including all vertices from the exterior ring and all interior rings.</p> </li>
     * <li> <p>Rings must not touch or cross each other.</p> </li> <li> <p>All interior
     * rings must be fully contained within the exterior ring.</p> </li> <li>
     * <p>Interior rings must not contain other interior rings.</p> </li> <li> <p>No
     * ring is permitted to intersect itself.</p> </li> </ul> 
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const { return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    template<typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    void SetPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon = std::forward<PolygonT>(value); }
    template<typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    GeofenceGeometry& WithPolygon(PolygonT&& value) { SetPolygon(std::forward<PolygonT>(value)); return *this;}
    template<typename PolygonT = Aws::Vector<Aws::Vector<double>>>
    GeofenceGeometry& AddPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon.emplace_back(std::forward<PolygonT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A circle on the earth, as defined by a center point and a radius.</p>
     */
    inline const Circle& GetCircle() const { return m_circle; }
    inline bool CircleHasBeenSet() const { return m_circleHasBeenSet; }
    template<typename CircleT = Circle>
    void SetCircle(CircleT&& value) { m_circleHasBeenSet = true; m_circle = std::forward<CircleT>(value); }
    template<typename CircleT = Circle>
    GeofenceGeometry& WithCircle(CircleT&& value) { SetCircle(std::forward<CircleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geobuf is a compact binary encoding for geographic data that provides
     * lossless compression of GeoJSON polygons. The Geobuf must be Base64-encoded.</p>
     * <p>This parameter can contain a Geobuf-encoded GeoJSON geometry object of type
     * <code>Polygon</code> <i>OR</i> <code>MultiPolygon</code>. For more information
     * and specific configuration requirements for these object types, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_WaypointGeofencing_GeofenceGeometry.html#location-Type-WaypointGeofencing_GeofenceGeometry-Polygon">Polygon</a>
     * and <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_WaypointGeofencing_GeofenceGeometry.html#location-Type-WaypointGeofencing_GeofenceGeometry-MultiPolygon">MultiPolygon</a>.</p>
     *  <p>The following limitations apply specifically to geometries defined
     * using the <code>Geobuf</code> parameter, and supercede the corresponding
     * limitations of the <code>Polygon</code> and <code>MultiPolygon</code>
     * parameters:</p> <ul> <li> <p>A <code>Polygon</code> in <code>Geobuf</code>
     * format can have up to 25,000 rings and up to 100,000 total vertices, including
     * all vertices from all component rings.</p> </li> <li> <p>A
     * <code>MultiPolygon</code> in <code>Geobuf</code> format can contain up to 10,000
     * <code>Polygons</code> and up to 100,000 total vertices, including all vertices
     * from all component <code>Polygons</code>.</p> </li> </ul> 
     */
    inline const Aws::Utils::CryptoBuffer& GetGeobuf() const { return m_geobuf; }
    inline bool GeobufHasBeenSet() const { return m_geobufHasBeenSet; }
    template<typename GeobufT = Aws::Utils::CryptoBuffer>
    void SetGeobuf(GeobufT&& value) { m_geobufHasBeenSet = true; m_geobuf = std::forward<GeobufT>(value); }
    template<typename GeobufT = Aws::Utils::CryptoBuffer>
    GeofenceGeometry& WithGeobuf(GeobufT&& value) { SetGeobuf(std::forward<GeobufT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>MultiPolygon</code> is a list of up to 250 <code>Polygon</code>
     * elements which represent the shape of a geofence. The <code>Polygon</code>
     * components of a <code>MultiPolygon</code> geometry can define separate
     * geographical areas that are considered part of the same geofence, perimeters of
     * larger exterior areas with smaller interior spaces that are excluded from the
     * geofence, or some combination of these use cases to form complex geofence
     * boundaries.</p> <p>For more information and specific configuration requirements
     * for the <code>Polygon</code> components that form a <code>MultiPolygon</code>,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_WaypointGeofencing_GeofenceGeometry.html#location-Type-WaypointGeofencing_GeofenceGeometry-Polygon">Polygon</a>.</p>
     *  <p>The following additional requirements and limitations apply to
     * geometries defined using the <code>MultiPolygon</code> parameter:</p> <ul> <li>
     * <p>The entire <code>MultiPolygon</code> must consist of no more than 1,000
     * vertices, including all vertices from all component <code>Polygons</code>.</p>
     * </li> <li> <p>Each edge of a component <code>Polygon</code> must intersect no
     * more than 5 edges from other <code>Polygons</code>. Parallel edges that are
     * shared but do not cross are not counted toward this limit.</p> </li> <li> <p>The
     * total number of intersecting edges of component <code>Polygons</code> must be no
     * more than 100,000. Parallel edges that are shared but do not cross are not
     * counted toward this limit.</p> </li> </ul> 
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<Aws::Vector<double>>>>& GetMultiPolygon() const { return m_multiPolygon; }
    inline bool MultiPolygonHasBeenSet() const { return m_multiPolygonHasBeenSet; }
    template<typename MultiPolygonT = Aws::Vector<Aws::Vector<Aws::Vector<Aws::Vector<double>>>>>
    void SetMultiPolygon(MultiPolygonT&& value) { m_multiPolygonHasBeenSet = true; m_multiPolygon = std::forward<MultiPolygonT>(value); }
    template<typename MultiPolygonT = Aws::Vector<Aws::Vector<Aws::Vector<Aws::Vector<double>>>>>
    GeofenceGeometry& WithMultiPolygon(MultiPolygonT&& value) { SetMultiPolygon(std::forward<MultiPolygonT>(value)); return *this;}
    template<typename MultiPolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
    GeofenceGeometry& AddMultiPolygon(MultiPolygonT&& value) { m_multiPolygonHasBeenSet = true; m_multiPolygon.emplace_back(std::forward<MultiPolygonT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;

    Circle m_circle;
    bool m_circleHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_geobuf{};
    bool m_geobufHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Vector<Aws::Vector<double>>>> m_multiPolygon;
    bool m_multiPolygonHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
