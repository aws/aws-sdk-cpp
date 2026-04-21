/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateContainerFleetRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateContainerFleetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerContainerGroupDefinitionNameHasBeenSet) {
    mapSize++;
  }
  if (m_perInstanceContainerGroupDefinitionNameHasBeenSet) {
    mapSize++;
  }
  if (m_instanceConnectionPortRangeHasBeenSet) {
    mapSize++;
  }
  if (m_instanceInboundPermissionsHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerContainerGroupsPerInstanceHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_billingTypeHasBeenSet) {
    mapSize++;
  }
  if (m_locationsHasBeenSet) {
    mapSize++;
  }
  if (m_metricGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_newGameSessionProtectionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionCreationLimitPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_logConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_playerGatewayModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetRoleArn.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_gameServerContainerGroupDefinitionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerContainerGroupDefinitionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerContainerGroupDefinitionName.c_str()));
  }

  if (m_perInstanceContainerGroupDefinitionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PerInstanceContainerGroupDefinitionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_perInstanceContainerGroupDefinitionName.c_str()));
  }

  if (m_instanceConnectionPortRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceConnectionPortRange"));
    m_instanceConnectionPortRange.CborEncode(encoder);
  }

  if (m_instanceInboundPermissionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceInboundPermissions"));
    encoder.WriteArrayStart(m_instanceInboundPermissions.size());
    for (const auto& item_0 : m_instanceInboundPermissions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_gameServerContainerGroupsPerInstanceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerContainerGroupsPerInstance"));
    (m_gameServerContainerGroupsPerInstance >= 0) ? encoder.WriteUInt(m_gameServerContainerGroupsPerInstance)
                                                  : encoder.WriteNegInt(m_gameServerContainerGroupsPerInstance);
  }

  if (m_instanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceType.c_str()));
  }

  if (m_billingTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BillingType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ContainerFleetBillingTypeMapper::GetNameForContainerFleetBillingType(m_billingType).c_str()));
  }

  if (m_locationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Locations"));
    encoder.WriteArrayStart(m_locations.size());
    for (const auto& item_0 : m_locations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_metricGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricGroups"));
    encoder.WriteArrayStart(m_metricGroups.size());
    for (const auto& item_0 : m_metricGroups) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_newGameSessionProtectionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NewGameSessionProtectionPolicy"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProtectionPolicyMapper::GetNameForProtectionPolicy(m_newGameSessionProtectionPolicy).c_str()));
  }

  if (m_gameSessionCreationLimitPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionCreationLimitPolicy"));
    m_gameSessionCreationLimitPolicy.CborEncode(encoder);
  }

  if (m_logConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LogConfiguration"));
    m_logConfiguration.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_playerGatewayModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerGatewayMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlayerGatewayModeMapper::GetNameForPlayerGatewayMode(m_playerGatewayMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateContainerFleetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
