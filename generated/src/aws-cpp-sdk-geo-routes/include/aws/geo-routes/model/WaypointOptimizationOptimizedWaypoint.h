/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The optimized waypoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationOptimizedWaypoint">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationOptimizedWaypoint
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationOptimizedWaypoint() = default;
    AWS_GEOROUTES_API WaypointOptimizationOptimizedWaypoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationOptimizedWaypoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Estimated time of arrival at the destination.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetArrivalTime() const { return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    template<typename ArrivalTimeT = Aws::String>
    void SetArrivalTime(ArrivalTimeT&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::forward<ArrivalTimeT>(value); }
    template<typename ArrivalTimeT = Aws::String>
    WaypointOptimizationOptimizedWaypoint& WithArrivalTime(ArrivalTimeT&& value) { SetArrivalTime(std::forward<ArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Index of the cluster the waypoint is associated with. The index is included
     * in the response only if clustering was performed while processing the
     * request.</p>
     */
    inline int GetClusterIndex() const { return m_clusterIndex; }
    inline bool ClusterIndexHasBeenSet() const { return m_clusterIndexHasBeenSet; }
    inline void SetClusterIndex(int value) { m_clusterIndexHasBeenSet = true; m_clusterIndex = value; }
    inline WaypointOptimizationOptimizedWaypoint& WithClusterIndex(int value) { SetClusterIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated time of departure from thr origin.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const { return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    template<typename DepartureTimeT = Aws::String>
    void SetDepartureTime(DepartureTimeT&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::forward<DepartureTimeT>(value); }
    template<typename DepartureTimeT = Aws::String>
    WaypointOptimizationOptimizedWaypoint& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waypoint Id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WaypointOptimizationOptimizedWaypoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    WaypointOptimizationOptimizedWaypoint& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    int m_clusterIndex{0};
    bool m_clusterIndexHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
