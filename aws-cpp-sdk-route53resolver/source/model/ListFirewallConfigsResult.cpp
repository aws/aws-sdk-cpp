/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListFirewallConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallConfigsResult::ListFirewallConfigsResult()
{
}

ListFirewallConfigsResult::ListFirewallConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallConfigsResult& ListFirewallConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FirewallConfigs"))
  {
    Aws::Utils::Array<JsonView> firewallConfigsJsonList = jsonValue.GetArray("FirewallConfigs");
    for(unsigned firewallConfigsIndex = 0; firewallConfigsIndex < firewallConfigsJsonList.GetLength(); ++firewallConfigsIndex)
    {
      m_firewallConfigs.push_back(firewallConfigsJsonList[firewallConfigsIndex].AsObject());
    }
  }



  return *this;
}
