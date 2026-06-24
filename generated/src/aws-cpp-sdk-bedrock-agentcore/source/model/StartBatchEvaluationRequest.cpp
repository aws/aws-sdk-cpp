/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StartBatchEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartBatchEvaluationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_batchEvaluationNameHasBeenSet) {
    payload.WithString("batchEvaluationName", m_batchEvaluationName);
  }

  if (m_evaluatorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorsJsonList(m_evaluators.size());
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      evaluatorsJsonList[evaluatorsIndex].AsObject(m_evaluators[evaluatorsIndex].Jsonize());
    }
    payload.WithArray("evaluators", std::move(evaluatorsJsonList));
  }

  if (m_insightsHasBeenSet) {
    Aws::Utils::Array<JsonValue> insightsJsonList(m_insights.size());
    for (unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex) {
      insightsJsonList[insightsIndex].AsObject(m_insights[insightsIndex].Jsonize());
    }
    payload.WithArray("insights", std::move(insightsJsonList));
  }

  if (m_dataSourceConfigHasBeenSet) {
    payload.WithObject("dataSourceConfig", m_dataSourceConfig.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_evaluationMetadataHasBeenSet) {
    payload.WithObject("evaluationMetadata", m_evaluationMetadata.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload.View().WriteReadable();
}
