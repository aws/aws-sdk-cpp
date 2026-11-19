/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateClientMetadataURLStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClientMetadataURLStateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_cIMDPolicyIdHasBeenSet) {
    payload.WithString("CIMDPolicyId", m_cIMDPolicyId);
  }

  if (m_uRLHasBeenSet) {
    payload.WithString("URL", m_uRL);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", CIMDCacheActionTypeMapper::GetNameForCIMDCacheActionType(m_action));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClientMetadataURLStateRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateClientMetadataURLState"));
  return headers;
}
