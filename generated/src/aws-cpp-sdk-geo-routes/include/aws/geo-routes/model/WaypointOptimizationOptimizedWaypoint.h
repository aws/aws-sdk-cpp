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
    AWS_GEOROUTES_API WaypointOptimizationOptimizedWaypoint();
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
    inline const Aws::String& GetArrivalTime() const{ return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    inline void SetArrivalTime(const Aws::String& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = value; }
    inline void SetArrivalTime(Aws::String&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::move(value); }
    inline void SetArrivalTime(const char* value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime.assign(value); }
    inline WaypointOptimizationOptimizedWaypoint& WithArrivalTime(const Aws::String& value) { SetArrivalTime(value); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithArrivalTime(Aws::String&& value) { SetArrivalTime(std::move(value)); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithArrivalTime(const char* value) { SetArrivalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated time of departure from thr origin.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const{ return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    inline void SetDepartureTime(const Aws::String& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }
    inline void SetDepartureTime(Aws::String&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }
    inline void SetDepartureTime(const char* value) { m_departureTimeHasBeenSet = true; m_departureTime.assign(value); }
    inline WaypointOptimizationOptimizedWaypoint& WithDepartureTime(const Aws::String& value) { SetDepartureTime(value); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithDepartureTime(Aws::String&& value) { SetDepartureTime(std::move(value)); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithDepartureTime(const char* value) { SetDepartureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waypoint Id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WaypointOptimizationOptimizedWaypoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline WaypointOptimizationOptimizedWaypoint& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline WaypointOptimizationOptimizedWaypoint& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

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
