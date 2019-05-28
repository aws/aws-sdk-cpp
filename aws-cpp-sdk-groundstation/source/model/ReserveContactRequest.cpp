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

#include <aws/groundstation/model/ReserveContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReserveContactRequest::ReserveContactRequest() : 
    m_endTimeHasBeenSet(false),
    m_groundStationHasBeenSet(false),
    m_missionProfileArnHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ReserveContactRequest::SerializePayload() const
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

  if(m_missionProfileArnHasBeenSet)
  {
   payload.WithString("missionProfileArn", m_missionProfileArn);

  }

  if(m_satelliteArnHasBeenSet)
  {
   payload.WithString("satelliteArn", m_satelliteArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




