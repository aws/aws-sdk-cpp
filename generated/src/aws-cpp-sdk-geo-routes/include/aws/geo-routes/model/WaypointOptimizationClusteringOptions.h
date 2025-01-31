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
    AWS_GEOROUTES_API WaypointOptimizationClusteringOptions();
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
    inline const WaypointOptimizationClusteringAlgorithm& GetAlgorithm() const{ return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(const WaypointOptimizationClusteringAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline void SetAlgorithm(WaypointOptimizationClusteringAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }
    inline WaypointOptimizationClusteringOptions& WithAlgorithm(const WaypointOptimizationClusteringAlgorithm& value) { SetAlgorithm(value); return *this;}
    inline WaypointOptimizationClusteringOptions& WithAlgorithm(WaypointOptimizationClusteringAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Driving distance options to be used when the clustering algorithm is
     * DrivingDistance.</p>
     */
    inline const WaypointOptimizationDrivingDistanceOptions& GetDrivingDistanceOptions() const{ return m_drivingDistanceOptions; }
    inline bool DrivingDistanceOptionsHasBeenSet() const { return m_drivingDistanceOptionsHasBeenSet; }
    inline void SetDrivingDistanceOptions(const WaypointOptimizationDrivingDistanceOptions& value) { m_drivingDistanceOptionsHasBeenSet = true; m_drivingDistanceOptions = value; }
    inline void SetDrivingDistanceOptions(WaypointOptimizationDrivingDistanceOptions&& value) { m_drivingDistanceOptionsHasBeenSet = true; m_drivingDistanceOptions = std::move(value); }
    inline WaypointOptimizationClusteringOptions& WithDrivingDistanceOptions(const WaypointOptimizationDrivingDistanceOptions& value) { SetDrivingDistanceOptions(value); return *this;}
    inline WaypointOptimizationClusteringOptions& WithDrivingDistanceOptions(WaypointOptimizationDrivingDistanceOptions&& value) { SetDrivingDistanceOptions(std::move(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationClusteringAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    WaypointOptimizationDrivingDistanceOptions m_drivingDistanceOptions;
    bool m_drivingDistanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
