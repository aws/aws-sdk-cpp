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
#include <aws/cognito-identity/model/UnlinkIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnlinkIdentityRequest::UnlinkIdentityRequest() : 
    m_identityIdHasBeenSet(false),
    m_loginsHasBeenSet(false),
    m_loginsToRemoveHasBeenSet(false)
{
}

Aws::String UnlinkIdentityRequest::SerializePayload() const
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

  if(m_loginsToRemoveHasBeenSet)
  {
   Array<JsonValue> loginsToRemoveJsonList(m_loginsToRemove.size());
   for(unsigned loginsToRemoveIndex = 0; loginsToRemoveIndex < loginsToRemoveJsonList.GetLength(); ++loginsToRemoveIndex)
   {
     loginsToRemoveJsonList[loginsToRemoveIndex].AsString(m_loginsToRemove[loginsToRemoveIndex]);
   }
   payload.WithArray("LoginsToRemove", std::move(loginsToRemoveJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UnlinkIdentityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityService.UnlinkIdentity"));
  return headers;

}



