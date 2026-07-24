/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateProblemRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProblemRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_problemIdHasBeenSet) {
    mapSize++;
  }
  if (m_updateStatusHasBeenSet) {
    mapSize++;
  }
  if (m_visibilityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_problemIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProblemId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_problemId.c_str()));
  }

  if (m_updateStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UpdateStatusMapper::GetNameForUpdateStatus(m_updateStatus).c_str()));
  }

  if (m_visibilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Visibility"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(VisibilityMapper::GetNameForVisibility(m_visibility).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProblemRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
