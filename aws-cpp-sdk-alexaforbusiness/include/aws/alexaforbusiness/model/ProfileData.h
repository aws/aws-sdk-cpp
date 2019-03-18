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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The data of a room profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ProfileData">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API ProfileData
  {
  public:
    ProfileData();
    ProfileData(Aws::Utils::Json::JsonView jsonValue);
    ProfileData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a room profile.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

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
    inline ProfileData& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline ProfileData& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a room profile.</p>
     */
    inline ProfileData& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


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
    inline ProfileData& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of a room profile.</p>
     */
    inline ProfileData& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of a room profile.</p>
     */
    inline ProfileData& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>Retrieves if the profile data is default or not.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Retrieves if the profile data is default or not.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Retrieves if the profile data is default or not.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Retrieves if the profile data is default or not.</p>
     */
    inline ProfileData& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The address of a room profile.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The address of a room profile.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

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
    inline ProfileData& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The address of a room profile.</p>
     */
    inline ProfileData& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The address of a room profile.</p>
     */
    inline ProfileData& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The timezone of a room profile.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline ProfileData& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline ProfileData& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The timezone of a room profile.</p>
     */
    inline ProfileData& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

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
    inline ProfileData& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit of a room profile.</p>
     */
    inline ProfileData& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline const TemperatureUnit& GetTemperatureUnit() const{ return m_temperatureUnit; }

    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline bool TemperatureUnitHasBeenSet() const { return m_temperatureUnitHasBeenSet; }

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
    inline ProfileData& WithTemperatureUnit(const TemperatureUnit& value) { SetTemperatureUnit(value); return *this;}

    /**
     * <p>The temperature unit of a room profile.</p>
     */
    inline ProfileData& WithTemperatureUnit(TemperatureUnit&& value) { SetTemperatureUnit(std::move(value)); return *this;}


    /**
     * <p>The wake word of a room profile.</p>
     */
    inline const WakeWord& GetWakeWord() const{ return m_wakeWord; }

    /**
     * <p>The wake word of a room profile.</p>
     */
    inline bool WakeWordHasBeenSet() const { return m_wakeWordHasBeenSet; }

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
    inline ProfileData& WithWakeWord(const WakeWord& value) { SetWakeWord(value); return *this;}

    /**
     * <p>The wake word of a room profile.</p>
     */
    inline ProfileData& WithWakeWord(WakeWord&& value) { SetWakeWord(std::move(value)); return *this;}

  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;

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
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
