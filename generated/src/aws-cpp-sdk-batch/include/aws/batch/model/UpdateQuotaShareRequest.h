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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Batch {
namespace Model {

/**
 */
class UpdateQuotaShareRequest : public BatchRequest {
 public:
  AWS_BATCH_API UpdateQuotaShareRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateQuotaShare"; }

  AWS_BATCH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quota share to update.</p>
   */
  inline const Aws::String& GetQuotaShareArn() const { return m_quotaShareArn; }
  inline bool QuotaShareArnHasBeenSet() const { return m_quotaShareArnHasBeenSet; }
  template <typename QuotaShareArnT = Aws::String>
  void SetQuotaShareArn(QuotaShareArnT&& value) {
    m_quotaShareArnHasBeenSet = true;
    m_quotaShareArn = std::forward<QuotaShareArnT>(value);
  }
  template <typename QuotaShareArnT = Aws::String>
  UpdateQuotaShareRequest& WithQuotaShareArn(QuotaShareArnT&& value) {
    SetQuotaShareArn(std::forward<QuotaShareArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list that specifies the quantity and type of compute capacity allocated to
   * the quota share.</p>
   */
  inline const Aws::Vector<QuotaShareCapacityLimit>& GetCapacityLimits() const { return m_capacityLimits; }
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  UpdateQuotaShareRequest& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  template <typename CapacityLimitsT = QuotaShareCapacityLimit>
  UpdateQuotaShareRequest& AddCapacityLimits(CapacityLimitsT&& value) {
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
  UpdateQuotaShareRequest& WithResourceSharingConfiguration(ResourceSharingConfigurationT&& value) {
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
  UpdateQuotaShareRequest& WithPreemptionConfiguration(PreemptionConfigurationT&& value) {
    SetPreemptionConfiguration(std::forward<PreemptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the quota share. If the quota share is <code>ENABLED</code>, it
   * is able to accept jobs. If the quota share is <code>DISABLED</code>, new jobs
   * won't be accepted but jobs already submitted can finish.</p>
   */
  inline QuotaShareState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(QuotaShareState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateQuotaShareRequest& WithState(QuotaShareState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_quotaShareArn;

  Aws::Vector<QuotaShareCapacityLimit> m_capacityLimits;

  QuotaShareResourceSharingConfiguration m_resourceSharingConfiguration;

  QuotaSharePreemptionConfiguration m_preemptionConfiguration;

  QuotaShareState m_state{QuotaShareState::NOT_SET};
  bool m_quotaShareArnHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_resourceSharingConfigurationHasBeenSet = false;
  bool m_preemptionConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
