/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StartPipelineExecutionRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartPipelineExecutionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_variablesHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_sourceRevisionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_variablesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("variables"));
    encoder.WriteArrayStart(m_variables.size());
    for (const auto& item_0 : m_variables) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_sourceRevisionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceRevisions"));
    encoder.WriteArrayStart(m_sourceRevisions.size());
    for (const auto& item_0 : m_sourceRevisions) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartPipelineExecutionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
