/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/UpdateDataQualityEvaluationConfigResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDataQualityEvaluationConfigResult::UpdateDataQualityEvaluationConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateDataQualityEvaluationConfigResult& UpdateDataQualityEvaluationConfigResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationRunMode")) {
    m_evaluationRunMode =
        DataQualityEvaluationRunModeMapper::GetDataQualityEvaluationRunModeForName(jsonValue.GetString("EvaluationRunMode"));
    m_evaluationRunModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedOn")) {
    m_createdOn = jsonValue.GetDouble("CreatedOn");
    m_createdOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedOn")) {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Level")) {
    m_level = DataQualityEvaluationConfigLevelMapper::GetDataQualityEvaluationConfigLevelForName(jsonValue.GetString("Level"));
    m_levelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RulesetName")) {
    m_rulesetName = jsonValue.GetString("RulesetName");
    m_rulesetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedRulesetName")) {
    m_managedRulesetName = DataQualityEvaluationConfigManagedRulesetMapper::GetDataQualityEvaluationConfigManagedRulesetForName(
        jsonValue.GetString("ManagedRulesetName"));
    m_managedRulesetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Triggers")) {
    Aws::Utils::Array<JsonView> triggersJsonList = jsonValue.GetArray("Triggers");
    for (unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex) {
      m_triggers.push_back(DataQualityEvaluationConfigTriggerMapper::GetDataQualityEvaluationConfigTriggerForName(
          triggersJsonList[triggersIndex].AsString()));
    }
    m_triggersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartAt")) {
    m_startAt = jsonValue.GetDouble("StartAt");
    m_startAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndAt")) {
    m_endAt = jsonValue.GetDouble("EndAt");
    m_endAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PauseRuns")) {
    m_pauseRuns = jsonValue.GetBool("PauseRuns");
    m_pauseRunsHasBeenSet = true;
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
  if (jsonValue.ValueExists("AdditionalDataSources")) {
    Aws::Map<Aws::String, JsonView> additionalDataSourcesJsonMap = jsonValue.GetObject("AdditionalDataSources").GetAllObjects();
    for (auto& additionalDataSourcesItem : additionalDataSourcesJsonMap) {
      m_additionalDataSources[additionalDataSourcesItem.first] = additionalDataSourcesItem.second.AsObject();
    }
    m_additionalDataSourcesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
