/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateScriptRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateScriptRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_versionHasBeenSet) {
    mapSize++;
  }
  if (m_storageLocationHasBeenSet) {
    mapSize++;
  }
  if (m_zipFileHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_nodeJsVersionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_versionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Version"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_version.c_str()));
  }

  if (m_storageLocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StorageLocation"));
    m_storageLocation.CborEncode(encoder);
  }

  if (m_zipFileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ZipFile"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromCString(reinterpret_cast<const char*>(m_zipFile.GetUnderlyingData())));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_nodeJsVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NodeJsVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nodeJsVersion.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateScriptRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
