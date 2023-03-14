/**
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

GetThirdPartyFirewallAssociationStatusResult::GetThirdPartyFirewallAssociationStatusResult() : 
    m_thirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus::NOT_SET),
    m_marketplaceOnboardingStatus(MarketplaceSubscriptionOnboardingStatus::NOT_SET)
{
}

GetThirdPartyFirewallAssociationStatusResult::GetThirdPartyFirewallAssociationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_thirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus::NOT_SET),
    m_marketplaceOnboardingStatus(MarketplaceSubscriptionOnboardingStatus::NOT_SET)
{
  *this = result;
}

GetThirdPartyFirewallAssociationStatusResult& GetThirdPartyFirewallAssociationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThirdPartyFirewallStatus"))
  {
    m_thirdPartyFirewallStatus = ThirdPartyFirewallAssociationStatusMapper::GetThirdPartyFirewallAssociationStatusForName(jsonValue.GetString("ThirdPartyFirewallStatus"));

  }

  if(jsonValue.ValueExists("MarketplaceOnboardingStatus"))
  {
    m_marketplaceOnboardingStatus = MarketplaceSubscriptionOnboardingStatusMapper::GetMarketplaceSubscriptionOnboardingStatusForName(jsonValue.GetString("MarketplaceOnboardingStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
