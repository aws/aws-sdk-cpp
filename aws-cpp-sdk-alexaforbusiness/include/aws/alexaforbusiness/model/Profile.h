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

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DistanceUnit.h>
#include <aws/alexaforbusiness/model/TemperatureUnit.h>
#include <aws/alexaforbusiness/model/WakeWord.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>A room profile with attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Profile">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Profile
  {
  public:
    Profile();
    Profile(const Aws::Utils::Json::JsonValue& jsonValue);
    Profile& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a room profile.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline Profile& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline Profile& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline Profile& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The name of a room profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of a room profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of a room profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of a room profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of a room profile.</p>
     */
    inline Profile& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of a room profile.</p>
     */
    inline Profile& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of a room profile.</p>
     */
    inline Profile& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The address of a room profile.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The address of a room profile.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address of a room profile.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The address of a room profile.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The address of a room profile.</p>
     */
    inline Profile& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The address of a room profile.</p>
     */
    inline Profile& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The address of a room profile.</p>
     */
    inline Profile& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The time zone of a room profile.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of a room profile.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of a room profile.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone of a room profile.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of a room profile.</p>
     */
    inline Profile& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of a room profile.</p>
     */
    inline Profile& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone of a room profile.</p>
     */
    inline Profile& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline Profile& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline Profile& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline const TemperatureUnit& GetTemperatureUnit() const{ return m_temperatureUnit; }

    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline void SetTemperatureUnit(const TemperatureUnit& value) { m_temperatureUnitHasBeenSet = true; m_temperatureUnit = value; }

    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline void SetTemperatureUnit(TemperatureUnit&& value) { m_temperatureUnitHasBeenSet = true; m_temperatureUnit = std::move(value); }

    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline Profile& WithTemperatureUnit(const TemperatureUnit& value) { SetTemperatureUnit(value); return *this;}

    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline Profile& WithTemperatureUnit(TemperatureUnit&& value) { SetTemperatureUnit(std::move(value)); return *this;}


    /**
     * <p>The wake word of a room profile.</p>
     */
    inline const WakeWord& GetWakeWord() const{ return m_wakeWord; }

    /**
     * <p>The wake word of a room profile.</p>
     */
    inline void SetWakeWord(const WakeWord& value) { m_wakeWordHasBeenSet = true; m_wakeWord = value; }

    /**
     * <p>The wake word of a room profile.</p>
     */
    inline void SetWakeWord(WakeWord&& value) { m_wakeWordHasBeenSet = true; m_wakeWord = std::move(value); }

    /**
     * <p>The wake word of a room profile.</p>
     */
    inline Profile& WithWakeWord(const WakeWord& value) { SetWakeWord(value); return *this;}

    /**
     * <p>The wake word of a room profile.</p>
     */
    inline Profile& WithWakeWord(WakeWord&& value) { SetWakeWord(std::move(value)); return *this;}


    /**
     * <p>The setup mode of a room profile.</p>
     */
    inline bool GetSetupModeDisabled() const{ return m_setupModeDisabled; }

    /**
     * <p>The setup mode of a room profile.</p>
     */
    inline void SetSetupModeDisabled(bool value) { m_setupModeDisabledHasBeenSet = true; m_setupModeDisabled = value; }

    /**
     * <p>The setup mode of a room profile.</p>
     */
    inline Profile& WithSetupModeDisabled(bool value) { SetSetupModeDisabled(value); return *this;}


    /**
     * <p>The max volume limit of a room profile.</p>
     */
    inline int GetMaxVolumeLimit() const{ return m_maxVolumeLimit; }

    /**
     * <p>The max volume limit of a room profile.</p>
     */
    inline void SetMaxVolumeLimit(int value) { m_maxVolumeLimitHasBeenSet = true; m_maxVolumeLimit = value; }

    /**
     * <p>The max volume limit of a room profile.</p>
     */
    inline Profile& WithMaxVolumeLimit(int value) { SetMaxVolumeLimit(value); return *this;}


    /**
     * <p>The PSTN setting of a room profile.</p>
     */
    inline bool GetPSTNEnabled() const{ return m_pSTNEnabled; }

    /**
     * <p>The PSTN setting of a room profile.</p>
     */
    inline void SetPSTNEnabled(bool value) { m_pSTNEnabledHasBeenSet = true; m_pSTNEnabled = value; }

    /**
     * <p>The PSTN setting of a room profile.</p>
     */
    inline Profile& WithPSTNEnabled(bool value) { SetPSTNEnabled(value); return *this;}

  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;

    Aws::String m_address;
    bool m_addressHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet;

    TemperatureUnit m_temperatureUnit;
    bool m_temperatureUnitHasBeenSet;

    WakeWord m_wakeWord;
    bool m_wakeWordHasBeenSet;

    bool m_setupModeDisabled;
    bool m_setupModeDisabledHasBeenSet;

    int m_maxVolumeLimit;
    bool m_maxVolumeLimitHasBeenSet;

    bool m_pSTNEnabled;
    bool m_pSTNEnabledHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
