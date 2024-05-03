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
    AWS_DATASYNC_API TaskSchedule();
    AWS_DATASYNC_API TaskSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline TaskSchedule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline TaskSchedule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>Specifies your task schedule by using a cron expression in UTC time. For
     * information about cron expression syntax, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">
     * <i>Amazon EventBridge User Guide</i> </a>.</p>
     */
    inline TaskSchedule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline const ScheduleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline void SetStatus(const ScheduleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline void SetStatus(ScheduleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline TaskSchedule& WithStatus(const ScheduleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether to enable or disable your task schedule. Your schedule is
     * enabled by default, but there can be situations where you need to disable it.
     * For example, you might need to pause a recurring transfer to fix an issue with
     * your task or perform maintenance on your storage system.</p> <p>DataSync might
     * disable your schedule automatically if your task fails repeatedly with the same
     * error. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_TaskScheduleDetails.html">TaskScheduleDetails</a>.</p>
     */
    inline TaskSchedule& WithStatus(ScheduleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    ScheduleStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
