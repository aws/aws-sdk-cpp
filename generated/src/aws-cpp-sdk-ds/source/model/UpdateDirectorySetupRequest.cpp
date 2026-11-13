/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/UpdateDirectorySetupRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateDirectorySetupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_updateTypeHasBeenSet) {
    mapSize++;
  }
  if (m_oSUpdateSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_directorySizeUpdateSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_networkUpdateSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_createSnapshotBeforeUpdateHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_updateTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UpdateTypeMapper::GetNameForUpdateType(m_updateType).c_str()));
  }

  if (m_oSUpdateSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OSUpdateSettings"));
    m_oSUpdateSettings.CborEncode(encoder);
  }

  if (m_directorySizeUpdateSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectorySizeUpdateSettings"));
    m_directorySizeUpdateSettings.CborEncode(encoder);
  }

  if (m_networkUpdateSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkUpdateSettings"));
    m_networkUpdateSettings.CborEncode(encoder);
  }

  if (m_createSnapshotBeforeUpdateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreateSnapshotBeforeUpdate"));
    encoder.WriteBool(m_createSnapshotBeforeUpdate);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateDirectorySetupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
