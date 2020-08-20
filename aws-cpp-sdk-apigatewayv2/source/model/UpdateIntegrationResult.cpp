/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIntegrationResult::UpdateIntegrationResult() : 
    m_apiGatewayManaged(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_integrationType(IntegrationType::NOT_SET),
    m_passthroughBehavior(PassthroughBehavior::NOT_SET),
    m_timeoutInMillis(0)
{
}

UpdateIntegrationResult::UpdateIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_apiGatewayManaged(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET),
    m_integrationType(IntegrationType::NOT_SET),
    m_passthroughBehavior(PassthroughBehavior::NOT_SET),
    m_timeoutInMillis(0)
{
  *this = result;
}

UpdateIntegrationResult& UpdateIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

  }

  if(jsonValue.ValueExists("connectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("connectionType"));

  }

  if(jsonValue.ValueExists("contentHandlingStrategy"))
  {
    m_contentHandlingStrategy = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandlingStrategy"));

  }

  if(jsonValue.ValueExists("credentialsArn"))
  {
    m_credentialsArn = jsonValue.GetString("credentialsArn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("integrationId"))
  {
    m_integrationId = jsonValue.GetString("integrationId");

  }

  if(jsonValue.ValueExists("integrationMethod"))
  {
    m_integrationMethod = jsonValue.GetString("integrationMethod");

  }

  if(jsonValue.ValueExists("integrationResponseSelectionExpression"))
  {
    m_integrationResponseSelectionExpression = jsonValue.GetString("integrationResponseSelectionExpression");

  }

  if(jsonValue.ValueExists("integrationSubtype"))
  {
    m_integrationSubtype = jsonValue.GetString("integrationSubtype");

  }

  if(jsonValue.ValueExists("integrationType"))
  {
    m_integrationType = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("integrationType"));

  }

  if(jsonValue.ValueExists("integrationUri"))
  {
    m_integrationUri = jsonValue.GetString("integrationUri");

  }

  if(jsonValue.ValueExists("passthroughBehavior"))
  {
    m_passthroughBehavior = PassthroughBehaviorMapper::GetPassthroughBehaviorForName(jsonValue.GetString("passthroughBehavior"));

  }

  if(jsonValue.ValueExists("payloadFormatVersion"))
  {
    m_payloadFormatVersion = jsonValue.GetString("payloadFormatVersion");

  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("requestTemplates"))
  {
    Aws::Map<Aws::String, JsonView> requestTemplatesJsonMap = jsonValue.GetObject("requestTemplates").GetAllObjects();
    for(auto& requestTemplatesItem : requestTemplatesJsonMap)
    {
      m_requestTemplates[requestTemplatesItem.first] = requestTemplatesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("templateSelectionExpression"))
  {
    m_templateSelectionExpression = jsonValue.GetString("templateSelectionExpression");

  }

  if(jsonValue.ValueExists("timeoutInMillis"))
  {
    m_timeoutInMillis = jsonValue.GetInteger("timeoutInMillis");

  }

  if(jsonValue.ValueExists("tlsConfig"))
  {
    m_tlsConfig = jsonValue.GetObject("tlsConfig");

  }



  return *this;
}
