/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/ResourceType.h>
#include <aws/cost-optimization-hub/model/Source.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cost-optimization-hub/model/ImplementationEffort.h>
#include <aws/cost-optimization-hub/model/ActionType.h>
#include <aws/cost-optimization-hub/model/ResourceDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/model/Tag.h>
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
namespace CostOptimizationHub
{
namespace Model
{
  class GetRecommendationResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API GetRecommendationResult() = default;
    AWS_COSTOPTIMIZATIONHUB_API GetRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API GetRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GetRecommendationResult& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    GetRecommendationResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetRecommendationResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account to which the recommendation applies.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetRecommendationResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    GetRecommendationResult& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline int GetRecommendationLookbackPeriodInDays() const { return m_recommendationLookbackPeriodInDays; }
    inline void SetRecommendationLookbackPeriodInDays(int value) { m_recommendationLookbackPeriodInDaysHasBeenSet = true; m_recommendationLookbackPeriodInDays = value; }
    inline GetRecommendationResult& WithRecommendationLookbackPeriodInDays(int value) { SetRecommendationLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period used to calculate cost impact for a recommendation.</p>
     */
    inline int GetCostCalculationLookbackPeriodInDays() const { return m_costCalculationLookbackPeriodInDays; }
    inline void SetCostCalculationLookbackPeriodInDays(int value) { m_costCalculationLookbackPeriodInDaysHasBeenSet = true; m_costCalculationLookbackPeriodInDays = value; }
    inline GetRecommendationResult& WithCostCalculationLookbackPeriodInDays(int value) { SetCostCalculationLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline double GetEstimatedSavingsPercentage() const { return m_estimatedSavingsPercentage; }
    inline void SetEstimatedSavingsPercentage(double value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }
    inline GetRecommendationResult& WithEstimatedSavingsPercentage(double value) { SetEstimatedSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings amount over the lookback period used to calculate cost
     * impact for a recommendation.</p>
     */
    inline double GetEstimatedSavingsOverCostCalculationLookbackPeriod() const { return m_estimatedSavingsOverCostCalculationLookbackPeriod; }
    inline void SetEstimatedSavingsOverCostCalculationLookbackPeriod(double value) { m_estimatedSavingsOverCostCalculationLookbackPeriodHasBeenSet = true; m_estimatedSavingsOverCostCalculationLookbackPeriod = value; }
    inline GetRecommendationResult& WithEstimatedSavingsOverCostCalculationLookbackPeriod(double value) { SetEstimatedSavingsOverCostCalculationLookbackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline ResourceType GetCurrentResourceType() const { return m_currentResourceType; }
    inline void SetCurrentResourceType(ResourceType value) { m_currentResourceTypeHasBeenSet = true; m_currentResourceType = value; }
    inline GetRecommendationResult& WithCurrentResourceType(ResourceType value) { SetCurrentResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline ResourceType GetRecommendedResourceType() const { return m_recommendedResourceType; }
    inline void SetRecommendedResourceType(ResourceType value) { m_recommendedResourceTypeHasBeenSet = true; m_recommendedResourceType = value; }
    inline GetRecommendationResult& WithRecommendedResourceType(ResourceType value) { SetRecommendedResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetRecommendationResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the recommendation.</p>
     */
    inline Source GetSource() const { return m_source; }
    inline void SetSource(Source value) { m_sourceHasBeenSet = true; m_source = value; }
    inline GetRecommendationResult& WithSource(Source value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    GetRecommendationResult& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount for the recommendation.</p>
     */
    inline double GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline GetRecommendationResult& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost of the current resource. For Reserved Instances
     * and Savings Plans, it refers to the cost for eligible usage.</p>
     */
    inline double GetEstimatedMonthlyCost() const { return m_estimatedMonthlyCost; }
    inline void SetEstimatedMonthlyCost(double value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = value; }
    inline GetRecommendationResult& WithEstimatedMonthlyCost(double value) { SetEstimatedMonthlyCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline ImplementationEffort GetImplementationEffort() const { return m_implementationEffort; }
    inline void SetImplementationEffort(ImplementationEffort value) { m_implementationEffortHasBeenSet = true; m_implementationEffort = value; }
    inline GetRecommendationResult& WithImplementationEffort(ImplementationEffort value) { SetImplementationEffort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline bool GetRestartNeeded() const { return m_restartNeeded; }
    inline void SetRestartNeeded(bool value) { m_restartNeededHasBeenSet = true; m_restartNeeded = value; }
    inline GetRecommendationResult& WithRestartNeeded(bool value) { SetRestartNeeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline GetRecommendationResult& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline bool GetRollbackPossible() const { return m_rollbackPossible; }
    inline void SetRollbackPossible(bool value) { m_rollbackPossibleHasBeenSet = true; m_rollbackPossible = value; }
    inline GetRecommendationResult& WithRollbackPossible(bool value) { SetRollbackPossible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the resource.</p>
     */
    inline const ResourceDetails& GetCurrentResourceDetails() const { return m_currentResourceDetails; }
    template<typename CurrentResourceDetailsT = ResourceDetails>
    void SetCurrentResourceDetails(CurrentResourceDetailsT&& value) { m_currentResourceDetailsHasBeenSet = true; m_currentResourceDetails = std::forward<CurrentResourceDetailsT>(value); }
    template<typename CurrentResourceDetailsT = ResourceDetails>
    GetRecommendationResult& WithCurrentResourceDetails(CurrentResourceDetailsT&& value) { SetCurrentResourceDetails(std::forward<CurrentResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the recommended resource.</p>
     */
    inline const ResourceDetails& GetRecommendedResourceDetails() const { return m_recommendedResourceDetails; }
    template<typename RecommendedResourceDetailsT = ResourceDetails>
    void SetRecommendedResourceDetails(RecommendedResourceDetailsT&& value) { m_recommendedResourceDetailsHasBeenSet = true; m_recommendedResourceDetails = std::forward<RecommendedResourceDetailsT>(value); }
    template<typename RecommendedResourceDetailsT = ResourceDetails>
    GetRecommendationResult& WithRecommendedResourceDetails(RecommendedResourceDetailsT&& value) { SetRecommendedResourceDetails(std::forward<RecommendedResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetRecommendationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetRecommendationResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_recommendationLookbackPeriodInDays{0};
    bool m_recommendationLookbackPeriodInDaysHasBeenSet = false;

    int m_costCalculationLookbackPeriodInDays{0};
    bool m_costCalculationLookbackPeriodInDaysHasBeenSet = false;

    double m_estimatedSavingsPercentage{0.0};
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    double m_estimatedSavingsOverCostCalculationLookbackPeriod{0.0};
    bool m_estimatedSavingsOverCostCalculationLookbackPeriodHasBeenSet = false;

    ResourceType m_currentResourceType{ResourceType::NOT_SET};
    bool m_currentResourceTypeHasBeenSet = false;

    ResourceType m_recommendedResourceType{ResourceType::NOT_SET};
    bool m_recommendedResourceTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Source m_source{Source::NOT_SET};
    bool m_sourceHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    double m_estimatedMonthlySavings{0.0};
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    double m_estimatedMonthlyCost{0.0};
    bool m_estimatedMonthlyCostHasBeenSet = false;

    ImplementationEffort m_implementationEffort{ImplementationEffort::NOT_SET};
    bool m_implementationEffortHasBeenSet = false;

    bool m_restartNeeded{false};
    bool m_restartNeededHasBeenSet = false;

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    bool m_rollbackPossible{false};
    bool m_rollbackPossibleHasBeenSet = false;

    ResourceDetails m_currentResourceDetails;
    bool m_currentResourceDetailsHasBeenSet = false;

    ResourceDetails m_recommendedResourceDetails;
    bool m_recommendedResourceDetailsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
