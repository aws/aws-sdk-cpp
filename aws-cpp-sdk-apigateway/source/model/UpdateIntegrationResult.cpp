/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIntegrationResult::UpdateIntegrationResult() : 
    m_type(IntegrationType::NOT_SET),
    m_connectionType(ConnectionType::NOT_SET),
    m_contentHandling(ContentHandlingStrategy::NOT_SET),
    m_timeoutInMillis(0)
{
}

UpdateIntegrationResult::UpdateIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(IntegrationType::NOT_SET),
    m_connectionType(ConnectionType::NOT_SET),
    m_contentHandling(ContentHandlingStrategy::NOT_SET),
    m_timeoutInMillis(0)
{
  *this = result;
}

UpdateIntegrationResult& UpdateIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("type"))
  {
    m_type = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");

  }

  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

  }

  if(jsonValue.ValueExists("connectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("connectionType"));

  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

  }

  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetString("credentials");

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

  if(jsonValue.ValueExists("passthroughBehavior"))
  {
    m_passthroughBehavior = jsonValue.GetString("passthroughBehavior");

  }

  if(jsonValue.ValueExists("contentHandling"))
  {
    m_contentHandling = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandling"));

  }

  if(jsonValue.ValueExists("timeoutInMillis"))
  {
    m_timeoutInMillis = jsonValue.GetInteger("timeoutInMillis");

  }

  if(jsonValue.ValueExists("cacheNamespace"))
  {
    m_cacheNamespace = jsonValue.GetString("cacheNamespace");

  }

  if(jsonValue.ValueExists("cacheKeyParameters"))
  {
    Aws::Utils::Array<JsonView> cacheKeyParametersJsonList = jsonValue.GetArray("cacheKeyParameters");
    for(unsigned cacheKeyParametersIndex = 0; cacheKeyParametersIndex < cacheKeyParametersJsonList.GetLength(); ++cacheKeyParametersIndex)
    {
      m_cacheKeyParameters.push_back(cacheKeyParametersJsonList[cacheKeyParametersIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("integrationResponses"))
  {
    Aws::Map<Aws::String, JsonView> integrationResponsesJsonMap = jsonValue.GetObject("integrationResponses").GetAllObjects();
    for(auto& integrationResponsesItem : integrationResponsesJsonMap)
    {
      m_integrationResponses[integrationResponsesItem.first] = integrationResponsesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("tlsConfig"))
  {
    m_tlsConfig = jsonValue.GetObject("tlsConfig");

  }



  return *this;
}
