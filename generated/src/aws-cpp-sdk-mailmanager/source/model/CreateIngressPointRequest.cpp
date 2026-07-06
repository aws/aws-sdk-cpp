/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/CreateIngressPointRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateIngressPointRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_ingressPointNameHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_ruleSetIdHasBeenSet) {
    mapSize++;
  }
  if (m_trafficPolicyIdHasBeenSet) {
    mapSize++;
  }
  if (m_ingressPointConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_networkConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_tlsPolicyHasBeenSet) {
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

  if (m_ingressPointNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngressPointName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ingressPointName.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IngressPointTypeMapper::GetNameForIngressPointType(m_type).c_str()));
  }

  if (m_ruleSetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleSetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleSetId.c_str()));
  }

  if (m_trafficPolicyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrafficPolicyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trafficPolicyId.c_str()));
  }

  if (m_ingressPointConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngressPointConfiguration"));
    m_ingressPointConfiguration.CborEncode(encoder);
  }

  if (m_networkConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkConfiguration"));
    m_networkConfiguration.CborEncode(encoder);
  }

  if (m_tlsPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TlsPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy).c_str()));
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

Aws::Http::HeaderValueCollection CreateIngressPointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
