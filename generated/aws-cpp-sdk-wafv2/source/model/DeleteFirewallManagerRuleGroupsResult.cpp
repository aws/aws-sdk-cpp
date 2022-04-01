/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DeleteFirewallManagerRuleGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFirewallManagerRuleGroupsResult::DeleteFirewallManagerRuleGroupsResult()
{
}

DeleteFirewallManagerRuleGroupsResult::DeleteFirewallManagerRuleGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteFirewallManagerRuleGroupsResult& DeleteFirewallManagerRuleGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextWebACLLockToken"))
  {
    m_nextWebACLLockToken = jsonValue.GetString("NextWebACLLockToken");

  }



  return *this;
}
