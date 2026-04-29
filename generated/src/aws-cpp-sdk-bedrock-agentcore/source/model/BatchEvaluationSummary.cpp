/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BatchEvaluationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BatchEvaluationSummary::BatchEvaluationSummary(JsonView jsonValue) { *this = jsonValue; }

BatchEvaluationSummary& BatchEvaluationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("batchEvaluationId")) {
    m_batchEvaluationId = jsonValue.GetString("batchEvaluationId");
    m_batchEvaluationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluationArn")) {
    m_batchEvaluationArn = jsonValue.GetString("batchEvaluationArn");
    m_batchEvaluationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluationName")) {
    m_batchEvaluationName = jsonValue.GetString("batchEvaluationName");
    m_batchEvaluationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BatchEvaluationStatusMapper::GetBatchEvaluationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluators")) {
    Aws::Utils::Array<JsonView> evaluatorsJsonList = jsonValue.GetArray("evaluators");
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      m_evaluators.push_back(evaluatorsJsonList[evaluatorsIndex].AsObject());
    }
    m_evaluatorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationResults")) {
    m_evaluationResults = jsonValue.GetObject("evaluationResults");
    m_evaluationResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("errorDetails");
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsString());
    }
    m_errorDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchEvaluationSummary::Jsonize() const {
  JsonValue payload;

  if (m_batchEvaluationIdHasBeenSet) {
    payload.WithString("batchEvaluationId", m_batchEvaluationId);
  }

  if (m_batchEvaluationArnHasBeenSet) {
    payload.WithString("batchEvaluationArn", m_batchEvaluationArn);
  }

  if (m_batchEvaluationNameHasBeenSet) {
    payload.WithString("batchEvaluationName", m_batchEvaluationName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", BatchEvaluationStatusMapper::GetNameForBatchEvaluationStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_evaluatorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorsJsonList(m_evaluators.size());
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      evaluatorsJsonList[evaluatorsIndex].AsObject(m_evaluators[evaluatorsIndex].Jsonize());
    }
    payload.WithArray("evaluators", std::move(evaluatorsJsonList));
  }

  if (m_evaluationResultsHasBeenSet) {
    payload.WithObject("evaluationResults", m_evaluationResults.Jsonize());
  }

  if (m_errorDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> errorDetailsJsonList(m_errorDetails.size());
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      errorDetailsJsonList[errorDetailsIndex].AsString(m_errorDetails[errorDetailsIndex]);
    }
    payload.WithArray("errorDetails", std::move(errorDetailsJsonList));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
