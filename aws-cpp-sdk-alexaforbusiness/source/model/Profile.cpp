/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Profile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Profile::Profile() : 
    m_profileArnHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_temperatureUnit(TemperatureUnit::NOT_SET),
    m_temperatureUnitHasBeenSet(false),
    m_wakeWord(WakeWord::NOT_SET),
    m_wakeWordHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_setupModeDisabled(false),
    m_setupModeDisabledHasBeenSet(false),
    m_maxVolumeLimit(0),
    m_maxVolumeLimitHasBeenSet(false),
    m_pSTNEnabled(false),
    m_pSTNEnabledHasBeenSet(false),
    m_addressBookArnHasBeenSet(false),
    m_meetingRoomConfigurationHasBeenSet(false)
{
}

Profile::Profile(JsonView jsonValue) : 
    m_profileArnHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_temperatureUnit(TemperatureUnit::NOT_SET),
    m_temperatureUnitHasBeenSet(false),
    m_wakeWord(WakeWord::NOT_SET),
    m_wakeWordHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_setupModeDisabled(false),
    m_setupModeDisabledHasBeenSet(false),
    m_maxVolumeLimit(0),
    m_maxVolumeLimitHasBeenSet(false),
    m_pSTNEnabled(false),
    m_pSTNEnabledHasBeenSet(false),
    m_addressBookArnHasBeenSet(false),
    m_meetingRoomConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Profile& Profile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileArn"))
  {
    m_profileArn = jsonValue.GetString("ProfileArn");

    m_profileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");

    m_isDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DistanceUnit"))
  {
    m_distanceUnit = DistanceUnitMapper::GetDistanceUnitForName(jsonValue.GetString("DistanceUnit"));

    m_distanceUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemperatureUnit"))
  {
    m_temperatureUnit = TemperatureUnitMapper::GetTemperatureUnitForName(jsonValue.GetString("TemperatureUnit"));

    m_temperatureUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WakeWord"))
  {
    m_wakeWord = WakeWordMapper::GetWakeWordForName(jsonValue.GetString("WakeWord"));

    m_wakeWordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = jsonValue.GetString("Locale");

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetupModeDisabled"))
  {
    m_setupModeDisabled = jsonValue.GetBool("SetupModeDisabled");

    m_setupModeDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxVolumeLimit"))
  {
    m_maxVolumeLimit = jsonValue.GetInteger("MaxVolumeLimit");

    m_maxVolumeLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PSTNEnabled"))
  {
    m_pSTNEnabled = jsonValue.GetBool("PSTNEnabled");

    m_pSTNEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressBookArn"))
  {
    m_addressBookArn = jsonValue.GetString("AddressBookArn");

    m_addressBookArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeetingRoomConfiguration"))
  {
    m_meetingRoomConfiguration = jsonValue.GetObject("MeetingRoomConfiguration");

    m_meetingRoomConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Profile::Jsonize() const
{
  JsonValue payload;

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("IsDefault", m_isDefault);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

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

  if(m_addressBookArnHasBeenSet)
  {
   payload.WithString("AddressBookArn", m_addressBookArn);

  }

  if(m_meetingRoomConfigurationHasBeenSet)
  {
   payload.WithObject("MeetingRoomConfiguration", m_meetingRoomConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
