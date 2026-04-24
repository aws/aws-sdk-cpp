/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/UpdateGameSessionRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateGameSessionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gameSessionIdHasBeenSet) {
    mapSize++;
  }
  if (m_maximumPlayerSessionCountHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_playerSessionCreationPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_protectionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_gamePropertiesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gameSessionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionId.c_str()));
  }

  if (m_maximumPlayerSessionCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaximumPlayerSessionCount"));
    (m_maximumPlayerSessionCount >= 0) ? encoder.WriteUInt(m_maximumPlayerSessionCount) : encoder.WriteNegInt(m_maximumPlayerSessionCount);
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_playerSessionCreationPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerSessionCreationPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        PlayerSessionCreationPolicyMapper::GetNameForPlayerSessionCreationPolicy(m_playerSessionCreationPolicy).c_str()));
  }

  if (m_protectionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProtectionPolicyMapper::GetNameForProtectionPolicy(m_protectionPolicy).c_str()));
  }

  if (m_gamePropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameProperties"));
    encoder.WriteArrayStart(m_gameProperties.size());
    for (const auto& item_0 : m_gameProperties) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateGameSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
