/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestTemplatesHasBeenSet(false),
    m_passthroughBehaviorHasBeenSet(false),
    m_cacheNamespaceHasBeenSet(false),
    m_cacheKeyParametersHasBeenSet(false),
    m_contentHandling(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingHasBeenSet(false),
    m_timeoutInMillis(0),
    m_timeoutInMillisHasBeenSet(false),
    m_tlsConfigHasBeenSet(false)
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
   payload.WithString("httpMethod", m_integrationHttpMethod);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("connectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

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
   Aws::Utils::Array<JsonValue> cacheKeyParametersJsonList(m_cacheKeyParameters.size());
   for(unsigned cacheKeyParametersIndex = 0; cacheKeyParametersIndex < cacheKeyParametersJsonList.GetLength(); ++cacheKeyParametersIndex)
   {
     cacheKeyParametersJsonList[cacheKeyParametersIndex].AsString(m_cacheKeyParameters[cacheKeyParametersIndex]);
   }
   payload.WithArray("cacheKeyParameters", std::move(cacheKeyParametersJsonList));

  }

  if(m_contentHandlingHasBeenSet)
  {
   payload.WithString("contentHandling", ContentHandlingStrategyMapper::GetNameForContentHandlingStrategy(m_contentHandling));
  }

  if(m_timeoutInMillisHasBeenSet)
  {
   payload.WithInteger("timeoutInMillis", m_timeoutInMillis);

  }

  if(m_tlsConfigHasBeenSet)
  {
   payload.WithObject("tlsConfig", m_tlsConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




