/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/CreateComputerRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateComputerRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_computerNameHasBeenSet) {
    mapSize++;
  }
  if (m_passwordHasBeenSet) {
    mapSize++;
  }
  if (m_organizationalUnitDistinguishedNameHasBeenSet) {
    mapSize++;
  }
  if (m_computerAttributesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_computerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_computerName.c_str()));
  }

  if (m_passwordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Password"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_password.c_str()));
  }

  if (m_organizationalUnitDistinguishedNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OrganizationalUnitDistinguishedName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_organizationalUnitDistinguishedName.c_str()));
  }

  if (m_computerAttributesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputerAttributes"));
    encoder.WriteArrayStart(m_computerAttributes.size());
    for (const auto& item_0 : m_computerAttributes) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateComputerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
