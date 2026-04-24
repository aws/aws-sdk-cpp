/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EvaluatorSummary::EvaluatorSummary(JsonView jsonValue) { *this = jsonValue; }

EvaluatorSummary& EvaluatorSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorType")) {
    m_evaluatorType = EvaluatorTypeMapper::GetEvaluatorTypeForName(jsonValue.GetString("evaluatorType"));
    m_evaluatorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("level")) {
    m_level = EvaluatorLevelMapper::GetEvaluatorLevelForName(jsonValue.GetString("level"));
    m_levelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EvaluatorStatusMapper::GetEvaluatorStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lockedForModification")) {
    m_lockedForModification = jsonValue.GetBool("lockedForModification");
    m_lockedForModificationHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorSummary::Jsonize() const {
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

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_evaluatorTypeHasBeenSet) {
    payload.WithString("evaluatorType", EvaluatorTypeMapper::GetNameForEvaluatorType(m_evaluatorType));
  }

  if (m_levelHasBeenSet) {
    payload.WithString("level", EvaluatorLevelMapper::GetNameForEvaluatorLevel(m_level));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EvaluatorStatusMapper::GetNameForEvaluatorStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_lockedForModificationHasBeenSet) {
    payload.WithBool("lockedForModification", m_lockedForModification);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
