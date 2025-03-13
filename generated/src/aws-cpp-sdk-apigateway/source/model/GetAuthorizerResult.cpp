/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetAuthorizerResult.h>
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

GetAuthorizerResult::GetAuthorizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAuthorizerResult& GetAuthorizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerARNs"))
  {
    Aws::Utils::Array<JsonView> providerARNsJsonList = jsonValue.GetArray("providerARNs");
    for(unsigned providerARNsIndex = 0; providerARNsIndex < providerARNsJsonList.GetLength(); ++providerARNsIndex)
    {
      m_providerARNs.push_back(providerARNsJsonList[providerARNsIndex].AsString());
    }
    m_providerARNsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = jsonValue.GetString("authType");
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("authorizerUri");
    m_authorizerUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerCredentials"))
  {
    m_authorizerCredentials = jsonValue.GetString("authorizerCredentials");
    m_authorizerCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identitySource"))
  {
    m_identitySource = jsonValue.GetString("identitySource");
    m_identitySourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("identityValidationExpression");
    m_identityValidationExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("authorizerResultTtlInSeconds");
    m_authorizerResultTtlInSecondsHasBeenSet = true;
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
