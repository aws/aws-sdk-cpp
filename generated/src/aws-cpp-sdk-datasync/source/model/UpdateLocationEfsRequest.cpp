/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/UpdateLocationEfsRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateLocationEfsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_locationArnHasBeenSet) {
    mapSize++;
  }
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_accessPointArnHasBeenSet) {
    mapSize++;
  }
  if (m_fileSystemAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_inTransitEncryptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_locationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LocationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_locationArn.c_str()));
  }

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
  }

  if (m_accessPointArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessPointArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accessPointArn.c_str()));
  }

  if (m_fileSystemAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FileSystemAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fileSystemAccessRoleArn.c_str()));
  }

  if (m_inTransitEncryptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InTransitEncryption"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(EfsInTransitEncryptionMapper::GetNameForEfsInTransitEncryption(m_inTransitEncryption).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateLocationEfsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
