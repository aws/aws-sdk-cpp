/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes information used for one or more scheduled scaling action updates
   * in a <a>BatchPutScheduledUpdateGroupAction</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ScheduledUpdateGroupActionRequest">AWS
   * API Reference</a></p>
   */
  class ScheduledUpdateGroupActionRequest
  {
  public:
    AWS_AUTOSCALING_API ScheduledUpdateGroupActionRequest();
    AWS_AUTOSCALING_API ScheduledUpdateGroupActionRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API ScheduledUpdateGroupActionRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the scaling action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scaling action.</p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scaling action.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scaling action.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scaling action.</p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scaling action.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scaling action.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling action.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in
     * UTC/GMT only and in quotes (for example,
     * <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in
     * UTC/GMT only and in quotes (for example,
     * <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in
     * UTC/GMT only and in quotes (for example,
     * <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in
     * UTC/GMT only and in quotes (for example,
     * <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in
     * UTC/GMT only and in quotes (for example,
     * <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in
     * UTC/GMT only and in quotes (for example,
     * <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline const Aws::String& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline void SetRecurrence(const Aws::String& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline void SetRecurrence(Aws::String&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline void SetRecurrence(const char* value) { m_recurrenceHasBeenSet = true; m_recurrence.assign(value); }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithRecurrence(const Aws::String& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithRecurrence(Aws::String&& value) { SetRecurrence(std::move(value)); return *this;}

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p> <p>Cron expressions use Universal Coordinated Time (UTC)
     * by default.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithRecurrence(const char* value) { SetRecurrence(value); return *this;}


    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * the scheduled action runs and the capacity it attempts to maintain.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * the scheduled action runs and the capacity it attempts to maintain.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * the scheduled action runs and the capacity it attempts to maintain.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * the scheduled action runs and the capacity it attempts to maintain.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}


    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p>Specifies the time zone for a cron expression. If a time zone is not
     * provided, UTC is used by default. </p> <p>Valid values are the canonical names
     * of the IANA time zones, derived from the IANA Time Zone Database (such as
     * <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For more information,
     * see <a
     * href="https://en.wikipedia.org/wiki/List_of_tz_database_time_zones">https://en.wikipedia.org/wiki/List_of_tz_database_time_zones</a>.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}

  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
