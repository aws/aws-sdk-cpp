/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Integration.h>
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

Integration::Integration() : 
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingStrategyHasBeenSet(false),
    m_credentialsArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_integrationIdHasBeenSet(false),
    m_integrationMethodHasBeenSet(false),
    m_integrationResponseSelectionExpressionHasBeenSet(false),
    m_integrationSubtypeHasBeenSet(false),
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

Integration::Integration(JsonView jsonValue) : 
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingStrategyHasBeenSet(false),
    m_credentialsArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_integrationIdHasBeenSet(false),
    m_integrationMethodHasBeenSet(false),
    m_integrationResponseSelectionExpressionHasBeenSet(false),
    m_integrationSubtypeHasBeenSet(false),
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
  *this = jsonValue;
}

Integration& Integration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

    m_apiGatewayManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

    m_connectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("connectionType"));

    m_connectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentHandlingStrategy"))
  {
    m_contentHandlingStrategy = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandlingStrategy"));

    m_contentHandlingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialsArn"))
  {
    m_credentialsArn = jsonValue.GetString("credentialsArn");

    m_credentialsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationId"))
  {
    m_integrationId = jsonValue.GetString("integrationId");

    m_integrationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationMethod"))
  {
    m_integrationMethod = jsonValue.GetString("integrationMethod");

    m_integrationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationResponseSelectionExpression"))
  {
    m_integrationResponseSelectionExpression = jsonValue.GetString("integrationResponseSelectionExpression");

    m_integrationResponseSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationSubtype"))
  {
    m_integrationSubtype = jsonValue.GetString("integrationSubtype");

    m_integrationSubtypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationType"))
  {
    m_integrationType = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("integrationType"));

    m_integrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationUri"))
  {
    m_integrationUri = jsonValue.GetString("integrationUri");

    m_integrationUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passthroughBehavior"))
  {
    m_passthroughBehavior = PassthroughBehaviorMapper::GetPassthroughBehaviorForName(jsonValue.GetString("passthroughBehavior"));

    m_passthroughBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadFormatVersion"))
  {
    m_payloadFormatVersion = jsonValue.GetString("payloadFormatVersion");

    m_payloadFormatVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsString();
    }
    m_requestParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestTemplates"))
  {
    Aws::Map<Aws::String, JsonView> requestTemplatesJsonMap = jsonValue.GetObject("requestTemplates").GetAllObjects();
    for(auto& requestTemplatesItem : requestTemplatesJsonMap)
    {
      m_requestTemplates[requestTemplatesItem.first] = requestTemplatesItem.second.AsString();
    }
    m_requestTemplatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateSelectionExpression"))
  {
    m_templateSelectionExpression = jsonValue.GetString("templateSelectionExpression");

    m_templateSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInMillis"))
  {
    m_timeoutInMillis = jsonValue.GetInteger("timeoutInMillis");

    m_timeoutInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tlsConfig"))
  {
    m_tlsConfig = jsonValue.GetObject("tlsConfig");

    m_tlsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Integration::Jsonize() const
{
  JsonValue payload;

  if(m_apiGatewayManagedHasBeenSet)
  {
   payload.WithBool("apiGatewayManaged", m_apiGatewayManaged);

  }

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

  if(m_integrationIdHasBeenSet)
  {
   payload.WithString("integrationId", m_integrationId);

  }

  if(m_integrationMethodHasBeenSet)
  {
   payload.WithString("integrationMethod", m_integrationMethod);

  }

  if(m_integrationResponseSelectionExpressionHasBeenSet)
  {
   payload.WithString("integrationResponseSelectionExpression", m_integrationResponseSelectionExpression);

  }

  if(m_integrationSubtypeHasBeenSet)
  {
   payload.WithString("integrationSubtype", m_integrationSubtype);

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

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
