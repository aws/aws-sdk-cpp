/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateRouteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRouteRequest::UpdateRouteRequest() : 
    m_apiIdHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false),
    m_authorizationScopesHasBeenSet(false),
    m_authorizationType(AuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false),
    m_authorizerIdHasBeenSet(false),
    m_modelSelectionExpressionHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_requestModelsHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeKeyHasBeenSet(false),
    m_routeResponseSelectionExpressionHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String UpdateRouteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiKeyRequiredHasBeenSet)
  {
   payload.WithBool("apiKeyRequired", m_apiKeyRequired);

  }

  if(m_authorizationScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizationScopesJsonList(m_authorizationScopes.size());
   for(unsigned authorizationScopesIndex = 0; authorizationScopesIndex < authorizationScopesJsonList.GetLength(); ++authorizationScopesIndex)
   {
     authorizationScopesJsonList[authorizationScopesIndex].AsString(m_authorizationScopes[authorizationScopesIndex]);
   }
   payload.WithArray("authorizationScopes", std::move(authorizationScopesJsonList));

  }

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("authorizationType", AuthorizationTypeMapper::GetNameForAuthorizationType(m_authorizationType));
  }

  if(m_authorizerIdHasBeenSet)
  {
   payload.WithString("authorizerId", m_authorizerId);

  }

  if(m_modelSelectionExpressionHasBeenSet)
  {
   payload.WithString("modelSelectionExpression", m_modelSelectionExpression);

  }

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("operationName", m_operationName);

  }

  if(m_requestModelsHasBeenSet)
  {
   JsonValue requestModelsJsonMap;
   for(auto& requestModelsItem : m_requestModels)
   {
     requestModelsJsonMap.WithString(requestModelsItem.first, requestModelsItem.second);
   }
   payload.WithObject("requestModels", std::move(requestModelsJsonMap));

  }

  if(m_requestParametersHasBeenSet)
  {
   JsonValue requestParametersJsonMap;
   for(auto& requestParametersItem : m_requestParameters)
   {
     requestParametersJsonMap.WithObject(requestParametersItem.first, requestParametersItem.second.Jsonize());
   }
   payload.WithObject("requestParameters", std::move(requestParametersJsonMap));

  }

  if(m_routeKeyHasBeenSet)
  {
   payload.WithString("routeKey", m_routeKey);

  }

  if(m_routeResponseSelectionExpressionHasBeenSet)
  {
   payload.WithString("routeResponseSelectionExpression", m_routeResponseSelectionExpression);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  return payload.View().WriteReadable();
}




