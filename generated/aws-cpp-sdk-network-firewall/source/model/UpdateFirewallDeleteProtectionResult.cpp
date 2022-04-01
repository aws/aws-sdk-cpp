/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateFirewallDeleteProtectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFirewallDeleteProtectionResult::UpdateFirewallDeleteProtectionResult() : 
    m_deleteProtection(false)
{
}

UpdateFirewallDeleteProtectionResult::UpdateFirewallDeleteProtectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deleteProtection(false)
{
  *this = result;
}

UpdateFirewallDeleteProtectionResult& UpdateFirewallDeleteProtectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");

  }

  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");

  }

  if(jsonValue.ValueExists("DeleteProtection"))
  {
    m_deleteProtection = jsonValue.GetBool("DeleteProtection");

  }

  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");

  }



  return *this;
}
