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
#include <aws/apigateway/model/CreateAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAuthorizerRequest::CreateAuthorizerRequest() : 
    m_restApiIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AuthorizerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_providerARNsHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_authorizerCredentialsHasBeenSet(false),
    m_identitySourceHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false),
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false)
{
}

Aws::String CreateAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AuthorizerTypeMapper::GetNameForAuthorizerType(m_type));
  }

  if(m_providerARNsHasBeenSet)
  {
   Array<JsonValue> providerARNsJsonList(m_providerARNs.size());
   for(unsigned providerARNsIndex = 0; providerARNsIndex < providerARNsJsonList.GetLength(); ++providerARNsIndex)
   {
     providerARNsJsonList[providerARNsIndex].AsString(m_providerARNs[providerARNsIndex]);
   }
   payload.WithArray("providerARNs", std::move(providerARNsJsonList));

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", m_authType);

  }

  if(m_authorizerUriHasBeenSet)
  {
   payload.WithString("authorizerUri", m_authorizerUri);

  }

  if(m_authorizerCredentialsHasBeenSet)
  {
   payload.WithString("authorizerCredentials", m_authorizerCredentials);

  }

  if(m_identitySourceHasBeenSet)
  {
   payload.WithString("identitySource", m_identitySource);

  }

  if(m_identityValidationExpressionHasBeenSet)
  {
   payload.WithString("identityValidationExpression", m_identityValidationExpression);

  }

  if(m_authorizerResultTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("authorizerResultTtlInSeconds", m_authorizerResultTtlInSeconds);

  }

  return payload.WriteReadable();
}



