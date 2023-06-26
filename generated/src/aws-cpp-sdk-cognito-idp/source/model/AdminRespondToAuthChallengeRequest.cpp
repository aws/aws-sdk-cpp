/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_sessionHasBeenSet(false),
    m_analyticsMetadataHasBeenSet(false),
    m_contextDataHasBeenSet(false),
    m_clientMetadataHasBeenSet(false)
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

  if(m_analyticsMetadataHasBeenSet)
  {
   payload.WithObject("AnalyticsMetadata", m_analyticsMetadata.Jsonize());

  }

  if(m_contextDataHasBeenSet)
  {
   payload.WithObject("ContextData", m_contextData.Jsonize());

  }

  if(m_clientMetadataHasBeenSet)
  {
   JsonValue clientMetadataJsonMap;
   for(auto& clientMetadataItem : m_clientMetadata)
   {
     clientMetadataJsonMap.WithString(clientMetadataItem.first, clientMetadataItem.second);
   }
   payload.WithObject("ClientMetadata", std::move(clientMetadataJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AdminRespondToAuthChallengeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminRespondToAuthChallenge"));
  return headers;

}




