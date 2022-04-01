/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DescribeFirewallPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFirewallPolicyResult::DescribeFirewallPolicyResult()
{
}

DescribeFirewallPolicyResult::DescribeFirewallPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFirewallPolicyResult& DescribeFirewallPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");

  }

  if(jsonValue.ValueExists("FirewallPolicyResponse"))
  {
    m_firewallPolicyResponse = jsonValue.GetObject("FirewallPolicyResponse");

  }

  if(jsonValue.ValueExists("FirewallPolicy"))
  {
    m_firewallPolicy = jsonValue.GetObject("FirewallPolicy");

  }



  return *this;
}
