/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApiRequest::UpdateApiRequest() : 
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_corsConfigurationHasBeenSet(false),
    m_credentialsArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableSchemaValidation(false),
    m_disableSchemaValidationHasBeenSet(false),
    m_disableExecuteApiEndpoint(false),
    m_disableExecuteApiEndpointHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_routeKeyHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String UpdateApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiKeySelectionExpressionHasBeenSet)
  {
   payload.WithString("apiKeySelectionExpression", m_apiKeySelectionExpression);

  }

  if(m_corsConfigurationHasBeenSet)
  {
   payload.WithObject("corsConfiguration", m_corsConfiguration.Jsonize());

  }

  if(m_credentialsArnHasBeenSet)
  {
   payload.WithString("credentialsArn", m_credentialsArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_disableSchemaValidationHasBeenSet)
  {
   payload.WithBool("disableSchemaValidation", m_disableSchemaValidation);

  }

  if(m_disableExecuteApiEndpointHasBeenSet)
  {
   payload.WithBool("disableExecuteApiEndpoint", m_disableExecuteApiEndpoint);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_routeKeyHasBeenSet)
  {
   payload.WithString("routeKey", m_routeKey);

  }

  if(m_routeSelectionExpressionHasBeenSet)
  {
   payload.WithString("routeSelectionExpression", m_routeSelectionExpression);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload.View().WriteReadable();
}




