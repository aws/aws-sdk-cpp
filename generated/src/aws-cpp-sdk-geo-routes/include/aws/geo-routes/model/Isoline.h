/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/IsolineConnection.h>
#include <aws/geo-routes/model/IsolineShapeGeometry.h>
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
   * <p>Calculated isolines and associated properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/Isoline">AWS
   * API Reference</a></p>
   */
  class Isoline
  {
  public:
    AWS_GEOROUTES_API Isoline() = default;
    AWS_GEOROUTES_API Isoline(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Isoline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Isolines may contain multiple components, if these components are connected
     * by ferry links. These components are returned as separate polygons while the
     * ferry links are returned as connections.</p>
     */
    inline const Aws::Vector<IsolineConnection>& GetConnections() const { return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    template<typename ConnectionsT = Aws::Vector<IsolineConnection>>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = Aws::Vector<IsolineConnection>>
    Isoline& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    template<typename ConnectionsT = IsolineConnection>
    Isoline& AddConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections.emplace_back(std::forward<ConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Distance threshold corresponding to the calculated Isoline.</p>
     */
    inline long long GetDistanceThreshold() const { return m_distanceThreshold; }
    inline bool DistanceThresholdHasBeenSet() const { return m_distanceThresholdHasBeenSet; }
    inline void SetDistanceThreshold(long long value) { m_distanceThresholdHasBeenSet = true; m_distanceThreshold = value; }
    inline Isoline& WithDistanceThreshold(long long value) { SetDistanceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geometries for the Calculated isolines.</p>
     */
    inline const Aws::Vector<IsolineShapeGeometry>& GetGeometries() const { return m_geometries; }
    inline bool GeometriesHasBeenSet() const { return m_geometriesHasBeenSet; }
    template<typename GeometriesT = Aws::Vector<IsolineShapeGeometry>>
    void SetGeometries(GeometriesT&& value) { m_geometriesHasBeenSet = true; m_geometries = std::forward<GeometriesT>(value); }
    template<typename GeometriesT = Aws::Vector<IsolineShapeGeometry>>
    Isoline& WithGeometries(GeometriesT&& value) { SetGeometries(std::forward<GeometriesT>(value)); return *this;}
    template<typename GeometriesT = IsolineShapeGeometry>
    Isoline& AddGeometries(GeometriesT&& value) { m_geometriesHasBeenSet = true; m_geometries.emplace_back(std::forward<GeometriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time threshold corresponding to the calculated isoline.</p>
     */
    inline long long GetTimeThreshold() const { return m_timeThreshold; }
    inline bool TimeThresholdHasBeenSet() const { return m_timeThresholdHasBeenSet; }
    inline void SetTimeThreshold(long long value) { m_timeThresholdHasBeenSet = true; m_timeThreshold = value; }
    inline Isoline& WithTimeThreshold(long long value) { SetTimeThreshold(value); return *this;}
    ///@}
  private:

    Aws::Vector<IsolineConnection> m_connections;
    bool m_connectionsHasBeenSet = false;

    long long m_distanceThreshold{0};
    bool m_distanceThresholdHasBeenSet = false;

    Aws::Vector<IsolineShapeGeometry> m_geometries;
    bool m_geometriesHasBeenSet = false;

    long long m_timeThreshold{0};
    bool m_timeThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
