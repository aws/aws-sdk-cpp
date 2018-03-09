﻿/*
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
    m_addressHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_temperatureUnit(TemperatureUnit::NOT_SET),
    m_temperatureUnitHasBeenSet(false),
    m_wakeWord(WakeWord::NOT_SET),
    m_wakeWordHasBeenSet(false),
    m_setupModeDisabled(false),
    m_setupModeDisabledHasBeenSet(false),
    m_maxVolumeLimit(0),
    m_maxVolumeLimitHasBeenSet(false),
    m_pSTNEnabled(false),
    m_pSTNEnabledHasBeenSet(false)
{
}

Profile::Profile(const JsonValue& jsonValue) : 
    m_profileArnHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_temperatureUnit(TemperatureUnit::NOT_SET),
    m_temperatureUnitHasBeenSet(false),
    m_wakeWord(WakeWord::NOT_SET),
    m_wakeWordHasBeenSet(false),
    m_setupModeDisabled(false),
    m_setupModeDisabledHasBeenSet(false),
    m_maxVolumeLimit(0),
    m_maxVolumeLimitHasBeenSet(false),
    m_pSTNEnabled(false),
    m_pSTNEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

Profile& Profile::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
