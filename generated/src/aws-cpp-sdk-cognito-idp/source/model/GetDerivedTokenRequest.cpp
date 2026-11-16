/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetDerivedTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDerivedTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("ClientSecret", m_clientSecret);
  }

  if (m_subjectTokenHasBeenSet) {
    payload.WithString("SubjectToken", m_subjectToken);
  }

  if (m_subjectTokenTypeHasBeenSet) {
    payload.WithString("SubjectTokenType", TokenTypeIdentifierTypeMapper::GetNameForTokenTypeIdentifierType(m_subjectTokenType));
  }

  if (m_subjectTokenProviderNameHasBeenSet) {
    payload.WithString("SubjectTokenProviderName", m_subjectTokenProviderName);
  }

  if (m_actorTokenHasBeenSet) {
    payload.WithString("ActorToken", m_actorToken);
  }

  if (m_actorTokenTypeHasBeenSet) {
    payload.WithString("ActorTokenType", TokenTypeIdentifierTypeMapper::GetNameForTokenTypeIdentifierType(m_actorTokenType));
  }

  if (m_actorTokenProviderNameHasBeenSet) {
    payload.WithString("ActorTokenProviderName", m_actorTokenProviderName);
  }

  if (m_scopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
    }
    payload.WithArray("Scopes", std::move(scopesJsonList));
  }

  if (m_audiencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> audiencesJsonList(m_audiences.size());
    for (unsigned audiencesIndex = 0; audiencesIndex < audiencesJsonList.GetLength(); ++audiencesIndex) {
      audiencesJsonList[audiencesIndex].AsString(m_audiences[audiencesIndex]);
    }
    payload.WithArray("Audiences", std::move(audiencesJsonList));
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
    }
    payload.WithArray("Resources", std::move(resourcesJsonList));
  }

  if (m_requestedTokenTypeHasBeenSet) {
    payload.WithString("RequestedTokenType",
                       IssuedTokenTypeIdentifierTypeMapper::GetNameForIssuedTokenTypeIdentifierType(m_requestedTokenType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDerivedTokenRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.GetDerivedToken"));
  return headers;
}
