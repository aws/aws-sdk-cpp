/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutActionRevisionRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutActionRevisionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_pipelineNameHasBeenSet) {
    mapSize++;
  }
  if (m_stageNameHasBeenSet) {
    mapSize++;
  }
  if (m_actionNameHasBeenSet) {
    mapSize++;
  }
  if (m_actionRevisionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_pipelineNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pipelineName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pipelineName.c_str()));
  }

  if (m_stageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stageName.c_str()));
  }

  if (m_actionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("actionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_actionName.c_str()));
  }

  if (m_actionRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("actionRevision"));
    m_actionRevision.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutActionRevisionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
