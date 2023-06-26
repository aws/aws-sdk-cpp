/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUICustomizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetUICustomizationRequest::SetUICustomizationRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_cSSHasBeenSet(false),
    m_imageFileHasBeenSet(false)
{
}

Aws::String SetUICustomizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_cSSHasBeenSet)
  {
   payload.WithString("CSS", m_cSS);

  }

  if(m_imageFileHasBeenSet)
  {
   payload.WithString("ImageFile", HashingUtils::Base64Encode(m_imageFile));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetUICustomizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUICustomization"));
  return headers;

}




