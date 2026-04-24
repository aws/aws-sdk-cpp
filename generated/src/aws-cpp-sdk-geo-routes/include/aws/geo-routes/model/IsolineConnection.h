/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineConnectionGeometry.h>

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
 * <p>Represents a segment of the transportation network that connects separate
 * parts of a reachable area. These connections show how discontinuous areas are
 * linked, such as by ferry routes or bridges crossing unroutable
 * terrain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineConnection">AWS
 * API Reference</a></p>
 */
class IsolineConnection {
 public:
  AWS_GEOROUTES_API IsolineConnection() = default;
  AWS_GEOROUTES_API IsolineConnection(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index of the starting polygon in the isoline's <code>Geometries</code>
   * list.</p>
   */
  inline int GetFromPolygonIndex() const { return m_fromPolygonIndex; }
  inline bool FromPolygonIndexHasBeenSet() const { return m_fromPolygonIndexHasBeenSet; }
  inline void SetFromPolygonIndex(int value) {
    m_fromPolygonIndexHasBeenSet = true;
    m_fromPolygonIndex = value;
  }
  inline IsolineConnection& WithFromPolygonIndex(int value) {
    SetFromPolygonIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shape of the connection, representing the actual path through the
   * transportation network that links the polygons.</p>
   */
  inline const IsolineConnectionGeometry& GetGeometry() const { return m_geometry; }
  inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
  template <typename GeometryT = IsolineConnectionGeometry>
  void SetGeometry(GeometryT&& value) {
    m_geometryHasBeenSet = true;
    m_geometry = std::forward<GeometryT>(value);
  }
  template <typename GeometryT = IsolineConnectionGeometry>
  IsolineConnection& WithGeometry(GeometryT&& value) {
    SetGeometry(std::forward<GeometryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the ending polygon in the isoline's <code>Geometries</code>
   * list.</p>
   */
  inline int GetToPolygonIndex() const { return m_toPolygonIndex; }
  inline bool ToPolygonIndexHasBeenSet() const { return m_toPolygonIndexHasBeenSet; }
  inline void SetToPolygonIndex(int value) {
    m_toPolygonIndexHasBeenSet = true;
    m_toPolygonIndex = value;
  }
  inline IsolineConnection& WithToPolygonIndex(int value) {
    SetToPolygonIndex(value);
    return *this;
  }
  ///@}
 private:
  int m_fromPolygonIndex{0};

  IsolineConnectionGeometry m_geometry;

  int m_toPolygonIndex{0};
  bool m_fromPolygonIndexHasBeenSet = false;
  bool m_geometryHasBeenSet = false;
  bool m_toPolygonIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
