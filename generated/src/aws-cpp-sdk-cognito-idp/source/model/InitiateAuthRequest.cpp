/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/InitiateAuthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InitiateAuthRequest::InitiateAuthRequest() : 
    m_authFlow(AuthFlowType::NOT_SET),
    m_authFlowHasBeenSet(false),
    m_authParametersHasBeenSet(false),
    m_clientMetadataHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_analyticsMetadataHasBeenSet(false),
    m_userContextDataHasBeenSet(false)
{
}

Aws::String InitiateAuthRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authFlowHasBeenSet)
  {
   payload.WithString("AuthFlow", AuthFlowTypeMapper::GetNameForAuthFlowType(m_authFlow));
  }

  if(m_authParametersHasBeenSet)
  {
   JsonValue authParametersJsonMap;
   for(auto& authParametersItem : m_authParameters)
   {
     authParametersJsonMap.WithString(authParametersItem.first, authParametersItem.second);
   }
   payload.WithObject("AuthParameters", std::move(authParametersJsonMap));

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

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_analyticsMetadataHasBeenSet)
  {
   payload.WithObject("AnalyticsMetadata", m_analyticsMetadata.Jsonize());

  }

  if(m_userContextDataHasBeenSet)
  {
   payload.WithObject("UserContextData", m_userContextData.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InitiateAuthRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.InitiateAuth"));
  return headers;

}




