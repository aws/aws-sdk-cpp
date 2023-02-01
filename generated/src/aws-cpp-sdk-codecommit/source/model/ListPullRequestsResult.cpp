/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ListPullRequestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPullRequestsResult::ListPullRequestsResult()
{
}

ListPullRequestsResult::ListPullRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPullRequestsResult& ListPullRequestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pullRequestIds"))
  {
    Aws::Utils::Array<JsonView> pullRequestIdsJsonList = jsonValue.GetArray("pullRequestIds");
    for(unsigned pullRequestIdsIndex = 0; pullRequestIdsIndex < pullRequestIdsJsonList.GetLength(); ++pullRequestIdsIndex)
    {
      m_pullRequestIds.push_back(pullRequestIdsJsonList[pullRequestIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
