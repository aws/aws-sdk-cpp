/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityEvaluationConfigListDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityEvaluationConfigListDetails::DataQualityEvaluationConfigListDetails(JsonView jsonValue) { *this = jsonValue; }

DataQualityEvaluationConfigListDetails& DataQualityEvaluationConfigListDetails::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("PauseRuns")) {
    m_pauseRuns = jsonValue.GetBool("PauseRuns");
    m_pauseRunsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityEvaluationConfigListDetails::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_evaluationRunModeHasBeenSet) {
    payload.WithString("EvaluationRunMode",
                       DataQualityEvaluationRunModeMapper::GetNameForDataQualityEvaluationRunMode(m_evaluationRunMode));
  }

  if (m_createdOnHasBeenSet) {
    payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if (m_lastModifiedOnHasBeenSet) {
    payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
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

  if (m_pauseRunsHasBeenSet) {
    payload.WithBool("PauseRuns", m_pauseRuns);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
