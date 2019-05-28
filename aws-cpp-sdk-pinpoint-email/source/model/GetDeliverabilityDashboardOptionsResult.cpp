/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint-email/model/GetDeliverabilityDashboardOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeliverabilityDashboardOptionsResult::GetDeliverabilityDashboardOptionsResult() : 
    m_dashboardEnabled(false),
    m_accountStatus(DeliverabilityDashboardAccountStatus::NOT_SET)
{
}

GetDeliverabilityDashboardOptionsResult::GetDeliverabilityDashboardOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dashboardEnabled(false),
    m_accountStatus(DeliverabilityDashboardAccountStatus::NOT_SET)
{
  *this = result;
}

GetDeliverabilityDashboardOptionsResult& GetDeliverabilityDashboardOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardEnabled"))
  {
    m_dashboardEnabled = jsonValue.GetBool("DashboardEnabled");

  }

  if(jsonValue.ValueExists("SubscriptionExpiryDate"))
  {
    m_subscriptionExpiryDate = jsonValue.GetDouble("SubscriptionExpiryDate");

  }

  if(jsonValue.ValueExists("AccountStatus"))
  {
    m_accountStatus = DeliverabilityDashboardAccountStatusMapper::GetDeliverabilityDashboardAccountStatusForName(jsonValue.GetString("AccountStatus"));

  }

  if(jsonValue.ValueExists("ActiveSubscribedDomains"))
  {
    Array<JsonView> activeSubscribedDomainsJsonList = jsonValue.GetArray("ActiveSubscribedDomains");
    for(unsigned activeSubscribedDomainsIndex = 0; activeSubscribedDomainsIndex < activeSubscribedDomainsJsonList.GetLength(); ++activeSubscribedDomainsIndex)
    {
      m_activeSubscribedDomains.push_back(activeSubscribedDomainsJsonList[activeSubscribedDomainsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PendingExpirationSubscribedDomains"))
  {
    Array<JsonView> pendingExpirationSubscribedDomainsJsonList = jsonValue.GetArray("PendingExpirationSubscribedDomains");
    for(unsigned pendingExpirationSubscribedDomainsIndex = 0; pendingExpirationSubscribedDomainsIndex < pendingExpirationSubscribedDomainsJsonList.GetLength(); ++pendingExpirationSubscribedDomainsIndex)
    {
      m_pendingExpirationSubscribedDomains.push_back(pendingExpirationSubscribedDomainsJsonList[pendingExpirationSubscribedDomainsIndex].AsObject());
    }
  }



  return *this;
}
