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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>Detailed information about a quota share, including its configuration, state,
 * and capacity limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaShareDetail">AWS
 * API Reference</a></p>
 */
class QuotaShareDetail {
 public:
  AWS_BATCH_API QuotaShareDetail() = default;
  AWS_BATCH_API QuotaShareDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaShareDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareName() const { return m_quotaShareName; }
  inline bool QuotaShareNameHasBeenSet() const { return m_quotaShareNameHasBeenSet; }
  template <typename QuotaShareNameT = Aws::String>
  void SetQuotaShareName(QuotaShareNameT&& value) {
    m_quotaShareNameHasBeenSet = true;
    m_quotaShareName = std::forward<QuotaShareNameT>(value);
  }
  template <typename QuotaShareNameT = Aws::String>
  QuotaShareDetail& WithQuotaShareName(QuotaShareNameT&& value) {
    SetQuotaShareName(std::forward<QuotaShareNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareArn() const { return m_quotaShareArn; }
  inline bool QuotaShareArnHasBeenSet() const { return m_quotaShareArnHasBeenSet; }
  template <typename QuotaShareArnT = Aws::String>
  void SetQuotaShareArn(QuotaShareArnT&& value) {
    m_quotaShareArnHasBeenSet = true;
    m_quotaShareArn = std::forward<QuotaShareArnT>(value);
  }
  template <typename QuotaShareArnT = Aws::String>
  QuotaShareDetail& WithQuotaShareArn(QuotaShareArnT&& value) {
    SetQuotaShareArn(std::forward<QuotaShareArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the job queue associated with the quota
   * share.</p>
   */
  inline const Aws::String& GetJobQueueArn() const { return m_jobQueueArn; }
  inline bool JobQueueArnHasBeenSet() const { return m_jobQueueArnHasBeenSet; }
  template <typename JobQueueArnT = Aws::String>
  void SetJobQueueArn(JobQueueArnT&& value) {
    m_jobQueueArnHasBeenSet = true;
    m_jobQueueArn = std::forward<JobQueueArnT>(value);
  }
  template <typename JobQueueArnT = Aws::String>
  QuotaShareDetail& WithJobQueueArn(JobQueueArnT&& value) {
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
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = Aws::Vector<QuotaShareCapacityLimit>>
  QuotaShareDetail& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  template <typename CapacityLimitsT = QuotaShareCapacityLimit>
  QuotaShareDetail& AddCapacityLimits(CapacityLimitsT&& value) {
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
  QuotaShareDetail& WithResourceSharingConfiguration(ResourceSharingConfigurationT&& value) {
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
  QuotaShareDetail& WithPreemptionConfiguration(PreemptionConfigurationT&& value) {
    SetPreemptionConfiguration(std::forward<PreemptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the quota share.</p>
   */
  inline QuotaShareState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(QuotaShareState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline QuotaShareDetail& WithState(QuotaShareState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the quota share.</p>
   */
  inline QuotaShareStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(QuotaShareStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline QuotaShareDetail& WithStatus(QuotaShareStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_quotaShareName;

  Aws::String m_quotaShareArn;

  Aws::String m_jobQueueArn;

  Aws::Vector<QuotaShareCapacityLimit> m_capacityLimits;

  QuotaShareResourceSharingConfiguration m_resourceSharingConfiguration;

  QuotaSharePreemptionConfiguration m_preemptionConfiguration;

  QuotaShareState m_state{QuotaShareState::NOT_SET};

  QuotaShareStatus m_status{QuotaShareStatus::NOT_SET};
  bool m_quotaShareNameHasBeenSet = false;
  bool m_quotaShareArnHasBeenSet = false;
  bool m_jobQueueArnHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_resourceSharingConfigurationHasBeenSet = false;
  bool m_preemptionConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
