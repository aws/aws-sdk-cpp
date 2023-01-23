/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetFindingsStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingsStatisticsRequest::GetFindingsStatisticsRequest() : 
    m_detectorIdHasBeenSet(false),
    m_findingStatisticTypesHasBeenSet(false),
    m_findingCriteriaHasBeenSet(false)
{
}

Aws::String GetFindingsStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingStatisticTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingStatisticTypesJsonList(m_findingStatisticTypes.size());
   for(unsigned findingStatisticTypesIndex = 0; findingStatisticTypesIndex < findingStatisticTypesJsonList.GetLength(); ++findingStatisticTypesIndex)
   {
     findingStatisticTypesJsonList[findingStatisticTypesIndex].AsString(FindingStatisticTypeMapper::GetNameForFindingStatisticType(m_findingStatisticTypes[findingStatisticTypesIndex]));
   }
   payload.WithArray("findingStatisticTypes", std::move(findingStatisticTypesJsonList));

  }

  if(m_findingCriteriaHasBeenSet)
  {
   payload.WithObject("findingCriteria", m_findingCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




