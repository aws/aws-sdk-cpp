/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/protocol-mock/model/SetNextResponseRequest.h>

#include <utility>

using namespace Aws::ProtocolMock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SetNextResponseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusCodeHasBeenSet) {
    payload.WithInteger("StatusCode", m_statusCode);
  }

  if (m_requestBodyHasBeenSet) {
    payload.WithString("body", m_requestBody);
  }

  if (m_headerValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> headersJsonList(m_headerValues.size());
    for (unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex) {
      headersJsonList[headersIndex].AsObject(m_headerValues[headersIndex].Jsonize());
    }
    payload.WithArray("headers", std::move(headersJsonList));
  }

  return payload.View().WriteReadable();
}
