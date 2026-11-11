/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/CreateCustomActionTypeRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateCustomActionTypeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_categoryHasBeenSet) {
    mapSize++;
  }
  if (m_providerHasBeenSet) {
    mapSize++;
  }
  if (m_versionHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }
  if (m_configurationPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_inputArtifactDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_outputArtifactDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_categoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("category"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ActionCategoryMapper::GetNameForActionCategory(m_category).c_str()));
  }

  if (m_providerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("provider"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provider.c_str()));
  }

  if (m_versionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("version"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_version.c_str()));
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("settings"));
    m_settings.CborEncode(encoder);
  }

  if (m_configurationPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurationProperties"));
    encoder.WriteArrayStart(m_configurationProperties.size());
    for (const auto& item_0 : m_configurationProperties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_inputArtifactDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inputArtifactDetails"));
    m_inputArtifactDetails.CborEncode(encoder);
  }

  if (m_outputArtifactDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("outputArtifactDetails"));
    m_outputArtifactDetails.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateCustomActionTypeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
