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
    m_requestParametersHasBeenSet(false),
    m_requestModelsHasBeenSet(false),
    m_methodResponsesHasBeenSet(false),
    m_methodIntegrationHasBeenSet(false)
{
}

Method::Method(const JsonValue& jsonValue) : 
    m_httpMethodHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false),
    m_authorizerIdHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestModelsHasBeenSet(false),
    m_methodResponsesHasBeenSet(false),
    m_methodIntegrationHasBeenSet(false)
{
  *this = jsonValue;
}

Method& Method::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonValue> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsBool();
    }
    m_requestParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestModels"))
  {
    Aws::Map<Aws::String, JsonValue> requestModelsJsonMap = jsonValue.GetObject("requestModels").GetAllObjects();
    for(auto& requestModelsItem : requestModelsJsonMap)
    {
      m_requestModels[requestModelsItem.first] = requestModelsItem.second.AsString();
    }
    m_requestModelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("methodResponses"))
  {
    Aws::Map<Aws::String, JsonValue> methodResponsesJsonMap = jsonValue.GetObject("methodResponses").GetAllObjects();
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

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws