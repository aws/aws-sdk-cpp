/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateRouteResponseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRouteResponseResult::UpdateRouteResponseResult()
{
}

UpdateRouteResponseResult::UpdateRouteResponseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateRouteResponseResult& UpdateRouteResponseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelSelectionExpression"))
  {
    m_modelSelectionExpression = jsonValue.GetString("modelSelectionExpression");

  }

  if(jsonValue.ValueExists("responseModels"))
  {
    Aws::Map<Aws::String, JsonView> responseModelsJsonMap = jsonValue.GetObject("responseModels").GetAllObjects();
    for(auto& responseModelsItem : responseModelsJsonMap)
    {
      m_responseModels[responseModelsItem.first] = responseModelsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("routeResponseId"))
  {
    m_routeResponseId = jsonValue.GetString("routeResponseId");

  }

  if(jsonValue.ValueExists("routeResponseKey"))
  {
    m_routeResponseKey = jsonValue.GetString("routeResponseKey");

  }



  return *this;
}
