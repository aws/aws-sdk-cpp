/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RecommendedAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

RecommendedAction::RecommendedAction(JsonView jsonValue) { *this = jsonValue; }

RecommendedAction& RecommendedAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendedActionId")) {
    m_recommendedActionId = jsonValue.GetString("recommendedActionId");
    m_recommendedActionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lookBackPeriodInDays")) {
    m_lookBackPeriodInDays = jsonValue.GetInteger("lookBackPeriodInDays");
    m_lookBackPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedActionType")) {
    m_recommendedActionType = RecommendedActionTypeMapper::GetRecommendedActionTypeForName(jsonValue.GetString("recommendedActionType"));
    m_recommendedActionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentResourceSummary")) {
    m_currentResourceSummary = jsonValue.GetString("currentResourceSummary");
    m_currentResourceSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentResourceDetails")) {
    m_currentResourceDetails = jsonValue.GetObject("currentResourceDetails");
    m_currentResourceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedResourceSummary")) {
    m_recommendedResourceSummary = jsonValue.GetString("recommendedResourceSummary");
    m_recommendedResourceSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedResourceDetails")) {
    m_recommendedResourceDetails = jsonValue.GetObject("recommendedResourceDetails");
    m_recommendedResourceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restartNeeded")) {
    m_restartNeeded = jsonValue.GetBool("restartNeeded");
    m_restartNeededHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTags")) {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendedAction::Jsonize() const {
  JsonValue payload;

  if (m_recommendedActionIdHasBeenSet) {
    payload.WithString("recommendedActionId", m_recommendedActionId);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if (m_lookBackPeriodInDaysHasBeenSet) {
    payload.WithInteger("lookBackPeriodInDays", m_lookBackPeriodInDays);
  }

  if (m_recommendedActionTypeHasBeenSet) {
    payload.WithString("recommendedActionType", RecommendedActionTypeMapper::GetNameForRecommendedActionType(m_recommendedActionType));
  }

  if (m_currentResourceSummaryHasBeenSet) {
    payload.WithString("currentResourceSummary", m_currentResourceSummary);
  }

  if (m_currentResourceDetailsHasBeenSet) {
    payload.WithObject("currentResourceDetails", m_currentResourceDetails.Jsonize());
  }

  if (m_recommendedResourceSummaryHasBeenSet) {
    payload.WithString("recommendedResourceSummary", m_recommendedResourceSummary);
  }

  if (m_recommendedResourceDetailsHasBeenSet) {
    payload.WithObject("recommendedResourceDetails", m_recommendedResourceDetails.Jsonize());
  }

  if (m_restartNeededHasBeenSet) {
    payload.WithBool("restartNeeded", m_restartNeeded);
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());
  }

  if (m_resourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
    }
    payload.WithArray("resourceTags", std::move(resourceTagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
