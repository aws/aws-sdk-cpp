/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationResultContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationResultContent::EvaluationResultContent(JsonView jsonValue) { *this = jsonValue; }

EvaluationResultContent& EvaluationResultContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("evaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorId")) {
    m_evaluatorId = jsonValue.GetString("evaluatorId");
    m_evaluatorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorName")) {
    m_evaluatorName = jsonValue.GetString("evaluatorName");
    m_evaluatorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("explanation")) {
    m_explanation = jsonValue.GetString("explanation");
    m_explanationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("context")) {
    m_context = jsonValue.GetObject("context");
    m_contextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenUsage")) {
    m_tokenUsage = jsonValue.GetObject("tokenUsage");
    m_tokenUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationResultContent::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorArnHasBeenSet) {
    payload.WithString("evaluatorArn", m_evaluatorArn);
  }

  if (m_evaluatorIdHasBeenSet) {
    payload.WithString("evaluatorId", m_evaluatorId);
  }

  if (m_evaluatorNameHasBeenSet) {
    payload.WithString("evaluatorName", m_evaluatorName);
  }

  if (m_explanationHasBeenSet) {
    payload.WithString("explanation", m_explanation);
  }

  if (m_contextHasBeenSet) {
    payload.WithObject("context", m_context.Jsonize());
  }

  if (m_valueHasBeenSet) {
    payload.WithDouble("value", m_value);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  if (m_tokenUsageHasBeenSet) {
    payload.WithObject("tokenUsage", m_tokenUsage.Jsonize());
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
