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
    AWS_COSTOPTIMIZATIONHUB_API Recommendation();
    AWS_COSTOPTIMIZATIONHUB_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline Recommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline Recommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline Recommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Recommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Recommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Recommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Recommendation& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Recommendation& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Recommendation& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID for the recommendation.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline Recommendation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline Recommendation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline Recommendation& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Recommendation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Recommendation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Recommendation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resource type.</p>
     */
    inline const Aws::String& GetCurrentResourceType() const{ return m_currentResourceType; }
    inline bool CurrentResourceTypeHasBeenSet() const { return m_currentResourceTypeHasBeenSet; }
    inline void SetCurrentResourceType(const Aws::String& value) { m_currentResourceTypeHasBeenSet = true; m_currentResourceType = value; }
    inline void SetCurrentResourceType(Aws::String&& value) { m_currentResourceTypeHasBeenSet = true; m_currentResourceType = std::move(value); }
    inline void SetCurrentResourceType(const char* value) { m_currentResourceTypeHasBeenSet = true; m_currentResourceType.assign(value); }
    inline Recommendation& WithCurrentResourceType(const Aws::String& value) { SetCurrentResourceType(value); return *this;}
    inline Recommendation& WithCurrentResourceType(Aws::String&& value) { SetCurrentResourceType(std::move(value)); return *this;}
    inline Recommendation& WithCurrentResourceType(const char* value) { SetCurrentResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended resource type.</p>
     */
    inline const Aws::String& GetRecommendedResourceType() const{ return m_recommendedResourceType; }
    inline bool RecommendedResourceTypeHasBeenSet() const { return m_recommendedResourceTypeHasBeenSet; }
    inline void SetRecommendedResourceType(const Aws::String& value) { m_recommendedResourceTypeHasBeenSet = true; m_recommendedResourceType = value; }
    inline void SetRecommendedResourceType(Aws::String&& value) { m_recommendedResourceTypeHasBeenSet = true; m_recommendedResourceType = std::move(value); }
    inline void SetRecommendedResourceType(const char* value) { m_recommendedResourceTypeHasBeenSet = true; m_recommendedResourceType.assign(value); }
    inline Recommendation& WithRecommendedResourceType(const Aws::String& value) { SetRecommendedResourceType(value); return *this;}
    inline Recommendation& WithRecommendedResourceType(Aws::String&& value) { SetRecommendedResourceType(std::move(value)); return *this;}
    inline Recommendation& WithRecommendedResourceType(const char* value) { SetRecommendedResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount for the recommendation.</p>
     */
    inline double GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline Recommendation& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline double GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    inline void SetEstimatedSavingsPercentage(double value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }
    inline Recommendation& WithEstimatedSavingsPercentage(double value) { SetEstimatedSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost of the current resource. For Reserved Instances
     * and Savings Plans, it refers to the cost for eligible usage.</p>
     */
    inline double GetEstimatedMonthlyCost() const{ return m_estimatedMonthlyCost; }
    inline bool EstimatedMonthlyCostHasBeenSet() const { return m_estimatedMonthlyCostHasBeenSet; }
    inline void SetEstimatedMonthlyCost(double value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = value; }
    inline Recommendation& WithEstimatedMonthlyCost(double value) { SetEstimatedMonthlyCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline Recommendation& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline Recommendation& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline Recommendation& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline const Aws::String& GetImplementationEffort() const{ return m_implementationEffort; }
    inline bool ImplementationEffortHasBeenSet() const { return m_implementationEffortHasBeenSet; }
    inline void SetImplementationEffort(const Aws::String& value) { m_implementationEffortHasBeenSet = true; m_implementationEffort = value; }
    inline void SetImplementationEffort(Aws::String&& value) { m_implementationEffortHasBeenSet = true; m_implementationEffort = std::move(value); }
    inline void SetImplementationEffort(const char* value) { m_implementationEffortHasBeenSet = true; m_implementationEffort.assign(value); }
    inline Recommendation& WithImplementationEffort(const Aws::String& value) { SetImplementationEffort(value); return *this;}
    inline Recommendation& WithImplementationEffort(Aws::String&& value) { SetImplementationEffort(std::move(value)); return *this;}
    inline Recommendation& WithImplementationEffort(const char* value) { SetImplementationEffort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline bool GetRestartNeeded() const{ return m_restartNeeded; }
    inline bool RestartNeededHasBeenSet() const { return m_restartNeededHasBeenSet; }
    inline void SetRestartNeeded(bool value) { m_restartNeededHasBeenSet = true; m_restartNeeded = value; }
    inline Recommendation& WithRestartNeeded(bool value) { SetRestartNeeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of tasks that can be carried out by this action.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }
    inline Recommendation& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}
    inline Recommendation& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}
    inline Recommendation& WithActionType(const char* value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline bool GetRollbackPossible() const{ return m_rollbackPossible; }
    inline bool RollbackPossibleHasBeenSet() const { return m_rollbackPossibleHasBeenSet; }
    inline void SetRollbackPossible(bool value) { m_rollbackPossibleHasBeenSet = true; m_rollbackPossible = value; }
    inline Recommendation& WithRollbackPossible(bool value) { SetRollbackPossible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current resource.</p>
     */
    inline const Aws::String& GetCurrentResourceSummary() const{ return m_currentResourceSummary; }
    inline bool CurrentResourceSummaryHasBeenSet() const { return m_currentResourceSummaryHasBeenSet; }
    inline void SetCurrentResourceSummary(const Aws::String& value) { m_currentResourceSummaryHasBeenSet = true; m_currentResourceSummary = value; }
    inline void SetCurrentResourceSummary(Aws::String&& value) { m_currentResourceSummaryHasBeenSet = true; m_currentResourceSummary = std::move(value); }
    inline void SetCurrentResourceSummary(const char* value) { m_currentResourceSummaryHasBeenSet = true; m_currentResourceSummary.assign(value); }
    inline Recommendation& WithCurrentResourceSummary(const Aws::String& value) { SetCurrentResourceSummary(value); return *this;}
    inline Recommendation& WithCurrentResourceSummary(Aws::String&& value) { SetCurrentResourceSummary(std::move(value)); return *this;}
    inline Recommendation& WithCurrentResourceSummary(const char* value) { SetCurrentResourceSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the recommended resource.</p>
     */
    inline const Aws::String& GetRecommendedResourceSummary() const{ return m_recommendedResourceSummary; }
    inline bool RecommendedResourceSummaryHasBeenSet() const { return m_recommendedResourceSummaryHasBeenSet; }
    inline void SetRecommendedResourceSummary(const Aws::String& value) { m_recommendedResourceSummaryHasBeenSet = true; m_recommendedResourceSummary = value; }
    inline void SetRecommendedResourceSummary(Aws::String&& value) { m_recommendedResourceSummaryHasBeenSet = true; m_recommendedResourceSummary = std::move(value); }
    inline void SetRecommendedResourceSummary(const char* value) { m_recommendedResourceSummaryHasBeenSet = true; m_recommendedResourceSummary.assign(value); }
    inline Recommendation& WithRecommendedResourceSummary(const Aws::String& value) { SetRecommendedResourceSummary(value); return *this;}
    inline Recommendation& WithRecommendedResourceSummary(Aws::String&& value) { SetRecommendedResourceSummary(std::move(value)); return *this;}
    inline Recommendation& WithRecommendedResourceSummary(const char* value) { SetRecommendedResourceSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }
    inline Recommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}
    inline Recommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline int GetRecommendationLookbackPeriodInDays() const{ return m_recommendationLookbackPeriodInDays; }
    inline bool RecommendationLookbackPeriodInDaysHasBeenSet() const { return m_recommendationLookbackPeriodInDaysHasBeenSet; }
    inline void SetRecommendationLookbackPeriodInDays(int value) { m_recommendationLookbackPeriodInDaysHasBeenSet = true; m_recommendationLookbackPeriodInDays = value; }
    inline Recommendation& WithRecommendationLookbackPeriodInDays(int value) { SetRecommendationLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the recommendation.</p>
     */
    inline const Source& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Recommendation& WithSource(const Source& value) { SetSource(value); return *this;}
    inline Recommendation& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Recommendation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Recommendation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Recommendation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Recommendation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    double m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    double m_estimatedSavingsPercentage;
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    double m_estimatedMonthlyCost;
    bool m_estimatedMonthlyCostHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_implementationEffort;
    bool m_implementationEffortHasBeenSet = false;

    bool m_restartNeeded;
    bool m_restartNeededHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    bool m_rollbackPossible;
    bool m_rollbackPossibleHasBeenSet = false;

    Aws::String m_currentResourceSummary;
    bool m_currentResourceSummaryHasBeenSet = false;

    Aws::String m_recommendedResourceSummary;
    bool m_recommendedResourceSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    int m_recommendationLookbackPeriodInDays;
    bool m_recommendationLookbackPeriodInDaysHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
