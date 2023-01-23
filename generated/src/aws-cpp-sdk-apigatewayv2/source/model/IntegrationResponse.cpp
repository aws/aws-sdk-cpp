/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/IntegrationResponse.h>
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

IntegrationResponse::IntegrationResponse() : 
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingStrategyHasBeenSet(false),
    m_integrationResponseIdHasBeenSet(false),
    m_integrationResponseKeyHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseTemplatesHasBeenSet(false),
    m_templateSelectionExpressionHasBeenSet(false)
{
}

IntegrationResponse::IntegrationResponse(JsonView jsonValue) : 
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingStrategyHasBeenSet(false),
    m_integrationResponseIdHasBeenSet(false),
    m_integrationResponseKeyHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseTemplatesHasBeenSet(false),
    m_templateSelectionExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

IntegrationResponse& IntegrationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentHandlingStrategy"))
  {
    m_contentHandlingStrategy = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandlingStrategy"));

    m_contentHandlingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationResponseId"))
  {
    m_integrationResponseId = jsonValue.GetString("integrationResponseId");

    m_integrationResponseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integrationResponseKey"))
  {
    m_integrationResponseKey = jsonValue.GetString("integrationResponseKey");

    m_integrationResponseKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsString();
    }
    m_responseParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseTemplates"))
  {
    Aws::Map<Aws::String, JsonView> responseTemplatesJsonMap = jsonValue.GetObject("responseTemplates").GetAllObjects();
    for(auto& responseTemplatesItem : responseTemplatesJsonMap)
    {
      m_responseTemplates[responseTemplatesItem.first] = responseTemplatesItem.second.AsString();
    }
    m_responseTemplatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateSelectionExpression"))
  {
    m_templateSelectionExpression = jsonValue.GetString("templateSelectionExpression");

    m_templateSelectionExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegrationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_contentHandlingStrategyHasBeenSet)
  {
   payload.WithString("contentHandlingStrategy", ContentHandlingStrategyMapper::GetNameForContentHandlingStrategy(m_contentHandlingStrategy));
  }

  if(m_integrationResponseIdHasBeenSet)
  {
   payload.WithString("integrationResponseId", m_integrationResponseId);

  }

  if(m_integrationResponseKeyHasBeenSet)
  {
   payload.WithString("integrationResponseKey", m_integrationResponseKey);

  }

  if(m_responseParametersHasBeenSet)
  {
   JsonValue responseParametersJsonMap;
   for(auto& responseParametersItem : m_responseParameters)
   {
     responseParametersJsonMap.WithString(responseParametersItem.first, responseParametersItem.second);
   }
   payload.WithObject("responseParameters", std::move(responseParametersJsonMap));

  }

  if(m_responseTemplatesHasBeenSet)
  {
   JsonValue responseTemplatesJsonMap;
   for(auto& responseTemplatesItem : m_responseTemplates)
   {
     responseTemplatesJsonMap.WithString(responseTemplatesItem.first, responseTemplatesItem.second);
   }
   payload.WithObject("responseTemplates", std::move(responseTemplatesJsonMap));

  }

  if(m_templateSelectionExpressionHasBeenSet)
  {
   payload.WithString("templateSelectionExpression", m_templateSelectionExpression);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
