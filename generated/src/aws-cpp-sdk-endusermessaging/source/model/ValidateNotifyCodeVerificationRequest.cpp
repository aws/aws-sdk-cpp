/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/ValidateNotifyCodeVerificationRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ValidateNotifyCodeVerificationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_destinationIdentityHasBeenSet) {
    payload.WithString("destinationIdentity", m_destinationIdentity);
  }

  if (m_referenceIdHasBeenSet) {
    payload.WithString("referenceId", m_referenceId);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  return payload.View().WriteReadable();
}
