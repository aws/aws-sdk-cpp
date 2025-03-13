/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIntegrationResult::UpdateIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateIntegrationResult& UpdateIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      Aws::Map<Aws::String, JsonView> integrationParametersJsonMap = responseParametersItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> integrationParametersMap;
      for(auto& integrationParametersItem : integrationParametersJsonMap)
      {
        integrationParametersMap[integrationParametersItem.first] = integrationParametersItem.second.AsString();
      }
      m_responseParameters[responseParametersItem.first] = std::move(integrationParametersMap);
    }
    m_responseParametersHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
