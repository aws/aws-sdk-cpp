/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/DeleteContainerGroupDefinitionRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteContainerGroupDefinitionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_versionNumberHasBeenSet) {
    mapSize++;
  }
  if (m_versionCountToRetainHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_versionNumberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VersionNumber"));
    (m_versionNumber >= 0) ? encoder.WriteUInt(m_versionNumber) : encoder.WriteNegInt(m_versionNumber);
  }

  if (m_versionCountToRetainHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VersionCountToRetain"));
    (m_versionCountToRetain >= 0) ? encoder.WriteUInt(m_versionCountToRetain) : encoder.WriteNegInt(m_versionCountToRetain);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteContainerGroupDefinitionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
