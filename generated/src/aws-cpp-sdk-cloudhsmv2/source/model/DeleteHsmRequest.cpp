/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/DeleteHsmRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteHsmRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clusterIdHasBeenSet) {
    mapSize++;
  }
  if (m_hsmIdHasBeenSet) {
    mapSize++;
  }
  if (m_eniIdHasBeenSet) {
    mapSize++;
  }
  if (m_eniIpHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_clusterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clusterId.c_str()));
  }

  if (m_hsmIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HsmId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_hsmId.c_str()));
  }

  if (m_eniIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EniId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_eniId.c_str()));
  }

  if (m_eniIpHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EniIp"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_eniIp.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteHsmRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
