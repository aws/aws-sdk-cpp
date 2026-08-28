/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetClientTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetClientTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_secretHasBeenSet) {
    payload.WithString("Secret", m_secret);
  }

  if (m_scopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
    }
    payload.WithArray("Scopes", std::move(scopesJsonList));
  }

  if (m_clientMetadataHasBeenSet) {
    JsonValue clientMetadataJsonMap;
    for (auto& clientMetadataItem : m_clientMetadata) {
      clientMetadataJsonMap.WithString(clientMetadataItem.first, clientMetadataItem.second);
    }
    payload.WithObject("ClientMetadata", std::move(clientMetadataJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetClientTokenRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.GetClientToken"));
  return headers;
}
