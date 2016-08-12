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
#include <aws/apigateway/model/TestInvokeAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

TestInvokeAuthorizerResult::TestInvokeAuthorizerResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_clientStatus(0),
    m_latency(0)
{
  *this = result;
}

TestInvokeAuthorizerResult& TestInvokeAuthorizerResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
    Aws::Map<Aws::String, JsonValue> authorizationJsonMap = jsonValue.GetObject("authorization").GetAllObjects();
    for(auto& authorizationItem : authorizationJsonMap)
    {
      Array<JsonValue> listOfStringJsonList = authorizationItem.second.AsArray();
      Aws::Vector<Aws::String> listOfStringList((size_t)listOfStringJsonList.GetLength());
      for(unsigned listOfStringIndex = 0; listOfStringIndex < listOfStringJsonList.GetLength(); ++listOfStringIndex)
      {
        listOfStringList.push_back(listOfStringJsonList[listOfStringIndex].AsString());
      }
      m_authorization[authorizationItem.first] = std::move(listOfStringList);
    }
  }

  if(jsonValue.ValueExists("claims"))
  {
    Aws::Map<Aws::String, JsonValue> claimsJsonMap = jsonValue.GetObject("claims").GetAllObjects();
    for(auto& claimsItem : claimsJsonMap)
    {
      m_claims[claimsItem.first] = claimsItem.second.AsString();
    }
  }



  return *this;
}
