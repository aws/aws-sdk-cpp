/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/CreateEndpointRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateEndpointRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_endpointNameHasBeenSet) {
    mapSize++;
  }
  if (m_modelArnHasBeenSet) {
    mapSize++;
  }
  if (m_desiredInferenceUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_flywheelArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_endpointNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndpointName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_endpointName.c_str()));
  }

  if (m_modelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_modelArn.c_str()));
  }

  if (m_desiredInferenceUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredInferenceUnits"));
    (m_desiredInferenceUnits >= 0) ? encoder.WriteUInt(m_desiredInferenceUnits) : encoder.WriteNegInt(m_desiredInferenceUnits);
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
  }

  if (m_flywheelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FlywheelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_flywheelArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateEndpointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
