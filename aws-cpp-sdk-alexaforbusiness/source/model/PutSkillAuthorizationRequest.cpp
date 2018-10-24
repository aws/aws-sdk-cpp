/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/alexaforbusiness/model/PutSkillAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSkillAuthorizationRequest::PutSkillAuthorizationRequest() : 
    m_authorizationResultHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_roomArnHasBeenSet(false)
{
}

Aws::String PutSkillAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizationResultHasBeenSet)
  {
   JsonValue authorizationResultJsonMap;
   for(auto& authorizationResultItem : m_authorizationResult)
   {
     authorizationResultJsonMap.WithString(authorizationResultItem.first, authorizationResultItem.second);
   }
   payload.WithObject("AuthorizationResult", std::move(authorizationResultJsonMap));

  }

  if(m_skillIdHasBeenSet)
  {
   payload.WithString("SkillId", m_skillId);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSkillAuthorizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.PutSkillAuthorization"));
  return headers;

}




