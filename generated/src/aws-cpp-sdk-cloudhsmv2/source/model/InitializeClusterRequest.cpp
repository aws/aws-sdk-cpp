/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/InitializeClusterRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String InitializeClusterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clusterIdHasBeenSet) {
    mapSize++;
  }
  if (m_signedCertHasBeenSet) {
    mapSize++;
  }
  if (m_trustAnchorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_clusterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clusterId.c_str()));
  }

  if (m_signedCertHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SignedCert"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_signedCert.c_str()));
  }

  if (m_trustAnchorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustAnchor"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trustAnchor.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection InitializeClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
