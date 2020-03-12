/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/apigatewayv2/model/CreateIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIntegrationRequest::CreateIntegrationRequest() : 
    m_apiIdHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingStrategyHasBeenSet(false),
    m_credentialsArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_integrationMethodHasBeenSet(false),
    m_integrationType(IntegrationType::NOT_SET),
    m_integrationTypeHasBeenSet(false),
    m_integrationUriHasBeenSet(false),
    m_passthroughBehavior(PassthroughBehavior::NOT_SET),
    m_passthroughBehaviorHasBeenSet(false),
    m_payloadFormatVersionHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestTemplatesHasBeenSet(false),
    m_templateSelectionExpressionHasBeenSet(false),
    m_timeoutInMillis(0),
    m_timeoutInMillisHasBeenSet(false),
    m_tlsConfigHasBeenSet(false)
{
}

Aws::String CreateIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("connectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_contentHandlingStrategyHasBeenSet)
  {
   payload.WithString("contentHandlingStrategy", ContentHandlingStrategyMapper::GetNameForContentHandlingStrategy(m_contentHandlingStrategy));
  }

  if(m_credentialsArnHasBeenSet)
  {
   payload.WithString("credentialsArn", m_credentialsArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_integrationMethodHasBeenSet)
  {
   payload.WithString("integrationMethod", m_integrationMethod);

  }

  if(m_integrationTypeHasBeenSet)
  {
   payload.WithString("integrationType", IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType));
  }

  if(m_integrationUriHasBeenSet)
  {
   payload.WithString("integrationUri", m_integrationUri);

  }

  if(m_passthroughBehaviorHasBeenSet)
  {
   payload.WithString("passthroughBehavior", PassthroughBehaviorMapper::GetNameForPassthroughBehavior(m_passthroughBehavior));
  }

  if(m_payloadFormatVersionHasBeenSet)
  {
   payload.WithString("payloadFormatVersion", m_payloadFormatVersion);

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

  if(m_templateSelectionExpressionHasBeenSet)
  {
   payload.WithString("templateSelectionExpression", m_templateSelectionExpression);

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




