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

#include <aws/pinpoint-email/model/DomainDeliverabilityTrackingOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

DomainDeliverabilityTrackingOption::DomainDeliverabilityTrackingOption() : 
    m_domainHasBeenSet(false),
    m_subscriptionStartDateHasBeenSet(false),
    m_inboxPlacementTrackingOptionHasBeenSet(false)
{
}

DomainDeliverabilityTrackingOption::DomainDeliverabilityTrackingOption(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_subscriptionStartDateHasBeenSet(false),
    m_inboxPlacementTrackingOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DomainDeliverabilityTrackingOption& DomainDeliverabilityTrackingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionStartDate"))
  {
    m_subscriptionStartDate = jsonValue.GetDouble("SubscriptionStartDate");

    m_subscriptionStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboxPlacementTrackingOption"))
  {
    m_inboxPlacementTrackingOption = jsonValue.GetObject("InboxPlacementTrackingOption");

    m_inboxPlacementTrackingOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainDeliverabilityTrackingOption::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_subscriptionStartDateHasBeenSet)
  {
   payload.WithDouble("SubscriptionStartDate", m_subscriptionStartDate.SecondsWithMSPrecision());
  }

  if(m_inboxPlacementTrackingOptionHasBeenSet)
  {
   payload.WithObject("InboxPlacementTrackingOption", m_inboxPlacementTrackingOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
