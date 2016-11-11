/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/UpdateIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIntegrationResult::UpdateIntegrationResult() : 
    m_type(IntegrationType::NOT_SET)
{
}

UpdateIntegrationResult::UpdateIntegrationResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_type(IntegrationType::NOT_SET)
{
  *this = result;
}

UpdateIntegrationResult& UpdateIntegrationResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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

  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetString("credentials");

  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonValue> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("requestTemplates"))
  {
    Aws::Map<Aws::String, JsonValue> requestTemplatesJsonMap = jsonValue.GetObject("requestTemplates").GetAllObjects();
    for(auto& requestTemplatesItem : requestTemplatesJsonMap)
    {
      m_requestTemplates[requestTemplatesItem.first] = requestTemplatesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("passthroughBehavior"))
  {
    m_passthroughBehavior = jsonValue.GetString("passthroughBehavior");

  }

  if(jsonValue.ValueExists("cacheNamespace"))
  {
    m_cacheNamespace = jsonValue.GetString("cacheNamespace");

  }

  if(jsonValue.ValueExists("cacheKeyParameters"))
  {
    Array<JsonValue> cacheKeyParametersJsonList = jsonValue.GetArray("cacheKeyParameters");
    for(unsigned cacheKeyParametersIndex = 0; cacheKeyParametersIndex < cacheKeyParametersJsonList.GetLength(); ++cacheKeyParametersIndex)
    {
      m_cacheKeyParameters.push_back(cacheKeyParametersJsonList[cacheKeyParametersIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("integrationResponses"))
  {
    Aws::Map<Aws::String, JsonValue> integrationResponsesJsonMap = jsonValue.GetObject("integrationResponses").GetAllObjects();
    for(auto& integrationResponsesItem : integrationResponsesJsonMap)
    {
      m_integrationResponses[integrationResponsesItem.first] = integrationResponsesItem.second.AsObject();
    }
  }



  return *this;
}
