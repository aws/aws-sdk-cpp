﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetThirdPartyFirewallAssociationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetThirdPartyFirewallAssociationStatusResult::GetThirdPartyFirewallAssociationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetThirdPartyFirewallAssociationStatusResult& GetThirdPartyFirewallAssociationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThirdPartyFirewallStatus"))
  {
    m_thirdPartyFirewallStatus = ThirdPartyFirewallAssociationStatusMapper::GetThirdPartyFirewallAssociationStatusForName(jsonValue.GetString("ThirdPartyFirewallStatus"));
    m_thirdPartyFirewallStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MarketplaceOnboardingStatus"))
  {
    m_marketplaceOnboardingStatus = MarketplaceSubscriptionOnboardingStatusMapper::GetMarketplaceSubscriptionOnboardingStatusForName(jsonValue.GetString("MarketplaceOnboardingStatus"));
    m_marketplaceOnboardingStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
