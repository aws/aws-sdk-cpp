/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityResultV2Item.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityResultV2Item::DataQualityResultV2Item(JsonView jsonValue) { *this = jsonValue; }

DataQualityResultV2Item& DataQualityResultV2Item::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResultId")) {
    m_resultId = jsonValue.GetString("ResultId");
    m_resultIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dimensions")) {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for (auto& dimensionsItem : dimensionsJsonMap) {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionStartedOn")) {
    m_executionStartedOn = jsonValue.GetDouble("ExecutionStartedOn");
    m_executionStartedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionCompletedOn")) {
    m_executionCompletedOn = jsonValue.GetDouble("ExecutionCompletedOn");
    m_executionCompletedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResultPublishedOn")) {
    m_resultPublishedOn = jsonValue.GetDouble("ResultPublishedOn");
    m_resultPublishedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleResults")) {
    Aws::Utils::Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("RuleResults");
    for (unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex) {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
    m_ruleResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnalyzerResults")) {
    Aws::Utils::Array<JsonView> analyzerResultsJsonList = jsonValue.GetArray("AnalyzerResults");
    for (unsigned analyzerResultsIndex = 0; analyzerResultsIndex < analyzerResultsJsonList.GetLength(); ++analyzerResultsIndex) {
      m_analyzerResults.push_back(analyzerResultsJsonList[analyzerResultsIndex].AsObject());
    }
    m_analyzerResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Observations")) {
    Aws::Utils::Array<JsonView> observationsJsonList = jsonValue.GetArray("Observations");
    for (unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex) {
      m_observations.push_back(observationsJsonList[observationsIndex].AsObject());
    }
    m_observationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationContext")) {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");
    m_evaluationContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Descriptors")) {
    Aws::Map<Aws::String, JsonView> descriptorsJsonMap = jsonValue.GetObject("Descriptors").GetAllObjects();
    for (auto& descriptorsItem : descriptorsJsonMap) {
      m_descriptors[descriptorsItem.first] = descriptorsItem.second.AsString();
    }
    m_descriptorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AggregatedMetrics")) {
    m_aggregatedMetrics = jsonValue.GetObject("AggregatedMetrics");
    m_aggregatedMetricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RulesetName")) {
    m_rulesetName = jsonValue.GetString("RulesetName");
    m_rulesetNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityResultV2Item::Jsonize() const {
  JsonValue payload;

  if (m_resultIdHasBeenSet) {
    payload.WithString("ResultId", m_resultId);
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("DataSource", m_dataSource.Jsonize());
  }

  if (m_dimensionsHasBeenSet) {
    JsonValue dimensionsJsonMap;
    for (auto& dimensionsItem : m_dimensions) {
      dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
    }
    payload.WithObject("Dimensions", std::move(dimensionsJsonMap));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_executionStartedOnHasBeenSet) {
    payload.WithDouble("ExecutionStartedOn", m_executionStartedOn.SecondsWithMSPrecision());
  }

  if (m_executionCompletedOnHasBeenSet) {
    payload.WithDouble("ExecutionCompletedOn", m_executionCompletedOn.SecondsWithMSPrecision());
  }

  if (m_resultPublishedOnHasBeenSet) {
    payload.WithDouble("ResultPublishedOn", m_resultPublishedOn.SecondsWithMSPrecision());
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("Score", m_score);
  }

  if (m_ruleResultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleResultsJsonList(m_ruleResults.size());
    for (unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex) {
      ruleResultsJsonList[ruleResultsIndex].AsObject(m_ruleResults[ruleResultsIndex].Jsonize());
    }
    payload.WithArray("RuleResults", std::move(ruleResultsJsonList));
  }

  if (m_analyzerResultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> analyzerResultsJsonList(m_analyzerResults.size());
    for (unsigned analyzerResultsIndex = 0; analyzerResultsIndex < analyzerResultsJsonList.GetLength(); ++analyzerResultsIndex) {
      analyzerResultsJsonList[analyzerResultsIndex].AsObject(m_analyzerResults[analyzerResultsIndex].Jsonize());
    }
    payload.WithArray("AnalyzerResults", std::move(analyzerResultsJsonList));
  }

  if (m_observationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> observationsJsonList(m_observations.size());
    for (unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex) {
      observationsJsonList[observationsIndex].AsObject(m_observations[observationsIndex].Jsonize());
    }
    payload.WithArray("Observations", std::move(observationsJsonList));
  }

  if (m_evaluationContextHasBeenSet) {
    payload.WithString("EvaluationContext", m_evaluationContext);
  }

  if (m_descriptorsHasBeenSet) {
    JsonValue descriptorsJsonMap;
    for (auto& descriptorsItem : m_descriptors) {
      descriptorsJsonMap.WithString(descriptorsItem.first, descriptorsItem.second);
    }
    payload.WithObject("Descriptors", std::move(descriptorsJsonMap));
  }

  if (m_aggregatedMetricsHasBeenSet) {
    payload.WithObject("AggregatedMetrics", m_aggregatedMetrics.Jsonize());
  }

  if (m_rulesetNameHasBeenSet) {
    payload.WithString("RulesetName", m_rulesetName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
