/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutGatewayResponseResult.h>
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

PutGatewayResponseResult::PutGatewayResponseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutGatewayResponseResult& PutGatewayResponseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("responseType"))
  {
    m_responseType = GatewayResponseTypeMapper::GetGatewayResponseTypeForName(jsonValue.GetString("responseType"));
    m_responseTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsString();
    }
    m_responseParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseTemplates"))
  {
    Aws::Map<Aws::String, JsonView> responseTemplatesJsonMap = jsonValue.GetObject("responseTemplates").GetAllObjects();
    for(auto& responseTemplatesItem : responseTemplatesJsonMap)
    {
      m_responseTemplates[responseTemplatesItem.first] = responseTemplatesItem.second.AsString();
    }
    m_responseTemplatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultResponse"))
  {
    m_defaultResponse = jsonValue.GetBool("defaultResponse");
    m_defaultResponseHasBeenSet = true;
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
