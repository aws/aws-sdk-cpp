/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartSandboxRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartSandboxRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_projectNameHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_projectNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectName.c_str()));
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("idempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartSandboxRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
