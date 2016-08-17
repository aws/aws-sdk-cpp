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
#include <aws/apigateway/model/TestInvokeMethodResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestInvokeMethodResult::TestInvokeMethodResult() : 
    m_status(0),
    m_latency(0)
{
}

TestInvokeMethodResult::TestInvokeMethodResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0),
    m_latency(0)
{
  *this = result;
}

TestInvokeMethodResult& TestInvokeMethodResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetInteger("status");

  }

  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");

  }

  if(jsonValue.ValueExists("headers"))
  {
    Aws::Map<Aws::String, JsonValue> headersJsonMap = jsonValue.GetObject("headers").GetAllObjects();
    for(auto& headersItem : headersJsonMap)
    {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("log"))
  {
    m_log = jsonValue.GetString("log");

  }

  if(jsonValue.ValueExists("latency"))
  {
    m_latency = jsonValue.GetInt64("latency");

  }



  return *this;
}
