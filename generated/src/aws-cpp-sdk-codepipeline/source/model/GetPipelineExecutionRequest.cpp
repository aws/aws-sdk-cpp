/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GetPipelineExecutionRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetPipelineExecutionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_pipelineNameHasBeenSet) {
    mapSize++;
  }
  if (m_pipelineExecutionIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_pipelineNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pipelineName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pipelineName.c_str()));
  }

  if (m_pipelineExecutionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pipelineExecutionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pipelineExecutionId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetPipelineExecutionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
