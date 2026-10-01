/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateBrandProfileRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBrandProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_brandProfileNameHasBeenSet) {
    payload.WithString("brandProfileName", m_brandProfileName);
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  return payload.View().WriteReadable();
}
