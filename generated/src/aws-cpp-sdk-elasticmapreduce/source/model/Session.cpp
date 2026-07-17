/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/Session.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

Session::Session(JsonView jsonValue) { *this = jsonValue; }

Session& Session::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterId")) {
    m_clusterId = jsonValue.GetString("ClusterId");
    m_clusterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = SessionStateMapper::GetSessionStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StateChangeReason")) {
    m_stateChangeReason = jsonValue.GetString("StateChangeReason");
    m_stateChangeReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseLabel")) {
    m_releaseLabel = jsonValue.GetString("ReleaseLabel");
    m_releaseLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetDouble("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdleSince")) {
    m_idleSince = jsonValue.GetDouble("IdleSince");
    m_idleSinceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EngineConfigurations")) {
    Aws::Utils::Array<JsonView> engineConfigurationsJsonList = jsonValue.GetArray("EngineConfigurations");
    for (unsigned engineConfigurationsIndex = 0; engineConfigurationsIndex < engineConfigurationsJsonList.GetLength();
         ++engineConfigurationsIndex) {
      m_engineConfigurations.push_back(engineConfigurationsJsonList[engineConfigurationsIndex].AsObject());
    }
    m_engineConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MonitoringConfiguration")) {
    m_monitoringConfiguration = jsonValue.GetObject("MonitoringConfiguration");
    m_monitoringConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionIdleTimeoutInMinutes")) {
    m_sessionIdleTimeoutInMinutes = jsonValue.GetInt64("SessionIdleTimeoutInMinutes");
    m_sessionIdleTimeoutInMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerUrl")) {
    m_serverUrl = jsonValue.GetString("ServerUrl");
    m_serverUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Session::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_clusterIdHasBeenSet) {
    payload.WithString("ClusterId", m_clusterId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", SessionStateMapper::GetNameForSessionState(m_state));
  }

  if (m_stateChangeReasonHasBeenSet) {
    payload.WithString("StateChangeReason", m_stateChangeReason);
  }

  if (m_releaseLabelHasBeenSet) {
    payload.WithString("ReleaseLabel", m_releaseLabel);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("ExecutionRoleArn", m_executionRoleArn);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("EndedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_idleSinceHasBeenSet) {
    payload.WithDouble("IdleSince", m_idleSince.SecondsWithMSPrecision());
  }

  if (m_engineConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> engineConfigurationsJsonList(m_engineConfigurations.size());
    for (unsigned engineConfigurationsIndex = 0; engineConfigurationsIndex < engineConfigurationsJsonList.GetLength();
         ++engineConfigurationsIndex) {
      engineConfigurationsJsonList[engineConfigurationsIndex].AsObject(m_engineConfigurations[engineConfigurationsIndex].Jsonize());
    }
    payload.WithArray("EngineConfigurations", std::move(engineConfigurationsJsonList));
  }

  if (m_monitoringConfigurationHasBeenSet) {
    payload.WithObject("MonitoringConfiguration", m_monitoringConfiguration.Jsonize());
  }

  if (m_sessionIdleTimeoutInMinutesHasBeenSet) {
    payload.WithInt64("SessionIdleTimeoutInMinutes", m_sessionIdleTimeoutInMinutes);
  }

  if (m_serverUrlHasBeenSet) {
    payload.WithString("ServerUrl", m_serverUrl);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
