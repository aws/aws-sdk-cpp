/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/SparseNullsOperationRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String SparseNullsOperationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sparseStringListHasBeenSet) {
    mapSize++;
  }
  if (m_sparseStringMapHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sparseStringListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sparseStringList"));
    encoder.WriteArrayStart(m_sparseStringList.size());
    for (const auto& item_0 : m_sparseStringList) {
      if (!item_0.has_value()) {
        encoder.WriteNull();
      } else {
        const auto& sparseItem_0 = *item_0;
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(sparseItem_0.c_str()));
      }
    }
  }

  if (m_sparseStringMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sparseStringMap"));
    encoder.WriteMapStart(m_sparseStringMap.size());
    for (const auto& item_0 : m_sparseStringMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      if (!item_0.second.has_value()) {
        encoder.WriteNull();
      } else {
        const auto& sparseVal_0 = *item_0.second;
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(sparseVal_0.c_str()));
      }
    }
  }

  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection SparseNullsOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
