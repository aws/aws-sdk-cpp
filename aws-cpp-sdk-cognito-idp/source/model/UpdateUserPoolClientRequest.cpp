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
#include <aws/cognito-idp/model/UpdateUserPoolClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserPoolClientRequest::UpdateUserPoolClientRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_refreshTokenValidity(0),
    m_refreshTokenValidityHasBeenSet(false),
    m_readAttributesHasBeenSet(false),
    m_writeAttributesHasBeenSet(false),
    m_explicitAuthFlowsHasBeenSet(false)
{
}

Aws::String UpdateUserPoolClientRequest::SerializePayload() const
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

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("ClientName", m_clientName);

  }

  if(m_refreshTokenValidityHasBeenSet)
  {
   payload.WithInteger("RefreshTokenValidity", m_refreshTokenValidity);

  }

  if(m_readAttributesHasBeenSet)
  {
   Array<JsonValue> readAttributesJsonList(m_readAttributes.size());
   for(unsigned readAttributesIndex = 0; readAttributesIndex < readAttributesJsonList.GetLength(); ++readAttributesIndex)
   {
     readAttributesJsonList[readAttributesIndex].AsString(m_readAttributes[readAttributesIndex]);
   }
   payload.WithArray("ReadAttributes", std::move(readAttributesJsonList));

  }

  if(m_writeAttributesHasBeenSet)
  {
   Array<JsonValue> writeAttributesJsonList(m_writeAttributes.size());
   for(unsigned writeAttributesIndex = 0; writeAttributesIndex < writeAttributesJsonList.GetLength(); ++writeAttributesIndex)
   {
     writeAttributesJsonList[writeAttributesIndex].AsString(m_writeAttributes[writeAttributesIndex]);
   }
   payload.WithArray("WriteAttributes", std::move(writeAttributesJsonList));

  }

  if(m_explicitAuthFlowsHasBeenSet)
  {
   Array<JsonValue> explicitAuthFlowsJsonList(m_explicitAuthFlows.size());
   for(unsigned explicitAuthFlowsIndex = 0; explicitAuthFlowsIndex < explicitAuthFlowsJsonList.GetLength(); ++explicitAuthFlowsIndex)
   {
     explicitAuthFlowsJsonList[explicitAuthFlowsIndex].AsString(ExplicitAuthFlowsTypeMapper::GetNameForExplicitAuthFlowsType(m_explicitAuthFlows[explicitAuthFlowsIndex]));
   }
   payload.WithArray("ExplicitAuthFlows", std::move(explicitAuthFlowsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserPoolClientRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateUserPoolClient"));
  return headers;

}



