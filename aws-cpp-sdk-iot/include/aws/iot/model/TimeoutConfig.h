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
#include <aws/iot/IoT_EXPORTS.h>

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
   * <p>Specifies the amount of time each device has to finish its execution of the
   * job. A timer is started when the job execution status is set to
   * <code>IN_PROGRESS</code>. If the job execution status is not set to another
   * terminal state before the timer expires, it will be automatically set to
   * <code>TIMED_OUT</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TimeoutConfig">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TimeoutConfig
  {
  public:
    TimeoutConfig();
    TimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
    TimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the amount of time, in minutes, this device has to finish execution
     * of this job. A timer is started, or restarted, whenever this job's execution
     * status is specified as <code>IN_PROGRESS</code> with this field populated. If
     * the job execution status is not set to a terminal state before the timer
     * expires, or before another job execution status update is sent with this field
     * populated, the status will be automatically set to <code>TIMED_OUT</code>. Note
     * that setting/resetting this timer has no effect on the job execution timeout
     * timer which may have been specified when the job was created
     * (<code>CreateJobExecution</code> using the field
     * <code>timeoutConfig</code>).</p>
     */
    inline long long GetInProgressTimeoutInMinutes() const{ return m_inProgressTimeoutInMinutes; }

    /**
     * <p>Specifies the amount of time, in minutes, this device has to finish execution
     * of this job. A timer is started, or restarted, whenever this job's execution
     * status is specified as <code>IN_PROGRESS</code> with this field populated. If
     * the job execution status is not set to a terminal state before the timer
     * expires, or before another job execution status update is sent with this field
     * populated, the status will be automatically set to <code>TIMED_OUT</code>. Note
     * that setting/resetting this timer has no effect on the job execution timeout
     * timer which may have been specified when the job was created
     * (<code>CreateJobExecution</code> using the field
     * <code>timeoutConfig</code>).</p>
     */
    inline void SetInProgressTimeoutInMinutes(long long value) { m_inProgressTimeoutInMinutesHasBeenSet = true; m_inProgressTimeoutInMinutes = value; }

    /**
     * <p>Specifies the amount of time, in minutes, this device has to finish execution
     * of this job. A timer is started, or restarted, whenever this job's execution
     * status is specified as <code>IN_PROGRESS</code> with this field populated. If
     * the job execution status is not set to a terminal state before the timer
     * expires, or before another job execution status update is sent with this field
     * populated, the status will be automatically set to <code>TIMED_OUT</code>. Note
     * that setting/resetting this timer has no effect on the job execution timeout
     * timer which may have been specified when the job was created
     * (<code>CreateJobExecution</code> using the field
     * <code>timeoutConfig</code>).</p>
     */
    inline TimeoutConfig& WithInProgressTimeoutInMinutes(long long value) { SetInProgressTimeoutInMinutes(value); return *this;}

  private:

    long long m_inProgressTimeoutInMinutes;
    bool m_inProgressTimeoutInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
