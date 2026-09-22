/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/GetSpaceCredentialsForOrganizationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetSpaceCredentialsForOrganizationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_contextHasBeenSet) {
    mapSize++;
  }
  if (m_credentialTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_contextHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("context"));
    m_context.CborEncode(encoder);
  }

  if (m_credentialTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("credentialType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(OrganizationCredentialTypeMapper::GetNameForOrganizationCredentialType(m_credentialType).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetSpaceCredentialsForOrganizationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
