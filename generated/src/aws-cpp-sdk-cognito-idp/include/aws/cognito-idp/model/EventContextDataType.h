/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EventContextDataType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EventContextDataType();
    AWS_COGNITOIDENTITYPROVIDER_API EventContextDataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EventContextDataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline EventContextDataType& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline EventContextDataType& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline EventContextDataType& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline EventContextDataType& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline EventContextDataType& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline EventContextDataType& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's time zone.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline EventContextDataType& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline EventContextDataType& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline EventContextDataType& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's city.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline EventContextDataType& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline EventContextDataType& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline EventContextDataType& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline EventContextDataType& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline EventContextDataType& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline EventContextDataType& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
