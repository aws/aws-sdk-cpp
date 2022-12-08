/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobEndBehavior.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies the date and time that a job will begin the rollout of the job
   * document to all devices in the target group. Additionally, you can specify the
   * end behavior for each job execution when it reaches the scheduled end
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SchedulingConfig">AWS
   * API Reference</a></p>
   */
  class SchedulingConfig
  {
  public:
    AWS_IOT_API SchedulingConfig();
    AWS_IOT_API SchedulingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SchedulingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline SchedulingConfig& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline SchedulingConfig& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time.</p>
     */
    inline SchedulingConfig& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline SchedulingConfig& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline SchedulingConfig& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. </p>
     */
    inline SchedulingConfig& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline const JobEndBehavior& GetEndBehavior() const{ return m_endBehavior; }

    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline bool EndBehaviorHasBeenSet() const { return m_endBehaviorHasBeenSet; }

    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline void SetEndBehavior(const JobEndBehavior& value) { m_endBehaviorHasBeenSet = true; m_endBehavior = value; }

    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline void SetEndBehavior(JobEndBehavior&& value) { m_endBehaviorHasBeenSet = true; m_endBehavior = std::move(value); }

    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline SchedulingConfig& WithEndBehavior(const JobEndBehavior& value) { SetEndBehavior(value); return *this;}

    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline SchedulingConfig& WithEndBehavior(JobEndBehavior&& value) { SetEndBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    JobEndBehavior m_endBehavior;
    bool m_endBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
