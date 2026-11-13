/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUserPoolClientSessionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SetUserPoolClientSessionConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_sSOSessionHasBeenSet) {
    payload.WithObject("SSOSession", m_sSOSession.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetUserPoolClientSessionConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUserPoolClientSessionConfiguration"));
  return headers;
}
