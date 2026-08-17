/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanExecutionStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanExecutionStep::RecoveryPlanExecutionStep(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanExecutionStep& RecoveryPlanExecutionStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recoveryPlanExecutionStepArn")) {
    m_recoveryPlanExecutionStepArn = jsonValue.GetString("recoveryPlanExecutionStepArn");
    m_recoveryPlanExecutionStepArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepIndex")) {
    m_stepIndex = jsonValue.GetInteger("stepIndex");
    m_stepIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RecoveryPlanExecutionStepStatusMapper::GetRecoveryPlanExecutionStepStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepName")) {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetail")) {
    m_errorDetail = jsonValue.GetObject("errorDetail");
    m_errorDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attempt")) {
    m_attempt = jsonValue.GetInteger("attempt");
    m_attemptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanExecutionStep::Jsonize() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionStepArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionStepArn", m_recoveryPlanExecutionStepArn);
  }

  if (m_stepIndexHasBeenSet) {
    payload.WithInteger("stepIndex", m_stepIndex);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecoveryPlanExecutionStepStatusMapper::GetNameForRecoveryPlanExecutionStepStatus(m_status));
  }

  if (m_stepNameHasBeenSet) {
    payload.WithString("stepName", m_stepName);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_errorDetailHasBeenSet) {
    payload.WithObject("errorDetail", m_errorDetail.Jsonize());
  }

  if (m_attemptHasBeenSet) {
    payload.WithInteger("attempt", m_attempt);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt);
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
