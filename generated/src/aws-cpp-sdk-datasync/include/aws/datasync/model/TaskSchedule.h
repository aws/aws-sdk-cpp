/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/ScheduleStatus.h>
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
   * <p>Configures your DataSync task to run on a <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-scheduling.html">schedule</a>
   * (at a minimum interval of 1 hour).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskSchedule">AWS
   * API Reference</a></p>
   */
  class TaskSchedule
  {
  public:
    AWS_DATASYNC_API TaskSchedule() = default;
    AWS_DATASYNC_API TaskSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies your task schedule by using a cron or rate expression.</p> <p>Use
     * cron expressions for task schedules that run on a specific time and day. For
     * example, the following cron expression creates a task schedule that runs at 8 AM
     * on the first Wednesday of every month:</p> <p> <code>cron(0 8 * * 3#1)</code>
     * </p> <p>Use rate expressions for task schedules that run on a regular interval.
     * For example, the following rate expression creates a task schedule that runs
     * every 12 hours:</p> <p> <code>rate(12 hours)</code> </p> <p>For information
     * about cron and rate expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-scheduled-rule-pattern.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    TaskSchedule& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline ScheduleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ScheduleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaskSchedule& WithStatus(ScheduleStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    ScheduleStatus m_status{ScheduleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
