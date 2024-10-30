/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This contains information such as distance and duration from one waypoint to
   * the next waypoint in the sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationConnection">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationConnection
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationConnection();
    AWS_GEOROUTES_API WaypointOptimizationConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Distance of the step.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline WaypointOptimizationConnection& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>contains the ID of the starting waypoint in this connection.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }
    inline WaypointOptimizationConnection& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}
    inline WaypointOptimizationConnection& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}
    inline WaypointOptimizationConnection& WithFrom(const char* value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resting time before the driver can continue driving.</p>
     */
    inline long long GetRestDuration() const{ return m_restDuration; }
    inline bool RestDurationHasBeenSet() const { return m_restDurationHasBeenSet; }
    inline void SetRestDuration(long long value) { m_restDurationHasBeenSet = true; m_restDuration = value; }
    inline WaypointOptimizationConnection& WithRestDuration(long long value) { SetRestDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ID of the ending waypoint in this connection.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }
    inline WaypointOptimizationConnection& WithTo(const Aws::String& value) { SetTo(value); return *this;}
    inline WaypointOptimizationConnection& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}
    inline WaypointOptimizationConnection& WithTo(const char* value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total duration.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTravelDuration() const{ return m_travelDuration; }
    inline bool TravelDurationHasBeenSet() const { return m_travelDurationHasBeenSet; }
    inline void SetTravelDuration(long long value) { m_travelDurationHasBeenSet = true; m_travelDuration = value; }
    inline WaypointOptimizationConnection& WithTravelDuration(long long value) { SetTravelDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of a wait step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetWaitDuration() const{ return m_waitDuration; }
    inline bool WaitDurationHasBeenSet() const { return m_waitDurationHasBeenSet; }
    inline void SetWaitDuration(long long value) { m_waitDurationHasBeenSet = true; m_waitDuration = value; }
    inline WaypointOptimizationConnection& WithWaitDuration(long long value) { SetWaitDuration(value); return *this;}
    ///@}
  private:

    long long m_distance;
    bool m_distanceHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    long long m_restDuration;
    bool m_restDurationHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;

    long long m_travelDuration;
    bool m_travelDurationHasBeenSet = false;

    long long m_waitDuration;
    bool m_waitDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
