/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceJobRetryStrategy.h>
#include <aws/batch/model/ServiceJobType.h>
#include <aws/batch/model/ServiceJobTimeout.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class SubmitServiceJobRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API SubmitServiceJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitServiceJob"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the service job. It can be up to 128 characters long. It can
     * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
     * (_).</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    SubmitServiceJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job queue into which the service job is submitted. You can specify either
     * the name or the ARN of the queue. The job queue must have the type
     * <code>SAGEMAKER_TRAINING</code>.</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    SubmitServiceJobRequest& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed service jobs that are submitted with
     * this service job request. </p>
     */
    inline const ServiceJobRetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    template<typename RetryStrategyT = ServiceJobRetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = ServiceJobRetryStrategy>
    SubmitServiceJobRequest& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling priority of the service job. Valid values are integers between
     * 0 and 9999.</p>
     */
    inline int GetSchedulingPriority() const { return m_schedulingPriority; }
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }
    inline SubmitServiceJobRequest& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request, in JSON, for the service that the SubmitServiceJob operation is
     * queueing. </p>
     */
    inline const Aws::String& GetServiceRequestPayload() const { return m_serviceRequestPayload; }
    inline bool ServiceRequestPayloadHasBeenSet() const { return m_serviceRequestPayloadHasBeenSet; }
    template<typename ServiceRequestPayloadT = Aws::String>
    void SetServiceRequestPayload(ServiceRequestPayloadT&& value) { m_serviceRequestPayloadHasBeenSet = true; m_serviceRequestPayload = std::forward<ServiceRequestPayloadT>(value); }
    template<typename ServiceRequestPayloadT = Aws::String>
    SubmitServiceJobRequest& WithServiceRequestPayload(ServiceRequestPayloadT&& value) { SetServiceRequestPayload(std::forward<ServiceRequestPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service job. For SageMaker Training jobs, specify
     * <code>SAGEMAKER_TRAINING</code>.</p>
     */
    inline ServiceJobType GetServiceJobType() const { return m_serviceJobType; }
    inline bool ServiceJobTypeHasBeenSet() const { return m_serviceJobTypeHasBeenSet; }
    inline void SetServiceJobType(ServiceJobType value) { m_serviceJobTypeHasBeenSet = true; m_serviceJobType = value; }
    inline SubmitServiceJobRequest& WithServiceJobType(ServiceJobType value) { SetServiceJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The share identifier for the service job. Don't specify this parameter if the
     * job queue doesn't have a fair-share scheduling policy. If the job queue has a
     * fair-share scheduling policy, then this parameter must be specified.</p>
     */
    inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    template<typename ShareIdentifierT = Aws::String>
    void SetShareIdentifier(ShareIdentifierT&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::forward<ShareIdentifierT>(value); }
    template<typename ShareIdentifierT = Aws::String>
    SubmitServiceJobRequest& WithShareIdentifier(ShareIdentifierT&& value) { SetShareIdentifier(std::forward<ShareIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for the service job. If none is specified, Batch
     * defers to the default timeout of the underlying service handling the job.</p>
     */
    inline const ServiceJobTimeout& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = ServiceJobTimeout>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = ServiceJobTimeout>
    SubmitServiceJobRequest& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the service job request. Each tag consists of a
     * key and an optional value. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SubmitServiceJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SubmitServiceJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. This token is used to ensure idempotency
     * of requests. If this parameter is specified and two submit requests with
     * identical payloads and <code>clientToken</code>s are received, these requests
     * are considered the same request and the second request is rejected.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    SubmitServiceJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

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

    ServiceJobTimeout m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
