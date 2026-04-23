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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Phone Number Validate response.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/NumberValidateResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API NumberValidateResponse
  {
  public:
    NumberValidateResponse();
    NumberValidateResponse(Aws::Utils::Json::JsonView jsonValue);
    NumberValidateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline const Aws::String& GetCarrier() const{ return m_carrier; }

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline bool CarrierHasBeenSet() const { return m_carrierHasBeenSet; }

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline void SetCarrier(const Aws::String& value) { m_carrierHasBeenSet = true; m_carrier = value; }

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline void SetCarrier(Aws::String&& value) { m_carrierHasBeenSet = true; m_carrier = std::move(value); }

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline void SetCarrier(const char* value) { m_carrierHasBeenSet = true; m_carrier.assign(value); }

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline NumberValidateResponse& WithCarrier(const Aws::String& value) { SetCarrier(value); return *this;}

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline NumberValidateResponse& WithCarrier(Aws::String&& value) { SetCarrier(std::move(value)); return *this;}

    /**
     * The carrier or servive provider that the phone number is currently registered
     * with.
     */
    inline NumberValidateResponse& WithCarrier(const char* value) { SetCarrier(value); return *this;}


    /**
     * The city where the phone number was originally registered.
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * The city where the phone number was originally registered.
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * The city where the phone number was originally registered.
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * The city where the phone number was originally registered.
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * The city where the phone number was originally registered.
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * The city where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * The city where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * The city where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline const Aws::String& GetCleansedPhoneNumberE164() const{ return m_cleansedPhoneNumberE164; }

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline bool CleansedPhoneNumberE164HasBeenSet() const { return m_cleansedPhoneNumberE164HasBeenSet; }

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline void SetCleansedPhoneNumberE164(const Aws::String& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = value; }

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline void SetCleansedPhoneNumberE164(Aws::String&& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = std::move(value); }

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline void SetCleansedPhoneNumberE164(const char* value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164.assign(value); }

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(const Aws::String& value) { SetCleansedPhoneNumberE164(value); return *this;}

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(Aws::String&& value) { SetCleansedPhoneNumberE164(std::move(value)); return *this;}

    /**
     * The cleansed phone number, shown in E.164 format.
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(const char* value) { SetCleansedPhoneNumberE164(value); return *this;}


    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline const Aws::String& GetCleansedPhoneNumberNational() const{ return m_cleansedPhoneNumberNational; }

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline bool CleansedPhoneNumberNationalHasBeenSet() const { return m_cleansedPhoneNumberNationalHasBeenSet; }

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline void SetCleansedPhoneNumberNational(const Aws::String& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = value; }

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline void SetCleansedPhoneNumberNational(Aws::String&& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = std::move(value); }

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline void SetCleansedPhoneNumberNational(const char* value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational.assign(value); }

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(const Aws::String& value) { SetCleansedPhoneNumberNational(value); return *this;}

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(Aws::String&& value) { SetCleansedPhoneNumberNational(std::move(value)); return *this;}

    /**
     * The cleansed phone number, shown in the local phone number format.
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(const char* value) { SetCleansedPhoneNumberNational(value); return *this;}


    /**
     * The country or region where the phone number was originally registered.
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * The country or region where the phone number was originally registered.
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * The country or region where the phone number was originally registered.
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * The country or region where the phone number was originally registered.
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * The country or region where the phone number was originally registered.
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * The country or region where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * The country or region where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * The country or region where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline const Aws::String& GetCountryCodeIso2() const{ return m_countryCodeIso2; }

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline bool CountryCodeIso2HasBeenSet() const { return m_countryCodeIso2HasBeenSet; }

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline void SetCountryCodeIso2(const Aws::String& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = value; }

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline void SetCountryCodeIso2(Aws::String&& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = std::move(value); }

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline void SetCountryCodeIso2(const char* value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2.assign(value); }

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline NumberValidateResponse& WithCountryCodeIso2(const Aws::String& value) { SetCountryCodeIso2(value); return *this;}

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline NumberValidateResponse& WithCountryCodeIso2(Aws::String&& value) { SetCountryCodeIso2(std::move(value)); return *this;}

    /**
     * The two-character ISO code for the country or region where the phone number was
     * originally registered.
     */
    inline NumberValidateResponse& WithCountryCodeIso2(const char* value) { SetCountryCodeIso2(value); return *this;}


    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline const Aws::String& GetCountryCodeNumeric() const{ return m_countryCodeNumeric; }

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline bool CountryCodeNumericHasBeenSet() const { return m_countryCodeNumericHasBeenSet; }

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline void SetCountryCodeNumeric(const Aws::String& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = value; }

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline void SetCountryCodeNumeric(Aws::String&& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = std::move(value); }

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline void SetCountryCodeNumeric(const char* value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric.assign(value); }

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline NumberValidateResponse& WithCountryCodeNumeric(const Aws::String& value) { SetCountryCodeNumeric(value); return *this;}

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline NumberValidateResponse& WithCountryCodeNumeric(Aws::String&& value) { SetCountryCodeNumeric(std::move(value)); return *this;}

    /**
     * The numeric code for the country or region where the phone number was originally
     * registered.
     */
    inline NumberValidateResponse& WithCountryCodeNumeric(const char* value) { SetCountryCodeNumeric(value); return *this;}


    /**
     * The county where the phone number was originally registered.
     */
    inline const Aws::String& GetCounty() const{ return m_county; }

    /**
     * The county where the phone number was originally registered.
     */
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }

    /**
     * The county where the phone number was originally registered.
     */
    inline void SetCounty(const Aws::String& value) { m_countyHasBeenSet = true; m_county = value; }

    /**
     * The county where the phone number was originally registered.
     */
    inline void SetCounty(Aws::String&& value) { m_countyHasBeenSet = true; m_county = std::move(value); }

    /**
     * The county where the phone number was originally registered.
     */
    inline void SetCounty(const char* value) { m_countyHasBeenSet = true; m_county.assign(value); }

    /**
     * The county where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCounty(const Aws::String& value) { SetCounty(value); return *this;}

    /**
     * The county where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCounty(Aws::String&& value) { SetCounty(std::move(value)); return *this;}

    /**
     * The county where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithCounty(const char* value) { SetCounty(value); return *this;}


    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline const Aws::String& GetOriginalCountryCodeIso2() const{ return m_originalCountryCodeIso2; }

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline bool OriginalCountryCodeIso2HasBeenSet() const { return m_originalCountryCodeIso2HasBeenSet; }

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline void SetOriginalCountryCodeIso2(const Aws::String& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = value; }

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline void SetOriginalCountryCodeIso2(Aws::String&& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = std::move(value); }

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline void SetOriginalCountryCodeIso2(const char* value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2.assign(value); }

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(const Aws::String& value) { SetOriginalCountryCodeIso2(value); return *this;}

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(Aws::String&& value) { SetOriginalCountryCodeIso2(std::move(value)); return *this;}

    /**
     * The two-character code (in ISO 3166-1 alpha-2 format) for the country or region
     * in the request body.
     */
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(const char* value) { SetOriginalCountryCodeIso2(value); return *this;}


    /**
     * The phone number that you included in the request body.
     */
    inline const Aws::String& GetOriginalPhoneNumber() const{ return m_originalPhoneNumber; }

    /**
     * The phone number that you included in the request body.
     */
    inline bool OriginalPhoneNumberHasBeenSet() const { return m_originalPhoneNumberHasBeenSet; }

    /**
     * The phone number that you included in the request body.
     */
    inline void SetOriginalPhoneNumber(const Aws::String& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = value; }

    /**
     * The phone number that you included in the request body.
     */
    inline void SetOriginalPhoneNumber(Aws::String&& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = std::move(value); }

    /**
     * The phone number that you included in the request body.
     */
    inline void SetOriginalPhoneNumber(const char* value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber.assign(value); }

    /**
     * The phone number that you included in the request body.
     */
    inline NumberValidateResponse& WithOriginalPhoneNumber(const Aws::String& value) { SetOriginalPhoneNumber(value); return *this;}

    /**
     * The phone number that you included in the request body.
     */
    inline NumberValidateResponse& WithOriginalPhoneNumber(Aws::String&& value) { SetOriginalPhoneNumber(std::move(value)); return *this;}

    /**
     * The phone number that you included in the request body.
     */
    inline NumberValidateResponse& WithOriginalPhoneNumber(const char* value) { SetOriginalPhoneNumber(value); return *this;}


    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline const Aws::String& GetPhoneType() const{ return m_phoneType; }

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline void SetPhoneType(const Aws::String& value) { m_phoneTypeHasBeenSet = true; m_phoneType = value; }

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline void SetPhoneType(Aws::String&& value) { m_phoneTypeHasBeenSet = true; m_phoneType = std::move(value); }

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline void SetPhoneType(const char* value) { m_phoneTypeHasBeenSet = true; m_phoneType.assign(value); }

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline NumberValidateResponse& WithPhoneType(const Aws::String& value) { SetPhoneType(value); return *this;}

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline NumberValidateResponse& WithPhoneType(Aws::String&& value) { SetPhoneType(std::move(value)); return *this;}

    /**
     * A description of the phone type. Possible values are MOBILE, LANDLINE, VOIP,
     * INVALID, PREPAID, and OTHER.
     */
    inline NumberValidateResponse& WithPhoneType(const char* value) { SetPhoneType(value); return *this;}


    /**
     * The phone type, represented by an integer. Possible values include 0 (MOBILE), 1
     * (LANDLINE), 2 (VOIP), 3 (INVALID), 4 (OTHER), and 5 (PREPAID).
     */
    inline int GetPhoneTypeCode() const{ return m_phoneTypeCode; }

    /**
     * The phone type, represented by an integer. Possible values include 0 (MOBILE), 1
     * (LANDLINE), 2 (VOIP), 3 (INVALID), 4 (OTHER), and 5 (PREPAID).
     */
    inline bool PhoneTypeCodeHasBeenSet() const { return m_phoneTypeCodeHasBeenSet; }

    /**
     * The phone type, represented by an integer. Possible values include 0 (MOBILE), 1
     * (LANDLINE), 2 (VOIP), 3 (INVALID), 4 (OTHER), and 5 (PREPAID).
     */
    inline void SetPhoneTypeCode(int value) { m_phoneTypeCodeHasBeenSet = true; m_phoneTypeCode = value; }

    /**
     * The phone type, represented by an integer. Possible values include 0 (MOBILE), 1
     * (LANDLINE), 2 (VOIP), 3 (INVALID), 4 (OTHER), and 5 (PREPAID).
     */
    inline NumberValidateResponse& WithPhoneTypeCode(int value) { SetPhoneTypeCode(value); return *this;}


    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * The time zone for the location where the phone number was originally registered.
     */
    inline NumberValidateResponse& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline void SetZipCode(const Aws::String& value) { m_zipCodeHasBeenSet = true; m_zipCode = value; }

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline void SetZipCode(Aws::String&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::move(value); }

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline void SetZipCode(const char* value) { m_zipCodeHasBeenSet = true; m_zipCode.assign(value); }

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline NumberValidateResponse& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline NumberValidateResponse& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}

    /**
     * The postal code for the location where the phone number was originally
     * registered.
     */
    inline NumberValidateResponse& WithZipCode(const char* value) { SetZipCode(value); return *this;}

  private:

    Aws::String m_carrier;
    bool m_carrierHasBeenSet;

    Aws::String m_city;
    bool m_cityHasBeenSet;

    Aws::String m_cleansedPhoneNumberE164;
    bool m_cleansedPhoneNumberE164HasBeenSet;

    Aws::String m_cleansedPhoneNumberNational;
    bool m_cleansedPhoneNumberNationalHasBeenSet;

    Aws::String m_country;
    bool m_countryHasBeenSet;

    Aws::String m_countryCodeIso2;
    bool m_countryCodeIso2HasBeenSet;

    Aws::String m_countryCodeNumeric;
    bool m_countryCodeNumericHasBeenSet;

    Aws::String m_county;
    bool m_countyHasBeenSet;

    Aws::String m_originalCountryCodeIso2;
    bool m_originalCountryCodeIso2HasBeenSet;

    Aws::String m_originalPhoneNumber;
    bool m_originalPhoneNumberHasBeenSet;

    Aws::String m_phoneType;
    bool m_phoneTypeHasBeenSet;

    int m_phoneTypeCode;
    bool m_phoneTypeCodeHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    Aws::String m_zipCode;
    bool m_zipCodeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
