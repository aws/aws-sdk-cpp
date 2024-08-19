/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListModelInvocationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelInvocationJobsResult::ListModelInvocationJobsResult()
{
}

ListModelInvocationJobsResult::ListModelInvocationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelInvocationJobsResult& ListModelInvocationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("invocationJobSummaries"))
  {
    Aws::Utils::Array<JsonView> invocationJobSummariesJsonList = jsonValue.GetArray("invocationJobSummaries");
    for(unsigned invocationJobSummariesIndex = 0; invocationJobSummariesIndex < invocationJobSummariesJsonList.GetLength(); ++invocationJobSummariesIndex)
    {
      m_invocationJobSummaries.push_back(invocationJobSummariesJsonList[invocationJobSummariesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
