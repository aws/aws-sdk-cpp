/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/Corridor.h>
#include <aws/geo-routes/model/PolylineCorridor.h>

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
 * <p>Defines an area to avoid during calculations using one of several supported
 * geometry types. The service will prefer routes that avoid these areas when
 * possible.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineAvoidanceAreaGeometry">AWS
 * API Reference</a></p>
 */
class IsolineAvoidanceAreaGeometry {
 public:
  AWS_GEOROUTES_API IsolineAvoidanceAreaGeometry() = default;
  AWS_GEOROUTES_API IsolineAvoidanceAreaGeometry(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineAvoidanceAreaGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A rectangular area defined by its southwest and northeast corners: <code>[min
   * longitude, min latitude, max longitude, max latitude]</code>.</p>
   */
  inline const Aws::Vector<double>& GetBoundingBox() const { return m_boundingBox; }
  inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
  template <typename BoundingBoxT = Aws::Vector<double>>
  void SetBoundingBox(BoundingBoxT&& value) {
    m_boundingBoxHasBeenSet = true;
    m_boundingBox = std::forward<BoundingBoxT>(value);
  }
  template <typename BoundingBoxT = Aws::Vector<double>>
  IsolineAvoidanceAreaGeometry& WithBoundingBox(BoundingBoxT&& value) {
    SetBoundingBox(std::forward<BoundingBoxT>(value));
    return *this;
  }
  inline IsolineAvoidanceAreaGeometry& AddBoundingBox(double value) {
    m_boundingBoxHasBeenSet = true;
    m_boundingBox.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A buffer zone around a line, defined by a series of coordinates and a radius
   * in meters.</p>
   */
  inline const Corridor& GetCorridor() const { return m_corridor; }
  inline bool CorridorHasBeenSet() const { return m_corridorHasBeenSet; }
  template <typename CorridorT = Corridor>
  void SetCorridor(CorridorT&& value) {
    m_corridorHasBeenSet = true;
    m_corridor = std::forward<CorridorT>(value);
  }
  template <typename CorridorT = Corridor>
  IsolineAvoidanceAreaGeometry& WithCorridor(CorridorT&& value) {
    SetCorridor(std::forward<CorridorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A polygon defined by a list of coordinate rings. The first ring defines the
   * outer boundary; subsequent rings will be ignored.</p>
   */
  inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const { return m_polygon; }
  inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
  template <typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
  void SetPolygon(PolygonT&& value) {
    m_polygonHasBeenSet = true;
    m_polygon = std::forward<PolygonT>(value);
  }
  template <typename PolygonT = Aws::Vector<Aws::Vector<Aws::Vector<double>>>>
  IsolineAvoidanceAreaGeometry& WithPolygon(PolygonT&& value) {
    SetPolygon(std::forward<PolygonT>(value));
    return *this;
  }
  template <typename PolygonT = Aws::Vector<Aws::Vector<double>>>
  IsolineAvoidanceAreaGeometry& AddPolygon(PolygonT&& value) {
    m_polygonHasBeenSet = true;
    m_polygon.emplace_back(std::forward<PolygonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A buffer zone around a compressed polyline, defined by an encoded polyline
   * string and a radius in meters. For more information on polyline encoding, see <a
   * href="https://github.com/aws-geospatial/polyline">https://github.com/aws-geospatial/polyline</a>.</p>
   */
  inline const PolylineCorridor& GetPolylineCorridor() const { return m_polylineCorridor; }
  inline bool PolylineCorridorHasBeenSet() const { return m_polylineCorridorHasBeenSet; }
  template <typename PolylineCorridorT = PolylineCorridor>
  void SetPolylineCorridor(PolylineCorridorT&& value) {
    m_polylineCorridorHasBeenSet = true;
    m_polylineCorridor = std::forward<PolylineCorridorT>(value);
  }
  template <typename PolylineCorridorT = PolylineCorridor>
  IsolineAvoidanceAreaGeometry& WithPolylineCorridor(PolylineCorridorT&& value) {
    SetPolylineCorridor(std::forward<PolylineCorridorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A polygon defined by encoded polyline strings. The first string defines the
   * outer boundary; subsequent strings will be ignored. For more information on
   * polyline encoding, see <a
   * href="https://github.com/aws-geospatial/polyline">https://github.com/aws-geospatial/polyline</a>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPolylinePolygon() const { return m_polylinePolygon; }
  inline bool PolylinePolygonHasBeenSet() const { return m_polylinePolygonHasBeenSet; }
  template <typename PolylinePolygonT = Aws::Vector<Aws::String>>
  void SetPolylinePolygon(PolylinePolygonT&& value) {
    m_polylinePolygonHasBeenSet = true;
    m_polylinePolygon = std::forward<PolylinePolygonT>(value);
  }
  template <typename PolylinePolygonT = Aws::Vector<Aws::String>>
  IsolineAvoidanceAreaGeometry& WithPolylinePolygon(PolylinePolygonT&& value) {
    SetPolylinePolygon(std::forward<PolylinePolygonT>(value));
    return *this;
  }
  template <typename PolylinePolygonT = Aws::String>
  IsolineAvoidanceAreaGeometry& AddPolylinePolygon(PolylinePolygonT&& value) {
    m_polylinePolygonHasBeenSet = true;
    m_polylinePolygon.emplace_back(std::forward<PolylinePolygonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<double> m_boundingBox;

  Corridor m_corridor;

  Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;

  PolylineCorridor m_polylineCorridor;

  Aws::Vector<Aws::String> m_polylinePolygon;
  bool m_boundingBoxHasBeenSet = false;
  bool m_corridorHasBeenSet = false;
  bool m_polygonHasBeenSet = false;
  bool m_polylineCorridorHasBeenSet = false;
  bool m_polylinePolygonHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
