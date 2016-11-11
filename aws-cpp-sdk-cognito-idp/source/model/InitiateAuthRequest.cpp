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
    m_clientIdHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection InitiateAuthRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.InitiateAuth"));
  return headers;

}



