/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/CreateTrafficPolicyRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateTrafficPolicyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_trafficPolicyNameHasBeenSet) {
    mapSize++;
  }
  if (m_policyStatementsHasBeenSet) {
    mapSize++;
  }
  if (m_defaultActionHasBeenSet) {
    mapSize++;
  }
  if (m_maxMessageSizeBytesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_trafficPolicyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrafficPolicyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trafficPolicyName.c_str()));
  }

  if (m_policyStatementsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyStatements"));
    encoder.WriteArrayStart(m_policyStatements.size());
    for (const auto& item_0 : m_policyStatements) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_defaultActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DefaultAction"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AcceptActionMapper::GetNameForAcceptAction(m_defaultAction).c_str()));
  }

  if (m_maxMessageSizeBytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxMessageSizeBytes"));
    (m_maxMessageSizeBytes >= 0) ? encoder.WriteUInt(m_maxMessageSizeBytes) : encoder.WriteNegInt(m_maxMessageSizeBytes);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateTrafficPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
