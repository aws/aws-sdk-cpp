/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Goal.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Goal::Goal(JsonView jsonValue) { *this = jsonValue; }

Goal& Goal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceArn")) {
    m_agentSpaceArn = jsonValue.GetString("agentSpaceArn");
    m_agentSpaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("goalId")) {
    m_goalId = jsonValue.GetString("goalId");
    m_goalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GoalStatusMapper::GetGoalStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("goalType")) {
    m_goalType = GoalTypeMapper::GetGoalTypeForName(jsonValue.GetString("goalType"));
    m_goalTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastEvaluatedAt")) {
    m_lastEvaluatedAt = jsonValue.GetString("lastEvaluatedAt");
    m_lastEvaluatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastTaskId")) {
    m_lastTaskId = jsonValue.GetString("lastTaskId");
    m_lastTaskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSuccessfulTaskId")) {
    m_lastSuccessfulTaskId = jsonValue.GetString("lastSuccessfulTaskId");
    m_lastSuccessfulTaskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetInteger("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationSchedule")) {
    m_evaluationSchedule = jsonValue.GetObject("evaluationSchedule");
    m_evaluationScheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue Goal::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceArnHasBeenSet) {
    payload.WithString("agentSpaceArn", m_agentSpaceArn);
  }

  if (m_goalIdHasBeenSet) {
    payload.WithString("goalId", m_goalId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", GoalStatusMapper::GetNameForGoalStatus(m_status));
  }

  if (m_goalTypeHasBeenSet) {
    payload.WithString("goalType", GoalTypeMapper::GetNameForGoalType(m_goalType));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastEvaluatedAtHasBeenSet) {
    payload.WithString("lastEvaluatedAt", m_lastEvaluatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastTaskIdHasBeenSet) {
    payload.WithString("lastTaskId", m_lastTaskId);
  }

  if (m_lastSuccessfulTaskIdHasBeenSet) {
    payload.WithString("lastSuccessfulTaskId", m_lastSuccessfulTaskId);
  }

  if (m_versionHasBeenSet) {
    payload.WithInteger("version", m_version);
  }

  if (m_evaluationScheduleHasBeenSet) {
    payload.WithObject("evaluationSchedule", m_evaluationSchedule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
