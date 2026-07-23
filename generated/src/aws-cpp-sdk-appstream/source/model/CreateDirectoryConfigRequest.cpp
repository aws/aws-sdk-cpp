/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateDirectoryConfigRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateDirectoryConfigRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryNameHasBeenSet) {
    mapSize++;
  }
  if (m_organizationalUnitDistinguishedNamesHasBeenSet) {
    mapSize++;
  }
  if (m_serviceAccountCredentialsHasBeenSet) {
    mapSize++;
  }
  if (m_certificateBasedAuthPropertiesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryName.c_str()));
  }

  if (m_organizationalUnitDistinguishedNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OrganizationalUnitDistinguishedNames"));
    encoder.WriteArrayStart(m_organizationalUnitDistinguishedNames.size());
    for (const auto& item_0 : m_organizationalUnitDistinguishedNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_serviceAccountCredentialsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceAccountCredentials"));
    m_serviceAccountCredentials.CborEncode(encoder);
  }

  if (m_certificateBasedAuthPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateBasedAuthProperties"));
    m_certificateBasedAuthProperties.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateDirectoryConfigRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
