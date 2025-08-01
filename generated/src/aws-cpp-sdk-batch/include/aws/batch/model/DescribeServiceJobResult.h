/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/LatestServiceJobAttempt.h>
#include <aws/batch/model/ServiceJobRetryStrategy.h>
#include <aws/batch/model/ServiceJobType.h>
#include <aws/batch/model/ServiceJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ServiceJobTimeout.h>
#include <aws/batch/model/ServiceJobAttemptDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{
  class DescribeServiceJobResult
  {
  public:
    AWS_BATCH_API DescribeServiceJobResult() = default;
    AWS_BATCH_API DescribeServiceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeServiceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job attempts associated with the service job.</p>
     */
    inline const Aws::Vector<ServiceJobAttemptDetail>& GetAttempts() const { return m_attempts; }
    template<typename AttemptsT = Aws::Vector<ServiceJobAttemptDetail>>
    void SetAttempts(AttemptsT&& value) { m_attemptsHasBeenSet = true; m_attempts = std::forward<AttemptsT>(value); }
    template<typename AttemptsT = Aws::Vector<ServiceJobAttemptDetail>>
    DescribeServiceJobResult& WithAttempts(AttemptsT&& value) { SetAttempts(std::forward<AttemptsT>(value)); return *this;}
    template<typename AttemptsT = ServiceJobAttemptDetail>
    DescribeServiceJobResult& AddAttempts(AttemptsT&& value) { m_attemptsHasBeenSet = true; m_attempts.emplace_back(std::forward<AttemptsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job was
     * created.</p>
     */
    inline long long GetCreatedAt() const { return m_createdAt; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline DescribeServiceJobResult& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service job has been terminated.</p>
     */
    inline bool GetIsTerminated() const { return m_isTerminated; }
    inline void SetIsTerminated(bool value) { m_isTerminatedHasBeenSet = true; m_isTerminated = value; }
    inline DescribeServiceJobResult& WithIsTerminated(bool value) { SetIsTerminated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    DescribeServiceJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the service job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeServiceJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DescribeServiceJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job queue that the service job is associated with.</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    DescribeServiceJobResult& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest attempt associated with the service job.</p>
     */
    inline const LatestServiceJobAttempt& GetLatestAttempt() const { return m_latestAttempt; }
    template<typename LatestAttemptT = LatestServiceJobAttempt>
    void SetLatestAttempt(LatestAttemptT&& value) { m_latestAttemptHasBeenSet = true; m_latestAttempt = std::forward<LatestAttemptT>(value); }
    template<typename LatestAttemptT = LatestServiceJobAttempt>
    DescribeServiceJobResult& WithLatestAttempt(LatestAttemptT&& value) { SetLatestAttempt(std::forward<LatestAttemptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed service jobs that are submitted with
     * this service job.</p>
     */
    inline const ServiceJobRetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    template<typename RetryStrategyT = ServiceJobRetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = ServiceJobRetryStrategy>
    DescribeServiceJobResult& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling priority of the service job. </p>
     */
    inline int GetSchedulingPriority() const { return m_schedulingPriority; }
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }
    inline DescribeServiceJobResult& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request, in JSON, for the service that the <code>SubmitServiceJob</code>
     * operation is queueing. </p>
     */
    inline const Aws::String& GetServiceRequestPayload() const { return m_serviceRequestPayload; }
    template<typename ServiceRequestPayloadT = Aws::String>
    void SetServiceRequestPayload(ServiceRequestPayloadT&& value) { m_serviceRequestPayloadHasBeenSet = true; m_serviceRequestPayload = std::forward<ServiceRequestPayloadT>(value); }
    template<typename ServiceRequestPayloadT = Aws::String>
    DescribeServiceJobResult& WithServiceRequestPayload(ServiceRequestPayloadT&& value) { SetServiceRequestPayload(std::forward<ServiceRequestPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service job. For SageMaker Training jobs, this value is
     * <code>SAGEMAKER_TRAINING</code>.</p>
     */
    inline ServiceJobType GetServiceJobType() const { return m_serviceJobType; }
    inline void SetServiceJobType(ServiceJobType value) { m_serviceJobTypeHasBeenSet = true; m_serviceJobType = value; }
    inline DescribeServiceJobResult& WithServiceJobType(ServiceJobType value) { SetServiceJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The share identifier for the service job. This is used for fair-share
     * scheduling.</p>
     */
    inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
    template<typename ShareIdentifierT = Aws::String>
    void SetShareIdentifier(ShareIdentifierT&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::forward<ShareIdentifierT>(value); }
    template<typename ShareIdentifierT = Aws::String>
    DescribeServiceJobResult& WithShareIdentifier(ShareIdentifierT&& value) { SetShareIdentifier(std::forward<ShareIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job was
     * started.</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline DescribeServiceJobResult& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the service job. </p>
     */
    inline ServiceJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ServiceJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeServiceJobResult& WithStatus(ServiceJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the service job.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeServiceJobResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the service job stopped
     * running.</p>
     */
    inline long long GetStoppedAt() const { return m_stoppedAt; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline DescribeServiceJobResult& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are associated with the service job. Each tag consists of a key
     * and an optional value. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeServiceJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeServiceJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for the service job.</p>
     */
    inline const ServiceJobTimeout& GetTimeoutConfig() const { return m_timeoutConfig; }
    template<typename TimeoutConfigT = ServiceJobTimeout>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = ServiceJobTimeout>
    DescribeServiceJobResult& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceJobAttemptDetail> m_attempts;
    bool m_attemptsHasBeenSet = false;

    long long m_createdAt{0};
    bool m_createdAtHasBeenSet = false;

    bool m_isTerminated{false};
    bool m_isTerminatedHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

    LatestServiceJobAttempt m_latestAttempt;
    bool m_latestAttemptHasBeenSet = false;

    ServiceJobRetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    int m_schedulingPriority{0};
    bool m_schedulingPriorityHasBeenSet = false;

    Aws::String m_serviceRequestPayload;
    bool m_serviceRequestPayloadHasBeenSet = false;

    ServiceJobType m_serviceJobType{ServiceJobType::NOT_SET};
    bool m_serviceJobTypeHasBeenSet = false;

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    ServiceJobStatus m_status{ServiceJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_stoppedAt{0};
    bool m_stoppedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ServiceJobTimeout m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
