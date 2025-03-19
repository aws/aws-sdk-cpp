/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationAccessHours.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Destination related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationDestinationOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationDestinationOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationDestinationOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationDestinationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationDestinationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Access hours corresponding to when a waypoint can be visited.</p>
     */
    inline const WaypointOptimizationAccessHours& GetAccessHours() const { return m_accessHours; }
    inline bool AccessHoursHasBeenSet() const { return m_accessHoursHasBeenSet; }
    template<typename AccessHoursT = WaypointOptimizationAccessHours>
    void SetAccessHours(AccessHoursT&& value) { m_accessHoursHasBeenSet = true; m_accessHours = std::forward<AccessHoursT>(value); }
    template<typename AccessHoursT = WaypointOptimizationAccessHours>
    WaypointOptimizationDestinationOptions& WithAccessHours(AccessHoursT&& value) { SetAccessHours(std::forward<AccessHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Appointment time at the destination.</p>
     */
    inline const Aws::String& GetAppointmentTime() const { return m_appointmentTime; }
    inline bool AppointmentTimeHasBeenSet() const { return m_appointmentTimeHasBeenSet; }
    template<typename AppointmentTimeT = Aws::String>
    void SetAppointmentTime(AppointmentTimeT&& value) { m_appointmentTimeHasBeenSet = true; m_appointmentTime = std::forward<AppointmentTimeT>(value); }
    template<typename AppointmentTimeT = Aws::String>
    WaypointOptimizationDestinationOptions& WithAppointmentTime(AppointmentTimeT&& value) { SetAppointmentTime(std::forward<AppointmentTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>GPS Heading at the position.</p>
     */
    inline double GetHeading() const { return m_heading; }
    inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
    inline void SetHeading(double value) { m_headingHasBeenSet = true; m_heading = value; }
    inline WaypointOptimizationDestinationOptions& WithHeading(double value) { SetHeading(value); return *this;}
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
    WaypointOptimizationDestinationOptions& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Service time spent at the destination. At an appointment, the service time
     * should be the appointment duration.</p> <p> <b>Unit</b>: <code>seconds</code>
     * </p>
     */
    inline long long GetServiceDuration() const { return m_serviceDuration; }
    inline bool ServiceDurationHasBeenSet() const { return m_serviceDurationHasBeenSet; }
    inline void SetServiceDuration(long long value) { m_serviceDurationHasBeenSet = true; m_serviceDuration = value; }
    inline WaypointOptimizationDestinationOptions& WithServiceDuration(long long value) { SetServiceDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to a side of the
     * street.</p>
     */
    inline const WaypointOptimizationSideOfStreetOptions& GetSideOfStreet() const { return m_sideOfStreet; }
    inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
    template<typename SideOfStreetT = WaypointOptimizationSideOfStreetOptions>
    void SetSideOfStreet(SideOfStreetT&& value) { m_sideOfStreetHasBeenSet = true; m_sideOfStreet = std::forward<SideOfStreetT>(value); }
    template<typename SideOfStreetT = WaypointOptimizationSideOfStreetOptions>
    WaypointOptimizationDestinationOptions& WithSideOfStreet(SideOfStreetT&& value) { SetSideOfStreet(std::forward<SideOfStreetT>(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationAccessHours m_accessHours;
    bool m_accessHoursHasBeenSet = false;

    Aws::String m_appointmentTime;
    bool m_appointmentTimeHasBeenSet = false;

    double m_heading{0.0};
    bool m_headingHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_serviceDuration{0};
    bool m_serviceDurationHasBeenSet = false;

    WaypointOptimizationSideOfStreetOptions m_sideOfStreet;
    bool m_sideOfStreetHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
