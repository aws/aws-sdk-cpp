/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/DoubleCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/IntegerCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/ResourceTagsCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/StringCriteriaCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p> A set of conditions that specify which recommended action qualify for
 * implementation. When a rule is active and a recommended action matches these
 * criteria, Compute Optimizer implements the action at the scheduled run time. You
 * can specify up to 20 conditions per filter criteria and 20 values per condition.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/Criteria">AWS
 * API Reference</a></p>
 */
class Criteria {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Criteria() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Criteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Criteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter criteria for Amazon Web Services regions where resources must be
   * located.</p>
   */
  inline const Aws::Vector<StringCriteriaCondition>& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::Vector<StringCriteriaCondition>>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::Vector<StringCriteriaCondition>>
  Criteria& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  template <typename RegionT = StringCriteriaCondition>
  Criteria& AddRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region.emplace_back(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for specific resource ARNs to include or exclude.</p>
   */
  inline const Aws::Vector<StringCriteriaCondition>& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::Vector<StringCriteriaCondition>>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::Vector<StringCriteriaCondition>>
  Criteria& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  template <typename ResourceArnT = StringCriteriaCondition>
  Criteria& AddResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn.emplace_back(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for EBS volume types, such as gp2, gp3, io1, io2, st1, or
   * sc1.</p>
   */
  inline const Aws::Vector<StringCriteriaCondition>& GetEbsVolumeType() const { return m_ebsVolumeType; }
  inline bool EbsVolumeTypeHasBeenSet() const { return m_ebsVolumeTypeHasBeenSet; }
  template <typename EbsVolumeTypeT = Aws::Vector<StringCriteriaCondition>>
  void SetEbsVolumeType(EbsVolumeTypeT&& value) {
    m_ebsVolumeTypeHasBeenSet = true;
    m_ebsVolumeType = std::forward<EbsVolumeTypeT>(value);
  }
  template <typename EbsVolumeTypeT = Aws::Vector<StringCriteriaCondition>>
  Criteria& WithEbsVolumeType(EbsVolumeTypeT&& value) {
    SetEbsVolumeType(std::forward<EbsVolumeTypeT>(value));
    return *this;
  }
  template <typename EbsVolumeTypeT = StringCriteriaCondition>
  Criteria& AddEbsVolumeType(EbsVolumeTypeT&& value) {
    m_ebsVolumeTypeHasBeenSet = true;
    m_ebsVolumeType.emplace_back(std::forward<EbsVolumeTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for EBS volume sizes in gibibytes (GiB).</p>
   */
  inline const Aws::Vector<IntegerCriteriaCondition>& GetEbsVolumeSizeInGib() const { return m_ebsVolumeSizeInGib; }
  inline bool EbsVolumeSizeInGibHasBeenSet() const { return m_ebsVolumeSizeInGibHasBeenSet; }
  template <typename EbsVolumeSizeInGibT = Aws::Vector<IntegerCriteriaCondition>>
  void SetEbsVolumeSizeInGib(EbsVolumeSizeInGibT&& value) {
    m_ebsVolumeSizeInGibHasBeenSet = true;
    m_ebsVolumeSizeInGib = std::forward<EbsVolumeSizeInGibT>(value);
  }
  template <typename EbsVolumeSizeInGibT = Aws::Vector<IntegerCriteriaCondition>>
  Criteria& WithEbsVolumeSizeInGib(EbsVolumeSizeInGibT&& value) {
    SetEbsVolumeSizeInGib(std::forward<EbsVolumeSizeInGibT>(value));
    return *this;
  }
  template <typename EbsVolumeSizeInGibT = IntegerCriteriaCondition>
  Criteria& AddEbsVolumeSizeInGib(EbsVolumeSizeInGibT&& value) {
    m_ebsVolumeSizeInGibHasBeenSet = true;
    m_ebsVolumeSizeInGib.emplace_back(std::forward<EbsVolumeSizeInGibT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for estimated monthly cost savings from the recommended
   * action.</p>
   */
  inline const Aws::Vector<DoubleCriteriaCondition>& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
  inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
  template <typename EstimatedMonthlySavingsT = Aws::Vector<DoubleCriteriaCondition>>
  void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value);
  }
  template <typename EstimatedMonthlySavingsT = Aws::Vector<DoubleCriteriaCondition>>
  Criteria& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  template <typename EstimatedMonthlySavingsT = DoubleCriteriaCondition>
  Criteria& AddEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings.emplace_back(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for resource tags, allowing filtering by tag key and value
   * combinations.</p>
   */
  inline const Aws::Vector<ResourceTagsCriteriaCondition>& GetResourceTag() const { return m_resourceTag; }
  inline bool ResourceTagHasBeenSet() const { return m_resourceTagHasBeenSet; }
  template <typename ResourceTagT = Aws::Vector<ResourceTagsCriteriaCondition>>
  void SetResourceTag(ResourceTagT&& value) {
    m_resourceTagHasBeenSet = true;
    m_resourceTag = std::forward<ResourceTagT>(value);
  }
  template <typename ResourceTagT = Aws::Vector<ResourceTagsCriteriaCondition>>
  Criteria& WithResourceTag(ResourceTagT&& value) {
    SetResourceTag(std::forward<ResourceTagT>(value));
    return *this;
  }
  template <typename ResourceTagT = ResourceTagsCriteriaCondition>
  Criteria& AddResourceTag(ResourceTagT&& value) {
    m_resourceTagHasBeenSet = true;
    m_resourceTag.emplace_back(std::forward<ResourceTagT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria for the lookback period in days used to analyze resource
   * utilization.</p>
   */
  inline const Aws::Vector<IntegerCriteriaCondition>& GetLookBackPeriodInDays() const { return m_lookBackPeriodInDays; }
  inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
  template <typename LookBackPeriodInDaysT = Aws::Vector<IntegerCriteriaCondition>>
  void SetLookBackPeriodInDays(LookBackPeriodInDaysT&& value) {
    m_lookBackPeriodInDaysHasBeenSet = true;
    m_lookBackPeriodInDays = std::forward<LookBackPeriodInDaysT>(value);
  }
  template <typename LookBackPeriodInDaysT = Aws::Vector<IntegerCriteriaCondition>>
  Criteria& WithLookBackPeriodInDays(LookBackPeriodInDaysT&& value) {
    SetLookBackPeriodInDays(std::forward<LookBackPeriodInDaysT>(value));
    return *this;
  }
  template <typename LookBackPeriodInDaysT = IntegerCriteriaCondition>
  Criteria& AddLookBackPeriodInDays(LookBackPeriodInDaysT&& value) {
    m_lookBackPeriodInDaysHasBeenSet = true;
    m_lookBackPeriodInDays.emplace_back(std::forward<LookBackPeriodInDaysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria indicating whether the recommended action requires a resource
   * restart.</p>
   */
  inline const Aws::Vector<StringCriteriaCondition>& GetRestartNeeded() const { return m_restartNeeded; }
  inline bool RestartNeededHasBeenSet() const { return m_restartNeededHasBeenSet; }
  template <typename RestartNeededT = Aws::Vector<StringCriteriaCondition>>
  void SetRestartNeeded(RestartNeededT&& value) {
    m_restartNeededHasBeenSet = true;
    m_restartNeeded = std::forward<RestartNeededT>(value);
  }
  template <typename RestartNeededT = Aws::Vector<StringCriteriaCondition>>
  Criteria& WithRestartNeeded(RestartNeededT&& value) {
    SetRestartNeeded(std::forward<RestartNeededT>(value));
    return *this;
  }
  template <typename RestartNeededT = StringCriteriaCondition>
  Criteria& AddRestartNeeded(RestartNeededT&& value) {
    m_restartNeededHasBeenSet = true;
    m_restartNeeded.emplace_back(std::forward<RestartNeededT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StringCriteriaCondition> m_region;

  Aws::Vector<StringCriteriaCondition> m_resourceArn;

  Aws::Vector<StringCriteriaCondition> m_ebsVolumeType;

  Aws::Vector<IntegerCriteriaCondition> m_ebsVolumeSizeInGib;

  Aws::Vector<DoubleCriteriaCondition> m_estimatedMonthlySavings;

  Aws::Vector<ResourceTagsCriteriaCondition> m_resourceTag;

  Aws::Vector<IntegerCriteriaCondition> m_lookBackPeriodInDays;

  Aws::Vector<StringCriteriaCondition> m_restartNeeded;
  bool m_regionHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_ebsVolumeTypeHasBeenSet = false;
  bool m_ebsVolumeSizeInGibHasBeenSet = false;
  bool m_estimatedMonthlySavingsHasBeenSet = false;
  bool m_resourceTagHasBeenSet = false;
  bool m_lookBackPeriodInDaysHasBeenSet = false;
  bool m_restartNeededHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
