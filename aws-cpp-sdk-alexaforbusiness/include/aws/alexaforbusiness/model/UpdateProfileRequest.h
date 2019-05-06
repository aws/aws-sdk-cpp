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
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DistanceUnit.h>
#include <aws/alexaforbusiness/model/TemperatureUnit.h>
#include <aws/alexaforbusiness/model/WakeWord.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateProfileRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline UpdateProfileRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline UpdateProfileRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room profile to update. Required.</p>
     */
    inline UpdateProfileRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The updated name for the room profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline UpdateProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline UpdateProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The updated name for the room profile.</p>
     */
    inline UpdateProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>Sets the profile as default if selected. If this is missing, no update is
     * done to the default status.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Sets the profile as default if selected. If this is missing, no update is
     * done to the default status.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Sets the profile as default if selected. If this is missing, no update is
     * done to the default status.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Sets the profile as default if selected. If this is missing, no update is
     * done to the default status.</p>
     */
    inline UpdateProfileRequest& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline UpdateProfileRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline UpdateProfileRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The updated timezone for the room profile.</p>
     */
    inline UpdateProfileRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The updated address for the room profile.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline UpdateProfileRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline UpdateProfileRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The updated address for the room profile.</p>
     */
    inline UpdateProfileRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The updated distance unit for the room profile.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The updated distance unit for the room profile.</p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

    /**
     * <p>The updated distance unit for the room profile.</p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>The updated distance unit for the room profile.</p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>The updated distance unit for the room profile.</p>
     */
    inline UpdateProfileRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The updated distance unit for the room profile.</p>
     */
    inline UpdateProfileRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The updated temperature unit for the room profile.</p>
     */
    inline const TemperatureUnit& GetTemperatureUnit() const{ return m_temperatureUnit; }

    /**
     * <p>The updated temperature unit for the room profile.</p>
     */
    inline bool TemperatureUnitHasBeenSet() const { return m_temperatureUnitHasBeenSet; }

    /**
     * <p>The updated temperature unit for the room profile.</p>
     */
    inline void SetTemperatureUnit(const TemperatureUnit& value) { m_temperatureUnitHasBeenSet = true; m_temperatureUnit = value; }

    /**
     * <p>The updated temperature unit for the room profile.</p>
     */
    inline void SetTemperatureUnit(TemperatureUnit&& value) { m_temperatureUnitHasBeenSet = true; m_temperatureUnit = std::move(value); }

    /**
     * <p>The updated temperature unit for the room profile.</p>
     */
    inline UpdateProfileRequest& WithTemperatureUnit(const TemperatureUnit& value) { SetTemperatureUnit(value); return *this;}

    /**
     * <p>The updated temperature unit for the room profile.</p>
     */
    inline UpdateProfileRequest& WithTemperatureUnit(TemperatureUnit&& value) { SetTemperatureUnit(std::move(value)); return *this;}


    /**
     * <p>The updated wake word for the room profile.</p>
     */
    inline const WakeWord& GetWakeWord() const{ return m_wakeWord; }

    /**
     * <p>The updated wake word for the room profile.</p>
     */
    inline bool WakeWordHasBeenSet() const { return m_wakeWordHasBeenSet; }

    /**
     * <p>The updated wake word for the room profile.</p>
     */
    inline void SetWakeWord(const WakeWord& value) { m_wakeWordHasBeenSet = true; m_wakeWord = value; }

    /**
     * <p>The updated wake word for the room profile.</p>
     */
    inline void SetWakeWord(WakeWord&& value) { m_wakeWordHasBeenSet = true; m_wakeWord = std::move(value); }

    /**
     * <p>The updated wake word for the room profile.</p>
     */
    inline UpdateProfileRequest& WithWakeWord(const WakeWord& value) { SetWakeWord(value); return *this;}

    /**
     * <p>The updated wake word for the room profile.</p>
     */
    inline UpdateProfileRequest& WithWakeWord(WakeWord&& value) { SetWakeWord(std::move(value)); return *this;}


    /**
     * <p>Whether the setup mode of the profile is enabled.</p>
     */
    inline bool GetSetupModeDisabled() const{ return m_setupModeDisabled; }

    /**
     * <p>Whether the setup mode of the profile is enabled.</p>
     */
    inline bool SetupModeDisabledHasBeenSet() const { return m_setupModeDisabledHasBeenSet; }

    /**
     * <p>Whether the setup mode of the profile is enabled.</p>
     */
    inline void SetSetupModeDisabled(bool value) { m_setupModeDisabledHasBeenSet = true; m_setupModeDisabled = value; }

    /**
     * <p>Whether the setup mode of the profile is enabled.</p>
     */
    inline UpdateProfileRequest& WithSetupModeDisabled(bool value) { SetSetupModeDisabled(value); return *this;}


    /**
     * <p>The updated maximum volume limit for the room profile.</p>
     */
    inline int GetMaxVolumeLimit() const{ return m_maxVolumeLimit; }

    /**
     * <p>The updated maximum volume limit for the room profile.</p>
     */
    inline bool MaxVolumeLimitHasBeenSet() const { return m_maxVolumeLimitHasBeenSet; }

    /**
     * <p>The updated maximum volume limit for the room profile.</p>
     */
    inline void SetMaxVolumeLimit(int value) { m_maxVolumeLimitHasBeenSet = true; m_maxVolumeLimit = value; }

    /**
     * <p>The updated maximum volume limit for the room profile.</p>
     */
    inline UpdateProfileRequest& WithMaxVolumeLimit(int value) { SetMaxVolumeLimit(value); return *this;}


    /**
     * <p>Whether the PSTN setting of the room profile is enabled.</p>
     */
    inline bool GetPSTNEnabled() const{ return m_pSTNEnabled; }

    /**
     * <p>Whether the PSTN setting of the room profile is enabled.</p>
     */
    inline bool PSTNEnabledHasBeenSet() const { return m_pSTNEnabledHasBeenSet; }

    /**
     * <p>Whether the PSTN setting of the room profile is enabled.</p>
     */
    inline void SetPSTNEnabled(bool value) { m_pSTNEnabledHasBeenSet = true; m_pSTNEnabled = value; }

    /**
     * <p>Whether the PSTN setting of the room profile is enabled.</p>
     */
    inline UpdateProfileRequest& WithPSTNEnabled(bool value) { SetPSTNEnabled(value); return *this;}

  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    Aws::String m_address;
    bool m_addressHasBeenSet;

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
