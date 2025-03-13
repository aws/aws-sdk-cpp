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

GetRecommendationResult::GetRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecommendationResult& GetRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");
    m_recommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendationLookbackPeriodInDays"))
  {
    m_recommendationLookbackPeriodInDays = jsonValue.GetInteger("recommendationLookbackPeriodInDays");
    m_recommendationLookbackPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("costCalculationLookbackPeriodInDays"))
  {
    m_costCalculationLookbackPeriodInDays = jsonValue.GetInteger("costCalculationLookbackPeriodInDays");
    m_costCalculationLookbackPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedSavingsPercentage"))
  {
    m_estimatedSavingsPercentage = jsonValue.GetDouble("estimatedSavingsPercentage");
    m_estimatedSavingsPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedSavingsOverCostCalculationLookbackPeriod"))
  {
    m_estimatedSavingsOverCostCalculationLookbackPeriod = jsonValue.GetDouble("estimatedSavingsOverCostCalculationLookbackPeriod");
    m_estimatedSavingsOverCostCalculationLookbackPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentResourceType"))
  {
    m_currentResourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("currentResourceType"));
    m_currentResourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedResourceType"))
  {
    m_recommendedResourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("recommendedResourceType"));
    m_recommendedResourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = SourceMapper::GetSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");
    m_lastRefreshTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetDouble("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedMonthlyCost"))
  {
    m_estimatedMonthlyCost = jsonValue.GetDouble("estimatedMonthlyCost");
    m_estimatedMonthlyCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("implementationEffort"))
  {
    m_implementationEffort = ImplementationEffortMapper::GetImplementationEffortForName(jsonValue.GetString("implementationEffort"));
    m_implementationEffortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("restartNeeded"))
  {
    m_restartNeeded = jsonValue.GetBool("restartNeeded");
    m_restartNeededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("actionType"));
    m_actionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rollbackPossible"))
  {
    m_rollbackPossible = jsonValue.GetBool("rollbackPossible");
    m_rollbackPossibleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentResourceDetails"))
  {
    m_currentResourceDetails = jsonValue.GetObject("currentResourceDetails");
    m_currentResourceDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedResourceDetails"))
  {
    m_recommendedResourceDetails = jsonValue.GetObject("recommendedResourceDetails");
    m_recommendedResourceDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
