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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-jobs-data/model/JobExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   * <p>Contains data about a job execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/JobExecution">AWS
   * API Reference</a></p>
   */
  class AWS_IOTJOBSDATAPLANE_API JobExecution
  {
  public:
    JobExecution();
    JobExecution(Aws::Utils::Json::JsonView jsonValue);
    JobExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecution& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecution& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecution& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline JobExecution& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline JobExecution& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline JobExecution& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline JobExecution& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline JobExecution& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline void SetStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline void SetStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& WithStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& WithStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(const Aws::String& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(Aws::String&& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(const Aws::String& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(Aws::String&& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(const char* key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(Aws::String&& key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecution& AddStatusDetails(const char* key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }


    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline long long GetQueuedAt() const{ return m_queuedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline void SetQueuedAt(long long value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline JobExecution& WithQueuedAt(long long value) { SetQueuedAt(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * started.</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * started.</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * started.</p>
     */
    inline JobExecution& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated. </p>
     */
    inline long long GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated. </p>
     */
    inline void SetLastUpdatedAt(long long value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated. </p>
     */
    inline JobExecution& WithLastUpdatedAt(long long value) { SetLastUpdatedAt(value); return *this;}


    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>.</p>
     */
    inline long long GetApproximateSecondsBeforeTimedOut() const{ return m_approximateSecondsBeforeTimedOut; }

    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>.</p>
     */
    inline bool ApproximateSecondsBeforeTimedOutHasBeenSet() const { return m_approximateSecondsBeforeTimedOutHasBeenSet; }

    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>.</p>
     */
    inline void SetApproximateSecondsBeforeTimedOut(long long value) { m_approximateSecondsBeforeTimedOutHasBeenSet = true; m_approximateSecondsBeforeTimedOut = value; }

    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>.</p>
     */
    inline JobExecution& WithApproximateSecondsBeforeTimedOut(long long value) { SetApproximateSecondsBeforeTimedOut(value); return *this;}


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
     * <p>A number that identifies a particular job execution on a particular device.
     * It can be used later in commands that return or update job execution
     * information.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>A number that identifies a particular job execution on a particular device.
     * It can be used later in commands that return or update job execution
     * information.</p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>A number that identifies a particular job execution on a particular device.
     * It can be used later in commands that return or update job execution
     * information.</p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>A number that identifies a particular job execution on a particular device.
     * It can be used later in commands that return or update job execution
     * information.</p>
     */
    inline JobExecution& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}


    /**
     * <p>The content of the job document.</p>
     */
    inline const Aws::String& GetJobDocument() const{ return m_jobDocument; }

    /**
     * <p>The content of the job document.</p>
     */
    inline bool JobDocumentHasBeenSet() const { return m_jobDocumentHasBeenSet; }

    /**
     * <p>The content of the job document.</p>
     */
    inline void SetJobDocument(const Aws::String& value) { m_jobDocumentHasBeenSet = true; m_jobDocument = value; }

    /**
     * <p>The content of the job document.</p>
     */
    inline void SetJobDocument(Aws::String&& value) { m_jobDocumentHasBeenSet = true; m_jobDocument = std::move(value); }

    /**
     * <p>The content of the job document.</p>
     */
    inline void SetJobDocument(const char* value) { m_jobDocumentHasBeenSet = true; m_jobDocument.assign(value); }

    /**
     * <p>The content of the job document.</p>
     */
    inline JobExecution& WithJobDocument(const Aws::String& value) { SetJobDocument(value); return *this;}

    /**
     * <p>The content of the job document.</p>
     */
    inline JobExecution& WithJobDocument(Aws::String&& value) { SetJobDocument(std::move(value)); return *this;}

    /**
     * <p>The content of the job document.</p>
     */
    inline JobExecution& WithJobDocument(const char* value) { SetJobDocument(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet;

    long long m_queuedAt;
    bool m_queuedAtHasBeenSet;

    long long m_startedAt;
    bool m_startedAtHasBeenSet;

    long long m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    long long m_approximateSecondsBeforeTimedOut;
    bool m_approximateSecondsBeforeTimedOutHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet;

    Aws::String m_jobDocument;
    bool m_jobDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
