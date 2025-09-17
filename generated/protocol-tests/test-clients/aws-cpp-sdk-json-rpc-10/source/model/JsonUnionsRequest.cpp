/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>

#include <utility>

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonUnionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_contentsHasBeenSet) {
    payload.WithObject("contents", m_contents.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonUnionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.JsonUnions"));
  return headers;
}
