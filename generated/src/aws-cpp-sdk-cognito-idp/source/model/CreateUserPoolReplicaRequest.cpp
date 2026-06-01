/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CreateUserPoolReplicaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateUserPoolReplicaRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_regionNameHasBeenSet) {
    payload.WithString("RegionName", m_regionName);
  }

  if (m_userPoolTagsHasBeenSet) {
    JsonValue userPoolTagsJsonMap;
    for (auto& userPoolTagsItem : m_userPoolTags) {
      userPoolTagsJsonMap.WithString(userPoolTagsItem.first, userPoolTagsItem.second);
    }
    payload.WithObject("UserPoolTags", std::move(userPoolTagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserPoolReplicaRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.CreateUserPoolReplica"));
  return headers;
}
