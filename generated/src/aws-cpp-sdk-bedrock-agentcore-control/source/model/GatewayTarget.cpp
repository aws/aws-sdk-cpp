/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

GatewayTarget::GatewayTarget(JsonView jsonValue) { *this = jsonValue; }

GatewayTarget& GatewayTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetId")) {
    m_targetId = jsonValue.GetString("targetId");
    m_targetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TargetStatusMapper::GetTargetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReasons")) {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsString());
    }
    m_statusReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetConfiguration")) {
    m_targetConfiguration = jsonValue.GetObject("targetConfiguration");
    m_targetConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderConfigurations")) {
    Aws::Utils::Array<JsonView> credentialProviderConfigurationsJsonList = jsonValue.GetArray("credentialProviderConfigurations");
    for (unsigned credentialProviderConfigurationsIndex = 0;
         credentialProviderConfigurationsIndex < credentialProviderConfigurationsJsonList.GetLength();
         ++credentialProviderConfigurationsIndex) {
      m_credentialProviderConfigurations.push_back(
          credentialProviderConfigurationsJsonList[credentialProviderConfigurationsIndex].AsObject());
    }
    m_credentialProviderConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSynchronizedAt")) {
    m_lastSynchronizedAt = jsonValue.GetString("lastSynchronizedAt");
    m_lastSynchronizedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadataConfiguration")) {
    m_metadataConfiguration = jsonValue.GetObject("metadataConfiguration");
    m_metadataConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayTarget::Jsonize() const {
  JsonValue payload;

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
  }

  if (m_targetIdHasBeenSet) {
    payload.WithString("targetId", m_targetId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", TargetStatusMapper::GetNameForTargetStatus(m_status));
  }

  if (m_statusReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      statusReasonsJsonList[statusReasonsIndex].AsString(m_statusReasons[statusReasonsIndex]);
    }
    payload.WithArray("statusReasons", std::move(statusReasonsJsonList));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_targetConfigurationHasBeenSet) {
    payload.WithObject("targetConfiguration", m_targetConfiguration.Jsonize());
  }

  if (m_credentialProviderConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> credentialProviderConfigurationsJsonList(m_credentialProviderConfigurations.size());
    for (unsigned credentialProviderConfigurationsIndex = 0;
         credentialProviderConfigurationsIndex < credentialProviderConfigurationsJsonList.GetLength();
         ++credentialProviderConfigurationsIndex) {
      credentialProviderConfigurationsJsonList[credentialProviderConfigurationsIndex].AsObject(
          m_credentialProviderConfigurations[credentialProviderConfigurationsIndex].Jsonize());
    }
    payload.WithArray("credentialProviderConfigurations", std::move(credentialProviderConfigurationsJsonList));
  }

  if (m_lastSynchronizedAtHasBeenSet) {
    payload.WithString("lastSynchronizedAt", m_lastSynchronizedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_metadataConfigurationHasBeenSet) {
    payload.WithObject("metadataConfiguration", m_metadataConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
