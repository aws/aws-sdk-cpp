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
#include <aws/apigateway/model/Integration.h>
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

Integration::Integration() : 
    m_type(IntegrationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestTemplatesHasBeenSet(false),
    m_passthroughBehaviorHasBeenSet(false),
    m_cacheNamespaceHasBeenSet(false),
    m_cacheKeyParametersHasBeenSet(false),
    m_integrationResponsesHasBeenSet(false)
{
}

Integration::Integration(const JsonValue& jsonValue) : 
    m_type(IntegrationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestTemplatesHasBeenSet(false),
    m_passthroughBehaviorHasBeenSet(false),
    m_cacheNamespaceHasBeenSet(false),
    m_cacheKeyParametersHasBeenSet(false),
    m_integrationResponsesHasBeenSet(false)
{
  *this = jsonValue;
}

Integration& Integration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetString("credentials");

    m_credentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonValue> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsString();
    }
    m_requestParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestTemplates"))
  {
    Aws::Map<Aws::String, JsonValue> requestTemplatesJsonMap = jsonValue.GetObject("requestTemplates").GetAllObjects();
    for(auto& requestTemplatesItem : requestTemplatesJsonMap)
    {
      m_requestTemplates[requestTemplatesItem.first] = requestTemplatesItem.second.AsString();
    }
    m_requestTemplatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passthroughBehavior"))
  {
    m_passthroughBehavior = jsonValue.GetString("passthroughBehavior");

    m_passthroughBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheNamespace"))
  {
    m_cacheNamespace = jsonValue.GetString("cacheNamespace");

    m_cacheNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheKeyParameters"))
  {
    Array<JsonValue> cacheKeyParametersJsonList = jsonValue.GetArray("cacheKeyParameters");
    for(unsigned cacheKeyParametersIndex = 0; cacheKeyParametersIndex < cacheKeyParametersJsonList.GetLength(); ++cacheKeyParametersIndex)
    {
      m_cacheKeyParameters.push_back(cacheKeyParametersJsonList[cacheKeyParametersIndex].AsString());
    }
    m_cacheKeyParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationResponses"))
  {
    Aws::Map<Aws::String, JsonValue> integrationResponsesJsonMap = jsonValue.GetObject("integrationResponses").GetAllObjects();
    for(auto& integrationResponsesItem : integrationResponsesJsonMap)
    {
      m_integrationResponses[integrationResponsesItem.first] = integrationResponsesItem.second.AsObject();
    }
    m_integrationResponsesHasBeenSet = true;
  }

  return *this;
}

JsonValue Integration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IntegrationTypeMapper::GetNameForIntegrationType(m_type));
  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", m_httpMethod);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithString("credentials", m_credentials);

  }

  if(m_requestParametersHasBeenSet)
  {
   JsonValue requestParametersJsonMap;
   for(auto& requestParametersItem : m_requestParameters)
   {
     requestParametersJsonMap.WithString(requestParametersItem.first, requestParametersItem.second);
   }
   payload.WithObject("requestParameters", std::move(requestParametersJsonMap));

  }

  if(m_requestTemplatesHasBeenSet)
  {
   JsonValue requestTemplatesJsonMap;
   for(auto& requestTemplatesItem : m_requestTemplates)
   {
     requestTemplatesJsonMap.WithString(requestTemplatesItem.first, requestTemplatesItem.second);
   }
   payload.WithObject("requestTemplates", std::move(requestTemplatesJsonMap));

  }

  if(m_passthroughBehaviorHasBeenSet)
  {
   payload.WithString("passthroughBehavior", m_passthroughBehavior);

  }

  if(m_cacheNamespaceHasBeenSet)
  {
   payload.WithString("cacheNamespace", m_cacheNamespace);

  }

  if(m_cacheKeyParametersHasBeenSet)
  {
   Array<JsonValue> cacheKeyParametersJsonList(m_cacheKeyParameters.size());
   for(unsigned cacheKeyParametersIndex = 0; cacheKeyParametersIndex < cacheKeyParametersJsonList.GetLength(); ++cacheKeyParametersIndex)
   {
     cacheKeyParametersJsonList[cacheKeyParametersIndex].AsString(m_cacheKeyParameters[cacheKeyParametersIndex]);
   }
   payload.WithArray("cacheKeyParameters", std::move(cacheKeyParametersJsonList));

  }

  if(m_integrationResponsesHasBeenSet)
  {
   JsonValue integrationResponsesJsonMap;
   for(auto& integrationResponsesItem : m_integrationResponses)
   {
     integrationResponsesJsonMap.WithObject(integrationResponsesItem.first, integrationResponsesItem.second.Jsonize());
   }
   payload.WithObject("integrationResponses", std::move(integrationResponsesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws