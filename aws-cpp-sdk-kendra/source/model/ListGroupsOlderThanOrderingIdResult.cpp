/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListGroupsOlderThanOrderingIdResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupsOlderThanOrderingIdResult::ListGroupsOlderThanOrderingIdResult()
{
}

ListGroupsOlderThanOrderingIdResult::ListGroupsOlderThanOrderingIdResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGroupsOlderThanOrderingIdResult& ListGroupsOlderThanOrderingIdResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupsSummaries"))
  {
    Aws::Utils::Array<JsonView> groupsSummariesJsonList = jsonValue.GetArray("GroupsSummaries");
    for(unsigned groupsSummariesIndex = 0; groupsSummariesIndex < groupsSummariesJsonList.GetLength(); ++groupsSummariesIndex)
    {
      m_groupsSummaries.push_back(groupsSummariesJsonList[groupsSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
