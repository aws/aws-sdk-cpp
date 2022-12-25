/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DescribePullRequestEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePullRequestEventsResult::DescribePullRequestEventsResult()
{
}

DescribePullRequestEventsResult::DescribePullRequestEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePullRequestEventsResult& DescribePullRequestEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pullRequestEvents"))
  {
    Aws::Utils::Array<JsonView> pullRequestEventsJsonList = jsonValue.GetArray("pullRequestEvents");
    for(unsigned pullRequestEventsIndex = 0; pullRequestEventsIndex < pullRequestEventsJsonList.GetLength(); ++pullRequestEventsIndex)
    {
      m_pullRequestEvents.push_back(pullRequestEventsJsonList[pullRequestEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
