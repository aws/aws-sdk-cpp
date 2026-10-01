/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateRegistrationsFromBrandProfileRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRegistrationsFromBrandProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registrationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> registrationIdsJsonList(m_registrationIds.size());
    for (unsigned registrationIdsIndex = 0; registrationIdsIndex < registrationIdsJsonList.GetLength(); ++registrationIdsIndex) {
      registrationIdsJsonList[registrationIdsIndex].AsString(m_registrationIds[registrationIdsIndex]);
    }
    payload.WithArray("registrationIds", std::move(registrationIdsJsonList));
  }

  if (m_smartMatchHasBeenSet) {
    payload.WithBool("smartMatch", m_smartMatch);
  }

  if (m_onAttributeConflictHasBeenSet) {
    payload.WithString("onAttributeConflict", OnAttributeConflictMapper::GetNameForOnAttributeConflict(m_onAttributeConflict));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
