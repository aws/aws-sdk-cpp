/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutIntegrationResult::PutIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutIntegrationResult& PutIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("connectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("connectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");
    m_connectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetString("credentials");
    m_credentialsHasBeenSet = true;
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
  if(jsonValue.ValueExists("passthroughBehavior"))
  {
    m_passthroughBehavior = jsonValue.GetString("passthroughBehavior");
    m_passthroughBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentHandling"))
  {
    m_contentHandling = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandling"));
    m_contentHandlingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutInMillis"))
  {
    m_timeoutInMillis = jsonValue.GetInteger("timeoutInMillis");
    m_timeoutInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheNamespace"))
  {
    m_cacheNamespace = jsonValue.GetString("cacheNamespace");
    m_cacheNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheKeyParameters"))
  {
    Aws::Utils::Array<JsonView> cacheKeyParametersJsonList = jsonValue.GetArray("cacheKeyParameters");
    for(unsigned cacheKeyParametersIndex = 0; cacheKeyParametersIndex < cacheKeyParametersJsonList.GetLength(); ++cacheKeyParametersIndex)
    {
      m_cacheKeyParameters.push_back(cacheKeyParametersJsonList[cacheKeyParametersIndex].AsString());
    }
    m_cacheKeyParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrationResponses"))
  {
    Aws::Map<Aws::String, JsonView> integrationResponsesJsonMap = jsonValue.GetObject("integrationResponses").GetAllObjects();
    for(auto& integrationResponsesItem : integrationResponsesJsonMap)
    {
      m_integrationResponses[integrationResponsesItem.first] = integrationResponsesItem.second.AsObject();
    }
    m_integrationResponsesHasBeenSet = true;
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
