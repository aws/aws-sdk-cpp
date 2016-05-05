/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of this scaling action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of this scaling action.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

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
    inline PutScheduledUpdateGroupActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(value); return *this;}

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
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>This parameter is deprecated.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithTime(Aws::Utils::DateTime&& value) { SetTime(value); return *this;}

    /**
     * <p>The time for this action to start, in "YYYY-MM-DDThh:mm:ssZ" format in
     * UTC/GMT only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you try
     * to schedule your action in the past, Auto Scaling returns an error message. </p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time for this action to start, in "YYYY-MM-DDThh:mm:ssZ" format in
     * UTC/GMT only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you try
     * to schedule your action in the past, Auto Scaling returns an error message. </p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time for this action to start, in "YYYY-MM-DDThh:mm:ssZ" format in
     * UTC/GMT only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you try
     * to schedule your action in the past, Auto Scaling returns an error message. </p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time for this action to start, in "YYYY-MM-DDThh:mm:ssZ" format in
     * UTC/GMT only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you try
     * to schedule your action in the past, Auto Scaling returns an error message. </p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time for this action to start, in "YYYY-MM-DDThh:mm:ssZ" format in
     * UTC/GMT only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you try
     * to schedule your action in the past, Auto Scaling returns an error message. </p>
     * <p>When <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * starts and stops.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time for this action to end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time for this action to end.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time for this action to end.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time for this action to end.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time for this action to end.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline const Aws::String& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline void SetRecurrence(const Aws::String& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline void SetRecurrence(Aws::String&& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline void SetRecurrence(const char* value) { m_recurrenceHasBeenSet = true; m_recurrence.assign(value); }

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithRecurrence(const Aws::String& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithRecurrence(Aws::String&& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The time when recurring future actions will start. Start time is specified by
     * the user following the Unix cron syntax format. For more information, see <a
     * href="http://en.wikipedia.org/wiki/Cron">Cron</a> in Wikipedia.</p> <p>When
     * <code>StartTime</code> and <code>EndTime</code> are specified with
     * <code>Recurrence</code>, they form the boundaries of when the recurring action
     * will start and stop.</p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithRecurrence(const char* value) { SetRecurrence(value); return *this;}

    /**
     * <p> The minimum size for the Auto Scaling group. </p>
     */
    inline long GetMinSize() const{ return m_minSize; }

    /**
     * <p> The minimum size for the Auto Scaling group. </p>
     */
    inline void SetMinSize(long value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p> The minimum size for the Auto Scaling group. </p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithMinSize(long value) { SetMinSize(value); return *this;}

    /**
     * <p> The maximum size for the Auto Scaling group. </p>
     */
    inline long GetMaxSize() const{ return m_maxSize; }

    /**
     * <p> The maximum size for the Auto Scaling group. </p>
     */
    inline void SetMaxSize(long value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p> The maximum size for the Auto Scaling group. </p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithMaxSize(long value) { SetMaxSize(value); return *this;}

    /**
     * <p> The number of EC2 instances that should be running in the group. </p>
     */
    inline long GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p> The number of EC2 instances that should be running in the group. </p>
     */
    inline void SetDesiredCapacity(long value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p> The number of EC2 instances that should be running in the group. </p>
     */
    inline PutScheduledUpdateGroupActionRequest& WithDesiredCapacity(long value) { SetDesiredCapacity(value); return *this;}

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
    long m_minSize;
    bool m_minSizeHasBeenSet;
    long m_maxSize;
    bool m_maxSizeHasBeenSet;
    long m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
