/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JobExecution
  {
  public:
    AWS_IOT_API JobExecution() = default;
    AWS_IOT_API JobExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier you assigned to the job when it was created.</p>
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
     * <p>The status of the job execution (IN_PROGRESS, QUEUED, FAILED, SUCCEEDED,
     * TIMED_OUT, CANCELED, or REJECTED).</p>
     */
    inline JobExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobExecution& WithStatus(JobExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Will be <code>true</code> if the job execution was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool GetForceCanceled() const { return m_forceCanceled; }
    inline bool ForceCanceledHasBeenSet() const { return m_forceCanceledHasBeenSet; }
    inline void SetForceCanceled(bool value) { m_forceCanceledHasBeenSet = true; m_forceCanceled = value; }
    inline JobExecution& WithForceCanceled(bool value) { SetForceCanceled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline const JobExecutionStatusDetails& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = JobExecutionStatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = JobExecutionStatusDetails>
    JobExecution& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    JobExecution& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline const Aws::Utils::DateTime& GetQueuedAt() const { return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    template<typename QueuedAtT = Aws::Utils::DateTime>
    void SetQueuedAt(QueuedAtT&& value) { m_queuedAtHasBeenSet = true; m_queuedAt = std::forward<QueuedAtT>(value); }
    template<typename QueuedAtT = Aws::Utils::DateTime>
    JobExecution& WithQueuedAt(QueuedAtT&& value) { SetQueuedAt(std::forward<QueuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    JobExecution& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    JobExecution& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used in commands
     * which return or update job execution information. </p>
     */
    inline long long GetExecutionNumber() const { return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline JobExecution& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
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
     * <p>The estimated number of seconds that remain before the job execution status
     * will be changed to <code>TIMED_OUT</code>. The timeout interval can be anywhere
     * between 1 minute and 7 days (1 to 10080 minutes). The actual job execution
     * timeout can occur up to 60 seconds later than the estimated duration. This value
     * will not be included if the job execution has reached a terminal status.</p>
     */
    inline long long GetApproximateSecondsBeforeTimedOut() const { return m_approximateSecondsBeforeTimedOut; }
    inline bool ApproximateSecondsBeforeTimedOutHasBeenSet() const { return m_approximateSecondsBeforeTimedOutHasBeenSet; }
    inline void SetApproximateSecondsBeforeTimedOut(long long value) { m_approximateSecondsBeforeTimedOutHasBeenSet = true; m_approximateSecondsBeforeTimedOut = value; }
    inline JobExecution& WithApproximateSecondsBeforeTimedOut(long long value) { SetApproximateSecondsBeforeTimedOut(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobExecutionStatus m_status{JobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    bool m_forceCanceled{false};
    bool m_forceCanceledHasBeenSet = false;

    JobExecutionStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    Aws::Utils::DateTime m_queuedAt{};
    bool m_queuedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_executionNumber{0};
    bool m_executionNumberHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    long long m_approximateSecondsBeforeTimedOut{0};
    bool m_approximateSecondsBeforeTimedOutHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
