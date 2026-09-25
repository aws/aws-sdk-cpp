/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

VpcConfiguration::VpcConfiguration(JsonView jsonValue) { *this = jsonValue; }

VpcConfiguration& VpcConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcConfigurationId")) {
    m_vpcConfigurationId = jsonValue.GetString("vpcConfigurationId");
    m_vpcConfigurationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = VpcConfigurationStatusMapper::GetVpcConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTarget")) {
    m_resourceTarget = jsonValue.GetString("resourceTarget");
    m_resourceTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = VpcProtocolMapper::GetVpcProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolutionMode")) {
    m_resolutionMode = VpcResolutionModeMapper::GetVpcResolutionModeForName(jsonValue.GetString("resolutionMode"));
    m_resolutionModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostHeader")) {
    m_hostHeader = jsonValue.GetString("hostHeader");
    m_hostHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tlsServerName")) {
    m_tlsServerName = jsonValue.GetString("tlsServerName");
    m_tlsServerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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

JsonValue VpcConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_vpcConfigurationIdHasBeenSet) {
    payload.WithString("vpcConfigurationId", m_vpcConfigurationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", VpcConfigurationStatusMapper::GetNameForVpcConfigurationStatus(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", m_statusMessage);
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_resourceTargetHasBeenSet) {
    payload.WithString("resourceTarget", m_resourceTarget);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", VpcProtocolMapper::GetNameForVpcProtocol(m_protocol));
  }

  if (m_resolutionModeHasBeenSet) {
    payload.WithString("resolutionMode", VpcResolutionModeMapper::GetNameForVpcResolutionMode(m_resolutionMode));
  }

  if (m_hostHeaderHasBeenSet) {
    payload.WithString("hostHeader", m_hostHeader);
  }

  if (m_tlsServerNameHasBeenSet) {
    payload.WithString("tlsServerName", m_tlsServerName);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
