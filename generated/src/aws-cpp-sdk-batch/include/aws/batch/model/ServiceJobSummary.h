/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/LatestServiceJobAttempt.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceJobType.h>
#include <aws/batch/model/ServiceJobStatus.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Summary information about a service job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobSummary">AWS
   * API Reference</a></p>
   */
  class ServiceJobSummary
  {
  public:
    AWS_BATCH_API ServiceJobSummary() = default;
    AWS_BATCH_API ServiceJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the latest attempt for the service job.</p>
     */
    inline const LatestServiceJobAttempt& GetLatestAttempt() const { return m_latestAttempt; }
    inline bool LatestAttemptHasBeenSet() const { return m_latestAttemptHasBeenSet; }
    template<typename LatestAttemptT = LatestServiceJobAttempt>
    void SetLatestAttempt(LatestAttemptT&& value) { m_latestAttemptHasBeenSet = true; m_latestAttempt = std::forward<LatestAttemptT>(value); }
    template<typename LatestAttemptT = LatestServiceJobAttempt>
    ServiceJobSummary& WithLatestAttempt(LatestAttemptT&& value) { SetLatestAttempt(std::forward<LatestAttemptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job was
     * created.</p>
     */
    inline long long GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline ServiceJobSummary& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    ServiceJobSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the service job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    ServiceJobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    ServiceJobSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service job. For SageMaker Training jobs, this value is
     * <code>SAGEMAKER_TRAINING</code>.</p>
     */
    inline ServiceJobType GetServiceJobType() const { return m_serviceJobType; }
    inline bool ServiceJobTypeHasBeenSet() const { return m_serviceJobTypeHasBeenSet; }
    inline void SetServiceJobType(ServiceJobType value) { m_serviceJobTypeHasBeenSet = true; m_serviceJobType = value; }
    inline ServiceJobSummary& WithServiceJobType(ServiceJobType value) { SetServiceJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The share identifier for the job.</p>
     */
    inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    template<typename ShareIdentifierT = Aws::String>
    void SetShareIdentifier(ShareIdentifierT&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::forward<ShareIdentifierT>(value); }
    template<typename ShareIdentifierT = Aws::String>
    ServiceJobSummary& WithShareIdentifier(ShareIdentifierT&& value) { SetShareIdentifier(std::forward<ShareIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the service job. </p>
     */
    inline ServiceJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceJobSummary& WithStatus(ServiceJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short string to provide more details on the current status of the service
     * job.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ServiceJobSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job was
     * started.</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline ServiceJobSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job stopped
     * running.</p>
     */
    inline long long GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline ServiceJobSummary& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}
  private:

    LatestServiceJobAttempt m_latestAttempt;
    bool m_latestAttemptHasBeenSet = false;

    long long m_createdAt{0};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    ServiceJobType m_serviceJobType{ServiceJobType::NOT_SET};
    bool m_serviceJobTypeHasBeenSet = false;

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    ServiceJobStatus m_status{ServiceJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt{0};
    bool m_stoppedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
