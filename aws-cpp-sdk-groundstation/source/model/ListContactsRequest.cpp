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

#include <aws/groundstation/model/ListContactsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListContactsRequest::ListContactsRequest() : 
    m_endTimeHasBeenSet(false),
    m_groundStationHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_missionProfileArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusListHasBeenSet(false)
{
}

Aws::String ListContactsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_groundStationHasBeenSet)
  {
   payload.WithString("groundStation", m_groundStation);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_missionProfileArnHasBeenSet)
  {
   payload.WithString("missionProfileArn", m_missionProfileArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_satelliteArnHasBeenSet)
  {
   payload.WithString("satelliteArn", m_satelliteArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusListHasBeenSet)
  {
   Array<JsonValue> statusListJsonList(m_statusList.size());
   for(unsigned statusListIndex = 0; statusListIndex < statusListJsonList.GetLength(); ++statusListIndex)
   {
     statusListJsonList[statusListIndex].AsString(ContactStatusMapper::GetNameForContactStatus(m_statusList[statusListIndex]));
   }
   payload.WithArray("statusList", std::move(statusListJsonList));

  }

  return payload.View().WriteReadable();
}




