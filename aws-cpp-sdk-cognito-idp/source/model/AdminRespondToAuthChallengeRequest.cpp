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
#include <aws/cognito-idp/model/AdminRespondToAuthChallengeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_challengeName(ChallengeNameType::NOT_SET),
    m_challengeNameHasBeenSet(false),
    m_challengeResponsesHasBeenSet(false),
    m_sessionHasBeenSet(false)
{
}

Aws::String AdminRespondToAuthChallengeRequest::SerializePayload() const
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

  if(m_challengeNameHasBeenSet)
  {
   payload.WithString("ChallengeName", ChallengeNameTypeMapper::GetNameForChallengeNameType(m_challengeName));
  }

  if(m_challengeResponsesHasBeenSet)
  {
   JsonValue challengeResponsesJsonMap;
   for(auto& challengeResponsesItem : m_challengeResponses)
   {
     challengeResponsesJsonMap.WithString(challengeResponsesItem.first, challengeResponsesItem.second);
   }
   payload.WithObject("ChallengeResponses", std::move(challengeResponsesJsonMap));

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithString("Session", m_session);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AdminRespondToAuthChallengeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminRespondToAuthChallenge"));
  return headers;

}



