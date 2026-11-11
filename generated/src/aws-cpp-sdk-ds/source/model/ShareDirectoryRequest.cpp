/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/ShareDirectoryRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ShareDirectoryRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_shareNotesHasBeenSet) {
    mapSize++;
  }
  if (m_shareTargetHasBeenSet) {
    mapSize++;
  }
  if (m_shareMethodHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_shareNotesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareNotes"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_shareNotes.c_str()));
  }

  if (m_shareTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareTarget"));
    m_shareTarget.CborEncode(encoder);
  }

  if (m_shareMethodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareMethod"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ShareMethodMapper::GetNameForShareMethod(m_shareMethod).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ShareDirectoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
