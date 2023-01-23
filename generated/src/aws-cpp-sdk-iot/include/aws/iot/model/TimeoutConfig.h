/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TimeoutConfig
  {
  public:
    AWS_IOT_API TimeoutConfig();
    AWS_IOT_API TimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_inProgressTimeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
