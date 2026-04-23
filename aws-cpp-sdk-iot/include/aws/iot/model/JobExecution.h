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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobExecutionStatus.h>
#include <aws/iot/model/JobExecutionStatusDetails.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The job execution object represents the execution of a job on a particular
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecution">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API JobExecution
  {
  public:
    JobExecution();
    JobExecution(Aws::Utils::Json::JsonView jsonValue);
    JobExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline JobExecution& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline JobExecution& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
     */
    inline JobExecution& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline JobExecution& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline JobExecution& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Will be <code>true</code> if the job execution was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool GetForceCanceled() const{ return m_forceCanceled; }

    /**
     * <p>Will be <code>true</code> if the job execution was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool ForceCanceledHasBeenSet() const { return m_forceCanceledHasBeenSet; }

    /**
     * <p>Will be <code>true</code> if the job execution was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline void SetForceCanceled(bool value) { m_forceCanceledHasBeenSet = true; m_forceCanceled = value; }

    /**
     * <p>Will be <code>true</code> if the job execution was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline JobExecution& WithForceCanceled(bool value) { SetForceCanceled(value); return *this;}


    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline const JobExecutionStatusDetails& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline void SetStatusDetails(const JobExecutionStatusDetails& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline void SetStatusDetails(JobExecutionStatusDetails&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& WithStatusDetails(const JobExecutionStatusDetails& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& WithStatusDetails(JobExecutionStatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}


    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline JobExecution& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline JobExecution& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline JobExecution& WithThingArn(const char* value) { SetThingArn(value); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline const Aws::Utils::DateTime& GetQueuedAt() const{ return m_queuedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline void SetQueuedAt(const Aws::Utils::DateTime& value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline void SetQueuedAt(Aws::Utils::DateTime&& value) { m_queuedAtHasBeenSet = true; m_queuedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline JobExecution& WithQueuedAt(const Aws::Utils::DateTime& value) { SetQueuedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline JobExecution& WithQueuedAt(Aws::Utils::DateTime&& value) { SetQueuedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline JobExecution& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline JobExecution& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline JobExecution& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline JobExecution& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used in commands
     * which return or update job execution information. </p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used in commands
     * which return or update job execution information. </p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used in commands
     * which return or update job execution information. </p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used in commands
     * which return or update job execution information. </p>
     */
    inline JobExecution& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}


    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline JobExecution& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>. The timeout interval can be anywhere
     * between 1 minute and 7 days (1 to 10080 minutes). The actual job execution
     * timeout can occur up to 60 seconds later than the estimated duration. This value
     * will not be included if the job execution has reached a terminal status.</p>
     */
    inline long long GetApproximateSecondsBeforeTimedOut() const{ return m_approximateSecondsBeforeTimedOut; }

    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>. The timeout interval can be anywhere
     * between 1 minute and 7 days (1 to 10080 minutes). The actual job execution
     * timeout can occur up to 60 seconds later than the estimated duration. This value
     * will not be included if the job execution has reached a terminal status.</p>
     */
    inline bool ApproximateSecondsBeforeTimedOutHasBeenSet() const { return m_approximateSecondsBeforeTimedOutHasBeenSet; }

    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>. The timeout interval can be anywhere
     * between 1 minute and 7 days (1 to 10080 minutes). The actual job execution
     * timeout can occur up to 60 seconds later than the estimated duration. This value
     * will not be included if the job execution has reached a terminal status.</p>
     */
    inline void SetApproximateSecondsBeforeTimedOut(long long value) { m_approximateSecondsBeforeTimedOutHasBeenSet = true; m_approximateSecondsBeforeTimedOut = value; }

    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>. The timeout interval can be anywhere
     * between 1 minute and 7 days (1 to 10080 minutes). The actual job execution
     * timeout can occur up to 60 seconds later than the estimated duration. This value
     * will not be included if the job execution has reached a terminal status.</p>
     */
    inline JobExecution& WithApproximateSecondsBeforeTimedOut(long long value) { SetApproximateSecondsBeforeTimedOut(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet;

    bool m_forceCanceled;
    bool m_forceCanceledHasBeenSet;

    JobExecutionStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet;

    Aws::Utils::DateTime m_queuedAt;
    bool m_queuedAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;

    long long m_approximateSecondsBeforeTimedOut;
    bool m_approximateSecondsBeforeTimedOutHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
