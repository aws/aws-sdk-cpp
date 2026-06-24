/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/CreateMicrovmAuthTokenRequest.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMicrovmAuthTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_expirationInMinutesHasBeenSet) {
    payload.WithInteger("expirationInMinutes", m_expirationInMinutes);
  }

  if (m_allowedPortsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedPortsJsonList(m_allowedPorts.size());
    for (unsigned allowedPortsIndex = 0; allowedPortsIndex < allowedPortsJsonList.GetLength(); ++allowedPortsIndex) {
      allowedPortsJsonList[allowedPortsIndex].AsObject(m_allowedPorts[allowedPortsIndex].Jsonize());
    }
    payload.WithArray("allowedPorts", std::move(allowedPortsJsonList));
  }

  return payload.View().WriteReadable();
}
