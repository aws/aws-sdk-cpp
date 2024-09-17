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
   * <p>Contains the geofence geometry details.</p> <p>A geofence geometry is made up
   * of either a polygon or a circle. Can be a polygon, a circle or a polygon encoded
   * in Geobuf format. Including multiple selections will return a validation
   * error.</p>  <p>Amazon Location doesn't currently support polygons with
   * holes, multipolygons, polygons that are wound clockwise, or that cross the
   * antimeridian. </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GeofenceGeometry">AWS
   * API Reference</a></p>
   */
  class GeofenceGeometry
  {
  public:
    AWS_LOCATIONSERVICE_API GeofenceGeometry();
    AWS_LOCATIONSERVICE_API GeofenceGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API GeofenceGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A polygon is a list of linear rings which are each made up of a list of
     * vertices.</p> <p>Each vertex is a 2-dimensional point of the form:
     * <code>[longitude, latitude]</code>. This is represented as an array of doubles
     * of length 2 (so <code>[double, double]</code>).</p> <p>An array of 4 or more
     * vertices, where the first and last vertex are the same (to form a closed
     * boundary), is called a linear ring. The linear ring vertices must be listed in
     * counter-clockwise order around the ring’s interior. The linear ring is
     * represented as an array of vertices, or an array of arrays of doubles
     * (<code>[[double, double], ...]</code>).</p> <p>A geofence consists of a single
     * linear ring. To allow for future expansion, the Polygon parameter takes an array
     * of linear rings, which is represented as an array of arrays of arrays of doubles
     * (<code>[[[double, double], ...], ...]</code>).</p> <p>A linear ring for use in
     * geofences can consist of between 4 and 1,000 vertices.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }
    inline GeofenceGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}
    inline GeofenceGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}
    inline GeofenceGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }
    inline GeofenceGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A circle on the earth, as defined by a center point and a radius.</p>
     */
    inline const Circle& GetCircle() const{ return m_circle; }
    inline bool CircleHasBeenSet() const { return m_circleHasBeenSet; }
    inline void SetCircle(const Circle& value) { m_circleHasBeenSet = true; m_circle = value; }
    inline void SetCircle(Circle&& value) { m_circleHasBeenSet = true; m_circle = std::move(value); }
    inline GeofenceGeometry& WithCircle(const Circle& value) { SetCircle(value); return *this;}
    inline GeofenceGeometry& WithCircle(Circle&& value) { SetCircle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geobuf is a compact binary encoding for geographic data that provides
     * lossless compression of GeoJSON polygons. The Geobuf must be Base64-encoded.</p>
     * <p>A polygon in Geobuf format can have up to 100,000 vertices.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetGeobuf() const{ return m_geobuf; }
    inline bool GeobufHasBeenSet() const { return m_geobufHasBeenSet; }
    inline void SetGeobuf(const Aws::Utils::CryptoBuffer& value) { m_geobufHasBeenSet = true; m_geobuf = value; }
    inline void SetGeobuf(Aws::Utils::CryptoBuffer&& value) { m_geobufHasBeenSet = true; m_geobuf = std::move(value); }
    inline GeofenceGeometry& WithGeobuf(const Aws::Utils::CryptoBuffer& value) { SetGeobuf(value); return *this;}
    inline GeofenceGeometry& WithGeobuf(Aws::Utils::CryptoBuffer&& value) { SetGeobuf(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;

    Circle m_circle;
    bool m_circleHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_geobuf;
    bool m_geobufHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
