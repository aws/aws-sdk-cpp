/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/UpdateMonitorSettingsRequest.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMonitorSettingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_settingsHasBeenSet) {
    JsonValue settingsJsonMap;
    for (auto& settingsItem : m_settings) {
      settingsJsonMap.WithString(settingsItem.first, settingsItem.second);
    }
    payload.WithObject("settings", std::move(settingsJsonMap));
  }

  return payload.View().WriteReadable();
}
