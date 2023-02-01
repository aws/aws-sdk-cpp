/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/TestInvokeAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestInvokeAuthorizerResult::TestInvokeAuthorizerResult() : 
    m_clientStatus(0),
    m_latency(0)
{
}

TestInvokeAuthorizerResult::TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_clientStatus(0),
    m_latency(0)
{
  *this = result;
}

TestInvokeAuthorizerResult& TestInvokeAuthorizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clientStatus"))
  {
    m_clientStatus = jsonValue.GetInteger("clientStatus");

  }

  if(jsonValue.ValueExists("log"))
  {
    m_log = jsonValue.GetString("log");

  }

  if(jsonValue.ValueExists("latency"))
  {
    m_latency = jsonValue.GetInt64("latency");

  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

  }

  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");

  }

  if(jsonValue.ValueExists("authorization"))
  {
    Aws::Map<Aws::String, JsonView> authorizationJsonMap = jsonValue.GetObject("authorization").GetAllObjects();
    for(auto& authorizationItem : authorizationJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfStringJsonList = authorizationItem.second.AsArray();
      Aws::Vector<Aws::String> listOfStringList;
      listOfStringList.reserve((size_t)listOfStringJsonList.GetLength());
      for(unsigned listOfStringIndex = 0; listOfStringIndex < listOfStringJsonList.GetLength(); ++listOfStringIndex)
      {
        listOfStringList.push_back(listOfStringJsonList[listOfStringIndex].AsString());
      }
      m_authorization[authorizationItem.first] = std::move(listOfStringList);
    }
  }

  if(jsonValue.ValueExists("claims"))
  {
    Aws::Map<Aws::String, JsonView> claimsJsonMap = jsonValue.GetObject("claims").GetAllObjects();
    for(auto& claimsItem : claimsJsonMap)
    {
      m_claims[claimsItem.first] = claimsItem.second.AsString();
    }
  }



  return *this;
}
