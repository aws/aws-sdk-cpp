/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowIdentity
  {
  public:
    MaintenanceWindowIdentity();
    MaintenanceWindowIdentity(Aws::Utils::Json::JsonView jsonValue);
    MaintenanceWindowIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the maintenance window.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the maintenance window.</p>
     */
    inline MaintenanceWindowIdentity& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline MaintenanceWindowIdentity& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline MaintenanceWindowIdentity& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }

    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline bool CutoffHasBeenSet() const { return m_cutoffHasBeenSet; }

    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }

    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline MaintenanceWindowIdentity& WithCutoff(int value) { SetCutoff(value); return *this;}


    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline MaintenanceWindowIdentity& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline MaintenanceWindowIdentity& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline MaintenanceWindowIdentity& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const{ return m_scheduleTimezone; }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline bool ScheduleTimezoneHasBeenSet() const { return m_scheduleTimezoneHasBeenSet; }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline void SetScheduleTimezone(const Aws::String& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = value; }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline void SetScheduleTimezone(Aws::String&& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = std::move(value); }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline void SetScheduleTimezone(const char* value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone.assign(value); }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline MaintenanceWindowIdentity& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline MaintenanceWindowIdentity& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline MaintenanceWindowIdentity& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}


    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline MaintenanceWindowIdentity& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline MaintenanceWindowIdentity& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline MaintenanceWindowIdentity& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline MaintenanceWindowIdentity& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline MaintenanceWindowIdentity& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline MaintenanceWindowIdentity& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline const Aws::String& GetNextExecutionTime() const{ return m_nextExecutionTime; }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline bool NextExecutionTimeHasBeenSet() const { return m_nextExecutionTimeHasBeenSet; }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline void SetNextExecutionTime(const Aws::String& value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime = value; }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline void SetNextExecutionTime(Aws::String&& value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime = std::move(value); }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline void SetNextExecutionTime(const char* value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime.assign(value); }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline MaintenanceWindowIdentity& WithNextExecutionTime(const Aws::String& value) { SetNextExecutionTime(value); return *this;}

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline MaintenanceWindowIdentity& WithNextExecutionTime(Aws::String&& value) { SetNextExecutionTime(std::move(value)); return *this;}

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline MaintenanceWindowIdentity& WithNextExecutionTime(const char* value) { SetNextExecutionTime(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    int m_cutoff;
    bool m_cutoffHasBeenSet;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::String m_scheduleTimezone;
    bool m_scheduleTimezoneHasBeenSet;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet;

    Aws::String m_nextExecutionTime;
    bool m_nextExecutionTimeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
