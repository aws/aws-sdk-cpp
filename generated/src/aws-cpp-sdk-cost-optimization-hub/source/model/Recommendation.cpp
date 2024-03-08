/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Recommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

Recommendation::Recommendation() : 
    m_accountIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_currentResourceSummaryHasBeenSet(false),
    m_currentResourceTypeHasBeenSet(false),
    m_estimatedMonthlyCost(0.0),
    m_estimatedMonthlyCostHasBeenSet(false),
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_estimatedSavingsPercentage(0.0),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_implementationEffortHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_recommendationLookbackPeriodInDays(0),
    m_recommendationLookbackPeriodInDaysHasBeenSet(false),
    m_recommendedResourceSummaryHasBeenSet(false),
    m_recommendedResourceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_restartNeeded(false),
    m_restartNeededHasBeenSet(false),
    m_rollbackPossible(false),
    m_rollbackPossibleHasBeenSet(false),
    m_source(Source::NOT_SET),
    m_sourceHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_currentResourceSummaryHasBeenSet(false),
    m_currentResourceTypeHasBeenSet(false),
    m_estimatedMonthlyCost(0.0),
    m_estimatedMonthlyCostHasBeenSet(false),
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_estimatedSavingsPercentage(0.0),
    m_estimatedSavingsPercentageHasBeenSet(false),
    m_implementationEffortHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_recommendationLookbackPeriodInDays(0),
    m_recommendationLookbackPeriodInDaysHasBeenSet(false),
    m_recommendedResourceSummaryHasBeenSet(false),
    m_recommendedResourceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_restartNeeded(false),
    m_restartNeededHasBeenSet(false),
    m_rollbackPossible(false),
    m_rollbackPossibleHasBeenSet(false),
    m_source(Source::NOT_SET),
    m_sourceHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentResourceSummary"))
  {
    m_currentResourceSummary = jsonValue.GetString("currentResourceSummary");

    m_currentResourceSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentResourceType"))
  {
    m_currentResourceType = jsonValue.GetString("currentResourceType");

    m_currentResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedMonthlyCost"))
  {
    m_estimatedMonthlyCost = jsonValue.GetDouble("estimatedMonthlyCost");

    m_estimatedMonthlyCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetDouble("estimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedSavingsPercentage"))
  {
    m_estimatedSavingsPercentage = jsonValue.GetDouble("estimatedSavingsPercentage");

    m_estimatedSavingsPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("implementationEffort"))
  {
    m_implementationEffort = jsonValue.GetString("implementationEffort");

    m_implementationEffortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

    m_lastRefreshTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationLookbackPeriodInDays"))
  {
    m_recommendationLookbackPeriodInDays = jsonValue.GetInteger("recommendationLookbackPeriodInDays");

    m_recommendationLookbackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendedResourceSummary"))
  {
    m_recommendedResourceSummary = jsonValue.GetString("recommendedResourceSummary");

    m_recommendedResourceSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendedResourceType"))
  {
    m_recommendedResourceType = jsonValue.GetString("recommendedResourceType");

    m_recommendedResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restartNeeded"))
  {
    m_restartNeeded = jsonValue.GetBool("restartNeeded");

    m_restartNeededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackPossible"))
  {
    m_rollbackPossible = jsonValue.GetBool("rollbackPossible");

    m_rollbackPossibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = SourceMapper::GetSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
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

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", m_actionType);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  if(m_currentResourceSummaryHasBeenSet)
  {
   payload.WithString("currentResourceSummary", m_currentResourceSummary);

  }

  if(m_currentResourceTypeHasBeenSet)
  {
   payload.WithString("currentResourceType", m_currentResourceType);

  }

  if(m_estimatedMonthlyCostHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlyCost", m_estimatedMonthlyCost);

  }

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlySavings", m_estimatedMonthlySavings);

  }

  if(m_estimatedSavingsPercentageHasBeenSet)
  {
   payload.WithDouble("estimatedSavingsPercentage", m_estimatedSavingsPercentage);

  }

  if(m_implementationEffortHasBeenSet)
  {
   payload.WithString("implementationEffort", m_implementationEffort);

  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  if(m_recommendationLookbackPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("recommendationLookbackPeriodInDays", m_recommendationLookbackPeriodInDays);

  }

  if(m_recommendedResourceSummaryHasBeenSet)
  {
   payload.WithString("recommendedResourceSummary", m_recommendedResourceSummary);

  }

  if(m_recommendedResourceTypeHasBeenSet)
  {
   payload.WithString("recommendedResourceType", m_recommendedResourceType);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_restartNeededHasBeenSet)
  {
   payload.WithBool("restartNeeded", m_restartNeeded);

  }

  if(m_rollbackPossibleHasBeenSet)
  {
   payload.WithBool("rollbackPossible", m_rollbackPossible);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", SourceMapper::GetNameForSource(m_source));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
