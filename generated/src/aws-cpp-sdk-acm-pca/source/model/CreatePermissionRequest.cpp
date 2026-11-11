/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CreatePermissionRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreatePermissionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_certificateAuthorityArnHasBeenSet) {
    mapSize++;
  }
  if (m_principalHasBeenSet) {
    mapSize++;
  }
  if (m_sourceAccountHasBeenSet) {
    mapSize++;
  }
  if (m_actionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_certificateAuthorityArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthorityArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_certificateAuthorityArn.c_str()));
  }

  if (m_principalHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Principal"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_principal.c_str()));
  }

  if (m_sourceAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceAccount.c_str()));
  }

  if (m_actionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Actions"));
    encoder.WriteArrayStart(m_actions.size());
    for (const auto& item_0 : m_actions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ActionTypeMapper::GetNameForActionType(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreatePermissionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
