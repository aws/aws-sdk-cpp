/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/query-compatible-json-rpc-10/model/QueryCompatibleOperationRequest.h>

#include <utility>

using namespace Aws::QueryCompatibleJSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String QueryCompatibleOperationRequest::SerializePayload() const { return "{}"; }

Aws::Http::HeaderValueCollection QueryCompatibleOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "QueryCompatibleJsonRpc10.QueryCompatibleOperation"));
  return headers;
}
