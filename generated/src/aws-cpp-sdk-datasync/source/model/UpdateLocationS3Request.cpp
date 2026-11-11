/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/UpdateLocationS3Request.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateLocationS3Request::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_locationArnHasBeenSet) {
    mapSize++;
  }
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_s3StorageClassHasBeenSet) {
    mapSize++;
  }
  if (m_s3ConfigHasBeenSet) {
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

  if (m_s3StorageClassHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3StorageClass"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(S3StorageClassMapper::GetNameForS3StorageClass(m_s3StorageClass).c_str()));
  }

  if (m_s3ConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3Config"));
    m_s3Config.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateLocationS3Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
