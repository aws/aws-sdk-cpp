/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminLinkProviderForUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminLinkProviderForUserRequest::AdminLinkProviderForUserRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_destinationUserHasBeenSet(false),
    m_sourceUserHasBeenSet(false)
{
}

Aws::String AdminLinkProviderForUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_destinationUserHasBeenSet)
  {
   payload.WithObject("DestinationUser", m_destinationUser.Jsonize());

  }

  if(m_sourceUserHasBeenSet)
  {
   payload.WithObject("SourceUser", m_sourceUser.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminLinkProviderForUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminLinkProviderForUser"));
  return headers;

}




