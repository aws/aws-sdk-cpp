/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/ActionType.h>
#include <aws/cost-optimization-hub/model/ResourceDetails.h>
#include <aws/cost-optimization-hub/model/ResourceType.h>
#include <aws/cost-optimization-hub/model/ImplementationEffort.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cost-optimization-hub/model/Source.h>
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
    AWS_COSTOPTIMIZATIONHUB_API GetRecommendationResult();
    AWS_COSTOPTIMIZATIONHUB_API GetRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API GetRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline GetRecommendationResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline GetRecommendationResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline GetRecommendationResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionType = value; }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionType = std::move(value); }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline GetRecommendationResult& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline GetRecommendationResult& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The lookback period used to calculate cost impact for a recommendation.</p>
     */
    inline int GetCostCalculationLookbackPeriodInDays() const{ return m_costCalculationLookbackPeriodInDays; }

    /**
     * <p>The lookback period used to calculate cost impact for a recommendation.</p>
     */
    inline void SetCostCalculationLookbackPeriodInDays(int value) { m_costCalculationLookbackPeriodInDays = value; }

    /**
     * <p>The lookback period used to calculate cost impact for a recommendation.</p>
     */
    inline GetRecommendationResult& WithCostCalculationLookbackPeriodInDays(int value) { SetCostCalculationLookbackPeriodInDays(value); return *this;}


    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }

    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }

    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }

    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline GetRecommendationResult& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline GetRecommendationResult& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code used for the recommendation.</p>
     */
    inline GetRecommendationResult& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The details for the resource.</p>
     */
    inline const ResourceDetails& GetCurrentResourceDetails() const{ return m_currentResourceDetails; }

    /**
     * <p>The details for the resource.</p>
     */
    inline void SetCurrentResourceDetails(const ResourceDetails& value) { m_currentResourceDetails = value; }

    /**
     * <p>The details for the resource.</p>
     */
    inline void SetCurrentResourceDetails(ResourceDetails&& value) { m_currentResourceDetails = std::move(value); }

    /**
     * <p>The details for the resource.</p>
     */
    inline GetRecommendationResult& WithCurrentResourceDetails(const ResourceDetails& value) { SetCurrentResourceDetails(value); return *this;}

    /**
     * <p>The details for the resource.</p>
     */
    inline GetRecommendationResult& WithCurrentResourceDetails(ResourceDetails&& value) { SetCurrentResourceDetails(std::move(value)); return *this;}


    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetCurrentResourceType() const{ return m_currentResourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetCurrentResourceType(const ResourceType& value) { m_currentResourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetCurrentResourceType(ResourceType&& value) { m_currentResourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline GetRecommendationResult& WithCurrentResourceType(const ResourceType& value) { SetCurrentResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline GetRecommendationResult& WithCurrentResourceType(ResourceType&& value) { SetCurrentResourceType(std::move(value)); return *this;}


    /**
     * <p>The estimated monthly cost of the recommendation.</p>
     */
    inline double GetEstimatedMonthlyCost() const{ return m_estimatedMonthlyCost; }

    /**
     * <p>The estimated monthly cost of the recommendation.</p>
     */
    inline void SetEstimatedMonthlyCost(double value) { m_estimatedMonthlyCost = value; }

    /**
     * <p>The estimated monthly cost of the recommendation.</p>
     */
    inline GetRecommendationResult& WithEstimatedMonthlyCost(double value) { SetEstimatedMonthlyCost(value); return *this;}


    /**
     * <p>The estimated monthly savings amount for the recommendation.</p>
     */
    inline double GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p>The estimated monthly savings amount for the recommendation.</p>
     */
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavings = value; }

    /**
     * <p>The estimated monthly savings amount for the recommendation.</p>
     */
    inline GetRecommendationResult& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}


    /**
     * <p>The estimated savings amount over the lookback period used to calculate cost
     * impact for a recommendation.</p>
     */
    inline double GetEstimatedSavingsOverCostCalculationLookbackPeriod() const{ return m_estimatedSavingsOverCostCalculationLookbackPeriod; }

    /**
     * <p>The estimated savings amount over the lookback period used to calculate cost
     * impact for a recommendation.</p>
     */
    inline void SetEstimatedSavingsOverCostCalculationLookbackPeriod(double value) { m_estimatedSavingsOverCostCalculationLookbackPeriod = value; }

    /**
     * <p>The estimated savings amount over the lookback period used to calculate cost
     * impact for a recommendation.</p>
     */
    inline GetRecommendationResult& WithEstimatedSavingsOverCostCalculationLookbackPeriod(double value) { SetEstimatedSavingsOverCostCalculationLookbackPeriod(value); return *this;}


    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline double GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }

    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(double value) { m_estimatedSavingsPercentage = value; }

    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline GetRecommendationResult& WithEstimatedSavingsPercentage(double value) { SetEstimatedSavingsPercentage(value); return *this;}


    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline const ImplementationEffort& GetImplementationEffort() const{ return m_implementationEffort; }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline void SetImplementationEffort(const ImplementationEffort& value) { m_implementationEffort = value; }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline void SetImplementationEffort(ImplementationEffort&& value) { m_implementationEffort = std::move(value); }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline GetRecommendationResult& WithImplementationEffort(const ImplementationEffort& value) { SetImplementationEffort(value); return *this;}

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline GetRecommendationResult& WithImplementationEffort(ImplementationEffort&& value) { SetImplementationEffort(std::move(value)); return *this;}


    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestamp = value; }

    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline GetRecommendationResult& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p>The time when the recommendation was last generated.</p>
     */
    inline GetRecommendationResult& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ID for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The ID for the recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationId = value; }

    /**
     * <p>The ID for the recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationId = std::move(value); }

    /**
     * <p>The ID for the recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationId.assign(value); }

    /**
     * <p>The ID for the recommendation.</p>
     */
    inline GetRecommendationResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID for the recommendation.</p>
     */
    inline GetRecommendationResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID for the recommendation.</p>
     */
    inline GetRecommendationResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline int GetRecommendationLookbackPeriodInDays() const{ return m_recommendationLookbackPeriodInDays; }

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline void SetRecommendationLookbackPeriodInDays(int value) { m_recommendationLookbackPeriodInDays = value; }

    /**
     * <p>The lookback period that's used to generate the recommendation.</p>
     */
    inline GetRecommendationResult& WithRecommendationLookbackPeriodInDays(int value) { SetRecommendationLookbackPeriodInDays(value); return *this;}


    /**
     * <p>The details about the recommended resource.</p>
     */
    inline const ResourceDetails& GetRecommendedResourceDetails() const{ return m_recommendedResourceDetails; }

    /**
     * <p>The details about the recommended resource.</p>
     */
    inline void SetRecommendedResourceDetails(const ResourceDetails& value) { m_recommendedResourceDetails = value; }

    /**
     * <p>The details about the recommended resource.</p>
     */
    inline void SetRecommendedResourceDetails(ResourceDetails&& value) { m_recommendedResourceDetails = std::move(value); }

    /**
     * <p>The details about the recommended resource.</p>
     */
    inline GetRecommendationResult& WithRecommendedResourceDetails(const ResourceDetails& value) { SetRecommendedResourceDetails(value); return *this;}

    /**
     * <p>The details about the recommended resource.</p>
     */
    inline GetRecommendationResult& WithRecommendedResourceDetails(ResourceDetails&& value) { SetRecommendedResourceDetails(std::move(value)); return *this;}


    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline const ResourceType& GetRecommendedResourceType() const{ return m_recommendedResourceType; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline void SetRecommendedResourceType(const ResourceType& value) { m_recommendedResourceType = value; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline void SetRecommendedResourceType(ResourceType&& value) { m_recommendedResourceType = std::move(value); }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline GetRecommendationResult& WithRecommendedResourceType(const ResourceType& value) { SetRecommendedResourceType(value); return *this;}

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline GetRecommendationResult& WithRecommendedResourceType(ResourceType&& value) { SetRecommendedResourceType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline GetRecommendationResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline GetRecommendationResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline GetRecommendationResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline GetRecommendationResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline GetRecommendationResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline GetRecommendationResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline GetRecommendationResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline GetRecommendationResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the resource. This is the same as the Amazon
     * Resource Name (ARN), if available.</p>
     */
    inline GetRecommendationResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline bool GetRestartNeeded() const{ return m_restartNeeded; }

    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline void SetRestartNeeded(bool value) { m_restartNeeded = value; }

    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline GetRecommendationResult& WithRestartNeeded(bool value) { SetRestartNeeded(value); return *this;}


    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline bool GetRollbackPossible() const{ return m_rollbackPossible; }

    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline void SetRollbackPossible(bool value) { m_rollbackPossible = value; }

    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline GetRecommendationResult& WithRollbackPossible(bool value) { SetRollbackPossible(value); return *this;}


    /**
     * <p>The source of the recommendation.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The source of the recommendation.</p>
     */
    inline void SetSource(const Source& value) { m_source = value; }

    /**
     * <p>The source of the recommendation.</p>
     */
    inline void SetSource(Source&& value) { m_source = std::move(value); }

    /**
     * <p>The source of the recommendation.</p>
     */
    inline GetRecommendationResult& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the recommendation.</p>
     */
    inline GetRecommendationResult& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline GetRecommendationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline GetRecommendationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline GetRecommendationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with the resource for which the recommendation
     * exists.</p>
     */
    inline GetRecommendationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_accountId;

    ActionType m_actionType;

    int m_costCalculationLookbackPeriodInDays;

    Aws::String m_currencyCode;

    ResourceDetails m_currentResourceDetails;

    ResourceType m_currentResourceType;

    double m_estimatedMonthlyCost;

    double m_estimatedMonthlySavings;

    double m_estimatedSavingsOverCostCalculationLookbackPeriod;

    double m_estimatedSavingsPercentage;

    ImplementationEffort m_implementationEffort;

    Aws::Utils::DateTime m_lastRefreshTimestamp;

    Aws::String m_recommendationId;

    int m_recommendationLookbackPeriodInDays;

    ResourceDetails m_recommendedResourceDetails;

    ResourceType m_recommendedResourceType;

    Aws::String m_region;

    Aws::String m_resourceArn;

    Aws::String m_resourceId;

    bool m_restartNeeded;

    bool m_rollbackPossible;

    Source m_source;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
