/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityEvaluationRunAdditionalRunOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityEvaluationRunAdditionalRunOptions::DataQualityEvaluationRunAdditionalRunOptions(JsonView jsonValue) { *this = jsonValue; }

DataQualityEvaluationRunAdditionalRunOptions& DataQualityEvaluationRunAdditionalRunOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CloudWatchMetricsEnabled")) {
    m_cloudWatchMetricsEnabled = jsonValue.GetBool("CloudWatchMetricsEnabled");
    m_cloudWatchMetricsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResultsS3Prefix")) {
    m_resultsS3Prefix = jsonValue.GetString("ResultsS3Prefix");
    m_resultsS3PrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompositeRuleEvaluationMethod")) {
    m_compositeRuleEvaluationMethod = DQCompositeRuleEvaluationMethodMapper::GetDQCompositeRuleEvaluationMethodForName(
        jsonValue.GetString("CompositeRuleEvaluationMethod"));
    m_compositeRuleEvaluationMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomLogGroupPrefix")) {
    m_customLogGroupPrefix = jsonValue.GetString("CustomLogGroupPrefix");
    m_customLogGroupPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RowLevelResults")) {
    m_rowLevelResults = jsonValue.GetObject("RowLevelResults");
    m_rowLevelResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfilingResults")) {
    m_profilingResults = jsonValue.GetObject("ProfilingResults");
    m_profilingResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationScope")) {
    m_observationScope = ObservationConfigurationMapper::GetObservationConfigurationForName(jsonValue.GetString("ObservationScope"));
    m_observationScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationMode")) {
    m_observationMode = ObservationModeMapper::GetObservationModeForName(jsonValue.GetString("ObservationMode"));
    m_observationModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataQualityRuleResults")) {
    m_dataQualityRuleResults = jsonValue.GetObject("DataQualityRuleResults");
    m_dataQualityRuleResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationResults")) {
    m_observationResults = jsonValue.GetObject("ObservationResults");
    m_observationResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityEvaluationRunAdditionalRunOptions::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchMetricsEnabledHasBeenSet) {
    payload.WithBool("CloudWatchMetricsEnabled", m_cloudWatchMetricsEnabled);
  }

  if (m_resultsS3PrefixHasBeenSet) {
    payload.WithString("ResultsS3Prefix", m_resultsS3Prefix);
  }

  if (m_compositeRuleEvaluationMethodHasBeenSet) {
    payload.WithString("CompositeRuleEvaluationMethod",
                       DQCompositeRuleEvaluationMethodMapper::GetNameForDQCompositeRuleEvaluationMethod(m_compositeRuleEvaluationMethod));
  }

  if (m_customLogGroupPrefixHasBeenSet) {
    payload.WithString("CustomLogGroupPrefix", m_customLogGroupPrefix);
  }

  if (m_rowLevelResultsHasBeenSet) {
    payload.WithObject("RowLevelResults", m_rowLevelResults.Jsonize());
  }

  if (m_profilingResultsHasBeenSet) {
    payload.WithObject("ProfilingResults", m_profilingResults.Jsonize());
  }

  if (m_observationScopeHasBeenSet) {
    payload.WithString("ObservationScope", ObservationConfigurationMapper::GetNameForObservationConfiguration(m_observationScope));
  }

  if (m_observationModeHasBeenSet) {
    payload.WithString("ObservationMode", ObservationModeMapper::GetNameForObservationMode(m_observationMode));
  }

  if (m_dataQualityRuleResultsHasBeenSet) {
    payload.WithObject("DataQualityRuleResults", m_dataQualityRuleResults.Jsonize());
  }

  if (m_observationResultsHasBeenSet) {
    payload.WithObject("ObservationResults", m_observationResults.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
