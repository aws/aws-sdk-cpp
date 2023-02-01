/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Route.h>
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

Route::Route() : 
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
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

Route::Route(JsonView jsonValue) : 
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
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
  *this = jsonValue;
}

Route& Route::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

    m_apiGatewayManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");

    m_apiKeyRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizationScopes"))
  {
    Aws::Utils::Array<JsonView> authorizationScopesJsonList = jsonValue.GetArray("authorizationScopes");
    for(unsigned authorizationScopesIndex = 0; authorizationScopesIndex < authorizationScopesJsonList.GetLength(); ++authorizationScopesIndex)
    {
      m_authorizationScopes.push_back(authorizationScopesJsonList[authorizationScopesIndex].AsString());
    }
    m_authorizationScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = AuthorizationTypeMapper::GetAuthorizationTypeForName(jsonValue.GetString("authorizationType"));

    m_authorizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");

    m_authorizerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelSelectionExpression"))
  {
    m_modelSelectionExpression = jsonValue.GetString("modelSelectionExpression");

    m_modelSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationName"))
  {
    m_operationName = jsonValue.GetString("operationName");

    m_operationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestModels"))
  {
    Aws::Map<Aws::String, JsonView> requestModelsJsonMap = jsonValue.GetObject("requestModels").GetAllObjects();
    for(auto& requestModelsItem : requestModelsJsonMap)
    {
      m_requestModels[requestModelsItem.first] = requestModelsItem.second.AsString();
    }
    m_requestModelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsObject();
    }
    m_requestParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeId"))
  {
    m_routeId = jsonValue.GetString("routeId");

    m_routeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeKey"))
  {
    m_routeKey = jsonValue.GetString("routeKey");

    m_routeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeResponseSelectionExpression"))
  {
    m_routeResponseSelectionExpression = jsonValue.GetString("routeResponseSelectionExpression");

    m_routeResponseSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue Route::Jsonize() const
{
  JsonValue payload;

  if(m_apiGatewayManagedHasBeenSet)
  {
   payload.WithBool("apiGatewayManaged", m_apiGatewayManaged);

  }

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

  if(m_routeIdHasBeenSet)
  {
   payload.WithString("routeId", m_routeId);

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

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
