/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGroupRequest::UpdateGroupRequest() : 
    m_groupNameHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_precedence(0),
    m_precedenceHasBeenSet(false)
{
}

Aws::String UpdateGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_precedenceHasBeenSet)
  {
   payload.WithInteger("Precedence", m_precedence);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateGroup"));
  return headers;

}




