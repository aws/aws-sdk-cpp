/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateAgentRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateAgentRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_activationKeyHasBeenSet) {
    mapSize++;
  }
  if (m_agentNameHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_vpcEndpointIdHasBeenSet) {
    mapSize++;
  }
  if (m_subnetArnsHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupArnsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_activationKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActivationKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_activationKey.c_str()));
  }

  if (m_agentNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agentName.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_vpcEndpointIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcEndpointId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vpcEndpointId.c_str()));
  }

  if (m_subnetArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetArns"));
    encoder.WriteArrayStart(m_subnetArns.size());
    for (const auto& item_0 : m_subnetArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_securityGroupArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroupArns"));
    encoder.WriteArrayStart(m_securityGroupArns.size());
    for (const auto& item_0 : m_securityGroupArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateAgentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
