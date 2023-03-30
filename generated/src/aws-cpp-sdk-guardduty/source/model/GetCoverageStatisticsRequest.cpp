/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetCoverageStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCoverageStatisticsRequest::GetCoverageStatisticsRequest() : 
    m_detectorIdHasBeenSet(false),
    m_filterCriteriaHasBeenSet(false),
    m_statisticsTypeHasBeenSet(false)
{
}

Aws::String GetCoverageStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("filterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_statisticsTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsTypeJsonList(m_statisticsType.size());
   for(unsigned statisticsTypeIndex = 0; statisticsTypeIndex < statisticsTypeJsonList.GetLength(); ++statisticsTypeIndex)
   {
     statisticsTypeJsonList[statisticsTypeIndex].AsString(CoverageStatisticsTypeMapper::GetNameForCoverageStatisticsType(m_statisticsType[statisticsTypeIndex]));
   }
   payload.WithArray("statisticsType", std::move(statisticsTypeJsonList));

  }

  return payload.View().WriteReadable();
}




