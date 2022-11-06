/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Subscription::Subscription() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeCommitmentInSeconds(0),
    m_timeCommitmentInSecondsHasBeenSet(false),
    m_autoRenew(AutoRenew::NOT_SET),
    m_autoRenewHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_proactiveEngagementStatus(ProactiveEngagementStatus::NOT_SET),
    m_proactiveEngagementStatusHasBeenSet(false),
    m_subscriptionLimitsHasBeenSet(false),
    m_subscriptionArnHasBeenSet(false)
{
}

Subscription::Subscription(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeCommitmentInSeconds(0),
    m_timeCommitmentInSecondsHasBeenSet(false),
    m_autoRenew(AutoRenew::NOT_SET),
    m_autoRenewHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_proactiveEngagementStatus(ProactiveEngagementStatus::NOT_SET),
    m_proactiveEngagementStatusHasBeenSet(false),
    m_subscriptionLimitsHasBeenSet(false),
    m_subscriptionArnHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeCommitmentInSeconds"))
  {
    m_timeCommitmentInSeconds = jsonValue.GetInt64("TimeCommitmentInSeconds");

    m_timeCommitmentInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoRenew"))
  {
    m_autoRenew = AutoRenewMapper::GetAutoRenewForName(jsonValue.GetString("AutoRenew"));

    m_autoRenewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limits"))
  {
    Aws::Utils::Array<JsonView> limitsJsonList = jsonValue.GetArray("Limits");
    for(unsigned limitsIndex = 0; limitsIndex < limitsJsonList.GetLength(); ++limitsIndex)
    {
      m_limits.push_back(limitsJsonList[limitsIndex].AsObject());
    }
    m_limitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProactiveEngagementStatus"))
  {
    m_proactiveEngagementStatus = ProactiveEngagementStatusMapper::GetProactiveEngagementStatusForName(jsonValue.GetString("ProactiveEngagementStatus"));

    m_proactiveEngagementStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionLimits"))
  {
    m_subscriptionLimits = jsonValue.GetObject("SubscriptionLimits");

    m_subscriptionLimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionArn"))
  {
    m_subscriptionArn = jsonValue.GetString("SubscriptionArn");

    m_subscriptionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_timeCommitmentInSecondsHasBeenSet)
  {
   payload.WithInt64("TimeCommitmentInSeconds", m_timeCommitmentInSeconds);

  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithString("AutoRenew", AutoRenewMapper::GetNameForAutoRenew(m_autoRenew));
  }

  if(m_limitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> limitsJsonList(m_limits.size());
   for(unsigned limitsIndex = 0; limitsIndex < limitsJsonList.GetLength(); ++limitsIndex)
   {
     limitsJsonList[limitsIndex].AsObject(m_limits[limitsIndex].Jsonize());
   }
   payload.WithArray("Limits", std::move(limitsJsonList));

  }

  if(m_proactiveEngagementStatusHasBeenSet)
  {
   payload.WithString("ProactiveEngagementStatus", ProactiveEngagementStatusMapper::GetNameForProactiveEngagementStatus(m_proactiveEngagementStatus));
  }

  if(m_subscriptionLimitsHasBeenSet)
  {
   payload.WithObject("SubscriptionLimits", m_subscriptionLimits.Jsonize());

  }

  if(m_subscriptionArnHasBeenSet)
  {
   payload.WithString("SubscriptionArn", m_subscriptionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
