/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CreateFleetRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateFleetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_baseCapacityHasBeenSet) {
    mapSize++;
  }
  if (m_environmentTypeHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_computeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_scalingConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_overflowBehaviorHasBeenSet) {
    mapSize++;
  }
  if (m_vpcConfigHasBeenSet) {
    mapSize++;
  }
  if (m_proxyConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_imageIdHasBeenSet) {
    mapSize++;
  }
  if (m_fleetServiceRoleHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_baseCapacityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("baseCapacity"));
    (m_baseCapacity >= 0) ? encoder.WriteUInt(m_baseCapacity) : encoder.WriteNegInt(m_baseCapacity);
  }

  if (m_environmentTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("environmentType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EnvironmentTypeMapper::GetNameForEnvironmentType(m_environmentType).c_str()));
  }

  if (m_computeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputeTypeMapper::GetNameForComputeType(m_computeType).c_str()));
  }

  if (m_computeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computeConfiguration"));
    m_computeConfiguration.CborEncode(encoder);
  }

  if (m_scalingConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scalingConfiguration"));
    m_scalingConfiguration.CborEncode(encoder);
  }

  if (m_overflowBehaviorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("overflowBehavior"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(FleetOverflowBehaviorMapper::GetNameForFleetOverflowBehavior(m_overflowBehavior).c_str()));
  }

  if (m_vpcConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("vpcConfig"));
    m_vpcConfig.CborEncode(encoder);
  }

  if (m_proxyConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("proxyConfiguration"));
    m_proxyConfiguration.CborEncode(encoder);
  }

  if (m_imageIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("imageId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageId.c_str()));
  }

  if (m_fleetServiceRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fleetServiceRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetServiceRole.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
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
