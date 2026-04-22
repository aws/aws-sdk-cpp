/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateGameServerGroupRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateGameServerGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gameServerGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_roleArnHasBeenSet) {
    mapSize++;
  }
  if (m_minSizeHasBeenSet) {
    mapSize++;
  }
  if (m_maxSizeHasBeenSet) {
    mapSize++;
  }
  if (m_launchTemplateHasBeenSet) {
    mapSize++;
  }
  if (m_instanceDefinitionsHasBeenSet) {
    mapSize++;
  }
  if (m_autoScalingPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_balancingStrategyHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerProtectionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_vpcSubnetsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gameServerGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerGroupName.c_str()));
  }

  if (m_roleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleArn.c_str()));
  }

  if (m_minSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MinSize"));
    (m_minSize >= 0) ? encoder.WriteUInt(m_minSize) : encoder.WriteNegInt(m_minSize);
  }

  if (m_maxSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxSize"));
    (m_maxSize >= 0) ? encoder.WriteUInt(m_maxSize) : encoder.WriteNegInt(m_maxSize);
  }

  if (m_launchTemplateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LaunchTemplate"));
    m_launchTemplate.CborEncode(encoder);
  }

  if (m_instanceDefinitionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceDefinitions"));
    encoder.WriteArrayStart(m_instanceDefinitions.size());
    for (const auto& item_0 : m_instanceDefinitions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_autoScalingPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoScalingPolicy"));
    m_autoScalingPolicy.CborEncode(encoder);
  }

  if (m_balancingStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BalancingStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BalancingStrategyMapper::GetNameForBalancingStrategy(m_balancingStrategy).c_str()));
  }

  if (m_gameServerProtectionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerProtectionPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        GameServerProtectionPolicyMapper::GetNameForGameServerProtectionPolicy(m_gameServerProtectionPolicy).c_str()));
  }

  if (m_vpcSubnetsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcSubnets"));
    encoder.WriteArrayStart(m_vpcSubnets.size());
    for (const auto& item_0 : m_vpcSubnets) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateGameServerGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
