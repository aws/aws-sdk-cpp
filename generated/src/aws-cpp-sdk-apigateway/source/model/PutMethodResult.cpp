/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutMethodResult.h>
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

PutMethodResult::PutMethodResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutMethodResult& PutMethodResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");
    m_httpMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = jsonValue.GetString("authorizationType");
    m_authorizationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");
    m_authorizerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");
    m_apiKeyRequiredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestValidatorId"))
  {
    m_requestValidatorId = jsonValue.GetString("requestValidatorId");
    m_requestValidatorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationName"))
  {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsBool();
    }
    m_requestParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestModels"))
  {
    Aws::Map<Aws::String, JsonView> requestModelsJsonMap = jsonValue.GetObject("requestModels").GetAllObjects();
    for(auto& requestModelsItem : requestModelsJsonMap)
    {
      m_requestModels[requestModelsItem.first] = requestModelsItem.second.AsString();
    }
    m_requestModelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("methodResponses"))
  {
    Aws::Map<Aws::String, JsonView> methodResponsesJsonMap = jsonValue.GetObject("methodResponses").GetAllObjects();
    for(auto& methodResponsesItem : methodResponsesJsonMap)
    {
      m_methodResponses[methodResponsesItem.first] = methodResponsesItem.second.AsObject();
    }
    m_methodResponsesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("methodIntegration"))
  {
    m_methodIntegration = jsonValue.GetObject("methodIntegration");
    m_methodIntegrationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizationScopes"))
  {
    Aws::Utils::Array<JsonView> authorizationScopesJsonList = jsonValue.GetArray("authorizationScopes");
    for(unsigned authorizationScopesIndex = 0; authorizationScopesIndex < authorizationScopesJsonList.GetLength(); ++authorizationScopesIndex)
    {
      m_authorizationScopes.push_back(authorizationScopesJsonList[authorizationScopesIndex].AsString());
    }
    m_authorizationScopesHasBeenSet = true;
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
