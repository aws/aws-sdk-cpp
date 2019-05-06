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
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   */
  class AWS_IOTJOBSDATAPLANE_API StartNextPendingJobExecutionRequest : public IoTJobsDataPlaneRequest
  {
  public:
    StartNextPendingJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartNextPendingJobExecution"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline StartNextPendingJobExecutionRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline StartNextPendingJobExecutionRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline StartNextPendingJobExecutionRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline void SetStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline void SetStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& WithStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& WithStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(const Aws::String& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(Aws::String&& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(const Aws::String& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(Aws::String&& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(const char* key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(Aws::String&& key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline StartNextPendingJobExecutionRequest& AddStatusDetails(const char* key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }


    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in field <code>stepTimeoutInMinutes</code>)
     * the job execution status will be automatically set to <code>TIMED_OUT</code>.
     * Note that setting this timeout has no effect on that job execution timeout which
     * may have been specified when the job was created (<code>CreateJob</code> using
     * field <code>timeoutConfig</code>).</p>
     */
    inline long long GetStepTimeoutInMinutes() const{ return m_stepTimeoutInMinutes; }

    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in field <code>stepTimeoutInMinutes</code>)
     * the job execution status will be automatically set to <code>TIMED_OUT</code>.
     * Note that setting this timeout has no effect on that job execution timeout which
     * may have been specified when the job was created (<code>CreateJob</code> using
     * field <code>timeoutConfig</code>).</p>
     */
    inline bool StepTimeoutInMinutesHasBeenSet() const { return m_stepTimeoutInMinutesHasBeenSet; }

    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in field <code>stepTimeoutInMinutes</code>)
     * the job execution status will be automatically set to <code>TIMED_OUT</code>.
     * Note that setting this timeout has no effect on that job execution timeout which
     * may have been specified when the job was created (<code>CreateJob</code> using
     * field <code>timeoutConfig</code>).</p>
     */
    inline void SetStepTimeoutInMinutes(long long value) { m_stepTimeoutInMinutesHasBeenSet = true; m_stepTimeoutInMinutes = value; }

    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in field <code>stepTimeoutInMinutes</code>)
     * the job execution status will be automatically set to <code>TIMED_OUT</code>.
     * Note that setting this timeout has no effect on that job execution timeout which
     * may have been specified when the job was created (<code>CreateJob</code> using
     * field <code>timeoutConfig</code>).</p>
     */
    inline StartNextPendingJobExecutionRequest& WithStepTimeoutInMinutes(long long value) { SetStepTimeoutInMinutes(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet;

    long long m_stepTimeoutInMinutes;
    bool m_stepTimeoutInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
