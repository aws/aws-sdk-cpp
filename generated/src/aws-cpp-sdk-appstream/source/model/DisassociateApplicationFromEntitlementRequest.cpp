/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DisassociateApplicationFromEntitlementRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DisassociateApplicationFromEntitlementRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_stackNameHasBeenSet) {
    mapSize++;
  }
  if (m_entitlementNameHasBeenSet) {
    mapSize++;
  }
  if (m_applicationIdentifierHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_stackNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StackName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stackName.c_str()));
  }

  if (m_entitlementNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntitlementName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_entitlementName.c_str()));
  }

  if (m_applicationIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApplicationIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationIdentifier.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DisassociateApplicationFromEntitlementRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
