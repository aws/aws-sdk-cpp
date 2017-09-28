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

CampaignLimits::CampaignLimits(const JsonValue& jsonValue) : 
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

CampaignLimits& CampaignLimits::operator =(const JsonValue& jsonValue)
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
