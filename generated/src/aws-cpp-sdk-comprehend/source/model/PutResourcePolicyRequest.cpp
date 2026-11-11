/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PutResourcePolicyRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutResourcePolicyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceArnHasBeenSet) {
    mapSize++;
  }
  if (m_resourcePolicyHasBeenSet) {
    mapSize++;
  }
  if (m_policyRevisionIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceArn.c_str()));
  }

  if (m_resourcePolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourcePolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourcePolicy.c_str()));
  }

  if (m_policyRevisionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyRevisionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyRevisionId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
