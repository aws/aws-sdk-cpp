﻿/*
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

#include <aws/apigateway/model/GetMethodResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMethodResult::GetMethodResult() : 
    m_apiKeyRequired(false)
{
}

GetMethodResult::GetMethodResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_apiKeyRequired(false)
{
  *this = result;
}

GetMethodResult& GetMethodResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");

  }

  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = jsonValue.GetString("authorizationType");

  }

  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");

  }

  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");

  }

  if(jsonValue.ValueExists("requestValidatorId"))
  {
    m_requestValidatorId = jsonValue.GetString("requestValidatorId");

  }

  if(jsonValue.ValueExists("operationName"))
  {
    m_operationName = jsonValue.GetString("operationName");

  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsBool();
    }
  }

  if(jsonValue.ValueExists("requestModels"))
  {
    Aws::Map<Aws::String, JsonView> requestModelsJsonMap = jsonValue.GetObject("requestModels").GetAllObjects();
    for(auto& requestModelsItem : requestModelsJsonMap)
    {
      m_requestModels[requestModelsItem.first] = requestModelsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("methodResponses"))
  {
    Aws::Map<Aws::String, JsonView> methodResponsesJsonMap = jsonValue.GetObject("methodResponses").GetAllObjects();
    for(auto& methodResponsesItem : methodResponsesJsonMap)
    {
      m_methodResponses[methodResponsesItem.first] = methodResponsesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("methodIntegration"))
  {
    m_methodIntegration = jsonValue.GetObject("methodIntegration");

  }

  if(jsonValue.ValueExists("authorizationScopes"))
  {
    Array<JsonView> authorizationScopesJsonList = jsonValue.GetArray("authorizationScopes");
    for(unsigned authorizationScopesIndex = 0; authorizationScopesIndex < authorizationScopesJsonList.GetLength(); ++authorizationScopesIndex)
    {
      m_authorizationScopes.push_back(authorizationScopesJsonList[authorizationScopesIndex].AsString());
    }
  }



  return *this;
}
