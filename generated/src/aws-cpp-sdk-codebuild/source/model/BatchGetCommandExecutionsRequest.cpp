/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetCommandExecutionsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String BatchGetCommandExecutionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sandboxIdHasBeenSet) {
    mapSize++;
  }
  if (m_commandExecutionIdsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sandboxIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sandboxId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sandboxId.c_str()));
  }

  if (m_commandExecutionIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("commandExecutionIds"));
    encoder.WriteArrayStart(m_commandExecutionIds.size());
    for (const auto& item_0 : m_commandExecutionIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection BatchGetCommandExecutionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
