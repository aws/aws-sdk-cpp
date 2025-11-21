/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

AutomationRule::AutomationRule(JsonView jsonValue) { *this = jsonValue; }

AutomationRule& AutomationRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleArn")) {
    m_ruleArn = jsonValue.GetString("ruleArn");
    m_ruleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleType")) {
    m_ruleType = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("ruleType"));
    m_ruleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleRevision")) {
    m_ruleRevision = jsonValue.GetInt64("ruleRevision");
    m_ruleRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationConfiguration")) {
    m_organizationConfiguration = jsonValue.GetObject("organizationConfiguration");
    m_organizationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetString("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedActionTypes")) {
    Aws::Utils::Array<JsonView> recommendedActionTypesJsonList = jsonValue.GetArray("recommendedActionTypes");
    for (unsigned recommendedActionTypesIndex = 0; recommendedActionTypesIndex < recommendedActionTypesJsonList.GetLength();
         ++recommendedActionTypesIndex) {
      m_recommendedActionTypes.push_back(RecommendedActionTypeMapper::GetRecommendedActionTypeForName(
          recommendedActionTypesJsonList[recommendedActionTypesIndex].AsString()));
    }
    m_recommendedActionTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schedule")) {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RuleStatusMapper::GetRuleStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTimestamp")) {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("lastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRule::Jsonize() const {
  JsonValue payload;

  if (m_ruleArnHasBeenSet) {
    payload.WithString("ruleArn", m_ruleArn);
  }

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
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

  if (m_ruleRevisionHasBeenSet) {
    payload.WithInt64("ruleRevision", m_ruleRevision);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
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

  if (m_scheduleHasBeenSet) {
    payload.WithObject("schedule", m_schedule.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RuleStatusMapper::GetNameForRuleStatus(m_status));
  }

  if (m_createdTimestampHasBeenSet) {
    payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimestampHasBeenSet) {
    payload.WithDouble("lastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
