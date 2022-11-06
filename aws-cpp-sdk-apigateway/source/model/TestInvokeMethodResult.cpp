/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/TestInvokeMethodResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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

TestInvokeMethodResult::TestInvokeMethodResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0),
    m_latency(0)
{
  *this = result;
}

TestInvokeMethodResult& TestInvokeMethodResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("headers").GetAllObjects();
    for(auto& headersItem : headersJsonMap)
    {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("multiValueHeaders"))
  {
    Aws::Map<Aws::String, JsonView> multiValueHeadersJsonMap = jsonValue.GetObject("multiValueHeaders").GetAllObjects();
    for(auto& multiValueHeadersItem : multiValueHeadersJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfStringJsonList = multiValueHeadersItem.second.AsArray();
      Aws::Vector<Aws::String> listOfStringList;
      listOfStringList.reserve((size_t)listOfStringJsonList.GetLength());
      for(unsigned listOfStringIndex = 0; listOfStringIndex < listOfStringJsonList.GetLength(); ++listOfStringIndex)
      {
        listOfStringList.push_back(listOfStringJsonList[listOfStringIndex].AsString());
      }
      m_multiValueHeaders[multiValueHeadersItem.first] = std::move(listOfStringList);
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
