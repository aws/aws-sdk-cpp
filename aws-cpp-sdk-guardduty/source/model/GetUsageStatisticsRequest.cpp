/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetUsageStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUsageStatisticsRequest::GetUsageStatisticsRequest() : 
    m_detectorIdHasBeenSet(false),
    m_usageStatisticType(UsageStatisticType::NOT_SET),
    m_usageStatisticTypeHasBeenSet(false),
    m_usageCriteriaHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetUsageStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usageStatisticTypeHasBeenSet)
  {
   payload.WithString("usageStatisticsType", UsageStatisticTypeMapper::GetNameForUsageStatisticType(m_usageStatisticType));
  }

  if(m_usageCriteriaHasBeenSet)
  {
   payload.WithObject("usageCriteria", m_usageCriteria.Jsonize());

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




