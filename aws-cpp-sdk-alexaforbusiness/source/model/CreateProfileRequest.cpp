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

#include <aws/alexaforbusiness/model/CreateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProfileRequest::CreateProfileRequest() : 
    m_profileNameHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_temperatureUnit(TemperatureUnit::NOT_SET),
    m_temperatureUnitHasBeenSet(false),
    m_wakeWord(WakeWord::NOT_SET),
    m_wakeWordHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_setupModeDisabled(false),
    m_setupModeDisabledHasBeenSet(false),
    m_maxVolumeLimit(0),
    m_maxVolumeLimitHasBeenSet(false),
    m_pSTNEnabled(false),
    m_pSTNEnabledHasBeenSet(false),
    m_meetingRoomConfigurationHasBeenSet(false)
{
}

Aws::String CreateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  if(m_temperatureUnitHasBeenSet)
  {
   payload.WithString("TemperatureUnit", TemperatureUnitMapper::GetNameForTemperatureUnit(m_temperatureUnit));
  }

  if(m_wakeWordHasBeenSet)
  {
   payload.WithString("WakeWord", WakeWordMapper::GetNameForWakeWord(m_wakeWord));
  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", m_locale);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_setupModeDisabledHasBeenSet)
  {
   payload.WithBool("SetupModeDisabled", m_setupModeDisabled);

  }

  if(m_maxVolumeLimitHasBeenSet)
  {
   payload.WithInteger("MaxVolumeLimit", m_maxVolumeLimit);

  }

  if(m_pSTNEnabledHasBeenSet)
  {
   payload.WithBool("PSTNEnabled", m_pSTNEnabled);

  }

  if(m_meetingRoomConfigurationHasBeenSet)
  {
   payload.WithObject("MeetingRoomConfiguration", m_meetingRoomConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.CreateProfile"));
  return headers;

}




