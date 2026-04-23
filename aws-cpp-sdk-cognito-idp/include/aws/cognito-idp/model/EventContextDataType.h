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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Specifies the user context data captured at the time of an event
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EventContextDataType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API EventContextDataType
  {
  public:
    EventContextDataType();
    EventContextDataType(Aws::Utils::Json::JsonView jsonValue);
    EventContextDataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user's IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The user's IP address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The user's IP address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The user's IP address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The user's IP address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The user's IP address.</p>
     */
    inline EventContextDataType& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The user's IP address.</p>
     */
    inline EventContextDataType& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The user's IP address.</p>
     */
    inline EventContextDataType& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The user's device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The user's device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The user's device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The user's device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The user's device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The user's device name.</p>
     */
    inline EventContextDataType& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The user's device name.</p>
     */
    inline EventContextDataType& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The user's device name.</p>
     */
    inline EventContextDataType& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The user's time zone.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The user's time zone.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The user's time zone.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The user's time zone.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The user's time zone.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The user's time zone.</p>
     */
    inline EventContextDataType& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The user's time zone.</p>
     */
    inline EventContextDataType& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The user's time zone.</p>
     */
    inline EventContextDataType& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The user's city.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The user's city.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The user's city.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The user's city.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The user's city.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The user's city.</p>
     */
    inline EventContextDataType& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The user's city.</p>
     */
    inline EventContextDataType& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The user's city.</p>
     */
    inline EventContextDataType& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The user's country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The user's country.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The user's country.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The user's country.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The user's country.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The user's country.</p>
     */
    inline EventContextDataType& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The user's country.</p>
     */
    inline EventContextDataType& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The user's country.</p>
     */
    inline EventContextDataType& WithCountry(const char* value) { SetCountry(value); return *this;}

  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    Aws::String m_city;
    bool m_cityHasBeenSet;

    Aws::String m_country;
    bool m_countryHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
