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
#include <aws/core/utils/DateTime.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetMaintenanceWindowResult
  {
  public:
    GetMaintenanceWindowResult();
    GetMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the maintenance window.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the maintenance window.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the maintenance window.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the maintenance window.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the maintenance window.</p>
     */
    inline GetMaintenanceWindowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDate = value; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDate = std::move(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline void SetStartDate(const char* value) { m_startDate.assign(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline GetMaintenanceWindowResult& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline GetMaintenanceWindowResult& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window will not run before
     * this specified time.</p>
     */
    inline GetMaintenanceWindowResult& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDate = value; }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDate = std::move(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline void SetEndDate(const char* value) { m_endDate.assign(value); }

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline GetMaintenanceWindowResult& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline GetMaintenanceWindowResult& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window will not run
     * after this specified time.</p>
     */
    inline GetMaintenanceWindowResult& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_schedule = value; }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_schedule = std::move(value); }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const char* value) { m_schedule.assign(value); }

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline GetMaintenanceWindowResult& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline GetMaintenanceWindowResult& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline GetMaintenanceWindowResult& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const{ return m_scheduleTimezone; }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline void SetScheduleTimezone(const Aws::String& value) { m_scheduleTimezone = value; }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline void SetScheduleTimezone(Aws::String&& value) { m_scheduleTimezone = std::move(value); }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline void SetScheduleTimezone(const char* value) { m_scheduleTimezone.assign(value); }

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline GetMaintenanceWindowResult& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline GetMaintenanceWindowResult& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "etc/UTC", or "Asia/Seoul". For more information, see the
     * <a href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline GetMaintenanceWindowResult& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}


    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline const Aws::String& GetNextExecutionTime() const{ return m_nextExecutionTime; }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline void SetNextExecutionTime(const Aws::String& value) { m_nextExecutionTime = value; }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline void SetNextExecutionTime(Aws::String&& value) { m_nextExecutionTime = std::move(value); }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline void SetNextExecutionTime(const char* value) { m_nextExecutionTime.assign(value); }

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline GetMaintenanceWindowResult& WithNextExecutionTime(const Aws::String& value) { SetNextExecutionTime(value); return *this;}

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline GetMaintenanceWindowResult& WithNextExecutionTime(Aws::String&& value) { SetNextExecutionTime(std::move(value)); return *this;}

    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline GetMaintenanceWindowResult& WithNextExecutionTime(const char* value) { SetNextExecutionTime(value); return *this;}


    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline void SetDuration(int value) { m_duration = value; }

    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline GetMaintenanceWindowResult& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }

    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline void SetCutoff(int value) { m_cutoff = value; }

    /**
     * <p>The number of hours before the end of the maintenance window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline GetMaintenanceWindowResult& WithCutoff(int value) { SetCutoff(value); return *this;}


    /**
     * <p>Whether targets must be registered with the maintenance window before tasks
     * can be defined for those targets.</p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }

    /**
     * <p>Whether targets must be registered with the maintenance window before tasks
     * can be defined for those targets.</p>
     */
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargets = value; }

    /**
     * <p>Whether targets must be registered with the maintenance window before tasks
     * can be defined for those targets.</p>
     */
    inline GetMaintenanceWindowResult& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}


    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline GetMaintenanceWindowResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The date the maintenance window was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the maintenance window was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date the maintenance window was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date the maintenance window was created.</p>
     */
    inline GetMaintenanceWindowResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the maintenance window was created.</p>
     */
    inline GetMaintenanceWindowResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date the maintenance window was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedDate() const{ return m_modifiedDate; }

    /**
     * <p>The date the maintenance window was last modified.</p>
     */
    inline void SetModifiedDate(const Aws::Utils::DateTime& value) { m_modifiedDate = value; }

    /**
     * <p>The date the maintenance window was last modified.</p>
     */
    inline void SetModifiedDate(Aws::Utils::DateTime&& value) { m_modifiedDate = std::move(value); }

    /**
     * <p>The date the maintenance window was last modified.</p>
     */
    inline GetMaintenanceWindowResult& WithModifiedDate(const Aws::Utils::DateTime& value) { SetModifiedDate(value); return *this;}

    /**
     * <p>The date the maintenance window was last modified.</p>
     */
    inline GetMaintenanceWindowResult& WithModifiedDate(Aws::Utils::DateTime&& value) { SetModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_windowId;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_startDate;

    Aws::String m_endDate;

    Aws::String m_schedule;

    Aws::String m_scheduleTimezone;

    Aws::String m_nextExecutionTime;

    int m_duration;

    int m_cutoff;

    bool m_allowUnassociatedTargets;

    bool m_enabled;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_modifiedDate;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
