/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/RpcV2CborSparseMapsRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RpcV2CborSparseMapsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sparseStructMapHasBeenSet) {
    mapSize++;
  }
  if (m_sparseNumberMapHasBeenSet) {
    mapSize++;
  }
  if (m_sparseBooleanMapHasBeenSet) {
    mapSize++;
  }
  if (m_sparseStringMapHasBeenSet) {
    mapSize++;
  }
  if (m_sparseSetMapHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sparseStructMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sparseStructMap"));
    encoder.WriteMapStart(m_sparseStructMap.size());
    for (const auto& item_0 : m_sparseStructMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      if (!item_0.second.has_value()) {
        encoder.WriteNull();
      } else {
        const auto& sparseVal_0 = *item_0.second;
        sparseVal_0.CborEncode(encoder);
      }
    }
  }

  if (m_sparseNumberMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sparseNumberMap"));
    encoder.WriteMapStart(m_sparseNumberMap.size());
    for (const auto& item_0 : m_sparseNumberMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      if (!item_0.second.has_value()) {
        encoder.WriteNull();
      } else {
        const auto& sparseVal_0 = *item_0.second;
        (sparseVal_0 >= 0) ? encoder.WriteUInt(sparseVal_0) : encoder.WriteNegInt(sparseVal_0);
      }
    }
  }

  if (m_sparseBooleanMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sparseBooleanMap"));
    encoder.WriteMapStart(m_sparseBooleanMap.size());
    for (const auto& item_0 : m_sparseBooleanMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      if (!item_0.second.has_value()) {
        encoder.WriteNull();
      } else {
        const auto& sparseVal_0 = *item_0.second;
        encoder.WriteBool(sparseVal_0);
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

  if (m_sparseSetMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sparseSetMap"));
    encoder.WriteMapStart(m_sparseSetMap.size());
    for (const auto& item_0 : m_sparseSetMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      if (!item_0.second.has_value()) {
        encoder.WriteNull();
      } else {
        const auto& sparseVal_0 = *item_0.second;
        encoder.WriteArrayStart(sparseVal_0.size());
        for (const auto& item_1 : sparseVal_0) {
          encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
        }
      }
    }
  }

  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RpcV2CborSparseMapsRequest::GetRequestSpecificHeaders() const {
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
