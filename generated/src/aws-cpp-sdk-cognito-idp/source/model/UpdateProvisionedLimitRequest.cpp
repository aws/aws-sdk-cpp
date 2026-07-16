/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateProvisionedLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProvisionedLimitRequest::SerializePayload() const {
  JsonValue payload;

  if (m_limitDefinitionHasBeenSet) {
    payload.WithObject("LimitDefinition", m_limitDefinition.Jsonize());
  }

  if (m_requestedLimitValueHasBeenSet) {
    payload.WithInteger("RequestedLimitValue", m_requestedLimitValue);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProvisionedLimitRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateProvisionedLimit"));
  return headers;
}
