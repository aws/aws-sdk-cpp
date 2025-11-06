/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSummary::EvaluationSummary(JsonView jsonValue) { *this = jsonValue; }

EvaluationSummary& EvaluationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EvaluationId")) {
    m_evaluationId = jsonValue.GetString("EvaluationId");
    m_evaluationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationArn")) {
    m_evaluationArn = jsonValue.GetString("EvaluationArn");
    m_evaluationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormTitle")) {
    m_evaluationFormTitle = jsonValue.GetString("EvaluationFormTitle");
    m_evaluationFormTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormId")) {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");
    m_evaluationFormIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CalibrationSessionId")) {
    m_calibrationSessionId = jsonValue.GetString("CalibrationSessionId");
    m_calibrationSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationStatusMapper::GetEvaluationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluationEnabled")) {
    m_autoEvaluationEnabled = jsonValue.GetBool("AutoEvaluationEnabled");
    m_autoEvaluationEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluationStatus")) {
    m_autoEvaluationStatus = AutoEvaluationStatusMapper::GetAutoEvaluationStatusForName(jsonValue.GetString("AutoEvaluationStatus"));
    m_autoEvaluationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("EvaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetObject("Score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Acknowledgement")) {
    m_acknowledgement = jsonValue.GetObject("Acknowledgement");
    m_acknowledgementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationType")) {
    m_evaluationType = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("EvaluationType"));
    m_evaluationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSummary::Jsonize() const {
  JsonValue payload;

  if (m_evaluationIdHasBeenSet) {
    payload.WithString("EvaluationId", m_evaluationId);
  }

  if (m_evaluationArnHasBeenSet) {
    payload.WithString("EvaluationArn", m_evaluationArn);
  }

  if (m_evaluationFormTitleHasBeenSet) {
    payload.WithString("EvaluationFormTitle", m_evaluationFormTitle);
  }

  if (m_evaluationFormIdHasBeenSet) {
    payload.WithString("EvaluationFormId", m_evaluationFormId);
  }

  if (m_calibrationSessionIdHasBeenSet) {
    payload.WithString("CalibrationSessionId", m_calibrationSessionId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationStatusMapper::GetNameForEvaluationStatus(m_status));
  }

  if (m_autoEvaluationEnabledHasBeenSet) {
    payload.WithBool("AutoEvaluationEnabled", m_autoEvaluationEnabled);
  }

  if (m_autoEvaluationStatusHasBeenSet) {
    payload.WithString("AutoEvaluationStatus", AutoEvaluationStatusMapper::GetNameForAutoEvaluationStatus(m_autoEvaluationStatus));
  }

  if (m_evaluatorArnHasBeenSet) {
    payload.WithString("EvaluatorArn", m_evaluatorArn);
  }

  if (m_scoreHasBeenSet) {
    payload.WithObject("Score", m_score.Jsonize());
  }

  if (m_acknowledgementHasBeenSet) {
    payload.WithObject("Acknowledgement", m_acknowledgement.Jsonize());
  }

  if (m_evaluationTypeHasBeenSet) {
    payload.WithString("EvaluationType", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluationType));
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
