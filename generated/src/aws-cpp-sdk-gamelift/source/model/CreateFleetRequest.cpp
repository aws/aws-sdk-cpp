/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateFleetRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateFleetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_buildIdHasBeenSet) {
    mapSize++;
  }
  if (m_scriptIdHasBeenSet) {
    mapSize++;
  }
  if (m_serverLaunchPathHasBeenSet) {
    mapSize++;
  }
  if (m_serverLaunchParametersHasBeenSet) {
    mapSize++;
  }
  if (m_logPathsHasBeenSet) {
    mapSize++;
  }
  if (m_eC2InstanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_eC2InboundPermissionsHasBeenSet) {
    mapSize++;
  }
  if (m_newGameSessionProtectionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_runtimeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_resourceCreationLimitPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_metricGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_peerVpcAwsAccountIdHasBeenSet) {
    mapSize++;
  }
  if (m_peerVpcIdHasBeenSet) {
    mapSize++;
  }
  if (m_fleetTypeHasBeenSet) {
    mapSize++;
  }
  if (m_instanceRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_certificateConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_locationsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_anywhereConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_instanceRoleCredentialsProviderHasBeenSet) {
    mapSize++;
  }
  if (m_playerGatewayModeHasBeenSet) {
    mapSize++;
  }
  if (m_playerGatewayConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_buildIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BuildId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_buildId.c_str()));
  }

  if (m_scriptIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScriptId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_scriptId.c_str()));
  }

  if (m_serverLaunchPathHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerLaunchPath"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serverLaunchPath.c_str()));
  }

  if (m_serverLaunchParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerLaunchParameters"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serverLaunchParameters.c_str()));
  }

  if (m_logPathsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LogPaths"));
    encoder.WriteArrayStart(m_logPaths.size());
    for (const auto& item_0 : m_logPaths) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_eC2InstanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2InstanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_eC2InstanceType).c_str()));
  }

  if (m_eC2InboundPermissionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2InboundPermissions"));
    encoder.WriteArrayStart(m_eC2InboundPermissions.size());
    for (const auto& item_0 : m_eC2InboundPermissions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_newGameSessionProtectionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NewGameSessionProtectionPolicy"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProtectionPolicyMapper::GetNameForProtectionPolicy(m_newGameSessionProtectionPolicy).c_str()));
  }

  if (m_runtimeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuntimeConfiguration"));
    m_runtimeConfiguration.CborEncode(encoder);
  }

  if (m_resourceCreationLimitPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceCreationLimitPolicy"));
    m_resourceCreationLimitPolicy.CborEncode(encoder);
  }

  if (m_metricGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricGroups"));
    encoder.WriteArrayStart(m_metricGroups.size());
    for (const auto& item_0 : m_metricGroups) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_peerVpcAwsAccountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PeerVpcAwsAccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_peerVpcAwsAccountId.c_str()));
  }

  if (m_peerVpcIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PeerVpcId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_peerVpcId.c_str()));
  }

  if (m_fleetTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FleetTypeMapper::GetNameForFleetType(m_fleetType).c_str()));
  }

  if (m_instanceRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceRoleArn.c_str()));
  }

  if (m_certificateConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateConfiguration"));
    m_certificateConfiguration.CborEncode(encoder);
  }

  if (m_locationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Locations"));
    encoder.WriteArrayStart(m_locations.size());
    for (const auto& item_0 : m_locations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_computeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputeTypeMapper::GetNameForComputeType(m_computeType).c_str()));
  }

  if (m_anywhereConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AnywhereConfiguration"));
    m_anywhereConfiguration.CborEncode(encoder);
  }

  if (m_instanceRoleCredentialsProviderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceRoleCredentialsProvider"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        InstanceRoleCredentialsProviderMapper::GetNameForInstanceRoleCredentialsProvider(m_instanceRoleCredentialsProvider).c_str()));
  }

  if (m_playerGatewayModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerGatewayMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlayerGatewayModeMapper::GetNameForPlayerGatewayMode(m_playerGatewayMode).c_str()));
  }

  if (m_playerGatewayConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerGatewayConfiguration"));
    m_playerGatewayConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateFleetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
