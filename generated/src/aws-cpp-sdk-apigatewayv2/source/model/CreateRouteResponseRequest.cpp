/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateRouteResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRouteResponseRequest::CreateRouteResponseRequest() : 
    m_apiIdHasBeenSet(false),
    m_modelSelectionExpressionHasBeenSet(false),
    m_responseModelsHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeResponseKeyHasBeenSet(false)
{
}

Aws::String CreateRouteResponseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelSelectionExpressionHasBeenSet)
  {
   payload.WithString("modelSelectionExpression", m_modelSelectionExpression);

  }

  if(m_responseModelsHasBeenSet)
  {
   JsonValue responseModelsJsonMap;
   for(auto& responseModelsItem : m_responseModels)
   {
     responseModelsJsonMap.WithString(responseModelsItem.first, responseModelsItem.second);
   }
   payload.WithObject("responseModels", std::move(responseModelsJsonMap));

  }

  if(m_responseParametersHasBeenSet)
  {
   JsonValue responseParametersJsonMap;
   for(auto& responseParametersItem : m_responseParameters)
   {
     responseParametersJsonMap.WithObject(responseParametersItem.first, responseParametersItem.second.Jsonize());
   }
   payload.WithObject("responseParameters", std::move(responseParametersJsonMap));

  }

  if(m_routeResponseKeyHasBeenSet)
  {
   payload.WithString("routeResponseKey", m_routeResponseKey);

  }

  return payload.View().WriteReadable();
}




