/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/UpdateAutomationRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAutomationRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ruleArnHasBeenSet) {
    payload.WithString("ruleArn", m_ruleArn);
  }

  if (m_ruleRevisionHasBeenSet) {
    payload.WithInt64("ruleRevision", m_ruleRevision);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_ruleTypeHasBeenSet) {
    payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  if (m_organizationConfigurationHasBeenSet) {
    payload.WithObject("organizationConfiguration", m_organizationConfiguration.Jsonize());
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", m_priority);
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

  if (m_scheduleHasBeenSet) {
    payload.WithObject("schedule", m_schedule.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RuleStatusMapper::GetNameForRuleStatus(m_status));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAutomationRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerAutomationService.UpdateAutomationRule"));
  return headers;
}
