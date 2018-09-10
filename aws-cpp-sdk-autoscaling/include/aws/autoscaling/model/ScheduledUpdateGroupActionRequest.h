﻿/*
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
   * <p>Describes one or more scheduled scaling action updates for a specified Auto
   * Scaling group. Used in combination with
   * <a>BatchPutScheduledUpdateGroupAction</a>. </p> <p>When updating a scheduled
   * scaling action, all optional parameters are left unchanged if not specified.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ScheduledUpdateGroupActionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API ScheduledUpdateGroupActionRequest
  {
  public:
    ScheduledUpdateGroupActionRequest();
    ScheduledUpdateGroupActionRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledUpdateGroupActionRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the scaling action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

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
     * <p>The time for the action to start, in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT
     * only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time for the action to start, in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT
     * only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time for the action to start, in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT
     * only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time for the action to start, in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT
     * only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time for the action to start, in "YYYY-MM-DDThh:mm:ssZ" format in UTC/GMT
     * only (for example, <code>2014-06-01T00:00:00Z</code>).</p> <p>If you specify
     * <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling
     * performs the action at this time, and then performs the action based on the
     * specified recurrence.</p> <p>If you try to schedule the action in the past,
     * Amazon EC2 Auto Scaling returns an error message.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

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
    inline ScheduledUpdateGroupActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time for the recurring schedule to end. Amazon EC2 Auto Scaling does not
     * perform the action after this time.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline const Aws::String& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline void SetRecurrence(const Aws::String& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline void SetRecurrence(Aws::String&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline void SetRecurrence(const char* value) { m_recurrenceHasBeenSet = true; m_recurrence.assign(value); }

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithRecurrence(const Aws::String& value) { SetRecurrence(value); return *this;}

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithRecurrence(Aws::String&& value) { SetRecurrence(std::move(value)); return *this;}

    /**
     * <p>The recurring schedule for the action, in Unix cron syntax format. For more
     * information about this format, see <a href="http://crontab.org">Crontab</a>.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithRecurrence(const char* value) { SetRecurrence(value); return *this;}


    /**
     * <p>The minimum size of the group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum size of the group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The number of EC2 instances that should be running in the group.</p>
     */
    inline ScheduledUpdateGroupActionRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}

  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet;

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
