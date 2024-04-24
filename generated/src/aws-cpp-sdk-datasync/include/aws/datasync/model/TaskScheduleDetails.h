/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/ScheduleDisabledBy.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Provides information about your DataSync <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">task
   * schedule</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskScheduleDetails">AWS
   * API Reference</a></p>
   */
  class TaskScheduleDetails
  {
  public:
    AWS_DATASYNC_API TaskScheduleDetails();
    AWS_DATASYNC_API TaskScheduleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskScheduleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the last time the status of your task schedule changed. For
     * example, if DataSync automatically disables your schedule because of a repeated
     * error, you can see when the schedule was disabled.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusUpdateTime() const{ return m_statusUpdateTime; }

    /**
     * <p>Indicates the last time the status of your task schedule changed. For
     * example, if DataSync automatically disables your schedule because of a repeated
     * error, you can see when the schedule was disabled.</p>
     */
    inline bool StatusUpdateTimeHasBeenSet() const { return m_statusUpdateTimeHasBeenSet; }

    /**
     * <p>Indicates the last time the status of your task schedule changed. For
     * example, if DataSync automatically disables your schedule because of a repeated
     * error, you can see when the schedule was disabled.</p>
     */
    inline void SetStatusUpdateTime(const Aws::Utils::DateTime& value) { m_statusUpdateTimeHasBeenSet = true; m_statusUpdateTime = value; }

    /**
     * <p>Indicates the last time the status of your task schedule changed. For
     * example, if DataSync automatically disables your schedule because of a repeated
     * error, you can see when the schedule was disabled.</p>
     */
    inline void SetStatusUpdateTime(Aws::Utils::DateTime&& value) { m_statusUpdateTimeHasBeenSet = true; m_statusUpdateTime = std::move(value); }

    /**
     * <p>Indicates the last time the status of your task schedule changed. For
     * example, if DataSync automatically disables your schedule because of a repeated
     * error, you can see when the schedule was disabled.</p>
     */
    inline TaskScheduleDetails& WithStatusUpdateTime(const Aws::Utils::DateTime& value) { SetStatusUpdateTime(value); return *this;}

    /**
     * <p>Indicates the last time the status of your task schedule changed. For
     * example, if DataSync automatically disables your schedule because of a repeated
     * error, you can see when the schedule was disabled.</p>
     */
    inline TaskScheduleDetails& WithStatusUpdateTime(Aws::Utils::DateTime&& value) { SetStatusUpdateTime(std::move(value)); return *this;}


    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline const Aws::String& GetDisabledReason() const{ return m_disabledReason; }

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline void SetDisabledReason(const Aws::String& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline void SetDisabledReason(Aws::String&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::move(value); }

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline void SetDisabledReason(const char* value) { m_disabledReasonHasBeenSet = true; m_disabledReason.assign(value); }

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline TaskScheduleDetails& WithDisabledReason(const Aws::String& value) { SetDisabledReason(value); return *this;}

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline TaskScheduleDetails& WithDisabledReason(Aws::String&& value) { SetDisabledReason(std::move(value)); return *this;}

    /**
     * <p>Provides a reason if the task schedule is disabled.</p> <p>If your schedule
     * is disabled by <code>USER</code>, you see a <code>Manually disabled by
     * user.</code> message.</p> <p>If your schedule is disabled by
     * <code>SERVICE</code>, you see an error message to help you understand why the
     * task keeps failing. For information on resolving DataSync errors, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-locations-tasks.html">Troubleshooting
     * issues with DataSync transfers</a>.</p>
     */
    inline TaskScheduleDetails& WithDisabledReason(const char* value) { SetDisabledReason(value); return *this;}


    /**
     * <p>Indicates how your task schedule was disabled.</p> <ul> <li> <p>
     * <code>USER</code> - Your schedule was manually disabled by using the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_UpdateTask.html">UpdateTask</a>
     * operation or DataSync console.</p> </li> <li> <p> <code>SERVICE</code> - Your
     * schedule was automatically disabled by DataSync because the task failed
     * repeatedly with the same error.</p> </li> </ul>
     */
    inline const ScheduleDisabledBy& GetDisabledBy() const{ return m_disabledBy; }

    /**
     * <p>Indicates how your task schedule was disabled.</p> <ul> <li> <p>
     * <code>USER</code> - Your schedule was manually disabled by using the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_UpdateTask.html">UpdateTask</a>
     * operation or DataSync console.</p> </li> <li> <p> <code>SERVICE</code> - Your
     * schedule was automatically disabled by DataSync because the task failed
     * repeatedly with the same error.</p> </li> </ul>
     */
    inline bool DisabledByHasBeenSet() const { return m_disabledByHasBeenSet; }

    /**
     * <p>Indicates how your task schedule was disabled.</p> <ul> <li> <p>
     * <code>USER</code> - Your schedule was manually disabled by using the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_UpdateTask.html">UpdateTask</a>
     * operation or DataSync console.</p> </li> <li> <p> <code>SERVICE</code> - Your
     * schedule was automatically disabled by DataSync because the task failed
     * repeatedly with the same error.</p> </li> </ul>
     */
    inline void SetDisabledBy(const ScheduleDisabledBy& value) { m_disabledByHasBeenSet = true; m_disabledBy = value; }

    /**
     * <p>Indicates how your task schedule was disabled.</p> <ul> <li> <p>
     * <code>USER</code> - Your schedule was manually disabled by using the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_UpdateTask.html">UpdateTask</a>
     * operation or DataSync console.</p> </li> <li> <p> <code>SERVICE</code> - Your
     * schedule was automatically disabled by DataSync because the task failed
     * repeatedly with the same error.</p> </li> </ul>
     */
    inline void SetDisabledBy(ScheduleDisabledBy&& value) { m_disabledByHasBeenSet = true; m_disabledBy = std::move(value); }

    /**
     * <p>Indicates how your task schedule was disabled.</p> <ul> <li> <p>
     * <code>USER</code> - Your schedule was manually disabled by using the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_UpdateTask.html">UpdateTask</a>
     * operation or DataSync console.</p> </li> <li> <p> <code>SERVICE</code> - Your
     * schedule was automatically disabled by DataSync because the task failed
     * repeatedly with the same error.</p> </li> </ul>
     */
    inline TaskScheduleDetails& WithDisabledBy(const ScheduleDisabledBy& value) { SetDisabledBy(value); return *this;}

    /**
     * <p>Indicates how your task schedule was disabled.</p> <ul> <li> <p>
     * <code>USER</code> - Your schedule was manually disabled by using the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_UpdateTask.html">UpdateTask</a>
     * operation or DataSync console.</p> </li> <li> <p> <code>SERVICE</code> - Your
     * schedule was automatically disabled by DataSync because the task failed
     * repeatedly with the same error.</p> </li> </ul>
     */
    inline TaskScheduleDetails& WithDisabledBy(ScheduleDisabledBy&& value) { SetDisabledBy(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_statusUpdateTime;
    bool m_statusUpdateTimeHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;

    ScheduleDisabledBy m_disabledBy;
    bool m_disabledByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
