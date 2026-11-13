/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/CreateDataQualityEvaluationConfigRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataQualityEvaluationConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_levelHasBeenSet) {
    payload.WithString("Level", DataQualityEvaluationConfigLevelMapper::GetNameForDataQualityEvaluationConfigLevel(m_level));
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("DataSource", m_dataSource.Jsonize());
  }

  if (m_rulesetNameHasBeenSet) {
    payload.WithString("RulesetName", m_rulesetName);
  }

  if (m_managedRulesetNameHasBeenSet) {
    payload.WithString(
        "ManagedRulesetName",
        DataQualityEvaluationConfigManagedRulesetMapper::GetNameForDataQualityEvaluationConfigManagedRuleset(m_managedRulesetName));
  }

  if (m_triggersHasBeenSet) {
    Aws::Utils::Array<JsonValue> triggersJsonList(m_triggers.size());
    for (unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex) {
      triggersJsonList[triggersIndex].AsString(
          DataQualityEvaluationConfigTriggerMapper::GetNameForDataQualityEvaluationConfigTrigger(m_triggers[triggersIndex]));
    }
    payload.WithArray("Triggers", std::move(triggersJsonList));
  }

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("ScheduleExpression", m_scheduleExpression);
  }

  if (m_startAtHasBeenSet) {
    payload.WithDouble("StartAt", m_startAt.SecondsWithMSPrecision());
  }

  if (m_endAtHasBeenSet) {
    payload.WithDouble("EndAt", m_endAt.SecondsWithMSPrecision());
  }

  if (m_roleHasBeenSet) {
    payload.WithString("Role", m_role);
  }

  if (m_numberOfWorkersHasBeenSet) {
    payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);
  }

  if (m_timeoutHasBeenSet) {
    payload.WithInteger("Timeout", m_timeout);
  }

  if (m_additionalRunOptionsHasBeenSet) {
    payload.WithObject("AdditionalRunOptions", m_additionalRunOptions.Jsonize());
  }

  if (m_additionalDataSourcesHasBeenSet) {
    JsonValue additionalDataSourcesJsonMap;
    for (auto& additionalDataSourcesItem : m_additionalDataSources) {
      additionalDataSourcesJsonMap.WithObject(additionalDataSourcesItem.first, additionalDataSourcesItem.second.Jsonize());
    }
    payload.WithObject("AdditionalDataSources", std::move(additionalDataSourcesJsonMap));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataQualityEvaluationConfigRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateDataQualityEvaluationConfig"));
  return headers;
}
