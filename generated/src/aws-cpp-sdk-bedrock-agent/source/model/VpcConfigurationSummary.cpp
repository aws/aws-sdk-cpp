/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VpcConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

VpcConfigurationSummary::VpcConfigurationSummary(JsonView jsonValue) { *this = jsonValue; }

VpcConfigurationSummary& VpcConfigurationSummary::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue VpcConfigurationSummary::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
