﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignDateRangeKpiResponse.h>
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

CampaignDateRangeKpiResponse::CampaignDateRangeKpiResponse() : 
    m_applicationIdHasBeenSet(false),
    m_campaignIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_kpiNameHasBeenSet(false),
    m_kpiResultHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CampaignDateRangeKpiResponse::CampaignDateRangeKpiResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_campaignIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_kpiNameHasBeenSet(false),
    m_kpiResultHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignDateRangeKpiResponse& CampaignDateRangeKpiResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CampaignId"))
  {
    m_campaignId = jsonValue.GetString("CampaignId");

    m_campaignIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KpiName"))
  {
    m_kpiName = jsonValue.GetString("KpiName");

    m_kpiNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KpiResult"))
  {
    m_kpiResult = jsonValue.GetObject("KpiResult");

    m_kpiResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignDateRangeKpiResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_kpiNameHasBeenSet)
  {
   payload.WithString("KpiName", m_kpiName);

  }

  if(m_kpiResultHasBeenSet)
  {
   payload.WithObject("KpiResult", m_kpiResult.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
