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

#include <aws/apigatewayv2/model/CreateIntegrationResponseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIntegrationResponseResult::CreateIntegrationResponseResult() : 
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET)
{
}

CreateIntegrationResponseResult::CreateIntegrationResponseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contentHandlingStrategy(ContentHandlingStrategy::NOT_SET)
{
  *this = result;
}

CreateIntegrationResponseResult& CreateIntegrationResponseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contentHandlingStrategy"))
  {
    m_contentHandlingStrategy = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandlingStrategy"));

  }

  if(jsonValue.ValueExists("integrationResponseId"))
  {
    m_integrationResponseId = jsonValue.GetString("integrationResponseId");

  }

  if(jsonValue.ValueExists("integrationResponseKey"))
  {
    m_integrationResponseKey = jsonValue.GetString("integrationResponseKey");

  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("responseTemplates"))
  {
    Aws::Map<Aws::String, JsonView> responseTemplatesJsonMap = jsonValue.GetObject("responseTemplates").GetAllObjects();
    for(auto& responseTemplatesItem : responseTemplatesJsonMap)
    {
      m_responseTemplates[responseTemplatesItem.first] = responseTemplatesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("templateSelectionExpression"))
  {
    m_templateSelectionExpression = jsonValue.GetString("templateSelectionExpression");

  }



  return *this;
}
