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
    AWS_GEOROUTES_API OptimizeWaypointsResult();
    AWS_GEOROUTES_API OptimizeWaypointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GEOROUTES_API OptimizeWaypointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the connection from one waypoint to the next, within the
     * optimized sequence.</p>
     */
    inline const Aws::Vector<WaypointOptimizationConnection>& GetConnections() const{ return m_connections; }
    inline void SetConnections(const Aws::Vector<WaypointOptimizationConnection>& value) { m_connections = value; }
    inline void SetConnections(Aws::Vector<WaypointOptimizationConnection>&& value) { m_connections = std::move(value); }
    inline OptimizeWaypointsResult& WithConnections(const Aws::Vector<WaypointOptimizationConnection>& value) { SetConnections(value); return *this;}
    inline OptimizeWaypointsResult& WithConnections(Aws::Vector<WaypointOptimizationConnection>&& value) { SetConnections(std::move(value)); return *this;}
    inline OptimizeWaypointsResult& AddConnections(const WaypointOptimizationConnection& value) { m_connections.push_back(value); return *this; }
    inline OptimizeWaypointsResult& AddConnections(WaypointOptimizationConnection&& value) { m_connections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overall distance to travel the whole sequence.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
    inline void SetDistance(long long value) { m_distance = value; }
    inline OptimizeWaypointsResult& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overall duration to travel the whole sequence.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline void SetDuration(long long value) { m_duration = value; }
    inline OptimizeWaypointsResult& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns waypoints that caused the optimization problem to fail, and the
     * constraints that were unsatisfied leading to the failure.</p>
     */
    inline const Aws::Vector<WaypointOptimizationImpedingWaypoint>& GetImpedingWaypoints() const{ return m_impedingWaypoints; }
    inline void SetImpedingWaypoints(const Aws::Vector<WaypointOptimizationImpedingWaypoint>& value) { m_impedingWaypoints = value; }
    inline void SetImpedingWaypoints(Aws::Vector<WaypointOptimizationImpedingWaypoint>&& value) { m_impedingWaypoints = std::move(value); }
    inline OptimizeWaypointsResult& WithImpedingWaypoints(const Aws::Vector<WaypointOptimizationImpedingWaypoint>& value) { SetImpedingWaypoints(value); return *this;}
    inline OptimizeWaypointsResult& WithImpedingWaypoints(Aws::Vector<WaypointOptimizationImpedingWaypoint>&& value) { SetImpedingWaypoints(std::move(value)); return *this;}
    inline OptimizeWaypointsResult& AddImpedingWaypoints(const WaypointOptimizationImpedingWaypoint& value) { m_impedingWaypoints.push_back(value); return *this; }
    inline OptimizeWaypointsResult& AddImpedingWaypoints(WaypointOptimizationImpedingWaypoint&& value) { m_impedingWaypoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Waypoints in the order of the optimized sequence.</p>
     */
    inline const Aws::Vector<WaypointOptimizationOptimizedWaypoint>& GetOptimizedWaypoints() const{ return m_optimizedWaypoints; }
    inline void SetOptimizedWaypoints(const Aws::Vector<WaypointOptimizationOptimizedWaypoint>& value) { m_optimizedWaypoints = value; }
    inline void SetOptimizedWaypoints(Aws::Vector<WaypointOptimizationOptimizedWaypoint>&& value) { m_optimizedWaypoints = std::move(value); }
    inline OptimizeWaypointsResult& WithOptimizedWaypoints(const Aws::Vector<WaypointOptimizationOptimizedWaypoint>& value) { SetOptimizedWaypoints(value); return *this;}
    inline OptimizeWaypointsResult& WithOptimizedWaypoints(Aws::Vector<WaypointOptimizationOptimizedWaypoint>&& value) { SetOptimizedWaypoints(std::move(value)); return *this;}
    inline OptimizeWaypointsResult& AddOptimizedWaypoints(const WaypointOptimizationOptimizedWaypoint& value) { m_optimizedWaypoints.push_back(value); return *this; }
    inline OptimizeWaypointsResult& AddOptimizedWaypoints(WaypointOptimizationOptimizedWaypoint&& value) { m_optimizedWaypoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing bucket for which the query is charged at.</p>
     */
    inline const Aws::String& GetPricingBucket() const{ return m_pricingBucket; }
    inline void SetPricingBucket(const Aws::String& value) { m_pricingBucket = value; }
    inline void SetPricingBucket(Aws::String&& value) { m_pricingBucket = std::move(value); }
    inline void SetPricingBucket(const char* value) { m_pricingBucket.assign(value); }
    inline OptimizeWaypointsResult& WithPricingBucket(const Aws::String& value) { SetPricingBucket(value); return *this;}
    inline OptimizeWaypointsResult& WithPricingBucket(Aws::String&& value) { SetPricingBucket(std::move(value)); return *this;}
    inline OptimizeWaypointsResult& WithPricingBucket(const char* value) { SetPricingBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time breakdown for the sequence.</p>
     */
    inline const WaypointOptimizationTimeBreakdown& GetTimeBreakdown() const{ return m_timeBreakdown; }
    inline void SetTimeBreakdown(const WaypointOptimizationTimeBreakdown& value) { m_timeBreakdown = value; }
    inline void SetTimeBreakdown(WaypointOptimizationTimeBreakdown&& value) { m_timeBreakdown = std::move(value); }
    inline OptimizeWaypointsResult& WithTimeBreakdown(const WaypointOptimizationTimeBreakdown& value) { SetTimeBreakdown(value); return *this;}
    inline OptimizeWaypointsResult& WithTimeBreakdown(WaypointOptimizationTimeBreakdown&& value) { SetTimeBreakdown(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline OptimizeWaypointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline OptimizeWaypointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline OptimizeWaypointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WaypointOptimizationConnection> m_connections;

    long long m_distance;

    long long m_duration;

    Aws::Vector<WaypointOptimizationImpedingWaypoint> m_impedingWaypoints;

    Aws::Vector<WaypointOptimizationOptimizedWaypoint> m_optimizedWaypoints;

    Aws::String m_pricingBucket;

    WaypointOptimizationTimeBreakdown m_timeBreakdown;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
