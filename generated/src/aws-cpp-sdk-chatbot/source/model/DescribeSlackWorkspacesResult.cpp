/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DescribeSlackWorkspacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSlackWorkspacesResult::DescribeSlackWorkspacesResult()
{
}

DescribeSlackWorkspacesResult::DescribeSlackWorkspacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSlackWorkspacesResult& DescribeSlackWorkspacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SlackWorkspaces"))
  {
    Aws::Utils::Array<JsonView> slackWorkspacesJsonList = jsonValue.GetArray("SlackWorkspaces");
    for(unsigned slackWorkspacesIndex = 0; slackWorkspacesIndex < slackWorkspacesJsonList.GetLength(); ++slackWorkspacesIndex)
    {
      m_slackWorkspaces.push_back(slackWorkspacesJsonList[slackWorkspacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
