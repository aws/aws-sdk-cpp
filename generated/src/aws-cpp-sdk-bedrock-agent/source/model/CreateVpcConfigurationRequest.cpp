/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CreateVpcConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateVpcConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
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

  return payload.View().WriteReadable();
}
