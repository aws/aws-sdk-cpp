/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateRouteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRouteResult::CreateRouteResult() : 
    m_apiGatewayManaged(false),
    m_apiKeyRequired(false),
    m_authorizationType(AuthorizationType::NOT_SET)
{
}

CreateRouteResult::CreateRouteResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_apiGatewayManaged(false),
    m_apiKeyRequired(false),
    m_authorizationType(AuthorizationType::NOT_SET)
{
  *this = result;
}

CreateRouteResult& CreateRouteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

  }

  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");

  }

  if(jsonValue.ValueExists("authorizationScopes"))
  {
    Aws::Utils::Array<JsonView> authorizationScopesJsonList = jsonValue.GetArray("authorizationScopes");
    for(unsigned authorizationScopesIndex = 0; authorizationScopesIndex < authorizationScopesJsonList.GetLength(); ++authorizationScopesIndex)
    {
      m_authorizationScopes.push_back(authorizationScopesJsonList[authorizationScopesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = AuthorizationTypeMapper::GetAuthorizationTypeForName(jsonValue.GetString("authorizationType"));

  }

  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");

  }

  if(jsonValue.ValueExists("modelSelectionExpression"))
  {
    m_modelSelectionExpression = jsonValue.GetString("modelSelectionExpression");

  }

  if(jsonValue.ValueExists("operationName"))
  {
    m_operationName = jsonValue.GetString("operationName");

  }

  if(jsonValue.ValueExists("requestModels"))
  {
    Aws::Map<Aws::String, JsonView> requestModelsJsonMap = jsonValue.GetObject("requestModels").GetAllObjects();
    for(auto& requestModelsItem : requestModelsJsonMap)
    {
      m_requestModels[requestModelsItem.first] = requestModelsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("requestParameters"))
  {
    Aws::Map<Aws::String, JsonView> requestParametersJsonMap = jsonValue.GetObject("requestParameters").GetAllObjects();
    for(auto& requestParametersItem : requestParametersJsonMap)
    {
      m_requestParameters[requestParametersItem.first] = requestParametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("routeId"))
  {
    m_routeId = jsonValue.GetString("routeId");

  }

  if(jsonValue.ValueExists("routeKey"))
  {
    m_routeKey = jsonValue.GetString("routeKey");

  }

  if(jsonValue.ValueExists("routeResponseSelectionExpression"))
  {
    m_routeResponseSelectionExpression = jsonValue.GetString("routeResponseSelectionExpression");

  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

  }



  return *this;
}
