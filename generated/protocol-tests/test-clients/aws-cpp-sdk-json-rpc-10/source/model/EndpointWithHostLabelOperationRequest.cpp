/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/model/EndpointWithHostLabelOperationRequest.h>

#include <utility>

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EndpointWithHostLabelOperationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EndpointWithHostLabelOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.EndpointWithHostLabelOperation"));
  return headers;
}
