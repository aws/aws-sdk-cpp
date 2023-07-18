﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetFirewallDomainListResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFirewallDomainListResult::GetFirewallDomainListResult()
{
}

GetFirewallDomainListResult::GetFirewallDomainListResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFirewallDomainListResult& GetFirewallDomainListResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallDomainList"))
  {
    m_firewallDomainList = jsonValue.GetObject("FirewallDomainList");

  }



  return *this;
}
