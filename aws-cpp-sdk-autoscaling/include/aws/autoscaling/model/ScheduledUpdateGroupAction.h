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
   * <p>Describes a scheduled scaling action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ScheduledUpdateGroupAction">AWS
   * API Reference</a></p>
   */
  class ScheduledUpdateGroupAction
  {
  public:
    AWS_AUTOSCALING_API ScheduledUpdateGroupAction();
    AWS_AUTOSCALING_API ScheduledUpdateGroupAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API ScheduledUpdateGroupAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ScheduledUpdateGroupAction& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ScheduledUpdateGroupAction& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline ScheduledUpdateGroupAction& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The name of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline ScheduledUpdateGroupAction& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline ScheduledUpdateGroupAction& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action.</p>
     */
    inline ScheduledUpdateGroupAction& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionARN() const{ return m_scheduledActionARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline bool ScheduledActionARNHasBeenSet() const { return m_scheduledActionARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline void SetScheduledActionARN(const Aws::String& value) { m_scheduledActionARNHasBeenSet = true; m_scheduledActionARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline void SetScheduledActionARN(Aws::String&& value) { m_scheduledActionARNHasBeenSet = true; m_scheduledActionARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline void SetScheduledActionARN(const char* value) { m_scheduledActionARNHasBeenSet = true; m_scheduledActionARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline ScheduledUpdateGroupAction& WithScheduledActionARN(const Aws::String& value) { SetScheduledActionARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline ScheduledUpdateGroupAction& WithScheduledActionARN(Aws::String&& value) { SetScheduledActionARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline ScheduledUpdateGroupAction& WithScheduledActionARN(const char* value) { SetScheduledActionARN(value); return *this;}


    /**
     * <p>This property is no longer used.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p>This property is no longer used.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>This property is no longer used.</p>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>This property is no longer used.</p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>This property is no longer used.</p>
     */
    inline ScheduledUpdateGroupAction& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>This property is no longer used.</p>
     */
    inline ScheduledUpdateGroupAction& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline ScheduledUpdateGroupAction& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline ScheduledUpdateGroupAction& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline ScheduledUpdateGroupAction& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline ScheduledUpdateGroupAction& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline const Aws::String& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline void SetRecurrence(const Aws::String& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline void SetRecurrence(Aws::String&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline void SetRecurrence(const char* value) { m_recurrenceHasBeenSet = true; m_recurrence.assign(value); }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline ScheduledUpdateGroupAction& WithRecurrence(const Aws::String& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline ScheduledUpdateGroupAction& WithRecurrence(Aws::String&& value) { SetRecurrence(std::move(value)); return *this;}

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline ScheduledUpdateGroupAction& WithRecurrence(const char* value) { SetRecurrence(value); return *this;}


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
    inline ScheduledUpdateGroupAction& WithMinSize(int value) { SetMinSize(value); return *this;}


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
    inline ScheduledUpdateGroupAction& WithMaxSize(int value) { SetMaxSize(value); return *this;}


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
    inline ScheduledUpdateGroupAction& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}


    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline ScheduledUpdateGroupAction& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline ScheduledUpdateGroupAction& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline ScheduledUpdateGroupAction& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    Aws::String m_scheduledActionARN;
    bool m_scheduledActionARNHasBeenSet = false;

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet = false;

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
