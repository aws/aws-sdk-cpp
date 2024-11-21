/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JobExecution
  {
  public:
    AWS_IOTJOBSDATAPLANE_API JobExecution();
    AWS_IOTJOBSDATAPLANE_API JobExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API JobExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobExecution& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobExecution& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobExecution& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline JobExecution& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline JobExecution& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline JobExecution& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "TIMED_OUT", "REJECTED", or "REMOVED".</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JobExecution& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}
    inline JobExecution& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p> <p>The maximum length of the value in the name/value pair is
     * 1,024 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline JobExecution& WithStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusDetails(value); return *this;}
    inline JobExecution& WithStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline JobExecution& AddStatusDetails(const Aws::String& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }
    inline JobExecution& AddStatusDetails(Aws::String&& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }
    inline JobExecution& AddStatusDetails(const Aws::String& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }
    inline JobExecution& AddStatusDetails(Aws::String&& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), std::move(value)); return *this; }
    inline JobExecution& AddStatusDetails(const char* key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }
    inline JobExecution& AddStatusDetails(Aws::String&& key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }
    inline JobExecution& AddStatusDetails(const char* key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline long long GetQueuedAt() const{ return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    inline void SetQueuedAt(long long value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }
    inline JobExecution& WithQueuedAt(long long value) { SetQueuedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was started.</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline JobExecution& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated. </p>
     */
    inline long long GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(long long value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline JobExecution& WithLastUpdatedAt(long long value) { SetLastUpdatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>. The actual job execution timeout can
     * occur up to 60 seconds later than the estimated duration.</p>
     */
    inline long long GetApproximateSecondsBeforeTimedOut() const{ return m_approximateSecondsBeforeTimedOut; }
    inline bool ApproximateSecondsBeforeTimedOutHasBeenSet() const { return m_approximateSecondsBeforeTimedOutHasBeenSet; }
    inline void SetApproximateSecondsBeforeTimedOut(long long value) { m_approximateSecondsBeforeTimedOutHasBeenSet = true; m_approximateSecondsBeforeTimedOut = value; }
    inline JobExecution& WithApproximateSecondsBeforeTimedOut(long long value) { SetApproximateSecondsBeforeTimedOut(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline JobExecution& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies a particular job execution on a particular device.
     * It can be used later in commands that return or update job execution
     * information.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline JobExecution& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the job document.</p>
     */
    inline const Aws::String& GetJobDocument() const{ return m_jobDocument; }
    inline bool JobDocumentHasBeenSet() const { return m_jobDocumentHasBeenSet; }
    inline void SetJobDocument(const Aws::String& value) { m_jobDocumentHasBeenSet = true; m_jobDocument = value; }
    inline void SetJobDocument(Aws::String&& value) { m_jobDocumentHasBeenSet = true; m_jobDocument = std::move(value); }
    inline void SetJobDocument(const char* value) { m_jobDocumentHasBeenSet = true; m_jobDocument.assign(value); }
    inline JobExecution& WithJobDocument(const Aws::String& value) { SetJobDocument(value); return *this;}
    inline JobExecution& WithJobDocument(Aws::String&& value) { SetJobDocument(std::move(value)); return *this;}
    inline JobExecution& WithJobDocument(const char* value) { SetJobDocument(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    long long m_queuedAt;
    bool m_queuedAtHasBeenSet = false;

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_approximateSecondsBeforeTimedOut;
    bool m_approximateSecondsBeforeTimedOutHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;

    Aws::String m_jobDocument;
    bool m_jobDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
