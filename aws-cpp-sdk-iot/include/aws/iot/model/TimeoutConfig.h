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
     * of this job. The timeout interval can be anywhere between 1 minute and 7 days (1
     * to 10080 minutes). The in progress timer can't be updated and will apply to all
     * job executions for the job. Whenever a job execution remains in the IN_PROGRESS
     * status for longer than this interval, the job execution will fail and switch to
     * the terminal <code>TIMED_OUT</code> status.</p>
     */
    inline long long GetInProgressTimeoutInMinutes() const{ return m_inProgressTimeoutInMinutes; }

    /**
     * <p>Specifies the amount of time, in minutes, this device has to finish execution
     * of this job. The timeout interval can be anywhere between 1 minute and 7 days (1
     * to 10080 minutes). The in progress timer can't be updated and will apply to all
     * job executions for the job. Whenever a job execution remains in the IN_PROGRESS
     * status for longer than this interval, the job execution will fail and switch to
     * the terminal <code>TIMED_OUT</code> status.</p>
     */
    inline bool InProgressTimeoutInMinutesHasBeenSet() const { return m_inProgressTimeoutInMinutesHasBeenSet; }

    /**
     * <p>Specifies the amount of time, in minutes, this device has to finish execution
     * of this job. The timeout interval can be anywhere between 1 minute and 7 days (1
     * to 10080 minutes). The in progress timer can't be updated and will apply to all
     * job executions for the job. Whenever a job execution remains in the IN_PROGRESS
     * status for longer than this interval, the job execution will fail and switch to
     * the terminal <code>TIMED_OUT</code> status.</p>
     */
    inline void SetInProgressTimeoutInMinutes(long long value) { m_inProgressTimeoutInMinutesHasBeenSet = true; m_inProgressTimeoutInMinutes = value; }

    /**
     * <p>Specifies the amount of time, in minutes, this device has to finish execution
     * of this job. The timeout interval can be anywhere between 1 minute and 7 days (1
     * to 10080 minutes). The in progress timer can't be updated and will apply to all
     * job executions for the job. Whenever a job execution remains in the IN_PROGRESS
     * status for longer than this interval, the job execution will fail and switch to
     * the terminal <code>TIMED_OUT</code> status.</p>
     */
    inline TimeoutConfig& WithInProgressTimeoutInMinutes(long long value) { SetInProgressTimeoutInMinutes(value); return *this;}

  private:

    long long m_inProgressTimeoutInMinutes;
    bool m_inProgressTimeoutInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
