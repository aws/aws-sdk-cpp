/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListFirewallsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallsResult::ListFirewallsResult()
{
}

ListFirewallsResult::ListFirewallsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallsResult& ListFirewallsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Firewalls"))
  {
    Aws::Utils::Array<JsonView> firewallsJsonList = jsonValue.GetArray("Firewalls");
    for(unsigned firewallsIndex = 0; firewallsIndex < firewallsJsonList.GetLength(); ++firewallsIndex)
    {
      m_firewalls.push_back(firewallsJsonList[firewallsIndex].AsObject());
    }
  }



  return *this;
}
