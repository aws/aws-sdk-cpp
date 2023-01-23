/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateIntegrationResponseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIntegrationResponseResult::UpdateIntegrationResponseResult() : 
    m_contentHandling(ContentHandlingStrategy::NOT_SET)
{
}

UpdateIntegrationResponseResult::UpdateIntegrationResponseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contentHandling(ContentHandlingStrategy::NOT_SET)
{
  *this = result;
}

UpdateIntegrationResponseResult& UpdateIntegrationResponseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

  }

  if(jsonValue.ValueExists("selectionPattern"))
  {
    m_selectionPattern = jsonValue.GetString("selectionPattern");

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

  if(jsonValue.ValueExists("contentHandling"))
  {
    m_contentHandling = ContentHandlingStrategyMapper::GetContentHandlingStrategyForName(jsonValue.GetString("contentHandling"));

  }



  return *this;
}
