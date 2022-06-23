/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessageCampaign.h>
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

InAppMessageCampaign::InAppMessageCampaign() : 
    m_campaignIdHasBeenSet(false),
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_inAppMessageHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_sessionCap(0),
    m_sessionCapHasBeenSet(false),
    m_totalCap(0),
    m_totalCapHasBeenSet(false),
    m_treatmentIdHasBeenSet(false)
{
}

InAppMessageCampaign::InAppMessageCampaign(JsonView jsonValue) : 
    m_campaignIdHasBeenSet(false),
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_inAppMessageHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_sessionCap(0),
    m_sessionCapHasBeenSet(false),
    m_totalCap(0),
    m_totalCapHasBeenSet(false),
    m_treatmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessageCampaign& InAppMessageCampaign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignId"))
  {
    m_campaignId = jsonValue.GetString("CampaignId");

    m_campaignIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailyCap"))
  {
    m_dailyCap = jsonValue.GetInteger("DailyCap");

    m_dailyCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InAppMessage"))
  {
    m_inAppMessage = jsonValue.GetObject("InAppMessage");

    m_inAppMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionCap"))
  {
    m_sessionCap = jsonValue.GetInteger("SessionCap");

    m_sessionCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCap"))
  {
    m_totalCap = jsonValue.GetInteger("TotalCap");

    m_totalCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatmentId"))
  {
    m_treatmentId = jsonValue.GetString("TreatmentId");

    m_treatmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessageCampaign::Jsonize() const
{
  JsonValue payload;

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  if(m_dailyCapHasBeenSet)
  {
   payload.WithInteger("DailyCap", m_dailyCap);

  }

  if(m_inAppMessageHasBeenSet)
  {
   payload.WithObject("InAppMessage", m_inAppMessage.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_sessionCapHasBeenSet)
  {
   payload.WithInteger("SessionCap", m_sessionCap);

  }

  if(m_totalCapHasBeenSet)
  {
   payload.WithInteger("TotalCap", m_totalCap);

  }

  if(m_treatmentIdHasBeenSet)
  {
   payload.WithString("TreatmentId", m_treatmentId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
