/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/GetComplianceDetailRequest.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetComplianceDetailRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_policyIdHasBeenSet) {
    mapSize++;
  }
  if (m_memberAccountHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_policyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyId.c_str()));
  }

  if (m_memberAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MemberAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_memberAccount.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetComplianceDetailRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
