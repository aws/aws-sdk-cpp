/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_dataRetentionOptIn(false),
    m_dataRetentionOptInHasBeenSet(false),
    m_meetingRoomConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

  if(m_dataRetentionOptInHasBeenSet)
  {
   payload.WithBool("DataRetentionOptIn", m_dataRetentionOptIn);

  }

  if(m_meetingRoomConfigurationHasBeenSet)
  {
   payload.WithObject("MeetingRoomConfiguration", m_meetingRoomConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.CreateProfile"));
  return headers;

}




