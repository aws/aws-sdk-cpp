/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/CreateOneTimeDeepLinkCodeRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateOneTimeDeepLinkCodeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_domainIdHasBeenSet) {
    mapSize++;
  }
  if (m_ttlSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_redirectUrlHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_domainIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("domainId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domainId.c_str()));
  }

  if (m_ttlSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ttlSeconds"));
    (m_ttlSeconds >= 0) ? encoder.WriteUInt(m_ttlSeconds) : encoder.WriteNegInt(m_ttlSeconds);
  }

  if (m_redirectUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("redirectUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_redirectUrl.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateOneTimeDeepLinkCodeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
