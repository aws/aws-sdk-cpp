/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/CreateEntityRecognizerRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateEntityRecognizerRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_recognizerNameHasBeenSet) {
    mapSize++;
  }
  if (m_versionNameHasBeenSet) {
    mapSize++;
  }
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_inputDataConfigHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_volumeKmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_vpcConfigHasBeenSet) {
    mapSize++;
  }
  if (m_modelKmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_modelPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_recognizerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RecognizerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_recognizerName.c_str()));
  }

  if (m_versionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VersionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_versionName.c_str()));
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

  if (m_inputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputDataConfig"));
    m_inputDataConfig.CborEncode(encoder);
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(m_languageCode).c_str()));
  }

  if (m_volumeKmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeKmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_volumeKmsKeyId.c_str()));
  }

  if (m_vpcConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcConfig"));
    m_vpcConfig.CborEncode(encoder);
  }

  if (m_modelKmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelKmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_modelKmsKeyId.c_str()));
  }

  if (m_modelPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_modelPolicy.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateEntityRecognizerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
