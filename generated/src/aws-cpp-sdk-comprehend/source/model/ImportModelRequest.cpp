/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ImportModelRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ImportModelRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sourceModelArnHasBeenSet) {
    mapSize++;
  }
  if (m_modelNameHasBeenSet) {
    mapSize++;
  }
  if (m_versionNameHasBeenSet) {
    mapSize++;
  }
  if (m_modelKmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourceModelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceModelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceModelArn.c_str()));
  }

  if (m_modelNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_modelName.c_str()));
  }

  if (m_versionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VersionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_versionName.c_str()));
  }

  if (m_modelKmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelKmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_modelKmsKeyId.c_str()));
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
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

Aws::Http::HeaderValueCollection ImportModelRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
