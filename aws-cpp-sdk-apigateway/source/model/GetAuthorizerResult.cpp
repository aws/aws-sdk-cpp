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
#include <aws/apigateway/model/GetAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAuthorizerResult::GetAuthorizerResult() : 
    m_type(AuthorizerType::NOT_SET),
    m_authorizerResultTtlInSeconds(0)
{
}

GetAuthorizerResult::GetAuthorizerResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_type(AuthorizerType::NOT_SET),
    m_authorizerResultTtlInSeconds(0)
{
  *this = result;
}

GetAuthorizerResult& GetAuthorizerResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("providerARNs"))
  {
    Array<JsonValue> providerARNsJsonList = jsonValue.GetArray("providerARNs");
    for(unsigned providerARNsIndex = 0; providerARNsIndex < providerARNsJsonList.GetLength(); ++providerARNsIndex)
    {
      m_providerARNs.push_back(providerARNsJsonList[providerARNsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("authType"))
  {
    m_authType = jsonValue.GetString("authType");

  }

  if(jsonValue.ValueExists("authorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("authorizerUri");

  }

  if(jsonValue.ValueExists("authorizerCredentials"))
  {
    m_authorizerCredentials = jsonValue.GetString("authorizerCredentials");

  }

  if(jsonValue.ValueExists("identitySource"))
  {
    m_identitySource = jsonValue.GetString("identitySource");

  }

  if(jsonValue.ValueExists("identityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("identityValidationExpression");

  }

  if(jsonValue.ValueExists("authorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("authorizerResultTtlInSeconds");

  }



  return *this;
}
