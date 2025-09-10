/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/Float16Request.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String Float16Request::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection Float16Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
