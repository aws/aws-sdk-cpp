/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/model/OperationWithOptionalInputOutputRequest.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String OperationWithOptionalInputOutputRequest::SerializePayload() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection OperationWithOptionalInputOutputRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.OperationWithOptionalInputOutput"));
  return headers;
}
