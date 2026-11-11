/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateLocationNfsRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLocationNfsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_serverHostnameHasBeenSet) {
    mapSize++;
  }
  if (m_onPremConfigHasBeenSet) {
    mapSize++;
  }
  if (m_mountOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
  }

  if (m_serverHostnameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerHostname"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serverHostname.c_str()));
  }

  if (m_onPremConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OnPremConfig"));
    m_onPremConfig.CborEncode(encoder);
  }

  if (m_mountOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MountOptions"));
    m_mountOptions.CborEncode(encoder);
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

Aws::Http::HeaderValueCollection CreateLocationNfsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
