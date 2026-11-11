/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminRevokeUserSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AdminRevokeUserSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("Username", m_username);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("SessionId", m_sessionId);
  }

  if (m_revokeAssociatedSessionsHasBeenSet) {
    payload.WithString("RevokeAssociatedSessions",
                       RevokeAssociatedSessionsTypeMapper::GetNameForRevokeAssociatedSessionsType(m_revokeAssociatedSessions));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminRevokeUserSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminRevokeUserSession"));
  return headers;
}
