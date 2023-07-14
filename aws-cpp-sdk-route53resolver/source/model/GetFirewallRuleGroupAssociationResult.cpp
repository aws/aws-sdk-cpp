﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetFirewallRuleGroupAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFirewallRuleGroupAssociationResult::GetFirewallRuleGroupAssociationResult()
{
}

GetFirewallRuleGroupAssociationResult::GetFirewallRuleGroupAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFirewallRuleGroupAssociationResult& GetFirewallRuleGroupAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallRuleGroupAssociation"))
  {
    m_firewallRuleGroupAssociation = jsonValue.GetObject("FirewallRuleGroupAssociation");

  }



  return *this;
}
