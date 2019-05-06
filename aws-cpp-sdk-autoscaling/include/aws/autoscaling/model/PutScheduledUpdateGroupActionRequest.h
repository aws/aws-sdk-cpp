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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API PutScheduledUpdateGroupActionRequest : public AutoScalingRequest
  {
  public:
    PutScheduledUpdateGroupActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutScheduledUpdateGroupAction"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline PutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The name of this scaling action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of this scaling action.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of this scaling action.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>This parameter is deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT
     * only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If
     * you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto
     * Scaling performs the action at this time, and then performs the action based on
     * the specified recurrence.</p> <p>If you try to schedule your action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT
     * only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If
     * you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto
     * Scaling performs the action at this time, and then performs the action based on
     * the specified recurrence.</p> <p>If you try to schedule your action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT
     * only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If
     * you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto
     * Scaling performs the action at this time, and then performs the action based on
     * the specified recurrence.</p> <p>If you try to schedule your action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT
     * only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If
     * you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto
     * Scaling performs the action at this time, and then performs the action based on
     * the specified recurrence.</p> <p>If you try to schedule your action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT
     * only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If
     * you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto
     * Scaling performs the action at this time, and then performs the action based on
     * the specified recurrence.</p> <p>If you try to schedule your action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT
     * only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p> <p>If
     * you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto
     * Scaling performs the action at this time, and then performs the action based on
     * the specified recurrence.</p> <p>If you try to schedule your action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline const Aws::String& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline void SetRecurrence(const Aws::String& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline void SetRecurrence(Aws::String&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline void SetRecurrence(const char* value) { m_recurrenceHasBeenSet = true; m_recurrence.assign(value); }

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithRecurrence(const Aws::String& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithRecurrence(Aws::String&& value) { SetRecurrence(std::move(value)); return *this;}

    /**
     * <p>The recurring schedule for this action, in Unix cron syntax format. This
     * format consists of five fields separated by white spaces: [Minute] [Hour]
     * [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for
     * example, <code>"30 0 1 1,6,12 *"</code>). For more information about this
     * format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithRecurrence(const char* value) { SetRecurrence(value); return *this;}


    /**
     * <p>The minimum size for the Auto Scaling group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size for the Auto Scaling group.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum size for the Auto Scaling group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size for the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum size for the Auto Scaling group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size for the Auto Scaling group.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum size for the Auto Scaling group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size for the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet;

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_recurrence;
    bool m_recurrenceHasBeenSet;

    int m_minSize;
    bool m_minSizeHasBeenSet;

    int m_maxSize;
    bool m_maxSizeHasBeenSet;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
