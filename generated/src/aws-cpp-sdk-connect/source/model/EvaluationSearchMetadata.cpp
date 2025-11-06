/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSearchMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSearchMetadata::EvaluationSearchMetadata(JsonView jsonValue) { *this = jsonValue; }

EvaluationSearchMetadata& EvaluationSearchMetadata::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("ScorePercentage")) {
    m_scorePercentage = jsonValue.GetDouble("ScorePercentage");
    m_scorePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScoreAutomaticFail")) {
    m_scoreAutomaticFail = jsonValue.GetBool("ScoreAutomaticFail");
    m_scoreAutomaticFailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScoreNotApplicable")) {
    m_scoreNotApplicable = jsonValue.GetBool("ScoreNotApplicable");
    m_scoreNotApplicableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluationEnabled")) {
    m_autoEvaluationEnabled = jsonValue.GetBool("AutoEvaluationEnabled");
    m_autoEvaluationEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluationStatus")) {
    m_autoEvaluationStatus = AutoEvaluationStatusMapper::GetAutoEvaluationStatusForName(jsonValue.GetString("AutoEvaluationStatus"));
    m_autoEvaluationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcknowledgedTime")) {
    m_acknowledgedTime = jsonValue.GetDouble("AcknowledgedTime");
    m_acknowledgedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcknowledgedBy")) {
    m_acknowledgedBy = jsonValue.GetString("AcknowledgedBy");
    m_acknowledgedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcknowledgerComment")) {
    m_acknowledgerComment = jsonValue.GetString("AcknowledgerComment");
    m_acknowledgerCommentHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSearchMetadata::Jsonize() const {
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

  if (m_scorePercentageHasBeenSet) {
    payload.WithDouble("ScorePercentage", m_scorePercentage);
  }

  if (m_scoreAutomaticFailHasBeenSet) {
    payload.WithBool("ScoreAutomaticFail", m_scoreAutomaticFail);
  }

  if (m_scoreNotApplicableHasBeenSet) {
    payload.WithBool("ScoreNotApplicable", m_scoreNotApplicable);
  }

  if (m_autoEvaluationEnabledHasBeenSet) {
    payload.WithBool("AutoEvaluationEnabled", m_autoEvaluationEnabled);
  }

  if (m_autoEvaluationStatusHasBeenSet) {
    payload.WithString("AutoEvaluationStatus", AutoEvaluationStatusMapper::GetNameForAutoEvaluationStatus(m_autoEvaluationStatus));
  }

  if (m_acknowledgedTimeHasBeenSet) {
    payload.WithDouble("AcknowledgedTime", m_acknowledgedTime.SecondsWithMSPrecision());
  }

  if (m_acknowledgedByHasBeenSet) {
    payload.WithString("AcknowledgedBy", m_acknowledgedBy);
  }

  if (m_acknowledgerCommentHasBeenSet) {
    payload.WithString("AcknowledgerComment", m_acknowledgerComment);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
