/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DeleteFirewallResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFirewallResult::DeleteFirewallResult()
{
}

DeleteFirewallResult::DeleteFirewallResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteFirewallResult& DeleteFirewallResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Firewall"))
  {
    m_firewall = jsonValue.GetObject("Firewall");

  }

  if(jsonValue.ValueExists("FirewallStatus"))
  {
    m_firewallStatus = jsonValue.GetObject("FirewallStatus");

  }



  return *this;
}
