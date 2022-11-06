/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AssociateSubnetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateSubnetsResult::AssociateSubnetsResult()
{
}

AssociateSubnetsResult::AssociateSubnetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateSubnetsResult& AssociateSubnetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("SubnetMappings"))
  {
    Aws::Utils::Array<JsonView> subnetMappingsJsonList = jsonValue.GetArray("SubnetMappings");
    for(unsigned subnetMappingsIndex = 0; subnetMappingsIndex < subnetMappingsJsonList.GetLength(); ++subnetMappingsIndex)
    {
      m_subnetMappings.push_back(subnetMappingsJsonList[subnetMappingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");

  }



  return *this;
}
