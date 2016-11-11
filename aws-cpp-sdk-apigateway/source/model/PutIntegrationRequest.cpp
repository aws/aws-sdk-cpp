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
#include <aws/apigateway/model/PutIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutIntegrationRequest::PutIntegrationRequest() : 
    m_restApiIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_type(IntegrationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_integrationHttpMethodHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestTemplatesHasBeenSet(false),
    m_passthroughBehaviorHasBeenSet(false),
    m_cacheNamespaceHasBeenSet(false),
    m_cacheKeyParametersHasBeenSet(false)
{
}

Aws::String PutIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IntegrationTypeMapper::GetNameForIntegrationType(m_type));
  }

  if(m_integrationHttpMethodHasBeenSet)
  {
   payload.WithString("integrationHttpMethod", m_integrationHttpMethod);

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

  return payload.WriteReadable();
}



