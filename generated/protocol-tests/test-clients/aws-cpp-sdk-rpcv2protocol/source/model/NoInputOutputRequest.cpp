/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/NoInputOutputRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String NoInputOutputRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection NoInputOutputRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace("smithy-protocol", "rpc-v2-cbor");
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
