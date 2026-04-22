/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-serverless/model/Session.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRServerless {
namespace Model {

Session::Session(JsonView jsonValue) { *this = jsonValue; }

Session& Session::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = SessionStateMapper::GetSessionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateDetails")) {
    m_stateDetails = jsonValue.GetString("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("releaseLabel")) {
    m_releaseLabel = jsonValue.GetString("releaseLabel");
    m_releaseLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idleSince")) {
    m_idleSince = jsonValue.GetDouble("idleSince");
    m_idleSinceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationOverrides")) {
    m_configurationOverrides = jsonValue.GetObject("configurationOverrides");
    m_configurationOverridesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkConfiguration")) {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idleTimeoutMinutes")) {
    m_idleTimeoutMinutes = jsonValue.GetInt64("idleTimeoutMinutes");
    m_idleTimeoutMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalResourceUtilization")) {
    m_totalResourceUtilization = jsonValue.GetObject("totalResourceUtilization");
    m_totalResourceUtilizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billedResourceUtilization")) {
    m_billedResourceUtilization = jsonValue.GetObject("billedResourceUtilization");
    m_billedResourceUtilizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalExecutionDurationSeconds")) {
    m_totalExecutionDurationSeconds = jsonValue.GetInt64("totalExecutionDurationSeconds");
    m_totalExecutionDurationSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue Session::Jsonize() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", SessionStateMapper::GetNameForSessionState(m_state));
  }

  if (m_stateDetailsHasBeenSet) {
    payload.WithString("stateDetails", m_stateDetails);
  }

  if (m_releaseLabelHasBeenSet) {
    payload.WithString("releaseLabel", m_releaseLabel);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_idleSinceHasBeenSet) {
    payload.WithDouble("idleSince", m_idleSince.SecondsWithMSPrecision());
  }

  if (m_configurationOverridesHasBeenSet) {
    payload.WithObject("configurationOverrides", m_configurationOverrides.Jsonize());
  }

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_idleTimeoutMinutesHasBeenSet) {
    payload.WithInt64("idleTimeoutMinutes", m_idleTimeoutMinutes);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_totalResourceUtilizationHasBeenSet) {
    payload.WithObject("totalResourceUtilization", m_totalResourceUtilization.Jsonize());
  }

  if (m_billedResourceUtilizationHasBeenSet) {
    payload.WithObject("billedResourceUtilization", m_billedResourceUtilization.Jsonize());
  }

  if (m_totalExecutionDurationSecondsHasBeenSet) {
    payload.WithInt64("totalExecutionDurationSeconds", m_totalExecutionDurationSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
