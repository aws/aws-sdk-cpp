/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/EmptyInputOutputRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String EmptyInputOutputRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;

  encoder.WriteMapStart(mapSize);

  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection EmptyInputOutputRequest::GetRequestSpecificHeaders() const {
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
