/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAuthorizerResult::UpdateAuthorizerResult() : 
    m_type(AuthorizerType::NOT_SET),
    m_authorizerResultTtlInSeconds(0)
{
}

UpdateAuthorizerResult::UpdateAuthorizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(AuthorizerType::NOT_SET),
    m_authorizerResultTtlInSeconds(0)
{
  *this = result;
}

UpdateAuthorizerResult& UpdateAuthorizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Utils::Array<JsonView> providerARNsJsonList = jsonValue.GetArray("providerARNs");
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
