/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateCIMDPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCIMDPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_cIMDPolicyIdHasBeenSet) {
    payload.WithString("CIMDPolicyId", m_cIMDPolicyId);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("PolicyName", m_policyName);
  }

  if (m_cacheDurationHasBeenSet) {
    payload.WithInteger("CacheDuration", m_cacheDuration);
  }

  if (m_uRLPatternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> uRLPatternsJsonList(m_uRLPatterns.size());
    for (unsigned uRLPatternsIndex = 0; uRLPatternsIndex < uRLPatternsJsonList.GetLength(); ++uRLPatternsIndex) {
      uRLPatternsJsonList[uRLPatternsIndex].AsString(m_uRLPatterns[uRLPatternsIndex]);
    }
    payload.WithArray("URLPatterns", std::move(uRLPatternsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCIMDPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateCIMDPolicy"));
  return headers;
}
