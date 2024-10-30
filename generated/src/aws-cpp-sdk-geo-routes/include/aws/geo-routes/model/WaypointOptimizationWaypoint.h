/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationAccessHours.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/WaypointOptimizationSideOfStreetOptions.h>
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
   * <p>Waypoint between the Origin and Destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationWaypoint">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationWaypoint
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationWaypoint();
    AWS_GEOROUTES_API WaypointOptimizationWaypoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationWaypoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Access hours corresponding to when a waypoint can be visited.</p>
     */
    inline const WaypointOptimizationAccessHours& GetAccessHours() const{ return m_accessHours; }
    inline bool AccessHoursHasBeenSet() const { return m_accessHoursHasBeenSet; }
    inline void SetAccessHours(const WaypointOptimizationAccessHours& value) { m_accessHoursHasBeenSet = true; m_accessHours = value; }
    inline void SetAccessHours(WaypointOptimizationAccessHours&& value) { m_accessHoursHasBeenSet = true; m_accessHours = std::move(value); }
    inline WaypointOptimizationWaypoint& WithAccessHours(const WaypointOptimizationAccessHours& value) { SetAccessHours(value); return *this;}
    inline WaypointOptimizationWaypoint& WithAccessHours(WaypointOptimizationAccessHours&& value) { SetAccessHours(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Appointment time at the waypoint.</p>
     */
    inline const Aws::String& GetAppointmentTime() const{ return m_appointmentTime; }
    inline bool AppointmentTimeHasBeenSet() const { return m_appointmentTimeHasBeenSet; }
    inline void SetAppointmentTime(const Aws::String& value) { m_appointmentTimeHasBeenSet = true; m_appointmentTime = value; }
    inline void SetAppointmentTime(Aws::String&& value) { m_appointmentTimeHasBeenSet = true; m_appointmentTime = std::move(value); }
    inline void SetAppointmentTime(const char* value) { m_appointmentTimeHasBeenSet = true; m_appointmentTime.assign(value); }
    inline WaypointOptimizationWaypoint& WithAppointmentTime(const Aws::String& value) { SetAppointmentTime(value); return *this;}
    inline WaypointOptimizationWaypoint& WithAppointmentTime(Aws::String&& value) { SetAppointmentTime(std::move(value)); return *this;}
    inline WaypointOptimizationWaypoint& WithAppointmentTime(const char* value) { SetAppointmentTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraint defining what waypoints are to be visited after this waypoint.</p>
     */
    inline const Aws::Vector<int>& GetBefore() const{ return m_before; }
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }
    inline void SetBefore(const Aws::Vector<int>& value) { m_beforeHasBeenSet = true; m_before = value; }
    inline void SetBefore(Aws::Vector<int>&& value) { m_beforeHasBeenSet = true; m_before = std::move(value); }
    inline WaypointOptimizationWaypoint& WithBefore(const Aws::Vector<int>& value) { SetBefore(value); return *this;}
    inline WaypointOptimizationWaypoint& WithBefore(Aws::Vector<int>&& value) { SetBefore(std::move(value)); return *this;}
    inline WaypointOptimizationWaypoint& AddBefore(int value) { m_beforeHasBeenSet = true; m_before.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>GPS Heading at the position.</p>
     */
    inline double GetHeading() const{ return m_heading; }
    inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
    inline void SetHeading(double value) { m_headingHasBeenSet = true; m_heading = value; }
    inline WaypointOptimizationWaypoint& WithHeading(double value) { SetHeading(value); return *this;}
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
    inline WaypointOptimizationWaypoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WaypointOptimizationWaypoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WaypointOptimizationWaypoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline WaypointOptimizationWaypoint& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline WaypointOptimizationWaypoint& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline WaypointOptimizationWaypoint& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Service time spent at the waypoint. At an appointment, the service time
     * should be the appointment duration.</p> <p> <b>Unit</b>: <code>seconds</code>
     * </p>
     */
    inline long long GetServiceDuration() const{ return m_serviceDuration; }
    inline bool ServiceDurationHasBeenSet() const { return m_serviceDurationHasBeenSet; }
    inline void SetServiceDuration(long long value) { m_serviceDurationHasBeenSet = true; m_serviceDuration = value; }
    inline WaypointOptimizationWaypoint& WithServiceDuration(long long value) { SetServiceDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to a side of the
     * street.</p>
     */
    inline const WaypointOptimizationSideOfStreetOptions& GetSideOfStreet() const{ return m_sideOfStreet; }
    inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
    inline void SetSideOfStreet(const WaypointOptimizationSideOfStreetOptions& value) { m_sideOfStreetHasBeenSet = true; m_sideOfStreet = value; }
    inline void SetSideOfStreet(WaypointOptimizationSideOfStreetOptions&& value) { m_sideOfStreetHasBeenSet = true; m_sideOfStreet = std::move(value); }
    inline WaypointOptimizationWaypoint& WithSideOfStreet(const WaypointOptimizationSideOfStreetOptions& value) { SetSideOfStreet(value); return *this;}
    inline WaypointOptimizationWaypoint& WithSideOfStreet(WaypointOptimizationSideOfStreetOptions&& value) { SetSideOfStreet(std::move(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationAccessHours m_accessHours;
    bool m_accessHoursHasBeenSet = false;

    Aws::String m_appointmentTime;
    bool m_appointmentTimeHasBeenSet = false;

    Aws::Vector<int> m_before;
    bool m_beforeHasBeenSet = false;

    double m_heading;
    bool m_headingHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    long long m_serviceDuration;
    bool m_serviceDurationHasBeenSet = false;

    WaypointOptimizationSideOfStreetOptions m_sideOfStreet;
    bool m_sideOfStreetHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
