/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
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
namespace Account
{
namespace Model
{

  /**
   * <p>Contains the details of the primary contact information associated with an
   * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/ContactInformation">AWS
   * API Reference</a></p>
   */
  class ContactInformation
  {
  public:
    AWS_ACCOUNT_API ContactInformation();
    AWS_ACCOUNT_API ContactInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API ContactInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline const Aws::String& GetAddressLine1() const{ return m_addressLine1; }

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline void SetAddressLine1(const Aws::String& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = value; }

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline void SetAddressLine1(Aws::String&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::move(value); }

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline void SetAddressLine1(const char* value) { m_addressLine1HasBeenSet = true; m_addressLine1.assign(value); }

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline ContactInformation& WithAddressLine1(const Aws::String& value) { SetAddressLine1(value); return *this;}

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline ContactInformation& WithAddressLine1(Aws::String&& value) { SetAddressLine1(std::move(value)); return *this;}

    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline ContactInformation& WithAddressLine1(const char* value) { SetAddressLine1(value); return *this;}


    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetAddressLine2() const{ return m_addressLine2; }

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline void SetAddressLine2(const Aws::String& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = value; }

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline void SetAddressLine2(Aws::String&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::move(value); }

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline void SetAddressLine2(const char* value) { m_addressLine2HasBeenSet = true; m_addressLine2.assign(value); }

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithAddressLine2(const Aws::String& value) { SetAddressLine2(value); return *this;}

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithAddressLine2(Aws::String&& value) { SetAddressLine2(std::move(value)); return *this;}

    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithAddressLine2(const char* value) { SetAddressLine2(value); return *this;}


    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetAddressLine3() const{ return m_addressLine3; }

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline void SetAddressLine3(const Aws::String& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = value; }

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline void SetAddressLine3(Aws::String&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::move(value); }

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline void SetAddressLine3(const char* value) { m_addressLine3HasBeenSet = true; m_addressLine3.assign(value); }

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithAddressLine3(const Aws::String& value) { SetAddressLine3(value); return *this;}

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithAddressLine3(Aws::String&& value) { SetAddressLine3(std::move(value)); return *this;}

    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithAddressLine3(const char* value) { SetAddressLine3(value); return *this;}


    /**
     * <p>The city of the primary contact address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline ContactInformation& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline ContactInformation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city of the primary contact address.</p>
     */
    inline ContactInformation& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline ContactInformation& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline ContactInformation& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}

    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline ContactInformation& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}


    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline ContactInformation& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline ContactInformation& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline ContactInformation& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetDistrictOrCounty() const{ return m_districtOrCounty; }

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline void SetDistrictOrCounty(const Aws::String& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = value; }

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline void SetDistrictOrCounty(Aws::String&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::move(value); }

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline void SetDistrictOrCounty(const char* value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty.assign(value); }

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithDistrictOrCounty(const Aws::String& value) { SetDistrictOrCounty(value); return *this;}

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithDistrictOrCounty(Aws::String&& value) { SetDistrictOrCounty(std::move(value)); return *this;}

    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline ContactInformation& WithDistrictOrCounty(const char* value) { SetDistrictOrCounty(value); return *this;}


    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline const Aws::String& GetFullName() const{ return m_fullName; }

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline bool FullNameHasBeenSet() const { return m_fullNameHasBeenSet; }

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline void SetFullName(const Aws::String& value) { m_fullNameHasBeenSet = true; m_fullName = value; }

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline void SetFullName(Aws::String&& value) { m_fullNameHasBeenSet = true; m_fullName = std::move(value); }

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline void SetFullName(const char* value) { m_fullNameHasBeenSet = true; m_fullName.assign(value); }

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline ContactInformation& WithFullName(const Aws::String& value) { SetFullName(value); return *this;}

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline ContactInformation& WithFullName(Aws::String&& value) { SetFullName(std::move(value)); return *this;}

    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline ContactInformation& WithFullName(const char* value) { SetFullName(value); return *this;}


    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline ContactInformation& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline ContactInformation& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline ContactInformation& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline ContactInformation& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline ContactInformation& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline ContactInformation& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline const Aws::String& GetStateOrRegion() const{ return m_stateOrRegion; }

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline void SetStateOrRegion(const Aws::String& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = value; }

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline void SetStateOrRegion(Aws::String&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::move(value); }

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline void SetStateOrRegion(const char* value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion.assign(value); }

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline ContactInformation& WithStateOrRegion(const Aws::String& value) { SetStateOrRegion(value); return *this;}

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline ContactInformation& WithStateOrRegion(Aws::String&& value) { SetStateOrRegion(std::move(value)); return *this;}

    /**
     * <p>The state or region of the primary contact address. This field is required in
     * selected countries.</p>
     */
    inline ContactInformation& WithStateOrRegion(const char* value) { SetStateOrRegion(value); return *this;}


    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const{ return m_websiteUrl; }

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline void SetWebsiteUrl(const Aws::String& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = value; }

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline void SetWebsiteUrl(Aws::String&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::move(value); }

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline void SetWebsiteUrl(const char* value) { m_websiteUrlHasBeenSet = true; m_websiteUrl.assign(value); }

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline ContactInformation& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline ContactInformation& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline ContactInformation& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}

  private:

    Aws::String m_addressLine1;
    bool m_addressLine1HasBeenSet = false;

    Aws::String m_addressLine2;
    bool m_addressLine2HasBeenSet = false;

    Aws::String m_addressLine3;
    bool m_addressLine3HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_districtOrCounty;
    bool m_districtOrCountyHasBeenSet = false;

    Aws::String m_fullName;
    bool m_fullNameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;

    Aws::String m_websiteUrl;
    bool m_websiteUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
