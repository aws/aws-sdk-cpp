/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchRequest.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareCapacityLimit.h>
#include <aws/batch/model/QuotaSharePreemptionConfiguration.h>
#include <aws/batch/model/QuotaShareResourceSharingConfiguration.h>
#include <aws/batch/model/QuotaShareState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Batch {
namespace Model {

/**
 */
class CreateQuotaShareRequest : public BatchRequest {
 public:
  AWS_BATCH_API CreateQuotaShareRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateQuotaShare"; }

  AWS_BATCH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the quota share. It can be up to 128 characters long. It can
   * contain uppercase and lowercase letters, numbers, hyphens (-), and underscores
   * (_).</p>
   */
  inline const Aws::String& GetQuotaShareName() const { return m_quotaShareName; }
  inline bool QuotaShareNameHasBeenSet() const { return m_quotaShareNameHasBeenSet; }
  template <typename QuotaShareNameT = Aws::String>
  void SetQuotaShareName(QuotaShareNameT&& value) {
    m_quotaShareNameHasBeenSet = true;
    m_quotaShareName = std::forward<QuotaShareNameT>(value);
  }
  template <typename QuotaShareNameT = Aws::String>
  CreateQuotaShareRequest& WithQuotaShareName(QuotaShareNameT&& value) {
    SetQuotaShareName(std::forward<QuotaShareNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Batch job queue associated with the quota share. This can be the job
   * queue name or ARN. A job queue must be in the <code>VALID</code> state before
   * you can associate it with a quota share.</p>
   */
  inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
  inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
  template <typename JobQueueT = Aws::String>
  void SetJobQueue(JobQueueT&& value) {
    m_jobQueueHasBeenSet = true;
    m_jobQueue = std::forward<JobQueueT>(value);
  }
  template <typename JobQueueT = Aws::String>
  CreateQuotaShareRequest& WithJobQueue(JobQueueT&& value) {
    SetJobQueue(std::forward<JobQueueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list that specifies the quantity and type of compute capacity allocated to
   * the quota share. </p>
   */
  inline const Aws::Vector<QuotaShareCapacityLimit>& GetCapacityLimits() const { return m_capacityLimits; }
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  CreateQuotaShareRequest& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  template <typename CapacityLimitsT = QuotaShareCapacityLimit>
  CreateQuotaShareRequest& AddCapacityLimits(CapacityLimitsT&& value) {
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
  inline bool ResourceSharingConfigurationHasBeenSet() const { return m_resourceSharingConfigurationHasBeenSet; }
  template <typename ResourceSharingConfigurationT = QuotaShareResourceSharingConfiguration>
  void SetResourceSharingConfiguration(ResourceSharingConfigurationT&& value) {
    m_resourceSharingConfigurationHasBeenSet = true;
    m_resourceSharingConfiguration = std::forward<ResourceSharingConfigurationT>(value);
  }
  template <typename ResourceSharingConfigurationT = QuotaShareResourceSharingConfiguration>
  CreateQuotaShareRequest& WithResourceSharingConfiguration(ResourceSharingConfigurationT&& value) {
    SetResourceSharingConfiguration(std::forward<ResourceSharingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the preemption behavior for jobs in a quota share.</p>
   */
  inline const QuotaSharePreemptionConfiguration& GetPreemptionConfiguration() const { return m_preemptionConfiguration; }
  inline bool PreemptionConfigurationHasBeenSet() const { return m_preemptionConfigurationHasBeenSet; }
  template <typename PreemptionConfigurationT = QuotaSharePreemptionConfiguration>
  void SetPreemptionConfiguration(PreemptionConfigurationT&& value) {
    m_preemptionConfigurationHasBeenSet = true;
    m_preemptionConfiguration = std::forward<PreemptionConfigurationT>(value);
  }
  template <typename PreemptionConfigurationT = QuotaSharePreemptionConfiguration>
  CreateQuotaShareRequest& WithPreemptionConfiguration(PreemptionConfigurationT&& value) {
    SetPreemptionConfiguration(std::forward<PreemptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the quota share. If the quota share is <code>ENABLED</code>, it
   * is able to accept jobs. If the quota share is <code>DISABLED</code>, new jobs
   * won't be accepted but jobs already submitted can finish. The default state is
   * <code>ENABLED</code>.</p>
   */
  inline QuotaShareState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(QuotaShareState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateQuotaShareRequest& WithState(QuotaShareState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags that you apply to the quota share to help you categorize and
   * organize your resources. Each tag consists of a key and an optional value. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
   * your Batch resources</a> in <i>Batch User Guide</i>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateQuotaShareRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateQuotaShareRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_quotaShareName;

  Aws::String m_jobQueue;

  Aws::Vector<QuotaShareCapacityLimit> m_capacityLimits;

  QuotaShareResourceSharingConfiguration m_resourceSharingConfiguration;

  QuotaSharePreemptionConfiguration m_preemptionConfiguration;

  QuotaShareState m_state{QuotaShareState::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_quotaShareNameHasBeenSet = false;
  bool m_jobQueueHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_resourceSharingConfigurationHasBeenSet = false;
  bool m_preemptionConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
