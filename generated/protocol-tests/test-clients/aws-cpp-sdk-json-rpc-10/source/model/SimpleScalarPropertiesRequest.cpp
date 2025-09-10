/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>

#include <utility>

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SimpleScalarPropertiesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_floatValueHasBeenSet) {
    payload.WithDouble("floatValue", m_floatValue);
  }

  if (m_doubleValueHasBeenSet) {
    payload.WithDouble("doubleValue", m_doubleValue);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SimpleScalarPropertiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.SimpleScalarProperties"));
  return headers;
}
