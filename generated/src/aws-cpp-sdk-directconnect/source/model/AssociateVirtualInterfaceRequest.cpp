/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AssociateVirtualInterfaceRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_virtualInterfaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_connectionIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_virtualInterfaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceId.c_str()));
  }

  if (m_connectionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AssociateVirtualInterfaceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
