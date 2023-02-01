/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ListRuleNamesByTargetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRuleNamesByTargetResult::ListRuleNamesByTargetResult()
{
}

ListRuleNamesByTargetResult::ListRuleNamesByTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRuleNamesByTargetResult& ListRuleNamesByTargetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuleNames"))
  {
    Aws::Utils::Array<JsonView> ruleNamesJsonList = jsonValue.GetArray("RuleNames");
    for(unsigned ruleNamesIndex = 0; ruleNamesIndex < ruleNamesJsonList.GetLength(); ++ruleNamesIndex)
    {
      m_ruleNames.push_back(ruleNamesJsonList[ruleNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
