/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationClusteringAlgorithm.h>
#include <aws/geo-routes/model/WaypointOptimizationDrivingDistanceOptions.h>
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
   * <p>Options for WaypointOptimizationClustering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationClusteringOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationClusteringOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationClusteringOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationClusteringOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationClusteringOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The algorithm to be used. <code>DrivingDistance</code> assigns all the
     * waypoints that are within driving distance of each other into a single cluster.
     * <code>TopologySegment</code> assigns all the waypoints that are within the same
     * topology segment into a single cluster. A Topology segment is a linear stretch
     * of road between two junctions.</p>
     */
    inline WaypointOptimizationClusteringAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(WaypointOptimizationClusteringAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline WaypointOptimizationClusteringOptions& WithAlgorithm(WaypointOptimizationClusteringAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Driving distance options to be used when the clustering algorithm is
     * DrivingDistance.</p>
     */
    inline const WaypointOptimizationDrivingDistanceOptions& GetDrivingDistanceOptions() const { return m_drivingDistanceOptions; }
    inline bool DrivingDistanceOptionsHasBeenSet() const { return m_drivingDistanceOptionsHasBeenSet; }
    template<typename DrivingDistanceOptionsT = WaypointOptimizationDrivingDistanceOptions>
    void SetDrivingDistanceOptions(DrivingDistanceOptionsT&& value) { m_drivingDistanceOptionsHasBeenSet = true; m_drivingDistanceOptions = std::forward<DrivingDistanceOptionsT>(value); }
    template<typename DrivingDistanceOptionsT = WaypointOptimizationDrivingDistanceOptions>
    WaypointOptimizationClusteringOptions& WithDrivingDistanceOptions(DrivingDistanceOptionsT&& value) { SetDrivingDistanceOptions(std::forward<DrivingDistanceOptionsT>(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationClusteringAlgorithm m_algorithm{WaypointOptimizationClusteringAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    WaypointOptimizationDrivingDistanceOptions m_drivingDistanceOptions;
    bool m_drivingDistanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
