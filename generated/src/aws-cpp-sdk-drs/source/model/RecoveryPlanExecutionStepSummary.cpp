/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanExecutionStepSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanExecutionStepSummary::RecoveryPlanExecutionStepSummary(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanExecutionStepSummary& RecoveryPlanExecutionStepSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recoveryPlanExecutionStepArn")) {
    m_recoveryPlanExecutionStepArn = jsonValue.GetString("recoveryPlanExecutionStepArn");
    m_recoveryPlanExecutionStepArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepName")) {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepIndex")) {
    m_stepIndex = jsonValue.GetInteger("stepIndex");
    m_stepIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RecoveryPlanExecutionStepStatusMapper::GetRecoveryPlanExecutionStepStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetail")) {
    m_errorDetail = jsonValue.GetObject("errorDetail");
    m_errorDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanExecutionStepSummary::Jsonize() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionStepArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionStepArn", m_recoveryPlanExecutionStepArn);
  }

  if (m_stepNameHasBeenSet) {
    payload.WithString("stepName", m_stepName);
  }

  if (m_stepIndexHasBeenSet) {
    payload.WithInteger("stepIndex", m_stepIndex);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecoveryPlanExecutionStepStatusMapper::GetNameForRecoveryPlanExecutionStepStatus(m_status));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_errorDetailHasBeenSet) {
    payload.WithObject("errorDetail", m_errorDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
