/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/CreateFlywheelRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateFlywheelRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_flywheelNameHasBeenSet) {
    mapSize++;
  }
  if (m_activeModelArnHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_taskConfigHasBeenSet) {
    mapSize++;
  }
  if (m_modelTypeHasBeenSet) {
    mapSize++;
  }
  if (m_dataLakeS3UriHasBeenSet) {
    mapSize++;
  }
  if (m_dataSecurityConfigHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_flywheelNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FlywheelName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_flywheelName.c_str()));
  }

  if (m_activeModelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActiveModelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_activeModelArn.c_str()));
  }

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
  }

  if (m_taskConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaskConfig"));
    m_taskConfig.CborEncode(encoder);
  }

  if (m_modelTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ModelTypeMapper::GetNameForModelType(m_modelType).c_str()));
  }

  if (m_dataLakeS3UriHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataLakeS3Uri"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataLakeS3Uri.c_str()));
  }

  if (m_dataSecurityConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataSecurityConfig"));
    m_dataSecurityConfig.CborEncode(encoder);
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
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

Aws::Http::HeaderValueCollection CreateFlywheelRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
