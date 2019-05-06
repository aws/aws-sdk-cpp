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
#include <aws/iot-jobs-data/model/JobExecutionStatus.h>
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
  class AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionRequest : public IoTJobsDataPlaneRequest
  {
  public:
    UpdateJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobExecution"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline UpdateJobExecutionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline UpdateJobExecutionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline UpdateJobExecutionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


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
    inline UpdateJobExecutionRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline UpdateJobExecutionRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline UpdateJobExecutionRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline UpdateJobExecutionRequest& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline UpdateJobExecutionRequest& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline void SetStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline void SetStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& WithStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusDetails(value); return *this;}

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& WithStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(const Aws::String& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(Aws::String&& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(const Aws::String& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(Aws::String&& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(const char* key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(Aws::String&& key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p>
     */
    inline UpdateJobExecutionRequest& AddStatusDetails(const char* key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }


    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by again calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in this field) the job execution status will
     * be automatically set to <code>TIMED_OUT</code>. Note that setting or resetting
     * this timeout has no effect on that job execution timeout which may have been
     * specified when the job was created (<code>CreateJob</code> using field
     * <code>timeoutConfig</code>).</p>
     */
    inline long long GetStepTimeoutInMinutes() const{ return m_stepTimeoutInMinutes; }

    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by again calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in this field) the job execution status will
     * be automatically set to <code>TIMED_OUT</code>. Note that setting or resetting
     * this timeout has no effect on that job execution timeout which may have been
     * specified when the job was created (<code>CreateJob</code> using field
     * <code>timeoutConfig</code>).</p>
     */
    inline bool StepTimeoutInMinutesHasBeenSet() const { return m_stepTimeoutInMinutesHasBeenSet; }

    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by again calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in this field) the job execution status will
     * be automatically set to <code>TIMED_OUT</code>. Note that setting or resetting
     * this timeout has no effect on that job execution timeout which may have been
     * specified when the job was created (<code>CreateJob</code> using field
     * <code>timeoutConfig</code>).</p>
     */
    inline void SetStepTimeoutInMinutes(long long value) { m_stepTimeoutInMinutesHasBeenSet = true; m_stepTimeoutInMinutes = value; }

    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by again calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>
     * and specifying a new timeout value in this field) the job execution status will
     * be automatically set to <code>TIMED_OUT</code>. Note that setting or resetting
     * this timeout has no effect on that job execution timeout which may have been
     * specified when the job was created (<code>CreateJob</code> using field
     * <code>timeoutConfig</code>).</p>
     */
    inline UpdateJobExecutionRequest& WithStepTimeoutInMinutes(long long value) { SetStepTimeoutInMinutes(value); return *this;}


    /**
     * <p>Optional. The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>Optional. The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>Optional. The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>Optional. The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline UpdateJobExecutionRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}


    /**
     * <p>Optional. When included and set to true, the response contains the
     * JobExecutionState data. The default is false.</p>
     */
    inline bool GetIncludeJobExecutionState() const{ return m_includeJobExecutionState; }

    /**
     * <p>Optional. When included and set to true, the response contains the
     * JobExecutionState data. The default is false.</p>
     */
    inline bool IncludeJobExecutionStateHasBeenSet() const { return m_includeJobExecutionStateHasBeenSet; }

    /**
     * <p>Optional. When included and set to true, the response contains the
     * JobExecutionState data. The default is false.</p>
     */
    inline void SetIncludeJobExecutionState(bool value) { m_includeJobExecutionStateHasBeenSet = true; m_includeJobExecutionState = value; }

    /**
     * <p>Optional. When included and set to true, the response contains the
     * JobExecutionState data. The default is false.</p>
     */
    inline UpdateJobExecutionRequest& WithIncludeJobExecutionState(bool value) { SetIncludeJobExecutionState(value); return *this;}


    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline bool GetIncludeJobDocument() const{ return m_includeJobDocument; }

    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline bool IncludeJobDocumentHasBeenSet() const { return m_includeJobDocumentHasBeenSet; }

    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline void SetIncludeJobDocument(bool value) { m_includeJobDocumentHasBeenSet = true; m_includeJobDocument = value; }

    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline UpdateJobExecutionRequest& WithIncludeJobDocument(bool value) { SetIncludeJobDocument(value); return *this;}


    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline UpdateJobExecutionRequest& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet;

    long long m_stepTimeoutInMinutes;
    bool m_stepTimeoutInMinutesHasBeenSet;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet;

    bool m_includeJobExecutionState;
    bool m_includeJobExecutionStateHasBeenSet;

    bool m_includeJobDocument;
    bool m_includeJobDocumentHasBeenSet;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
