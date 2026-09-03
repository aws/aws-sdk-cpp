/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/PutAccountSettingsRequest.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountSettingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_settingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> settingsJsonList(m_settings.size());
    for (unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex) {
      settingsJsonList[settingsIndex].AsObject(m_settings[settingsIndex].Jsonize());
    }
    payload.WithArray("settings", std::move(settingsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAccountSettingsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.PutAccountSettings"));
  return headers;
}
