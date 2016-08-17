/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cognito-identity/model/SetIdentityPoolRolesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetIdentityPoolRolesRequest::SetIdentityPoolRolesRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

Aws::String SetIdentityPoolRolesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_rolesHasBeenSet)
  {
   JsonValue rolesJsonMap;
   for(auto& rolesItem : m_roles)
   {
     rolesJsonMap.WithString(rolesItem.first, rolesItem.second);
   }
   payload.WithObject("Roles", std::move(rolesJsonMap));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetIdentityPoolRolesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityService.SetIdentityPoolRoles"));
  return headers;

}



