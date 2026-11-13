/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/UpdateEndpointRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateEndpointRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_endpointArnHasBeenSet) {
    mapSize++;
  }
  if (m_desiredModelArnHasBeenSet) {
    mapSize++;
  }
  if (m_desiredInferenceUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_desiredDataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_flywheelArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_endpointArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndpointArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_endpointArn.c_str()));
  }

  if (m_desiredModelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredModelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_desiredModelArn.c_str()));
  }

  if (m_desiredInferenceUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredInferenceUnits"));
    (m_desiredInferenceUnits >= 0) ? encoder.WriteUInt(m_desiredInferenceUnits) : encoder.WriteNegInt(m_desiredInferenceUnits);
  }

  if (m_desiredDataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredDataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_desiredDataAccessRoleArn.c_str()));
  }

  if (m_flywheelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FlywheelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_flywheelArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateEndpointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
