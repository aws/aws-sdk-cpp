/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListFirewallRuleGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallRuleGroupsResult::ListFirewallRuleGroupsResult()
{
}

ListFirewallRuleGroupsResult::ListFirewallRuleGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallRuleGroupsResult& ListFirewallRuleGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FirewallRuleGroups"))
  {
    Aws::Utils::Array<JsonView> firewallRuleGroupsJsonList = jsonValue.GetArray("FirewallRuleGroups");
    for(unsigned firewallRuleGroupsIndex = 0; firewallRuleGroupsIndex < firewallRuleGroupsJsonList.GetLength(); ++firewallRuleGroupsIndex)
    {
      m_firewallRuleGroups.push_back(firewallRuleGroupsJsonList[firewallRuleGroupsIndex].AsObject());
    }
  }



  return *this;
}
