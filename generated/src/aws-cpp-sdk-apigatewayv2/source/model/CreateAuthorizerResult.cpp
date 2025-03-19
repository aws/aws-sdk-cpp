/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAuthorizerResult::CreateAuthorizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAuthorizerResult& CreateAuthorizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authorizerCredentialsArn"))
  {
    m_authorizerCredentialsArn = jsonValue.GetString("authorizerCredentialsArn");
    m_authorizerCredentialsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");
    m_authorizerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerPayloadFormatVersion"))
  {
    m_authorizerPayloadFormatVersion = jsonValue.GetString("authorizerPayloadFormatVersion");
    m_authorizerPayloadFormatVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("authorizerResultTtlInSeconds");
    m_authorizerResultTtlInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerType"))
  {
    m_authorizerType = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("authorizerType"));
    m_authorizerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("authorizerUri");
    m_authorizerUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enableSimpleResponses"))
  {
    m_enableSimpleResponses = jsonValue.GetBool("enableSimpleResponses");
    m_enableSimpleResponsesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identitySource"))
  {
    Aws::Utils::Array<JsonView> identitySourceJsonList = jsonValue.GetArray("identitySource");
    for(unsigned identitySourceIndex = 0; identitySourceIndex < identitySourceJsonList.GetLength(); ++identitySourceIndex)
    {
      m_identitySource.push_back(identitySourceJsonList[identitySourceIndex].AsString());
    }
    m_identitySourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("identityValidationExpression");
    m_identityValidationExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jwtConfiguration"))
  {
    m_jwtConfiguration = jsonValue.GetObject("jwtConfiguration");
    m_jwtConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
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
