/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanExecutionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanExecutionSummary::RecoveryPlanExecutionSummary(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanExecutionSummary& RecoveryPlanExecutionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recoveryPlanExecutionArn")) {
    m_recoveryPlanExecutionArn = jsonValue.GetString("recoveryPlanExecutionArn");
    m_recoveryPlanExecutionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recoveryPlanArn")) {
    m_recoveryPlanArn = jsonValue.GetString("recoveryPlanArn");
    m_recoveryPlanArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mode")) {
    m_mode = RecoveryPlanExecutionModeMapper::GetRecoveryPlanExecutionModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RecoveryPlanExecutionStatusMapper::GetRecoveryPlanExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetail")) {
    m_errorDetail = jsonValue.GetObject("errorDetail");
    m_errorDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPlanExecutionSummary::Jsonize() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionArn", m_recoveryPlanExecutionArn);
  }

  if (m_recoveryPlanArnHasBeenSet) {
    payload.WithString("recoveryPlanArn", m_recoveryPlanArn);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", RecoveryPlanExecutionModeMapper::GetNameForRecoveryPlanExecutionMode(m_mode));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecoveryPlanExecutionStatusMapper::GetNameForRecoveryPlanExecutionStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt);
  }

  if (m_errorDetailHasBeenSet) {
    payload.WithObject("errorDetail", m_errorDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
