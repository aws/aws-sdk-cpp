/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateLocationS3Request.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLocationS3Request::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_s3BucketArnHasBeenSet) {
    mapSize++;
  }
  if (m_s3StorageClassHasBeenSet) {
    mapSize++;
  }
  if (m_s3ConfigHasBeenSet) {
    mapSize++;
  }
  if (m_agentArnsHasBeenSet) {
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

  if (m_s3BucketArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3BucketArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_s3BucketArn.c_str()));
  }

  if (m_s3StorageClassHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3StorageClass"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(S3StorageClassMapper::GetNameForS3StorageClass(m_s3StorageClass).c_str()));
  }

  if (m_s3ConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3Config"));
    m_s3Config.CborEncode(encoder);
  }

  if (m_agentArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentArns"));
    encoder.WriteArrayStart(m_agentArns.size());
    for (const auto& item_0 : m_agentArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
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

Aws::Http::HeaderValueCollection CreateLocationS3Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
