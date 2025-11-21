/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationEventStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

AutomationEventStep::AutomationEventStep(JsonView jsonValue) { *this = jsonValue; }

AutomationEventStep& AutomationEventStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepId")) {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepType")) {
    m_stepType = StepTypeMapper::GetStepTypeForName(jsonValue.GetString("stepType"));
    m_stepTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepStatus")) {
    m_stepStatus = StepStatusMapper::GetStepStatusForName(jsonValue.GetString("stepStatus"));
    m_stepStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("startTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedTimestamp")) {
    m_completedTimestamp = jsonValue.GetDouble("completedTimestamp");
    m_completedTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationEventStep::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_stepIdHasBeenSet) {
    payload.WithString("stepId", m_stepId);
  }

  if (m_stepTypeHasBeenSet) {
    payload.WithString("stepType", StepTypeMapper::GetNameForStepType(m_stepType));
  }

  if (m_stepStatusHasBeenSet) {
    payload.WithString("stepStatus", StepStatusMapper::GetNameForStepStatus(m_stepStatus));
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_completedTimestampHasBeenSet) {
    payload.WithDouble("completedTimestamp", m_completedTimestamp.SecondsWithMSPrecision());
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
