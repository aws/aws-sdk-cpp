/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DescribeManagedLoginBrandingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeManagedLoginBrandingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_managedLoginBrandingIdHasBeenSet)
  {
   payload.WithString("ManagedLoginBrandingId", m_managedLoginBrandingId);

  }

  if(m_returnMergedResourcesHasBeenSet)
  {
   payload.WithBool("ReturnMergedResources", m_returnMergedResources);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeManagedLoginBrandingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.DescribeManagedLoginBranding"));
  return headers;

}




