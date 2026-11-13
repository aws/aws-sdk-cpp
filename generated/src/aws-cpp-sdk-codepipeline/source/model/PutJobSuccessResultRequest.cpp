/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutJobSuccessResultRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutJobSuccessResultRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_jobIdHasBeenSet) {
    mapSize++;
  }
  if (m_currentRevisionHasBeenSet) {
    mapSize++;
  }
  if (m_continuationTokenHasBeenSet) {
    mapSize++;
  }
  if (m_executionDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_outputVariablesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_jobIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("jobId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_jobId.c_str()));
  }

  if (m_currentRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentRevision"));
    m_currentRevision.CborEncode(encoder);
  }

  if (m_continuationTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("continuationToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_continuationToken.c_str()));
  }

  if (m_executionDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("executionDetails"));
    m_executionDetails.CborEncode(encoder);
  }

  if (m_outputVariablesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("outputVariables"));
    encoder.WriteMapStart(m_outputVariables.size());
    for (const auto& item_0 : m_outputVariables) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutJobSuccessResultRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
