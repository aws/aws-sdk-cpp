/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/InitiatePointInTimeRecoveryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InitiatePointInTimeRecoveryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_restoreTimestampHasBeenSet) {
    payload.WithDouble("RestoreTimestamp", m_restoreTimestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InitiatePointInTimeRecoveryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.InitiatePointInTimeRecovery"));
  return headers;
}
