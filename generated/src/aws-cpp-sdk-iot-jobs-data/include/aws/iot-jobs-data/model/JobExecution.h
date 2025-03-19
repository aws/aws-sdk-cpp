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
    AWS_IOTJOBSDATAPLANE_API JobExecution() = default;
    AWS_IOTJOBSDATAPLANE_API JobExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API JobExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobExecution& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing that is executing the job.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    JobExecution& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "TIMED_OUT", "REJECTED", or "REMOVED".</p>
     */
    inline JobExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobExecution& WithStatus(JobExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p> <p>The maximum length of the value in the name/value pair is
     * 1,024 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    JobExecution& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    template<typename StatusDetailsKeyT = Aws::String, typename StatusDetailsValueT = Aws::String>
    JobExecution& AddStatusDetails(StatusDetailsKeyT&& key, StatusDetailsValueT&& value) {
      m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::forward<StatusDetailsKeyT>(key), std::forward<StatusDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline long long GetQueuedAt() const { return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    inline void SetQueuedAt(long long value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }
    inline JobExecution& WithQueuedAt(long long value) { SetQueuedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was started.</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline JobExecution& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated. </p>
     */
    inline long long GetLastUpdatedAt() const { return m_lastUpdatedAt; }
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
    inline long long GetApproximateSecondsBeforeTimedOut() const { return m_approximateSecondsBeforeTimedOut; }
    inline bool ApproximateSecondsBeforeTimedOutHasBeenSet() const { return m_approximateSecondsBeforeTimedOutHasBeenSet; }
    inline void SetApproximateSecondsBeforeTimedOut(long long value) { m_approximateSecondsBeforeTimedOutHasBeenSet = true; m_approximateSecondsBeforeTimedOut = value; }
    inline JobExecution& WithApproximateSecondsBeforeTimedOut(long long value) { SetApproximateSecondsBeforeTimedOut(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
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
    inline long long GetExecutionNumber() const { return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline JobExecution& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the job document.</p>
     */
    inline const Aws::String& GetJobDocument() const { return m_jobDocument; }
    inline bool JobDocumentHasBeenSet() const { return m_jobDocumentHasBeenSet; }
    template<typename JobDocumentT = Aws::String>
    void SetJobDocument(JobDocumentT&& value) { m_jobDocumentHasBeenSet = true; m_jobDocument = std::forward<JobDocumentT>(value); }
    template<typename JobDocumentT = Aws::String>
    JobExecution& WithJobDocument(JobDocumentT&& value) { SetJobDocument(std::forward<JobDocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    JobExecutionStatus m_status{JobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    long long m_queuedAt{0};
    bool m_queuedAtHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_lastUpdatedAt{0};
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_approximateSecondsBeforeTimedOut{0};
    bool m_approximateSecondsBeforeTimedOutHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    long long m_executionNumber{0};
    bool m_executionNumberHasBeenSet = false;

    Aws::String m_jobDocument;
    bool m_jobDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
