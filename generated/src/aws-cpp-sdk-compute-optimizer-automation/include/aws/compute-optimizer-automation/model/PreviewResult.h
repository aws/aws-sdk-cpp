/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionType.h>
#include <aws/compute-optimizer-automation/model/ResourceDetails.h>
#include <aws/compute-optimizer-automation/model/ResourceType.h>
#include <aws/compute-optimizer-automation/model/Tag.h>
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
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Contains the results of previewing an automation rule against available
 * recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/PreviewResult">AWS
 * API Reference</a></p>
 */
class PreviewResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API PreviewResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API PreviewResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API PreviewResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the recommended action being previewed.</p>
   */
  inline const Aws::String& GetRecommendedActionId() const { return m_recommendedActionId; }
  inline bool RecommendedActionIdHasBeenSet() const { return m_recommendedActionIdHasBeenSet; }
  template <typename RecommendedActionIdT = Aws::String>
  void SetRecommendedActionId(RecommendedActionIdT&& value) {
    m_recommendedActionIdHasBeenSet = true;
    m_recommendedActionId = std::forward<RecommendedActionIdT>(value);
  }
  template <typename RecommendedActionIdT = Aws::String>
  PreviewResult& WithRecommendedActionId(RecommendedActionIdT&& value) {
    SetRecommendedActionId(std::forward<RecommendedActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource affected by the recommended
   * action.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  PreviewResult& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource affected by the recommended action.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  PreviewResult& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the resource.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  PreviewResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the resource is located.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  PreviewResult& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource being evaluated.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline PreviewResult& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days of historical data used to analyze the resource.</p>
   */
  inline int GetLookBackPeriodInDays() const { return m_lookBackPeriodInDays; }
  inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
  inline void SetLookBackPeriodInDays(int value) {
    m_lookBackPeriodInDaysHasBeenSet = true;
    m_lookBackPeriodInDays = value;
  }
  inline PreviewResult& WithLookBackPeriodInDays(int value) {
    SetLookBackPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of recommended action being previewed.</p>
   */
  inline RecommendedActionType GetRecommendedActionType() const { return m_recommendedActionType; }
  inline bool RecommendedActionTypeHasBeenSet() const { return m_recommendedActionTypeHasBeenSet; }
  inline void SetRecommendedActionType(RecommendedActionType value) {
    m_recommendedActionTypeHasBeenSet = true;
    m_recommendedActionType = value;
  }
  inline PreviewResult& WithRecommendedActionType(RecommendedActionType value) {
    SetRecommendedActionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the resource's current configuration.</p>
   */
  inline const Aws::String& GetCurrentResourceSummary() const { return m_currentResourceSummary; }
  inline bool CurrentResourceSummaryHasBeenSet() const { return m_currentResourceSummaryHasBeenSet; }
  template <typename CurrentResourceSummaryT = Aws::String>
  void SetCurrentResourceSummary(CurrentResourceSummaryT&& value) {
    m_currentResourceSummaryHasBeenSet = true;
    m_currentResourceSummary = std::forward<CurrentResourceSummaryT>(value);
  }
  template <typename CurrentResourceSummaryT = Aws::String>
  PreviewResult& WithCurrentResourceSummary(CurrentResourceSummaryT&& value) {
    SetCurrentResourceSummary(std::forward<CurrentResourceSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResourceDetails& GetCurrentResourceDetails() const { return m_currentResourceDetails; }
  inline bool CurrentResourceDetailsHasBeenSet() const { return m_currentResourceDetailsHasBeenSet; }
  template <typename CurrentResourceDetailsT = ResourceDetails>
  void SetCurrentResourceDetails(CurrentResourceDetailsT&& value) {
    m_currentResourceDetailsHasBeenSet = true;
    m_currentResourceDetails = std::forward<CurrentResourceDetailsT>(value);
  }
  template <typename CurrentResourceDetailsT = ResourceDetails>
  PreviewResult& WithCurrentResourceDetails(CurrentResourceDetailsT&& value) {
    SetCurrentResourceDetails(std::forward<CurrentResourceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the resource's recommended configuration.</p>
   */
  inline const Aws::String& GetRecommendedResourceSummary() const { return m_recommendedResourceSummary; }
  inline bool RecommendedResourceSummaryHasBeenSet() const { return m_recommendedResourceSummaryHasBeenSet; }
  template <typename RecommendedResourceSummaryT = Aws::String>
  void SetRecommendedResourceSummary(RecommendedResourceSummaryT&& value) {
    m_recommendedResourceSummaryHasBeenSet = true;
    m_recommendedResourceSummary = std::forward<RecommendedResourceSummaryT>(value);
  }
  template <typename RecommendedResourceSummaryT = Aws::String>
  PreviewResult& WithRecommendedResourceSummary(RecommendedResourceSummaryT&& value) {
    SetRecommendedResourceSummary(std::forward<RecommendedResourceSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResourceDetails& GetRecommendedResourceDetails() const { return m_recommendedResourceDetails; }
  inline bool RecommendedResourceDetailsHasBeenSet() const { return m_recommendedResourceDetailsHasBeenSet; }
  template <typename RecommendedResourceDetailsT = ResourceDetails>
  void SetRecommendedResourceDetails(RecommendedResourceDetailsT&& value) {
    m_recommendedResourceDetailsHasBeenSet = true;
    m_recommendedResourceDetails = std::forward<RecommendedResourceDetailsT>(value);
  }
  template <typename RecommendedResourceDetailsT = ResourceDetails>
  PreviewResult& WithRecommendedResourceDetails(RecommendedResourceDetailsT&& value) {
    SetRecommendedResourceDetails(std::forward<RecommendedResourceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether implementing the recommended action requires a resource
   * restart.</p>
   */
  inline bool GetRestartNeeded() const { return m_restartNeeded; }
  inline bool RestartNeededHasBeenSet() const { return m_restartNeededHasBeenSet; }
  inline void SetRestartNeeded(bool value) {
    m_restartNeededHasBeenSet = true;
    m_restartNeeded = value;
  }
  inline PreviewResult& WithRestartNeeded(bool value) {
    SetRestartNeeded(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
  inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value);
  }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  PreviewResult& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<Tag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<Tag>>
  PreviewResult& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = Tag>
  PreviewResult& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedActionId;
  bool m_recommendedActionIdHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;

  Aws::String m_resourceId;
  bool m_resourceIdHasBeenSet = false;

  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  Aws::String m_region;
  bool m_regionHasBeenSet = false;

  ResourceType m_resourceType{ResourceType::NOT_SET};
  bool m_resourceTypeHasBeenSet = false;

  int m_lookBackPeriodInDays{0};
  bool m_lookBackPeriodInDaysHasBeenSet = false;

  RecommendedActionType m_recommendedActionType{RecommendedActionType::NOT_SET};
  bool m_recommendedActionTypeHasBeenSet = false;

  Aws::String m_currentResourceSummary;
  bool m_currentResourceSummaryHasBeenSet = false;

  ResourceDetails m_currentResourceDetails;
  bool m_currentResourceDetailsHasBeenSet = false;

  Aws::String m_recommendedResourceSummary;
  bool m_recommendedResourceSummaryHasBeenSet = false;

  ResourceDetails m_recommendedResourceDetails;
  bool m_recommendedResourceDetailsHasBeenSet = false;

  bool m_restartNeeded{false};
  bool m_restartNeededHasBeenSet = false;

  EstimatedMonthlySavings m_estimatedMonthlySavings;
  bool m_estimatedMonthlySavingsHasBeenSet = false;

  Aws::Vector<Tag> m_resourceTags;
  bool m_resourceTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
