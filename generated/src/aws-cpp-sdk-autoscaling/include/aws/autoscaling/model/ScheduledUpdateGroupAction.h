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
    AWS_AUTOSCALING_API ScheduledUpdateGroupAction() = default;
    AWS_AUTOSCALING_API ScheduledUpdateGroupAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API ScheduledUpdateGroupAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    ScheduledUpdateGroupAction& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const { return m_scheduledActionName; }
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }
    template<typename ScheduledActionNameT = Aws::String>
    void SetScheduledActionName(ScheduledActionNameT&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::forward<ScheduledActionNameT>(value); }
    template<typename ScheduledActionNameT = Aws::String>
    ScheduledUpdateGroupAction& WithScheduledActionName(ScheduledActionNameT&& value) { SetScheduledActionName(std::forward<ScheduledActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionARN() const { return m_scheduledActionARN; }
    inline bool ScheduledActionARNHasBeenSet() const { return m_scheduledActionARNHasBeenSet; }
    template<typename ScheduledActionARNT = Aws::String>
    void SetScheduledActionARN(ScheduledActionARNT&& value) { m_scheduledActionARNHasBeenSet = true; m_scheduledActionARN = std::forward<ScheduledActionARNT>(value); }
    template<typename ScheduledActionARNT = Aws::String>
    ScheduledUpdateGroupAction& WithScheduledActionARN(ScheduledActionARNT&& value) { SetScheduledActionARN(std::forward<ScheduledActionARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property is no longer used.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::Utils::DateTime>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::Utils::DateTime>
    ScheduledUpdateGroupAction& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time in UTC for this action to start. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ScheduledUpdateGroupAction& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time in UTC for the recurring schedule to end. For example,
     * <code>"2019-06-01T00:00:00Z"</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ScheduledUpdateGroupAction& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format.</p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline const Aws::String& GetRecurrence() const { return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    template<typename RecurrenceT = Aws::String>
    void SetRecurrence(RecurrenceT&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::forward<RecurrenceT>(value); }
    template<typename RecurrenceT = Aws::String>
    ScheduledUpdateGroupAction& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline ScheduledUpdateGroupAction& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline ScheduledUpdateGroupAction& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * the scheduled action runs and the capacity it attempts to maintain.</p>
     */
    inline int GetDesiredCapacity() const { return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline ScheduledUpdateGroupAction& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for the cron expression.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    ScheduledUpdateGroupAction& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    Aws::String m_scheduledActionARN;
    bool m_scheduledActionARNHasBeenSet = false;

    Aws::Utils::DateTime m_time{};
    bool m_timeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;

    int m_desiredCapacity{0};
    bool m_desiredCapacityHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
