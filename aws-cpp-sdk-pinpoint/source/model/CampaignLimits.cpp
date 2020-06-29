/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CampaignLimits::CampaignLimits() : 
    m_daily(0),
    m_dailyHasBeenSet(false),
    m_maximumDuration(0),
    m_maximumDurationHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
}

CampaignLimits::CampaignLimits(JsonView jsonValue) : 
    m_daily(0),
    m_dailyHasBeenSet(false),
    m_maximumDuration(0),
    m_maximumDurationHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignLimits& CampaignLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Daily"))
  {
    m_daily = jsonValue.GetInteger("Daily");

    m_dailyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumDuration"))
  {
    m_maximumDuration = jsonValue.GetInteger("MaximumDuration");

    m_maximumDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessagesPerSecond"))
  {
    m_messagesPerSecond = jsonValue.GetInteger("MessagesPerSecond");

    m_messagesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInteger("Total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignLimits::Jsonize() const
{
  JsonValue payload;

  if(m_dailyHasBeenSet)
  {
   payload.WithInteger("Daily", m_daily);

  }

  if(m_maximumDurationHasBeenSet)
  {
   payload.WithInteger("MaximumDuration", m_maximumDuration);

  }

  if(m_messagesPerSecondHasBeenSet)
  {
   payload.WithInteger("MessagesPerSecond", m_messagesPerSecond);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("Total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
