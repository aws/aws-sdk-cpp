/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/GetRecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendationResult::GetRecommendationResult() : 
    m_actionType(ActionType::NOT_SET),
    m_costCalculationLookbackPeriodInDays(0),
    m_currentResourceType(ResourceType::NOT_SET),
    m_estimatedMonthlyCost(0.0),
    m_estimatedMonthlySavings(0.0),
    m_estimatedSavingsOverCostCalculationLookbackPeriod(0.0),
    m_estimatedSavingsPercentage(0.0),
    m_implementationEffort(ImplementationEffort::NOT_SET),
    m_recommendationLookbackPeriodInDays(0),
    m_recommendedResourceType(ResourceType::NOT_SET),
    m_restartNeeded(false),
    m_rollbackPossible(false),
    m_source(Source::NOT_SET)
{
}

GetRecommendationResult::GetRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_actionType(ActionType::NOT_SET),
    m_costCalculationLookbackPeriodInDays(0),
    m_currentResourceType(ResourceType::NOT_SET),
    m_estimatedMonthlyCost(0.0),
    m_estimatedMonthlySavings(0.0),
    m_estimatedSavingsOverCostCalculationLookbackPeriod(0.0),
    m_estimatedSavingsPercentage(0.0),
    m_implementationEffort(ImplementationEffort::NOT_SET),
    m_recommendationLookbackPeriodInDays(0),
    m_recommendedResourceType(ResourceType::NOT_SET),
    m_restartNeeded(false),
    m_rollbackPossible(false),
    m_source(Source::NOT_SET)
{
  *this = result;
}

GetRecommendationResult& GetRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

  }

  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("actionType"));

  }

  if(jsonValue.ValueExists("costCalculationLookbackPeriodInDays"))
  {
    m_costCalculationLookbackPeriodInDays = jsonValue.GetInteger("costCalculationLookbackPeriodInDays");

  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

  }

  if(jsonValue.ValueExists("currentResourceDetails"))
  {
    m_currentResourceDetails = jsonValue.GetObject("currentResourceDetails");

  }

  if(jsonValue.ValueExists("currentResourceType"))
  {
    m_currentResourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("currentResourceType"));

  }

  if(jsonValue.ValueExists("estimatedMonthlyCost"))
  {
    m_estimatedMonthlyCost = jsonValue.GetDouble("estimatedMonthlyCost");

  }

  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetDouble("estimatedMonthlySavings");

  }

  if(jsonValue.ValueExists("estimatedSavingsOverCostCalculationLookbackPeriod"))
  {
    m_estimatedSavingsOverCostCalculationLookbackPeriod = jsonValue.GetDouble("estimatedSavingsOverCostCalculationLookbackPeriod");

  }

  if(jsonValue.ValueExists("estimatedSavingsPercentage"))
  {
    m_estimatedSavingsPercentage = jsonValue.GetDouble("estimatedSavingsPercentage");

  }

  if(jsonValue.ValueExists("implementationEffort"))
  {
    m_implementationEffort = ImplementationEffortMapper::GetImplementationEffortForName(jsonValue.GetString("implementationEffort"));

  }

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

  }

  if(jsonValue.ValueExists("recommendationLookbackPeriodInDays"))
  {
    m_recommendationLookbackPeriodInDays = jsonValue.GetInteger("recommendationLookbackPeriodInDays");

  }

  if(jsonValue.ValueExists("recommendedResourceDetails"))
  {
    m_recommendedResourceDetails = jsonValue.GetObject("recommendedResourceDetails");

  }

  if(jsonValue.ValueExists("recommendedResourceType"))
  {
    m_recommendedResourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("recommendedResourceType"));

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

  }

  if(jsonValue.ValueExists("restartNeeded"))
  {
    m_restartNeeded = jsonValue.GetBool("restartNeeded");

  }

  if(jsonValue.ValueExists("rollbackPossible"))
  {
    m_rollbackPossible = jsonValue.GetBool("rollbackPossible");

  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = SourceMapper::GetSourceForName(jsonValue.GetString("source"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
