/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/UpdateFleetAttributesRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateFleetAttributesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_newGameSessionProtectionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_resourceCreationLimitPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_metricGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_anywhereConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_newGameSessionProtectionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NewGameSessionProtectionPolicy"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProtectionPolicyMapper::GetNameForProtectionPolicy(m_newGameSessionProtectionPolicy).c_str()));
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

  if (m_anywhereConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AnywhereConfiguration"));
    m_anywhereConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateFleetAttributesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
