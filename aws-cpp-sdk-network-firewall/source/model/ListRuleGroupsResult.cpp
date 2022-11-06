/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListRuleGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRuleGroupsResult::ListRuleGroupsResult()
{
}

ListRuleGroupsResult::ListRuleGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRuleGroupsResult& ListRuleGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RuleGroups"))
  {
    Aws::Utils::Array<JsonView> ruleGroupsJsonList = jsonValue.GetArray("RuleGroups");
    for(unsigned ruleGroupsIndex = 0; ruleGroupsIndex < ruleGroupsJsonList.GetLength(); ++ruleGroupsIndex)
    {
      m_ruleGroups.push_back(ruleGroupsJsonList[ruleGroupsIndex].AsObject());
    }
  }



  return *this;
}
