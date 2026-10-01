/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/CreateRegistrationsFromBrandProfileRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRegistrationsFromBrandProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registrationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> registrationTypesJsonList(m_registrationTypes.size());
    for (unsigned registrationTypesIndex = 0; registrationTypesIndex < registrationTypesJsonList.GetLength(); ++registrationTypesIndex) {
      registrationTypesJsonList[registrationTypesIndex].AsString(m_registrationTypes[registrationTypesIndex]);
    }
    payload.WithArray("registrationTypes", std::move(registrationTypesJsonList));
  }

  if (m_smartMatchHasBeenSet) {
    payload.WithBool("smartMatch", m_smartMatch);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
