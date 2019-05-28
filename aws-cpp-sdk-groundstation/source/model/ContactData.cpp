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

#include <aws/groundstation/model/ContactData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ContactData::ContactData() : 
    m_contactIdHasBeenSet(false),
    m_contactStatus(ContactStatus::NOT_SET),
    m_contactStatusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_groundStationHasBeenSet(false),
    m_maximumElevationHasBeenSet(false),
    m_missionProfileArnHasBeenSet(false),
    m_postPassEndTimeHasBeenSet(false),
    m_prePassStartTimeHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ContactData::ContactData(JsonView jsonValue) : 
    m_contactIdHasBeenSet(false),
    m_contactStatus(ContactStatus::NOT_SET),
    m_contactStatusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_groundStationHasBeenSet(false),
    m_maximumElevationHasBeenSet(false),
    m_missionProfileArnHasBeenSet(false),
    m_postPassEndTimeHasBeenSet(false),
    m_prePassStartTimeHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ContactData& ContactData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contactId"))
  {
    m_contactId = jsonValue.GetString("contactId");

    m_contactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contactStatus"))
  {
    m_contactStatus = ContactStatusMapper::GetContactStatusForName(jsonValue.GetString("contactStatus"));

    m_contactStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groundStation"))
  {
    m_groundStation = jsonValue.GetString("groundStation");

    m_groundStationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumElevation"))
  {
    m_maximumElevation = jsonValue.GetObject("maximumElevation");

    m_maximumElevationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missionProfileArn"))
  {
    m_missionProfileArn = jsonValue.GetString("missionProfileArn");

    m_missionProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postPassEndTime"))
  {
    m_postPassEndTime = jsonValue.GetDouble("postPassEndTime");

    m_postPassEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prePassStartTime"))
  {
    m_prePassStartTime = jsonValue.GetDouble("prePassStartTime");

    m_prePassStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");

    m_satelliteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactData::Jsonize() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("contactId", m_contactId);

  }

  if(m_contactStatusHasBeenSet)
  {
   payload.WithString("contactStatus", ContactStatusMapper::GetNameForContactStatus(m_contactStatus));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_groundStationHasBeenSet)
  {
   payload.WithString("groundStation", m_groundStation);

  }

  if(m_maximumElevationHasBeenSet)
  {
   payload.WithObject("maximumElevation", m_maximumElevation.Jsonize());

  }

  if(m_missionProfileArnHasBeenSet)
  {
   payload.WithString("missionProfileArn", m_missionProfileArn);

  }

  if(m_postPassEndTimeHasBeenSet)
  {
   payload.WithDouble("postPassEndTime", m_postPassEndTime.SecondsWithMSPrecision());
  }

  if(m_prePassStartTimeHasBeenSet)
  {
   payload.WithDouble("prePassStartTime", m_prePassStartTime.SecondsWithMSPrecision());
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

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
