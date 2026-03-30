/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Recommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Recommendation::Recommendation(JsonView jsonValue) { *this = jsonValue; }

Recommendation& Recommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceArn")) {
    m_agentSpaceArn = jsonValue.GetString("agentSpaceArn");
    m_agentSpaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendationId")) {
    m_recommendationId = jsonValue.GetString("recommendationId");
    m_recommendationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
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
    m_status = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = RecommendationPriorityMapper::GetRecommendationPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("goalVersion")) {
    m_goalVersion = jsonValue.GetInt64("goalVersion");
    m_goalVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalContext")) {
    m_additionalContext = jsonValue.GetString("additionalContext");
    m_additionalContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetInt64("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue Recommendation::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceArnHasBeenSet) {
    payload.WithString("agentSpaceArn", m_agentSpaceArn);
  }

  if (m_recommendationIdHasBeenSet) {
    payload.WithString("recommendationId", m_recommendationId);
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
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
    payload.WithString("status", RecommendationStatusMapper::GetNameForRecommendationStatus(m_status));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", RecommendationPriorityMapper::GetNameForRecommendationPriority(m_priority));
  }

  if (m_goalVersionHasBeenSet) {
    payload.WithInt64("goalVersion", m_goalVersion);
  }

  if (m_additionalContextHasBeenSet) {
    payload.WithString("additionalContext", m_additionalContext);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_versionHasBeenSet) {
    payload.WithInt64("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
