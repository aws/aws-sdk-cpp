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

#include <aws/apigatewayv2/model/GetAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAuthorizerResult::GetAuthorizerResult() : 
    m_authorizerResultTtlInSeconds(0),
    m_authorizerType(AuthorizerType::NOT_SET)
{
}

GetAuthorizerResult::GetAuthorizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_authorizerResultTtlInSeconds(0),
    m_authorizerType(AuthorizerType::NOT_SET)
{
  *this = result;
}

GetAuthorizerResult& GetAuthorizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authorizerCredentialsArn"))
  {
    m_authorizerCredentialsArn = jsonValue.GetString("authorizerCredentialsArn");

  }

  if(jsonValue.ValueExists("authorizerId"))
  {
    m_authorizerId = jsonValue.GetString("authorizerId");

  }

  if(jsonValue.ValueExists("authorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("authorizerResultTtlInSeconds");

  }

  if(jsonValue.ValueExists("authorizerType"))
  {
    m_authorizerType = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("authorizerType"));

  }

  if(jsonValue.ValueExists("authorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("authorizerUri");

  }

  if(jsonValue.ValueExists("identitySource"))
  {
    Array<JsonView> identitySourceJsonList = jsonValue.GetArray("identitySource");
    for(unsigned identitySourceIndex = 0; identitySourceIndex < identitySourceJsonList.GetLength(); ++identitySourceIndex)
    {
      m_identitySource.push_back(identitySourceJsonList[identitySourceIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("identityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("identityValidationExpression");

  }

  if(jsonValue.ValueExists("jwtConfiguration"))
  {
    m_jwtConfiguration = jsonValue.GetObject("jwtConfiguration");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }



  return *this;
}
