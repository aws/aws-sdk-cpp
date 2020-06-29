/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the schedule you want your task to use for repeated executions. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
   * Expressions for Rules</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskSchedule">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API TaskSchedule
  {
  public:
    TaskSchedule();
    TaskSchedule(Aws::Utils::Json::JsonView jsonValue);
    TaskSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline TaskSchedule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline TaskSchedule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A cron expression that specifies when AWS DataSync initiates a scheduled
     * transfer from a source to a destination location. </p>
     */
    inline TaskSchedule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
