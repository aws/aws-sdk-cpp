/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/CreateConnectionRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateConnectionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_providerTypeHasBeenSet) {
    mapSize++;
  }
  if (m_connectionNameHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_hostArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_providerTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProviderType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProviderTypeMapper::GetNameForProviderType(m_providerType).c_str()));
  }

  if (m_connectionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionName.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_hostArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HostArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_hostArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateConnectionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
