/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/RecoveryPlanStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

RecoveryPlanStep::RecoveryPlanStep(JsonView jsonValue) { *this = jsonValue; }

RecoveryPlanStep& RecoveryPlanStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recoveryPlanStepArn")) {
    m_recoveryPlanStepArn = jsonValue.GetString("recoveryPlanStepArn");
    m_recoveryPlanStepArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepOrder")) {
    m_stepOrder = jsonValue.GetInteger("stepOrder");
    m_stepOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepName")) {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
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

JsonValue RecoveryPlanStep::Jsonize() const {
  JsonValue payload;

  if (m_recoveryPlanStepArnHasBeenSet) {
    payload.WithString("recoveryPlanStepArn", m_recoveryPlanStepArn);
  }

  if (m_stepOrderHasBeenSet) {
    payload.WithInteger("stepOrder", m_stepOrder);
  }

  if (m_stepNameHasBeenSet) {
    payload.WithString("stepName", m_stepName);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
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
