/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Represents the shape of a reachable area. The geometry can be provided either
 * as coordinate pairs (<code>Polygon</code>) or in encoded format
 * (<code>PolylinePolygon</code>), matching the format specified in the
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineShapeGeometry">AWS
 * API Reference</a></p>
 */
class IsolineShapeGeometry {
 public:
  AWS_GEOROUTES_API IsolineShapeGeometry() = default;
  AWS_GEOROUTES_API IsolineShapeGeometry(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineShapeGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A series of coordinate rings defining the reachable area when Simple geometry
   * format is requested. Each ring is a list of <code>[longitude, latitude]</code>
   * coordinate pairs. The first ring defines the outer boundary; subsequent rings
   * define holes representing unreachable areas.</p>  <p>Polygon and
   * PolylinePolygon are mutually exclusive properties.</p>
   */
  inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const { return m_polygon; }
  inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
  template <typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
  void SetPolygon(PolygonT&& value) {
    m_polygonHasBeenSet = true;
    m_polygon = std::forward<PolygonT>(value);
  }
  template <typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
  IsolineShapeGeometry& WithPolygon(PolygonT&& value) {
    SetPolygon(std::forward<PolygonT>(value));
    return *this;
  }
  template <typename PolygonT = Aws::Vector<Aws::Vector<double>>>
  IsolineShapeGeometry& AddPolygon(PolygonT&& value) {
    m_polygonHasBeenSet = true;
    m_polygon.emplace_back(std::forward<PolygonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An encoded representation of the reachable area when FlexiblePolyline
   * geometry format is requested. Provides a compact representation suitable for
   * transmission and storage. The first string defines the outer boundary;
   * subsequent strings define holes representing unreachable areas. For more
   * information on polyline encoding, see <a
   * href="https://github.com/aws-geospatial/polyline">https://github.com/aws-geospatial/polyline</a>.</p>
   *  <p>Polygon and PolylinePolygon are mutually exclusive properties.</p>
   *
   */
  inline const Aws::Vector<Aws::String>& GetPolylinePolygon() const { return m_polylinePolygon; }
  inline bool PolylinePolygonHasBeenSet() const { return m_polylinePolygonHasBeenSet; }
  template <typename PolylinePolygonT = Aws::Vector<Aws::String>>
  void SetPolylinePolygon(PolylinePolygonT&& value) {
    m_polylinePolygonHasBeenSet = true;
    m_polylinePolygon = std::forward<PolylinePolygonT>(value);
  }
  template <typename PolylinePolygonT = Aws::Vector<Aws::String>>
  IsolineShapeGeometry& WithPolylinePolygon(PolylinePolygonT&& value) {
    SetPolylinePolygon(std::forward<PolylinePolygonT>(value));
    return *this;
  }
  template <typename PolylinePolygonT = Aws::String>
  IsolineShapeGeometry& AddPolylinePolygon(PolylinePolygonT&& value) {
    m_polylinePolygonHasBeenSet = true;
    m_polylinePolygon.emplace_back(std::forward<PolylinePolygonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;

  Aws::Vector<Aws::String> m_polylinePolygon;
  bool m_polygonHasBeenSet = false;
  bool m_polylinePolygonHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
