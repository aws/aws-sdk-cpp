/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the geofence geometry details.</p>  <p>Amazon Location does
   * not currently support polygons with holes, multipolygons, polygons that are
   * wound clockwise, or that cross the antimeridian. </p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GeofenceGeometry">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API GeofenceGeometry
  {
  public:
    GeofenceGeometry();
    GeofenceGeometry(Aws::Utils::Json::JsonView jsonValue);
    GeofenceGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline GeofenceGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline GeofenceGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline GeofenceGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }

    /**
     * <p>An array of 1 or more linear rings. A linear ring is an array of 4 or more
     * vertices, where the first and last vertex are the same to form a closed
     * boundary. Each vertex is a 2-dimensional point of the form: <code>[longitude,
     * latitude]</code>. </p> <p>The first linear ring is an outer ring, describing the
     * polygon's boundary. Subsequent linear rings may be inner or outer rings to
     * describe holes and islands. Outer rings must list their vertices in
     * counter-clockwise order around the ring's center, where the left side is the
     * polygon's exterior. Inner rings must list their vertices in clockwise order,
     * where the left side is the polygon's interior.</p>
     */
    inline GeofenceGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
