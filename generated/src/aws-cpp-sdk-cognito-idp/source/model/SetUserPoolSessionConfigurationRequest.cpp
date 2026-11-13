/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUserPoolSessionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SetUserPoolSessionConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_userSessionTrackingHasBeenSet) {
    payload.WithString("UserSessionTracking", UserSessionTrackingTypeMapper::GetNameForUserSessionTrackingType(m_userSessionTracking));
  }

  if (m_tokenSessionHasBeenSet) {
    payload.WithObject("TokenSession", m_tokenSession.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetUserPoolSessionConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUserPoolSessionConfiguration"));
  return headers;
}
