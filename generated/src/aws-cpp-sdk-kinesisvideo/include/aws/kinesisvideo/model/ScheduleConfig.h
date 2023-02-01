/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>This API enables you to specify the duration that the camera, or local media
   * file, should record onto the Edge Agent. The <code>ScheduleConfig</code>
   * consists of the <code>ScheduleExpression</code> and the
   * <code>DurationInMinutes</code> attributes. </p> <p>If the
   * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
   * be set to recording mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ScheduleConfig">AWS
   * API Reference</a></p>
   */
  class ScheduleConfig
  {
  public:
    AWS_KINESISVIDEO_API ScheduleConfig();
    AWS_KINESISVIDEO_API ScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline ScheduleConfig& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline ScheduleConfig& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The Quartz cron expression that takes care of scheduling jobs to record from
     * the camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided for the
     * <code>RecorderConfig</code>, then the Edge Agent will always be set to recording
     * mode.</p> <p>For more information about Quartz, refer to the <a
     * href="http://www.quartz-scheduler.org/documentation/quartz-2.3.0/tutorials/crontrigger.html">
     * <i>Cron Trigger Tutorial</i> </a> page to understand the valid expressions and
     * its use.</p>
     */
    inline ScheduleConfig& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The total duration to record the media. If the
     * <code>ScheduleExpression</code> attribute is provided, then the
     * <code>DurationInSeconds</code> attribute should also be specified.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The total duration to record the media. If the
     * <code>ScheduleExpression</code> attribute is provided, then the
     * <code>DurationInSeconds</code> attribute should also be specified.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The total duration to record the media. If the
     * <code>ScheduleExpression</code> attribute is provided, then the
     * <code>DurationInSeconds</code> attribute should also be specified.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The total duration to record the media. If the
     * <code>ScheduleExpression</code> attribute is provided, then the
     * <code>DurationInSeconds</code> attribute should also be specified.</p>
     */
    inline ScheduleConfig& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
