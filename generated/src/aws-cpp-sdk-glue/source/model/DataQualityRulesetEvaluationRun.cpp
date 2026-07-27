/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityRulesetEvaluationRun.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityRulesetEvaluationRun::DataQualityRulesetEvaluationRun(JsonView jsonValue) { *this = jsonValue; }

DataQualityRulesetEvaluationRun& DataQualityRulesetEvaluationRun::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RunId")) {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Role")) {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberOfWorkers")) {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");
    m_numberOfWorkersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timeout")) {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalRunOptions")) {
    m_additionalRunOptions = jsonValue.GetObject("AdditionalRunOptions");
    m_additionalRunOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorString")) {
    m_errorString = jsonValue.GetString("ErrorString");
    m_errorStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedOn")) {
    m_startedOn = jsonValue.GetDouble("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedOn")) {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedOn")) {
    m_completedOn = jsonValue.GetDouble("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionTime")) {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");
    m_executionTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RulesetNames")) {
    Aws::Utils::Array<JsonView> rulesetNamesJsonList = jsonValue.GetArray("RulesetNames");
    for (unsigned rulesetNamesIndex = 0; rulesetNamesIndex < rulesetNamesJsonList.GetLength(); ++rulesetNamesIndex) {
      m_rulesetNames.push_back(rulesetNamesJsonList[rulesetNamesIndex].AsString());
    }
    m_rulesetNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResultIds")) {
    Aws::Utils::Array<JsonView> resultIdsJsonList = jsonValue.GetArray("ResultIds");
    for (unsigned resultIdsIndex = 0; resultIdsIndex < resultIdsJsonList.GetLength(); ++resultIdsIndex) {
      m_resultIds.push_back(resultIdsJsonList[resultIdsIndex].AsString());
    }
    m_resultIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalDataSources")) {
    Aws::Map<Aws::String, JsonView> additionalDataSourcesJsonMap = jsonValue.GetObject("AdditionalDataSources").GetAllObjects();
    for (auto& additionalDataSourcesItem : additionalDataSourcesJsonMap) {
      m_additionalDataSources[additionalDataSourcesItem.first] = additionalDataSourcesItem.second.AsObject();
    }
    m_additionalDataSourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityRulesetEvaluationRun::Jsonize() const {
  JsonValue payload;

  if (m_runIdHasBeenSet) {
    payload.WithString("RunId", m_runId);
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("DataSource", m_dataSource.Jsonize());
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

  if (m_statusHasBeenSet) {
    payload.WithString("Status", TaskStatusTypeMapper::GetNameForTaskStatusType(m_status));
  }

  if (m_errorStringHasBeenSet) {
    payload.WithString("ErrorString", m_errorString);
  }

  if (m_startedOnHasBeenSet) {
    payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if (m_lastModifiedOnHasBeenSet) {
    payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if (m_completedOnHasBeenSet) {
    payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if (m_executionTimeHasBeenSet) {
    payload.WithInteger("ExecutionTime", m_executionTime);
  }

  if (m_rulesetNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesetNamesJsonList(m_rulesetNames.size());
    for (unsigned rulesetNamesIndex = 0; rulesetNamesIndex < rulesetNamesJsonList.GetLength(); ++rulesetNamesIndex) {
      rulesetNamesJsonList[rulesetNamesIndex].AsString(m_rulesetNames[rulesetNamesIndex]);
    }
    payload.WithArray("RulesetNames", std::move(rulesetNamesJsonList));
  }

  if (m_resultIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resultIdsJsonList(m_resultIds.size());
    for (unsigned resultIdsIndex = 0; resultIdsIndex < resultIdsJsonList.GetLength(); ++resultIdsIndex) {
      resultIdsJsonList[resultIdsIndex].AsString(m_resultIds[resultIdsIndex]);
    }
    payload.WithArray("ResultIds", std::move(resultIdsJsonList));
  }

  if (m_additionalDataSourcesHasBeenSet) {
    JsonValue additionalDataSourcesJsonMap;
    for (auto& additionalDataSourcesItem : m_additionalDataSources) {
      additionalDataSourcesJsonMap.WithObject(additionalDataSourcesItem.first, additionalDataSourcesItem.second.Jsonize());
    }
    payload.WithObject("AdditionalDataSources", std::move(additionalDataSourcesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
