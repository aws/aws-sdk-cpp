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

#include <aws/apigatewayv2/model/GetRouteResponseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRouteResponseResult::GetRouteResponseResult()
{
}

GetRouteResponseResult::GetRouteResponseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRouteResponseResult& GetRouteResponseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
