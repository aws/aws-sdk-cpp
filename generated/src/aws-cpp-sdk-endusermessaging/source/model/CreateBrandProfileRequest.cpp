/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/CreateBrandProfileRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBrandProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_brandProfileNameHasBeenSet) {
    payload.WithString("brandProfileName", m_brandProfileName);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
