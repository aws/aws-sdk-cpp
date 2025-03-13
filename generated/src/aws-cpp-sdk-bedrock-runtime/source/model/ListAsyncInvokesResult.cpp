/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ListAsyncInvokesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAsyncInvokesResult::ListAsyncInvokesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAsyncInvokesResult& ListAsyncInvokesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("asyncInvokeSummaries"))
  {
    Aws::Utils::Array<JsonView> asyncInvokeSummariesJsonList = jsonValue.GetArray("asyncInvokeSummaries");
    for(unsigned asyncInvokeSummariesIndex = 0; asyncInvokeSummariesIndex < asyncInvokeSummariesJsonList.GetLength(); ++asyncInvokeSummariesIndex)
    {
      m_asyncInvokeSummaries.push_back(asyncInvokeSummariesJsonList[asyncInvokeSummariesIndex].AsObject());
    }
    m_asyncInvokeSummariesHasBeenSet = true;
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
