﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizerCredentialsArnHasBeenSet)
  {
   payload.WithString("authorizerCredentialsArn", m_authorizerCredentialsArn);

  }

  if(m_authorizerPayloadFormatVersionHasBeenSet)
  {
   payload.WithString("authorizerPayloadFormatVersion", m_authorizerPayloadFormatVersion);

  }

  if(m_authorizerResultTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("authorizerResultTtlInSeconds", m_authorizerResultTtlInSeconds);

  }

  if(m_authorizerTypeHasBeenSet)
  {
   payload.WithString("authorizerType", AuthorizerTypeMapper::GetNameForAuthorizerType(m_authorizerType));
  }

  if(m_authorizerUriHasBeenSet)
  {
   payload.WithString("authorizerUri", m_authorizerUri);

  }

  if(m_enableSimpleResponsesHasBeenSet)
  {
   payload.WithBool("enableSimpleResponses", m_enableSimpleResponses);

  }

  if(m_identitySourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identitySourceJsonList(m_identitySource.size());
   for(unsigned identitySourceIndex = 0; identitySourceIndex < identitySourceJsonList.GetLength(); ++identitySourceIndex)
   {
     identitySourceJsonList[identitySourceIndex].AsString(m_identitySource[identitySourceIndex]);
   }
   payload.WithArray("identitySource", std::move(identitySourceJsonList));

  }

  if(m_identityValidationExpressionHasBeenSet)
  {
   payload.WithString("identityValidationExpression", m_identityValidationExpression);

  }

  if(m_jwtConfigurationHasBeenSet)
  {
   payload.WithObject("jwtConfiguration", m_jwtConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




