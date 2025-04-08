/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cost-optimization-hub/model/Source.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/model/Tag.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Describes a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Recommendation() = default;
    AWS_COSTOPTIMIZATIONHUB_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    Recommendation& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account to which the recommendation applies.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Recommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Recommendation& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID for the recommendation.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    Recommendation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Recommendation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resource type.</p>
     */
    inline const Aws::String& GetCurrentResourceType() const { return m_currentResourceType; }
    inline bool CurrentResourceTypeHasBeenSet() const { return m_currentResourceTypeHasBeenSet; }
    template<typename CurrentResourceTypeT = Aws::String>
    void SetCurrentResourceType(CurrentResourceTypeT&& value) { m_currentResourceTypeHasBeenSet = true; m_currentResourceType = std::forward<CurrentResourceTypeT>(value); }
    template<typename CurrentResourceTypeT = Aws::String>
    Recommendation& WithCurrentResourceType(CurrentResourceTypeT&& value) { SetCurrentResourceType(std::forward<CurrentResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended resource type.</p>
     */
    inline const Aws::String& GetRecommendedResourceType() const { return m_recommendedResourceType; }
    inline bool RecommendedResourceTypeHasBeenSet() const { return m_recommendedResourceTypeHasBeenSet; }
    template<typename RecommendedResourceTypeT = Aws::String>
    void SetRecommendedResourceType(RecommendedResourceTypeT&& value) { m_recommendedResourceTypeHasBeenSet = true; m_recommendedResourceType = std::forward<RecommendedResourceTypeT>(value); }
    template<typename RecommendedResourceTypeT = Aws::String>
    Recommendation& WithRecommendedResourceType(RecommendedResourceTypeT&& value) { SetRecommendedResourceType(std::forward<RecommendedResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount for the recommendation.</p>
     */
    inline double GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline Recommendation& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline double GetEstimatedSavingsPercentage() const { return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    inline void SetEstimatedSavingsPercentage(double value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }
    inline Recommendation& WithEstimatedSavingsPercentage(double value) { SetEstimatedSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost of the current resource. For Reserved Instances
     * and Savings Plans, it refers to the cost for eligible usage.</p>
     */
    inline double GetEstimatedMonthlyCost() const { return m_estimatedMonthlyCost; }
    inline bool EstimatedMonthlyCostHasBeenSet() const { return m_estimatedMonthlyCostHasBeenSet; }
    inline void SetEstimatedMonthlyCost(double value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = value; }
    inline Recommendation& WithEstimatedMonthlyCost(double value) { SetEstimatedMonthlyCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    Recommendation& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline const Aws::String& GetImplementationEffort() const { return m_implementationEffort; }
    inline bool ImplementationEffortHasBeenSet() const { return m_implementationEffortHasBeenSet; }
    template<typename ImplementationEffortT = Aws::String>
    void SetImplementationEffort(ImplementationEffortT&& value) { m_implementationEffortHasBeenSet = true; m_implementationEffort = std::forward<ImplementationEffortT>(value); }
    template<typename ImplementationEffortT = Aws::String>
    Recommendation& WithImplementationEffort(ImplementationEffortT&& value) { SetImplementationEffort(std::forward<ImplementationEffortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline bool GetRestartNeeded() const { return m_restartNeeded; }
    inline bool RestartNeededHasBeenSet() const { return m_restartNeededHasBeenSet; }
    inline void SetRestartNeeded(bool value) { m_restartNeededHasBeenSet = true; m_restartNeeded = value; }
    inline Recommendation& WithRestartNeeded(bool value) { SetRestartNeeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of tasks that can be carried out by this action.</p>
     */
    inline const Aws::String& GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    template<typename ActionTypeT = Aws::String>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = Aws::String>
    Recommendation& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline bool GetRollbackPossible() const { return m_rollbackPossible; }
    inline bool RollbackPossibleHasBeenSet() const { return m_rollbackPossibleHasBeenSet; }
    inline void SetRollbackPossible(bool value) { m_rollbackPossibleHasBeenSet = true; m_rollbackPossible = value; }
    inline Recommendation& WithRollbackPossible(bool value) { SetRollbackPossible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current resource.</p>
     */
    inline const Aws::String& GetCurrentResourceSummary() const { return m_currentResourceSummary; }
    inline bool CurrentResourceSummaryHasBeenSet() const { return m_currentResourceSummaryHasBeenSet; }
    template<typename CurrentResourceSummaryT = Aws::String>
    void SetCurrentResourceSummary(CurrentResourceSummaryT&& value) { m_currentResourceSummaryHasBeenSet = true; m_currentResourceSummary = std::forward<CurrentResourceSummaryT>(value); }
    template<typename CurrentResourceSummaryT = Aws::String>
    Recommendation& WithCurrentResourceSummary(CurrentResourceSummaryT&& value) { SetCurrentResourceSummary(std::forward<CurrentResourceSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the recommended resource.</p>
     */
    inline const Aws::String& GetRecommendedResourceSummary() const { return m_recommendedResourceSummary; }
    inline bool RecommendedResourceSummaryHasBeenSet() const { return m_recommendedResourceSummaryHasBeenSet; }
    template<typename RecommendedResourceSummaryT = Aws::String>
    void SetRecommendedResourceSummary(RecommendedResourceSummaryT&& value) { m_recommendedResourceSummaryHasBeenSet = true; m_recommendedResourceSummary = std::forward<RecommendedResourceSummaryT>(value); }
    template<typename RecommendedResourceSummaryT = Aws::String>
    Recommendation& WithRecommendedResourceSummary(RecommendedResourceSummaryT&& value) { SetRecommendedResourceSummary(std::forward<RecommendedResourceSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    Recommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline int GetRecommendationLookbackPeriodInDays() const { return m_recommendationLookbackPeriodInDays; }
    inline bool RecommendationLookbackPeriodInDaysHasBeenSet() const { return m_recommendationLookbackPeriodInDaysHasBeenSet; }
    inline void SetRecommendationLookbackPeriodInDays(int value) { m_recommendationLookbackPeriodInDaysHasBeenSet = true; m_recommendationLookbackPeriodInDays = value; }
    inline Recommendation& WithRecommendationLookbackPeriodInDays(int value) { SetRecommendationLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the recommendation.</p>
     */
    inline Source GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(Source value) { m_sourceHasBeenSet = true; m_source = value; }
    inline Recommendation& WithSource(Source value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Recommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Recommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_currentResourceType;
    bool m_currentResourceTypeHasBeenSet = false;

    Aws::String m_recommendedResourceType;
    bool m_recommendedResourceTypeHasBeenSet = false;

    double m_estimatedMonthlySavings{0.0};
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    double m_estimatedSavingsPercentage{0.0};
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    double m_estimatedMonthlyCost{0.0};
    bool m_estimatedMonthlyCostHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_implementationEffort;
    bool m_implementationEffortHasBeenSet = false;

    bool m_restartNeeded{false};
    bool m_restartNeededHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    bool m_rollbackPossible{false};
    bool m_rollbackPossibleHasBeenSet = false;

    Aws::String m_currentResourceSummary;
    bool m_currentResourceSummaryHasBeenSet = false;

    Aws::String m_recommendedResourceSummary;
    bool m_recommendedResourceSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    int m_recommendationLookbackPeriodInDays{0};
    bool m_recommendationLookbackPeriodInDaysHasBeenSet = false;

    Source m_source{Source::NOT_SET};
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
