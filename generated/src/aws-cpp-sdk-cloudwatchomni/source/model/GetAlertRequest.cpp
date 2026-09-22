/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/GetAlertRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetAlertRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_spaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_alertIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_spaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("spaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_spaceId.c_str()));
  }

  if (m_alertIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("alertId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alertId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetAlertRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
