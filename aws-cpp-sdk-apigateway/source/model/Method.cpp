/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/Method.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

Method::Method() : 
    m_httpMethodHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false),
    m_authorizerIdHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false),
    m_requestValidatorIdHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestModelsHasBeenSet(false),
    m_methodResponsesHasBeenSet(false),
    m_methodIntegrationHasBeenSet(false),
    m_authorizationScopesHasBeenSet(false)
{
}

Method::Method(JsonView jsonValue) : 
    m_httpMethodHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false),
    m_authorizerIdHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false),
    m_requestValidatorIdHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestModelsHasBeenSet(false),
    m_methodResponsesHasBeenSet(false),
    m_methodIntegrationHasBeenSet(false),
    m_authorizationScopesHasBeenSet(false)
{
  *this = jsonValue;
}

Method& Method::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = jsonValue.GetString("authorizationType");

    m_authorizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");

    m_authorizerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");

    m_apiKeyRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestValidatorId"))
  {
    m_requestValidatorId = jsonValue.GetString("requestValidatorId");

    m_requestValidatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationName"))
  {
    m_operationName = jsonValue.GetString("operationName");

    m_operationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsBool();
    }
    m_requestParametersHasBeenSet = true;
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

  if(jsonValue.ValueExists("methodResponses"))
  {
    Aws::Map<Aws::String, JsonView> methodResponsesJsonMap = jsonValue.GetObject("methodResponses").GetAllObjects();
    for(auto& methodResponsesItem : methodResponsesJsonMap)
    {
      m_methodResponses[methodResponsesItem.first] = methodResponsesItem.second.AsObject();
    }
    m_methodResponsesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("methodIntegration"))
  {
    m_methodIntegration = jsonValue.GetObject("methodIntegration");

    m_methodIntegrationHasBeenSet = true;
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

  return *this;
}

JsonValue Method::Jsonize() const
{
  JsonValue payload;

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", m_httpMethod);

  }

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("authorizationType", m_authorizationType);

  }

  if(m_authorizerIdHasBeenSet)
  {
   payload.WithString("authorizerId", m_authorizerId);

  }

  if(m_apiKeyRequiredHasBeenSet)
  {
   payload.WithBool("apiKeyRequired", m_apiKeyRequired);

  }

  if(m_requestValidatorIdHasBeenSet)
  {
   payload.WithString("requestValidatorId", m_requestValidatorId);

  }

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("operationName", m_operationName);

  }

  if(m_requestParametersHasBeenSet)
  {
   JsonValue requestParametersJsonMap;
   for(auto& requestParametersItem : m_requestParameters)
   {
     requestParametersJsonMap.WithBool(requestParametersItem.first, requestParametersItem.second);
   }
   payload.WithObject("requestParameters", std::move(requestParametersJsonMap));

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

  if(m_methodResponsesHasBeenSet)
  {
   JsonValue methodResponsesJsonMap;
   for(auto& methodResponsesItem : m_methodResponses)
   {
     methodResponsesJsonMap.WithObject(methodResponsesItem.first, methodResponsesItem.second.Jsonize());
   }
   payload.WithObject("methodResponses", std::move(methodResponsesJsonMap));

  }

  if(m_methodIntegrationHasBeenSet)
  {
   payload.WithObject("methodIntegration", m_methodIntegration.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
