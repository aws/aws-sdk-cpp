/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeMatchmakingRuleSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMatchmakingRuleSetsResult::DescribeMatchmakingRuleSetsResult()
{
}

DescribeMatchmakingRuleSetsResult::DescribeMatchmakingRuleSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMatchmakingRuleSetsResult& DescribeMatchmakingRuleSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuleSets"))
  {
    Aws::Utils::Array<JsonView> ruleSetsJsonList = jsonValue.GetArray("RuleSets");
    for(unsigned ruleSetsIndex = 0; ruleSetsIndex < ruleSetsJsonList.GetLength(); ++ruleSetsIndex)
    {
      m_ruleSets.push_back(ruleSetsJsonList[ruleSetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
