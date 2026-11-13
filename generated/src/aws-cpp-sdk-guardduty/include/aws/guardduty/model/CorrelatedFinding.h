/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CorrelationReason.h>
#include <aws/guardduty/model/SharedBehavior.h>
#include <aws/guardduty/model/SharedResource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about a group of correlated findings that have the same
 * finding type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CorrelatedFinding">AWS
 * API Reference</a></p>
 */
class CorrelatedFinding {
 public:
  AWS_GUARDDUTY_API CorrelatedFinding() = default;
  AWS_GUARDDUTY_API CorrelatedFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API CorrelatedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The finding type of the group.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  CorrelatedFinding& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of correlated findings of this type. This value can be greater
   * than the number of IDs in <code>FindingIds</code>.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline CorrelatedFinding& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The highest severity score among the findings in the group, from 0 to 10.</p>
   */
  inline double GetSeverityMax() const { return m_severityMax; }
  inline bool SeverityMaxHasBeenSet() const { return m_severityMaxHasBeenSet; }
  inline void SetSeverityMax(double value) {
    m_severityMaxHasBeenSet = true;
    m_severityMax = value;
  }
  inline CorrelatedFinding& WithSeverityMax(double value) {
    SetSeverityMax(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons why GuardDuty correlated the findings. Possible values are
   * <code>HIGH_SEVERITY</code>, <code>SAME_RESOURCE</code>, and
   * <code>SAME_BEHAVIOR</code>. A value can appear more than once.</p>
   */
  inline const Aws::Vector<CorrelationReason>& GetCorrelationReasons() const { return m_correlationReasons; }
  inline bool CorrelationReasonsHasBeenSet() const { return m_correlationReasonsHasBeenSet; }
  template <typename CorrelationReasonsT = Aws::Vector<CorrelationReason>>
  void SetCorrelationReasons(CorrelationReasonsT&& value) {
    m_correlationReasonsHasBeenSet = true;
    m_correlationReasons = std::forward<CorrelationReasonsT>(value);
  }
  template <typename CorrelationReasonsT = Aws::Vector<CorrelationReason>>
  CorrelatedFinding& WithCorrelationReasons(CorrelationReasonsT&& value) {
    SetCorrelationReasons(std::forward<CorrelationReasonsT>(value));
    return *this;
  }
  inline CorrelatedFinding& AddCorrelationReasons(CorrelationReason value) {
    m_correlationReasonsHasBeenSet = true;
    m_correlationReasons.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A sample of the IDs of the findings in the group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
  inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  void SetFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds = std::forward<FindingIdsT>(value);
  }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  CorrelatedFinding& WithFindingIds(FindingIdsT&& value) {
    SetFindingIds(std::forward<FindingIdsT>(value));
    return *this;
  }
  template <typename FindingIdsT = Aws::String>
  CorrelatedFinding& AddFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds.emplace_back(std::forward<FindingIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources that the findings in the group share with the investigated
   * activity.</p>
   */
  inline const Aws::Vector<SharedResource>& GetSharedResources() const { return m_sharedResources; }
  inline bool SharedResourcesHasBeenSet() const { return m_sharedResourcesHasBeenSet; }
  template <typename SharedResourcesT = Aws::Vector<SharedResource>>
  void SetSharedResources(SharedResourcesT&& value) {
    m_sharedResourcesHasBeenSet = true;
    m_sharedResources = std::forward<SharedResourcesT>(value);
  }
  template <typename SharedResourcesT = Aws::Vector<SharedResource>>
  CorrelatedFinding& WithSharedResources(SharedResourcesT&& value) {
    SetSharedResources(std::forward<SharedResourcesT>(value));
    return *this;
  }
  template <typename SharedResourcesT = SharedResource>
  CorrelatedFinding& AddSharedResources(SharedResourcesT&& value) {
    m_sharedResourcesHasBeenSet = true;
    m_sharedResources.emplace_back(std::forward<SharedResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behaviors that the findings in the group share with the investigated
   * activity.</p>
   */
  inline const Aws::Vector<SharedBehavior>& GetSharedBehaviors() const { return m_sharedBehaviors; }
  inline bool SharedBehaviorsHasBeenSet() const { return m_sharedBehaviorsHasBeenSet; }
  template <typename SharedBehaviorsT = Aws::Vector<SharedBehavior>>
  void SetSharedBehaviors(SharedBehaviorsT&& value) {
    m_sharedBehaviorsHasBeenSet = true;
    m_sharedBehaviors = std::forward<SharedBehaviorsT>(value);
  }
  template <typename SharedBehaviorsT = Aws::Vector<SharedBehavior>>
  CorrelatedFinding& WithSharedBehaviors(SharedBehaviorsT&& value) {
    SetSharedBehaviors(std::forward<SharedBehaviorsT>(value));
    return *this;
  }
  template <typename SharedBehaviorsT = SharedBehavior>
  CorrelatedFinding& AddSharedBehaviors(SharedBehaviorsT&& value) {
    m_sharedBehaviorsHasBeenSet = true;
    m_sharedBehaviors.emplace_back(std::forward<SharedBehaviorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  long long m_count{0};

  double m_severityMax{0.0};

  Aws::Vector<CorrelationReason> m_correlationReasons;

  Aws::Vector<Aws::String> m_findingIds;

  Aws::Vector<SharedResource> m_sharedResources;

  Aws::Vector<SharedBehavior> m_sharedBehaviors;
  bool m_findingTypeHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_severityMaxHasBeenSet = false;
  bool m_correlationReasonsHasBeenSet = false;
  bool m_findingIdsHasBeenSet = false;
  bool m_sharedResourcesHasBeenSet = false;
  bool m_sharedBehaviorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
