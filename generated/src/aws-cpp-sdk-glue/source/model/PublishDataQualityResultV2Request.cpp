/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/PublishDataQualityResultV2Request.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PublishDataQualityResultV2Request::SerializePayload() const {
  JsonValue payload;

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

  if (m_aggregatedMetricsHasBeenSet) {
    payload.WithObject("AggregatedMetrics", m_aggregatedMetrics.Jsonize());
  }

  if (m_statisticsHasBeenSet) {
    Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
    for (unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex) {
      statisticsJsonList[statisticsIndex].AsObject(m_statistics[statisticsIndex].Jsonize());
    }
    payload.WithArray("Statistics", std::move(statisticsJsonList));
  }

  if (m_runConfigurationHasBeenSet) {
    payload.WithObject("RunConfiguration", m_runConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
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

  if (m_rulesetNameHasBeenSet) {
    payload.WithString("RulesetName", m_rulesetName);
  }

  if (m_dataQualitySecurityConfigurationHasBeenSet) {
    payload.WithString("DataQualitySecurityConfiguration", m_dataQualitySecurityConfiguration);
  }

  if (m_telemetryHasBeenSet) {
    payload.WithObject("Telemetry", m_telemetry.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PublishDataQualityResultV2Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PublishDataQualityResultV2"));
  return headers;
}
