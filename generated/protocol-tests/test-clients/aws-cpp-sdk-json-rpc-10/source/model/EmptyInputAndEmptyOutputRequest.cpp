/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/model/EmptyInputAndEmptyOutputRequest.h>

#include <utility>

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EmptyInputAndEmptyOutputRequest::SerializePayload() const { return "{}"; }

Aws::Http::HeaderValueCollection EmptyInputAndEmptyOutputRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.EmptyInputAndEmptyOutput"));
  return headers;
}
