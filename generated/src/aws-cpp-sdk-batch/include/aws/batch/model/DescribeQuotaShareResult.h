/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareCapacityLimit.h>
#include <aws/batch/model/QuotaSharePreemptionConfiguration.h>
#include <aws/batch/model/QuotaShareResourceSharingConfiguration.h>
#include <aws/batch/model/QuotaShareState.h>
#include <aws/batch/model/QuotaShareStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {
class DescribeQuotaShareResult {
 public:
  AWS_BATCH_API DescribeQuotaShareResult() = default;
  AWS_BATCH_API DescribeQuotaShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BATCH_API DescribeQuotaShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareName() const { return m_quotaShareName; }
  template <typename QuotaShareNameT = Aws::String>
  void SetQuotaShareName(QuotaShareNameT&& value) {
    m_quotaShareNameHasBeenSet = true;
    m_quotaShareName = std::forward<QuotaShareNameT>(value);
  }
  template <typename QuotaShareNameT = Aws::String>
  DescribeQuotaShareResult& WithQuotaShareName(QuotaShareNameT&& value) {
    SetQuotaShareName(std::forward<QuotaShareNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareArn() const { return m_quotaShareArn; }
  template <typename QuotaShareArnT = Aws::String>
  void SetQuotaShareArn(QuotaShareArnT&& value) {
    m_quotaShareArnHasBeenSet = true;
    m_quotaShareArn = std::forward<QuotaShareArnT>(value);
  }
  template <typename QuotaShareArnT = Aws::String>
  DescribeQuotaShareResult& WithQuotaShareArn(QuotaShareArnT&& value) {
    SetQuotaShareArn(std::forward<QuotaShareArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the job queue associated with the quota share.</p>
   */
  inline const Aws::String& GetJobQueueArn() const { return m_jobQueueArn; }
  template <typename JobQueueArnT = Aws::String>
  void SetJobQueueArn(JobQueueArnT&& value) {
    m_jobQueueArnHasBeenSet = true;
    m_jobQueueArn = std::forward<JobQueueArnT>(value);
  }
  template <typename JobQueueArnT = Aws::String>
  DescribeQuotaShareResult& WithJobQueueArn(JobQueueArnT&& value) {
    SetJobQueueArn(std::forward<JobQueueArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list that specifies the quantity and type of compute capacity allocated to
   * the quota share.</p>
   */
  inline const Aws::Vector<QuotaShareCapacityLimit>& GetCapacityLimits() const { return m_capacityLimits; }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  DescribeQuotaShareResult& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  template <typename CapacityLimitsT = QuotaShareCapacityLimit>
  DescribeQuotaShareResult& AddCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits.emplace_back(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a quota share reserves, lends, or both lends and borrows
   * idle compute capacity.</p>
   */
  inline const QuotaShareResourceSharingConfiguration& GetResourceSharingConfiguration() const { return m_resourceSharingConfiguration; }
  template <typename ResourceSharingConfigurationT = QuotaShareResourceSharingConfiguration>
  void SetResourceSharingConfiguration(ResourceSharingConfigurationT&& value) {
    m_resourceSharingConfigurationHasBeenSet = true;
    m_resourceSharingConfiguration = std::forward<ResourceSharingConfigurationT>(value);
  }
  template <typename ResourceSharingConfigurationT = QuotaShareResourceSharingConfiguration>
  DescribeQuotaShareResult& WithResourceSharingConfiguration(ResourceSharingConfigurationT&& value) {
    SetResourceSharingConfiguration(std::forward<ResourceSharingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the preemption behavior for jobs in a quota share.</p>
   */
  inline const QuotaSharePreemptionConfiguration& GetPreemptionConfiguration() const { return m_preemptionConfiguration; }
  template <typename PreemptionConfigurationT = QuotaSharePreemptionConfiguration>
  void SetPreemptionConfiguration(PreemptionConfigurationT&& value) {
    m_preemptionConfigurationHasBeenSet = true;
    m_preemptionConfiguration = std::forward<PreemptionConfigurationT>(value);
  }
  template <typename PreemptionConfigurationT = QuotaSharePreemptionConfiguration>
  DescribeQuotaShareResult& WithPreemptionConfiguration(PreemptionConfigurationT&& value) {
    SetPreemptionConfiguration(std::forward<PreemptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the quota share.</p>
   */
  inline QuotaShareState GetState() const { return m_state; }
  inline void SetState(QuotaShareState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DescribeQuotaShareResult& WithState(QuotaShareState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the quota share.</p>
   */
  inline QuotaShareStatus GetStatus() const { return m_status; }
  inline void SetStatus(QuotaShareStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeQuotaShareResult& WithStatus(QuotaShareStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags applied to the quota share.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DescribeQuotaShareResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DescribeQuotaShareResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeQuotaShareResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_quotaShareName;

  Aws::String m_quotaShareArn;

  Aws::String m_jobQueueArn;

  Aws::Vector<QuotaShareCapacityLimit> m_capacityLimits;

  QuotaShareResourceSharingConfiguration m_resourceSharingConfiguration;

  QuotaSharePreemptionConfiguration m_preemptionConfiguration;

  QuotaShareState m_state{QuotaShareState::NOT_SET};

  QuotaShareStatus m_status{QuotaShareStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_quotaShareNameHasBeenSet = false;
  bool m_quotaShareArnHasBeenSet = false;
  bool m_jobQueueArnHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_resourceSharingConfigurationHasBeenSet = false;
  bool m_preemptionConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
