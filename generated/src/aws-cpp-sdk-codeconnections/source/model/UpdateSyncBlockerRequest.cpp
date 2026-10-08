/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/UpdateSyncBlockerRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateSyncBlockerRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_syncTypeHasBeenSet) {
    mapSize++;
  }
  if (m_resourceNameHasBeenSet) {
    mapSize++;
  }
  if (m_resolvedReasonHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Id"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_id.c_str()));
  }

  if (m_syncTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SyncType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType).c_str()));
  }

  if (m_resourceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceName.c_str()));
  }

  if (m_resolvedReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResolvedReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resolvedReason.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateSyncBlockerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
