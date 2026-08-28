/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DescribeTermsByClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeTermsByClientRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_userPoolIdHasBeenSet) {
    payload.WithString("UserPoolId", m_userPoolId);
  }

  if (m_termsNameHasBeenSet) {
    payload.WithString("TermsName", m_termsName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTermsByClientRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.DescribeTermsByClient"));
  return headers;
}
