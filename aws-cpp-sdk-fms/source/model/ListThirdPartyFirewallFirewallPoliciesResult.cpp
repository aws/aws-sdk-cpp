/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThirdPartyFirewallFirewallPoliciesResult::ListThirdPartyFirewallFirewallPoliciesResult()
{
}

ListThirdPartyFirewallFirewallPoliciesResult::ListThirdPartyFirewallFirewallPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThirdPartyFirewallFirewallPoliciesResult& ListThirdPartyFirewallFirewallPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThirdPartyFirewallFirewallPolicies"))
  {
    Aws::Utils::Array<JsonView> thirdPartyFirewallFirewallPoliciesJsonList = jsonValue.GetArray("ThirdPartyFirewallFirewallPolicies");
    for(unsigned thirdPartyFirewallFirewallPoliciesIndex = 0; thirdPartyFirewallFirewallPoliciesIndex < thirdPartyFirewallFirewallPoliciesJsonList.GetLength(); ++thirdPartyFirewallFirewallPoliciesIndex)
    {
      m_thirdPartyFirewallFirewallPolicies.push_back(thirdPartyFirewallFirewallPoliciesJsonList[thirdPartyFirewallFirewallPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
