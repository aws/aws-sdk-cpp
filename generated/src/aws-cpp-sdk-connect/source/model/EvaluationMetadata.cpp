/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationMetadata::EvaluationMetadata(JsonView jsonValue) { *this = jsonValue; }

EvaluationMetadata& EvaluationMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactId")) {
    m_contactId = jsonValue.GetString("ContactId");
    m_contactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("EvaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactAgentId")) {
    m_contactAgentId = jsonValue.GetString("ContactAgentId");
    m_contactAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CalibrationSessionId")) {
    m_calibrationSessionId = jsonValue.GetString("CalibrationSessionId");
    m_calibrationSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetObject("Score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluation")) {
    m_autoEvaluation = jsonValue.GetObject("AutoEvaluation");
    m_autoEvaluationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Acknowledgement")) {
    m_acknowledgement = jsonValue.GetObject("Acknowledgement");
    m_acknowledgementHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationMetadata::Jsonize() const {
  JsonValue payload;

  if (m_contactIdHasBeenSet) {
    payload.WithString("ContactId", m_contactId);
  }

  if (m_evaluatorArnHasBeenSet) {
    payload.WithString("EvaluatorArn", m_evaluatorArn);
  }

  if (m_contactAgentIdHasBeenSet) {
    payload.WithString("ContactAgentId", m_contactAgentId);
  }

  if (m_calibrationSessionIdHasBeenSet) {
    payload.WithString("CalibrationSessionId", m_calibrationSessionId);
  }

  if (m_scoreHasBeenSet) {
    payload.WithObject("Score", m_score.Jsonize());
  }

  if (m_autoEvaluationHasBeenSet) {
    payload.WithObject("AutoEvaluation", m_autoEvaluation.Jsonize());
  }

  if (m_acknowledgementHasBeenSet) {
    payload.WithObject("Acknowledgement", m_acknowledgement.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
