/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectEntitiesRequest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DetectEntitiesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_textHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_endpointArnHasBeenSet) {
    mapSize++;
  }
  if (m_bytesHasBeenSet) {
    mapSize++;
  }
  if (m_documentReaderConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_textHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Text"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_text.c_str()));
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(m_languageCode).c_str()));
  }

  if (m_endpointArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndpointArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_endpointArn.c_str()));
  }

  if (m_bytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Bytes"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_bytes.GetUnderlyingData(), m_bytes.GetLength()));
  }

  if (m_documentReaderConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DocumentReaderConfig"));
    m_documentReaderConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DetectEntitiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
