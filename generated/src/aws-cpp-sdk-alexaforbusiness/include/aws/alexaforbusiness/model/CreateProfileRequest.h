/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DistanceUnit.h>
#include <aws/alexaforbusiness/model/TemperatureUnit.h>
#include <aws/alexaforbusiness/model/WakeWord.h>
#include <aws/alexaforbusiness/model/CreateMeetingRoomConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a room profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of a room profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

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
    inline CreateProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of a room profile.</p>
     */
    inline CreateProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of a room profile.</p>
     */
    inline CreateProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline CreateProfileRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline CreateProfileRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone used by a room profile.</p>
     */
    inline CreateProfileRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The valid address for the room.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The valid address for the room.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The valid address for the room.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The valid address for the room.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The valid address for the room.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The valid address for the room.</p>
     */
    inline CreateProfileRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The valid address for the room.</p>
     */
    inline CreateProfileRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The valid address for the room.</p>
     */
    inline CreateProfileRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The distance unit to be used by devices in the profile.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit to be used by devices in the profile.</p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

    /**
     * <p>The distance unit to be used by devices in the profile.</p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>The distance unit to be used by devices in the profile.</p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>The distance unit to be used by devices in the profile.</p>
     */
    inline CreateProfileRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit to be used by devices in the profile.</p>
     */
    inline CreateProfileRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The temperature unit to be used by devices in the profile.</p>
     */
    inline const TemperatureUnit& GetTemperatureUnit() const{ return m_temperatureUnit; }

    /**
     * <p>The temperature unit to be used by devices in the profile.</p>
     */
    inline bool TemperatureUnitHasBeenSet() const { return m_temperatureUnitHasBeenSet; }

    /**
     * <p>The temperature unit to be used by devices in the profile.</p>
     */
    inline void SetTemperatureUnit(const TemperatureUnit& value) { m_temperatureUnitHasBeenSet = true; m_temperatureUnit = value; }

    /**
     * <p>The temperature unit to be used by devices in the profile.</p>
     */
    inline void SetTemperatureUnit(TemperatureUnit&& value) { m_temperatureUnitHasBeenSet = true; m_temperatureUnit = std::move(value); }

    /**
     * <p>The temperature unit to be used by devices in the profile.</p>
     */
    inline CreateProfileRequest& WithTemperatureUnit(const TemperatureUnit& value) { SetTemperatureUnit(value); return *this;}

    /**
     * <p>The temperature unit to be used by devices in the profile.</p>
     */
    inline CreateProfileRequest& WithTemperatureUnit(TemperatureUnit&& value) { SetTemperatureUnit(std::move(value)); return *this;}


    /**
     * <p>A wake word for Alexa, Echo, Amazon, or a computer.</p>
     */
    inline const WakeWord& GetWakeWord() const{ return m_wakeWord; }

    /**
     * <p>A wake word for Alexa, Echo, Amazon, or a computer.</p>
     */
    inline bool WakeWordHasBeenSet() const { return m_wakeWordHasBeenSet; }

    /**
     * <p>A wake word for Alexa, Echo, Amazon, or a computer.</p>
     */
    inline void SetWakeWord(const WakeWord& value) { m_wakeWordHasBeenSet = true; m_wakeWord = value; }

    /**
     * <p>A wake word for Alexa, Echo, Amazon, or a computer.</p>
     */
    inline void SetWakeWord(WakeWord&& value) { m_wakeWordHasBeenSet = true; m_wakeWord = std::move(value); }

    /**
     * <p>A wake word for Alexa, Echo, Amazon, or a computer.</p>
     */
    inline CreateProfileRequest& WithWakeWord(const WakeWord& value) { SetWakeWord(value); return *this;}

    /**
     * <p>A wake word for Alexa, Echo, Amazon, or a computer.</p>
     */
    inline CreateProfileRequest& WithWakeWord(WakeWord&& value) { SetWakeWord(std::move(value)); return *this;}


    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline CreateProfileRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline CreateProfileRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>The locale of the room profile. (This is currently only available to a
     * limited preview audience.)</p>
     */
    inline CreateProfileRequest& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline CreateProfileRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline CreateProfileRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The user-specified token that is used during the creation of a profile.</p>
     */
    inline CreateProfileRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Whether room profile setup is enabled.</p>
     */
    inline bool GetSetupModeDisabled() const{ return m_setupModeDisabled; }

    /**
     * <p>Whether room profile setup is enabled.</p>
     */
    inline bool SetupModeDisabledHasBeenSet() const { return m_setupModeDisabledHasBeenSet; }

    /**
     * <p>Whether room profile setup is enabled.</p>
     */
    inline void SetSetupModeDisabled(bool value) { m_setupModeDisabledHasBeenSet = true; m_setupModeDisabled = value; }

    /**
     * <p>Whether room profile setup is enabled.</p>
     */
    inline CreateProfileRequest& WithSetupModeDisabled(bool value) { SetSetupModeDisabled(value); return *this;}


    /**
     * <p>The maximum volume limit for a room profile.</p>
     */
    inline int GetMaxVolumeLimit() const{ return m_maxVolumeLimit; }

    /**
     * <p>The maximum volume limit for a room profile.</p>
     */
    inline bool MaxVolumeLimitHasBeenSet() const { return m_maxVolumeLimitHasBeenSet; }

    /**
     * <p>The maximum volume limit for a room profile.</p>
     */
    inline void SetMaxVolumeLimit(int value) { m_maxVolumeLimitHasBeenSet = true; m_maxVolumeLimit = value; }

    /**
     * <p>The maximum volume limit for a room profile.</p>
     */
    inline CreateProfileRequest& WithMaxVolumeLimit(int value) { SetMaxVolumeLimit(value); return *this;}


    /**
     * <p>Whether PSTN calling is enabled.</p>
     */
    inline bool GetPSTNEnabled() const{ return m_pSTNEnabled; }

    /**
     * <p>Whether PSTN calling is enabled.</p>
     */
    inline bool PSTNEnabledHasBeenSet() const { return m_pSTNEnabledHasBeenSet; }

    /**
     * <p>Whether PSTN calling is enabled.</p>
     */
    inline void SetPSTNEnabled(bool value) { m_pSTNEnabledHasBeenSet = true; m_pSTNEnabled = value; }

    /**
     * <p>Whether PSTN calling is enabled.</p>
     */
    inline CreateProfileRequest& WithPSTNEnabled(bool value) { SetPSTNEnabled(value); return *this;}


    /**
     * <p>Whether data retention of the profile is enabled.</p>
     */
    inline bool GetDataRetentionOptIn() const{ return m_dataRetentionOptIn; }

    /**
     * <p>Whether data retention of the profile is enabled.</p>
     */
    inline bool DataRetentionOptInHasBeenSet() const { return m_dataRetentionOptInHasBeenSet; }

    /**
     * <p>Whether data retention of the profile is enabled.</p>
     */
    inline void SetDataRetentionOptIn(bool value) { m_dataRetentionOptInHasBeenSet = true; m_dataRetentionOptIn = value; }

    /**
     * <p>Whether data retention of the profile is enabled.</p>
     */
    inline CreateProfileRequest& WithDataRetentionOptIn(bool value) { SetDataRetentionOptIn(value); return *this;}


    /**
     * <p>The meeting room settings of a room profile.</p>
     */
    inline const CreateMeetingRoomConfiguration& GetMeetingRoomConfiguration() const{ return m_meetingRoomConfiguration; }

    /**
     * <p>The meeting room settings of a room profile.</p>
     */
    inline bool MeetingRoomConfigurationHasBeenSet() const { return m_meetingRoomConfigurationHasBeenSet; }

    /**
     * <p>The meeting room settings of a room profile.</p>
     */
    inline void SetMeetingRoomConfiguration(const CreateMeetingRoomConfiguration& value) { m_meetingRoomConfigurationHasBeenSet = true; m_meetingRoomConfiguration = value; }

    /**
     * <p>The meeting room settings of a room profile.</p>
     */
    inline void SetMeetingRoomConfiguration(CreateMeetingRoomConfiguration&& value) { m_meetingRoomConfigurationHasBeenSet = true; m_meetingRoomConfiguration = std::move(value); }

    /**
     * <p>The meeting room settings of a room profile.</p>
     */
    inline CreateProfileRequest& WithMeetingRoomConfiguration(const CreateMeetingRoomConfiguration& value) { SetMeetingRoomConfiguration(value); return *this;}

    /**
     * <p>The meeting room settings of a room profile.</p>
     */
    inline CreateProfileRequest& WithMeetingRoomConfiguration(CreateMeetingRoomConfiguration&& value) { SetMeetingRoomConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags for the profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the profile.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the profile.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the profile.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the profile.</p>
     */
    inline CreateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the profile.</p>
     */
    inline CreateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the profile.</p>
     */
    inline CreateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the profile.</p>
     */
    inline CreateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    TemperatureUnit m_temperatureUnit;
    bool m_temperatureUnitHasBeenSet = false;

    WakeWord m_wakeWord;
    bool m_wakeWordHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_setupModeDisabled;
    bool m_setupModeDisabledHasBeenSet = false;

    int m_maxVolumeLimit;
    bool m_maxVolumeLimitHasBeenSet = false;

    bool m_pSTNEnabled;
    bool m_pSTNEnabledHasBeenSet = false;

    bool m_dataRetentionOptIn;
    bool m_dataRetentionOptInHasBeenSet = false;

    CreateMeetingRoomConfiguration m_meetingRoomConfiguration;
    bool m_meetingRoomConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
