/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/WaypointOptimizationTimeBreakdown.h>
#include <aws/geo-routes/model/WaypointOptimizationConnection.h>
#include <aws/geo-routes/model/WaypointOptimizationImpedingWaypoint.h>
#include <aws/geo-routes/model/WaypointOptimizationOptimizedWaypoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GeoRoutes
{
namespace Model
{
  class OptimizeWaypointsResult
  {
  public:
    AWS_GEOROUTES_API OptimizeWaypointsResult() = default;
    AWS_GEOROUTES_API OptimizeWaypointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API OptimizeWaypointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the connection from one waypoint to the next, within the
     * optimized sequence.</p>
     */
    inline const Aws::Vector<WaypointOptimizationConnection>& GetConnections() const { return m_connections; }
    template<typename ConnectionsT = Aws::Vector<WaypointOptimizationConnection>>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = Aws::Vector<WaypointOptimizationConnection>>
    OptimizeWaypointsResult& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    template<typename ConnectionsT = WaypointOptimizationConnection>
    OptimizeWaypointsResult& AddConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections.emplace_back(std::forward<ConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overall distance to travel the whole sequence.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline OptimizeWaypointsResult& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overall duration to travel the whole sequence.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline OptimizeWaypointsResult& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns waypoints that caused the optimization problem to fail, and the
     * constraints that were unsatisfied leading to the failure.</p>
     */
    inline const Aws::Vector<WaypointOptimizationImpedingWaypoint>& GetImpedingWaypoints() const { return m_impedingWaypoints; }
    template<typename ImpedingWaypointsT = Aws::Vector<WaypointOptimizationImpedingWaypoint>>
    void SetImpedingWaypoints(ImpedingWaypointsT&& value) { m_impedingWaypointsHasBeenSet = true; m_impedingWaypoints = std::forward<ImpedingWaypointsT>(value); }
    template<typename ImpedingWaypointsT = Aws::Vector<WaypointOptimizationImpedingWaypoint>>
    OptimizeWaypointsResult& WithImpedingWaypoints(ImpedingWaypointsT&& value) { SetImpedingWaypoints(std::forward<ImpedingWaypointsT>(value)); return *this;}
    template<typename ImpedingWaypointsT = WaypointOptimizationImpedingWaypoint>
    OptimizeWaypointsResult& AddImpedingWaypoints(ImpedingWaypointsT&& value) { m_impedingWaypointsHasBeenSet = true; m_impedingWaypoints.emplace_back(std::forward<ImpedingWaypointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Waypoints in the order of the optimized sequence.</p>
     */
    inline const Aws::Vector<WaypointOptimizationOptimizedWaypoint>& GetOptimizedWaypoints() const { return m_optimizedWaypoints; }
    template<typename OptimizedWaypointsT = Aws::Vector<WaypointOptimizationOptimizedWaypoint>>
    void SetOptimizedWaypoints(OptimizedWaypointsT&& value) { m_optimizedWaypointsHasBeenSet = true; m_optimizedWaypoints = std::forward<OptimizedWaypointsT>(value); }
    template<typename OptimizedWaypointsT = Aws::Vector<WaypointOptimizationOptimizedWaypoint>>
    OptimizeWaypointsResult& WithOptimizedWaypoints(OptimizedWaypointsT&& value) { SetOptimizedWaypoints(std::forward<OptimizedWaypointsT>(value)); return *this;}
    template<typename OptimizedWaypointsT = WaypointOptimizationOptimizedWaypoint>
    OptimizeWaypointsResult& AddOptimizedWaypoints(OptimizedWaypointsT&& value) { m_optimizedWaypointsHasBeenSet = true; m_optimizedWaypoints.emplace_back(std::forward<OptimizedWaypointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const { return m_pricingBucket; }
    template<typename PricingBucketT = Aws::String>
    void SetPricingBucket(PricingBucketT&& value) { m_pricingBucketHasBeenSet = true; m_pricingBucket = std::forward<PricingBucketT>(value); }
    template<typename PricingBucketT = Aws::String>
    OptimizeWaypointsResult& WithPricingBucket(PricingBucketT&& value) { SetPricingBucket(std::forward<PricingBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time breakdown for the sequence.</p>
     */
    inline const WaypointOptimizationTimeBreakdown& GetTimeBreakdown() const { return m_timeBreakdown; }
    template<typename TimeBreakdownT = WaypointOptimizationTimeBreakdown>
    void SetTimeBreakdown(TimeBreakdownT&& value) { m_timeBreakdownHasBeenSet = true; m_timeBreakdown = std::forward<TimeBreakdownT>(value); }
    template<typename TimeBreakdownT = WaypointOptimizationTimeBreakdown>
    OptimizeWaypointsResult& WithTimeBreakdown(TimeBreakdownT&& value) { SetTimeBreakdown(std::forward<TimeBreakdownT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    OptimizeWaypointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WaypointOptimizationConnection> m_connections;
    bool m_connectionsHasBeenSet = false;

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::Vector<WaypointOptimizationImpedingWaypoint> m_impedingWaypoints;
    bool m_impedingWaypointsHasBeenSet = false;

    Aws::Vector<WaypointOptimizationOptimizedWaypoint> m_optimizedWaypoints;
    bool m_optimizedWaypointsHasBeenSet = false;

    Aws::String m_pricingBucket;
    bool m_pricingBucketHasBeenSet = false;

    WaypointOptimizationTimeBreakdown m_timeBreakdown;
    bool m_timeBreakdownHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
