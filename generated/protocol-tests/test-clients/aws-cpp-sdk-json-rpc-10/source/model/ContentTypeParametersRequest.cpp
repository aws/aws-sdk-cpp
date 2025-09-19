/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-rpc-10/model/ContentTypeParametersRequest.h>

#include <utility>

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ContentTypeParametersRequest::SerializePayload() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithInteger("value", m_value);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ContentTypeParametersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.ContentTypeParameters"));
  return headers;
}
