/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateFirewallPolicyChangeProtectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFirewallPolicyChangeProtectionResult::UpdateFirewallPolicyChangeProtectionResult() : 
    m_firewallPolicyChangeProtection(false)
{
}

UpdateFirewallPolicyChangeProtectionResult::UpdateFirewallPolicyChangeProtectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_firewallPolicyChangeProtection(false)
{
  *this = result;
}

UpdateFirewallPolicyChangeProtectionResult& UpdateFirewallPolicyChangeProtectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");

  }

  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");

  }

  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");

  }

  if(jsonValue.ValueExists("FirewallPolicyChangeProtection"))
  {
    m_firewallPolicyChangeProtection = jsonValue.GetBool("FirewallPolicyChangeProtection");

  }



  return *this;
}
