/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/TestInvokeMethodResult.h>
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

TestInvokeMethodResult::TestInvokeMethodResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestInvokeMethodResult& TestInvokeMethodResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetInteger("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("headers"))
  {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("headers").GetAllObjects();
    for(auto& headersItem : headersJsonMap)
    {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
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
    m_multiValueHeadersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("log"))
  {
    m_log = jsonValue.GetString("log");
    m_logHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latency"))
  {
    m_latency = jsonValue.GetInt64("latency");
    m_latencyHasBeenSet = true;
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
