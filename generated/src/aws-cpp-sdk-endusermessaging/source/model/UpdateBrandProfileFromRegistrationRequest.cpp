/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateBrandProfileFromRegistrationRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBrandProfileFromRegistrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registrationIdHasBeenSet) {
    payload.WithString("registrationId", m_registrationId);
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
