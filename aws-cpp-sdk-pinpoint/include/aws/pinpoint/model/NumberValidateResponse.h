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
   * <p>Provides information about a phone number.</p><p><h3>See Also:</h3>   <a
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
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline const Aws::String& GetCarrier() const{ return m_carrier; }

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline bool CarrierHasBeenSet() const { return m_carrierHasBeenSet; }

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline void SetCarrier(const Aws::String& value) { m_carrierHasBeenSet = true; m_carrier = value; }

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline void SetCarrier(Aws::String&& value) { m_carrierHasBeenSet = true; m_carrier = std::move(value); }

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline void SetCarrier(const char* value) { m_carrierHasBeenSet = true; m_carrier.assign(value); }

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline NumberValidateResponse& WithCarrier(const Aws::String& value) { SetCarrier(value); return *this;}

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline NumberValidateResponse& WithCarrier(Aws::String&& value) { SetCarrier(std::move(value)); return *this;}

    /**
     * <p>The carrier or service provider that the phone number is currently registered
     * with.</p>
     */
    inline NumberValidateResponse& WithCarrier(const char* value) { SetCarrier(value); return *this;}


    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The name of the city where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline const Aws::String& GetCleansedPhoneNumberE164() const{ return m_cleansedPhoneNumberE164; }

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline bool CleansedPhoneNumberE164HasBeenSet() const { return m_cleansedPhoneNumberE164HasBeenSet; }

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline void SetCleansedPhoneNumberE164(const Aws::String& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = value; }

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline void SetCleansedPhoneNumberE164(Aws::String&& value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164 = std::move(value); }

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline void SetCleansedPhoneNumberE164(const char* value) { m_cleansedPhoneNumberE164HasBeenSet = true; m_cleansedPhoneNumberE164.assign(value); }

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(const Aws::String& value) { SetCleansedPhoneNumberE164(value); return *this;}

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(Aws::String&& value) { SetCleansedPhoneNumberE164(std::move(value)); return *this;}

    /**
     * <p>The cleansed phone number, in E.164 format, for the location where the phone
     * number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberE164(const char* value) { SetCleansedPhoneNumberE164(value); return *this;}


    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline const Aws::String& GetCleansedPhoneNumberNational() const{ return m_cleansedPhoneNumberNational; }

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline bool CleansedPhoneNumberNationalHasBeenSet() const { return m_cleansedPhoneNumberNationalHasBeenSet; }

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline void SetCleansedPhoneNumberNational(const Aws::String& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = value; }

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline void SetCleansedPhoneNumberNational(Aws::String&& value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational = std::move(value); }

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline void SetCleansedPhoneNumberNational(const char* value) { m_cleansedPhoneNumberNationalHasBeenSet = true; m_cleansedPhoneNumberNational.assign(value); }

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(const Aws::String& value) { SetCleansedPhoneNumberNational(value); return *this;}

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(Aws::String&& value) { SetCleansedPhoneNumberNational(std::move(value)); return *this;}

    /**
     * <p>The cleansed phone number, in the format for the location where the phone
     * number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCleansedPhoneNumberNational(const char* value) { SetCleansedPhoneNumberNational(value); return *this;}


    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The name of the country or region where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCountryCodeIso2() const{ return m_countryCodeIso2; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline bool CountryCodeIso2HasBeenSet() const { return m_countryCodeIso2HasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline void SetCountryCodeIso2(const Aws::String& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline void SetCountryCodeIso2(Aws::String&& value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2 = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline void SetCountryCodeIso2(const char* value) { m_countryCodeIso2HasBeenSet = true; m_countryCodeIso2.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCountryCodeIso2(const Aws::String& value) { SetCountryCodeIso2(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCountryCodeIso2(Aws::String&& value) { SetCountryCodeIso2(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCountryCodeIso2(const char* value) { SetCountryCodeIso2(value); return *this;}


    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline const Aws::String& GetCountryCodeNumeric() const{ return m_countryCodeNumeric; }

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline bool CountryCodeNumericHasBeenSet() const { return m_countryCodeNumericHasBeenSet; }

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline void SetCountryCodeNumeric(const Aws::String& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = value; }

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline void SetCountryCodeNumeric(Aws::String&& value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric = std::move(value); }

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline void SetCountryCodeNumeric(const char* value) { m_countryCodeNumericHasBeenSet = true; m_countryCodeNumeric.assign(value); }

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline NumberValidateResponse& WithCountryCodeNumeric(const Aws::String& value) { SetCountryCodeNumeric(value); return *this;}

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline NumberValidateResponse& WithCountryCodeNumeric(Aws::String&& value) { SetCountryCodeNumeric(std::move(value)); return *this;}

    /**
     * <p>The numeric code for the country or region where the phone number was
     * originally registered.</p>
     */
    inline NumberValidateResponse& WithCountryCodeNumeric(const char* value) { SetCountryCodeNumeric(value); return *this;}


    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetCounty() const{ return m_county; }

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline void SetCounty(const Aws::String& value) { m_countyHasBeenSet = true; m_county = value; }

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline void SetCounty(Aws::String&& value) { m_countyHasBeenSet = true; m_county = std::move(value); }

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline void SetCounty(const char* value) { m_countyHasBeenSet = true; m_county.assign(value); }

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCounty(const Aws::String& value) { SetCounty(value); return *this;}

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCounty(Aws::String&& value) { SetCounty(std::move(value)); return *this;}

    /**
     * <p>The name of the county where the phone number was originally registered.</p>
     */
    inline NumberValidateResponse& WithCounty(const char* value) { SetCounty(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline const Aws::String& GetOriginalCountryCodeIso2() const{ return m_originalCountryCodeIso2; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline bool OriginalCountryCodeIso2HasBeenSet() const { return m_originalCountryCodeIso2HasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline void SetOriginalCountryCodeIso2(const Aws::String& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline void SetOriginalCountryCodeIso2(Aws::String&& value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2 = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline void SetOriginalCountryCodeIso2(const char* value) { m_originalCountryCodeIso2HasBeenSet = true; m_originalCountryCodeIso2.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(const Aws::String& value) { SetOriginalCountryCodeIso2(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(Aws::String&& value) { SetOriginalCountryCodeIso2(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, that was sent in the
     * request body.</p>
     */
    inline NumberValidateResponse& WithOriginalCountryCodeIso2(const char* value) { SetOriginalCountryCodeIso2(value); return *this;}


    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline const Aws::String& GetOriginalPhoneNumber() const{ return m_originalPhoneNumber; }

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline bool OriginalPhoneNumberHasBeenSet() const { return m_originalPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline void SetOriginalPhoneNumber(const Aws::String& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = value; }

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline void SetOriginalPhoneNumber(Aws::String&& value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber = std::move(value); }

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline void SetOriginalPhoneNumber(const char* value) { m_originalPhoneNumberHasBeenSet = true; m_originalPhoneNumber.assign(value); }

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline NumberValidateResponse& WithOriginalPhoneNumber(const Aws::String& value) { SetOriginalPhoneNumber(value); return *this;}

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline NumberValidateResponse& WithOriginalPhoneNumber(Aws::String&& value) { SetOriginalPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number that was sent in the request body.</p>
     */
    inline NumberValidateResponse& WithOriginalPhoneNumber(const char* value) { SetOriginalPhoneNumber(value); return *this;}


    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline const Aws::String& GetPhoneType() const{ return m_phoneType; }

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline void SetPhoneType(const Aws::String& value) { m_phoneTypeHasBeenSet = true; m_phoneType = value; }

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline void SetPhoneType(Aws::String&& value) { m_phoneTypeHasBeenSet = true; m_phoneType = std::move(value); }

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline void SetPhoneType(const char* value) { m_phoneTypeHasBeenSet = true; m_phoneType.assign(value); }

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline NumberValidateResponse& WithPhoneType(const Aws::String& value) { SetPhoneType(value); return *this;}

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline NumberValidateResponse& WithPhoneType(Aws::String&& value) { SetPhoneType(std::move(value)); return *this;}

    /**
     * <p>The description of the phone type. Valid values are: MOBILE, LANDLINE, VOIP,

     *                  INVALID, PREPAID, and OTHER.</p>
     */
    inline NumberValidateResponse& WithPhoneType(const char* value) { SetPhoneType(value); return *this;}


    /**
     * <p>The phone type, represented by an integer. Valid values are: 0 (mobile), 1
     * (landline), 2 (VoIP), 3 (invalid), 4 (other), and 5 (prepaid).</p>
     */
    inline int GetPhoneTypeCode() const{ return m_phoneTypeCode; }

    /**
     * <p>The phone type, represented by an integer. Valid values are: 0 (mobile), 1
     * (landline), 2 (VoIP), 3 (invalid), 4 (other), and 5 (prepaid).</p>
     */
    inline bool PhoneTypeCodeHasBeenSet() const { return m_phoneTypeCodeHasBeenSet; }

    /**
     * <p>The phone type, represented by an integer. Valid values are: 0 (mobile), 1
     * (landline), 2 (VoIP), 3 (invalid), 4 (other), and 5 (prepaid).</p>
     */
    inline void SetPhoneTypeCode(int value) { m_phoneTypeCodeHasBeenSet = true; m_phoneTypeCode = value; }

    /**
     * <p>The phone type, represented by an integer. Valid values are: 0 (mobile), 1
     * (landline), 2 (VoIP), 3 (invalid), 4 (other), and 5 (prepaid).</p>
     */
    inline NumberValidateResponse& WithPhoneTypeCode(int value) { SetPhoneTypeCode(value); return *this;}


    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone for the location where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline void SetZipCode(const Aws::String& value) { m_zipCodeHasBeenSet = true; m_zipCode = value; }

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline void SetZipCode(Aws::String&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::move(value); }

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline void SetZipCode(const char* value) { m_zipCodeHasBeenSet = true; m_zipCode.assign(value); }

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
     */
    inline NumberValidateResponse& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}

    /**
     * <p>The postal or ZIP code for the location where the phone number was originally
     * registered.</p>
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
