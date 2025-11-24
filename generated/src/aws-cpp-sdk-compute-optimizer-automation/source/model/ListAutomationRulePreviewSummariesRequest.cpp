/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAutomationRulePreviewSummariesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ruleTypeHasBeenSet) {
    payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  if (m_organizationScopeHasBeenSet) {
    payload.WithObject("organizationScope", m_organizationScope.Jsonize());
  }

  if (m_recommendedActionTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendedActionTypesJsonList(m_recommendedActionTypes.size());
    for (unsigned recommendedActionTypesIndex = 0; recommendedActionTypesIndex < recommendedActionTypesJsonList.GetLength();
         ++recommendedActionTypesIndex) {
      recommendedActionTypesJsonList[recommendedActionTypesIndex].AsString(
          RecommendedActionTypeMapper::GetNameForRecommendedActionType(m_recommendedActionTypes[recommendedActionTypesIndex]));
    }
    payload.WithArray("recommendedActionTypes", std::move(recommendedActionTypesJsonList));
  }

  if (m_criteriaHasBeenSet) {
    payload.WithObject("criteria", m_criteria.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAutomationRulePreviewSummariesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerAutomationService.ListAutomationRulePreviewSummaries"));
  return headers;
}
