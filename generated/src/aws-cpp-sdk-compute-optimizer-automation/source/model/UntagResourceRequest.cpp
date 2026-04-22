/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/UntagResourceRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UntagResourceRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceArnHasBeenSet) {
    mapSize++;
  }
  if (m_ruleRevisionHasBeenSet) {
    mapSize++;
  }
  if (m_tagKeysHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceArn.c_str()));
  }

  if (m_ruleRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ruleRevision"));
    (m_ruleRevision >= 0) ? encoder.WriteUInt(m_ruleRevision) : encoder.WriteNegInt(m_ruleRevision);
  }

  if (m_tagKeysHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tagKeys"));
    encoder.WriteArrayStart(m_tagKeys.size());
    for (const auto& item_0 : m_tagKeys) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UntagResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
