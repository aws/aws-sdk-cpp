/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains a subset of information about a job execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/JobExecutionSummary">AWS
   * API Reference</a></p>
   */
  class JobExecutionSummary
  {
  public:
    AWS_IOTJOBSDATAPLANE_API JobExecutionSummary() = default;
    AWS_IOTJOBSDATAPLANE_API JobExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API JobExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    JobExecutionSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline long long GetQueuedAt() const { return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    inline void SetQueuedAt(long long value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }
    inline JobExecutionSummary& WithQueuedAt(long long value) { SetQueuedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline JobExecutionSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline long long GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(long long value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline JobExecutionSummary& WithLastUpdatedAt(long long value) { SetLastUpdatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time IoT Jobs receives an update from a device.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline JobExecutionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline long long GetExecutionNumber() const { return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline JobExecutionSummary& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    long long m_queuedAt{0};
    bool m_queuedAtHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_lastUpdatedAt{0};
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    long long m_executionNumber{0};
    bool m_executionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
