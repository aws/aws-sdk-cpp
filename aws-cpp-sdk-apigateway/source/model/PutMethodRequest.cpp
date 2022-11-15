/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutMethodRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMethodRequest::PutMethodRequest() : 
    m_restApiIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false),
    m_authorizerIdHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestModelsHasBeenSet(false),
    m_requestValidatorIdHasBeenSet(false),
    m_authorizationScopesHasBeenSet(false)
{
}

Aws::String PutMethodRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_requestValidatorIdHasBeenSet)
  {
   payload.WithString("requestValidatorId", m_requestValidatorId);

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

  return payload.View().WriteReadable();
}




