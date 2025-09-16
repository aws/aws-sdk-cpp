/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/RpcV2CborDenseMapsRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RpcV2CborDenseMapsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_denseStructMapHasBeenSet) {
    mapSize++;
  }
  if (m_denseNumberMapHasBeenSet) {
    mapSize++;
  }
  if (m_denseBooleanMapHasBeenSet) {
    mapSize++;
  }
  if (m_denseStringMapHasBeenSet) {
    mapSize++;
  }
  if (m_denseSetMapHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_denseStructMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("denseStructMap"));
    encoder.WriteMapStart(m_denseStructMap.size());
    for (const auto& item_0 : m_denseStructMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      item_0.second.CborEncode(encoder);
    }
  }

  if (m_denseNumberMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("denseNumberMap"));
    encoder.WriteMapStart(m_denseNumberMap.size());
    for (const auto& item_0 : m_denseNumberMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      (item_0.second >= 0) ? encoder.WriteUInt(item_0.second) : encoder.WriteNegInt(item_0.second);
    }
  }

  if (m_denseBooleanMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("denseBooleanMap"));
    encoder.WriteMapStart(m_denseBooleanMap.size());
    for (const auto& item_0 : m_denseBooleanMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteBool(item_0.second);
    }
  }

  if (m_denseStringMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("denseStringMap"));
    encoder.WriteMapStart(m_denseStringMap.size());
    for (const auto& item_0 : m_denseStringMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_denseSetMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("denseSetMap"));
    encoder.WriteMapStart(m_denseSetMap.size());
    for (const auto& item_0 : m_denseSetMap) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RpcV2CborDenseMapsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE));
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
