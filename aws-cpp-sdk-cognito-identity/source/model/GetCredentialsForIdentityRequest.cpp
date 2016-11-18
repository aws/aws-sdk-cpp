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
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCredentialsForIdentityRequest::GetCredentialsForIdentityRequest() : 
    m_identityIdHasBeenSet(false),
    m_loginsHasBeenSet(false),
    m_customRoleArnHasBeenSet(false)
{
}

Aws::String GetCredentialsForIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_loginsHasBeenSet)
  {
   JsonValue loginsJsonMap;
   for(auto& loginsItem : m_logins)
   {
     loginsJsonMap.WithString(loginsItem.first, loginsItem.second);
   }
   payload.WithObject("Logins", std::move(loginsJsonMap));

  }

  if(m_customRoleArnHasBeenSet)
  {
   payload.WithString("CustomRoleArn", m_customRoleArn);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetCredentialsForIdentityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityService.GetCredentialsForIdentity"));
  return headers;

}



