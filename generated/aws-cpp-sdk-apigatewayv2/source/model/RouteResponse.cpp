/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RouteResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

RouteResponse::RouteResponse() : 
    m_modelSelectionExpressionHasBeenSet(false),
    m_responseModelsHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_routeResponseIdHasBeenSet(false),
    m_routeResponseKeyHasBeenSet(false)
{
}

RouteResponse::RouteResponse(JsonView jsonValue) : 
    m_modelSelectionExpressionHasBeenSet(false),
    m_responseModelsHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_routeResponseIdHasBeenSet(false),
    m_routeResponseKeyHasBeenSet(false)
{
  *this = jsonValue;
}

RouteResponse& RouteResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelSelectionExpression"))
  {
    m_modelSelectionExpression = jsonValue.GetString("modelSelectionExpression");

    m_modelSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseModels"))
  {
    Aws::Map<Aws::String, JsonView> responseModelsJsonMap = jsonValue.GetObject("responseModels").GetAllObjects();
    for(auto& responseModelsItem : responseModelsJsonMap)
    {
      m_responseModels[responseModelsItem.first] = responseModelsItem.second.AsString();
    }
    m_responseModelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsObject();
    }
    m_responseParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeResponseId"))
  {
    m_routeResponseId = jsonValue.GetString("routeResponseId");

    m_routeResponseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeResponseKey"))
  {
    m_routeResponseKey = jsonValue.GetString("routeResponseKey");

    m_routeResponseKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteResponse::Jsonize() const
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

  if(m_routeResponseIdHasBeenSet)
  {
   payload.WithString("routeResponseId", m_routeResponseId);

  }

  if(m_routeResponseKeyHasBeenSet)
  {
   payload.WithString("routeResponseKey", m_routeResponseKey);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
