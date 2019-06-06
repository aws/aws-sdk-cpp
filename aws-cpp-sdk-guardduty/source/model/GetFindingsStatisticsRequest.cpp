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
   Array<JsonValue> findingStatisticTypesJsonList(m_findingStatisticTypes.size());
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




