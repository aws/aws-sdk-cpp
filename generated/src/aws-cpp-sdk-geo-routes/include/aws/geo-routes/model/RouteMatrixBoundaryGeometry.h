/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixAutoCircle.h>
#include <aws/geo-routes/model/Circle.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Geometry of the routing boundary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixBoundaryGeometry">AWS
   * API Reference</a></p>
   */
  class RouteMatrixBoundaryGeometry
  {
  public:
    AWS_GEOROUTES_API RouteMatrixBoundaryGeometry();
    AWS_GEOROUTES_API RouteMatrixBoundaryGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixBoundaryGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the circle that was used while calculating the route.</p>
     */
    inline const RouteMatrixAutoCircle& GetAutoCircle() const{ return m_autoCircle; }
    inline bool AutoCircleHasBeenSet() const { return m_autoCircleHasBeenSet; }
    inline void SetAutoCircle(const RouteMatrixAutoCircle& value) { m_autoCircleHasBeenSet = true; m_autoCircle = value; }
    inline void SetAutoCircle(RouteMatrixAutoCircle&& value) { m_autoCircleHasBeenSet = true; m_autoCircle = std::move(value); }
    inline RouteMatrixBoundaryGeometry& WithAutoCircle(const RouteMatrixAutoCircle& value) { SetAutoCircle(value); return *this;}
    inline RouteMatrixBoundaryGeometry& WithAutoCircle(RouteMatrixAutoCircle&& value) { SetAutoCircle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geometry defined as a circle. When request routing boundary was set as
     * <code>AutoCircle</code>, the response routing boundary will return
     * <code>Circle</code> derived from the <code>AutoCircle</code> settings.</p>
     */
    inline const Circle& GetCircle() const{ return m_circle; }
    inline bool CircleHasBeenSet() const { return m_circleHasBeenSet; }
    inline void SetCircle(const Circle& value) { m_circleHasBeenSet = true; m_circle = value; }
    inline void SetCircle(Circle&& value) { m_circleHasBeenSet = true; m_circle = std::move(value); }
    inline RouteMatrixBoundaryGeometry& WithCircle(const Circle& value) { SetCircle(value); return *this;}
    inline RouteMatrixBoundaryGeometry& WithCircle(Circle&& value) { SetCircle(std::move(value)); return *this;}
    ///@}

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
    inline RouteMatrixBoundaryGeometry& WithBoundingBox(const Aws::Vector<double>& value) { SetBoundingBox(value); return *this;}
    inline RouteMatrixBoundaryGeometry& WithBoundingBox(Aws::Vector<double>&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline RouteMatrixBoundaryGeometry& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry defined as a polygon with only one linear ring.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }
    inline RouteMatrixBoundaryGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}
    inline RouteMatrixBoundaryGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}
    inline RouteMatrixBoundaryGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }
    inline RouteMatrixBoundaryGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RouteMatrixAutoCircle m_autoCircle;
    bool m_autoCircleHasBeenSet = false;

    Circle m_circle;
    bool m_circleHasBeenSet = false;

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
