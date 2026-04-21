/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateFleetCapacityRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_desiredInstancesHasBeenSet) {
    mapSize++;
  }
  if (m_minSizeHasBeenSet) {
    mapSize++;
  }
  if (m_maxSizeHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_managedCapacityConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_desiredInstancesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredInstances"));
    (m_desiredInstances >= 0) ? encoder.WriteUInt(m_desiredInstances) : encoder.WriteNegInt(m_desiredInstances);
  }

  if (m_minSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MinSize"));
    (m_minSize >= 0) ? encoder.WriteUInt(m_minSize) : encoder.WriteNegInt(m_minSize);
  }

  if (m_maxSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxSize"));
    (m_maxSize >= 0) ? encoder.WriteUInt(m_maxSize) : encoder.WriteNegInt(m_maxSize);
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_managedCapacityConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManagedCapacityConfiguration"));
    m_managedCapacityConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateFleetCapacityRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
