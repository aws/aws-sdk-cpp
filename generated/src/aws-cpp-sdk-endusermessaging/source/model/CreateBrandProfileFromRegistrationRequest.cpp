/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/CreateBrandProfileFromRegistrationRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBrandProfileFromRegistrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registrationIdHasBeenSet) {
    payload.WithString("registrationId", m_registrationId);
  }

  if (m_brandProfileNameHasBeenSet) {
    payload.WithString("brandProfileName", m_brandProfileName);
  }

  if (m_smartMatchHasBeenSet) {
    payload.WithBool("smartMatch", m_smartMatch);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
