/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String BatchGetApplicationRevisionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_revisionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_applicationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("applicationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationName.c_str()));
  }

  if (m_revisionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("revisions"));
    encoder.WriteArrayStart(m_revisions.size());
    for (const auto& item_0 : m_revisions) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection BatchGetApplicationRevisionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
