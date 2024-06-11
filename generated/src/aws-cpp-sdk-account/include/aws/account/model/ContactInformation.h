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


    ///@{
    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline const Aws::String& GetAddressLine1() const{ return m_addressLine1; }
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }
    inline void SetAddressLine1(const Aws::String& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = value; }
    inline void SetAddressLine1(Aws::String&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::move(value); }
    inline void SetAddressLine1(const char* value) { m_addressLine1HasBeenSet = true; m_addressLine1.assign(value); }
    inline ContactInformation& WithAddressLine1(const Aws::String& value) { SetAddressLine1(value); return *this;}
    inline ContactInformation& WithAddressLine1(Aws::String&& value) { SetAddressLine1(std::move(value)); return *this;}
    inline ContactInformation& WithAddressLine1(const char* value) { SetAddressLine1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetAddressLine2() const{ return m_addressLine2; }
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
    inline void SetAddressLine2(const Aws::String& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = value; }
    inline void SetAddressLine2(Aws::String&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::move(value); }
    inline void SetAddressLine2(const char* value) { m_addressLine2HasBeenSet = true; m_addressLine2.assign(value); }
    inline ContactInformation& WithAddressLine2(const Aws::String& value) { SetAddressLine2(value); return *this;}
    inline ContactInformation& WithAddressLine2(Aws::String&& value) { SetAddressLine2(std::move(value)); return *this;}
    inline ContactInformation& WithAddressLine2(const char* value) { SetAddressLine2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetAddressLine3() const{ return m_addressLine3; }
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }
    inline void SetAddressLine3(const Aws::String& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = value; }
    inline void SetAddressLine3(Aws::String&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::move(value); }
    inline void SetAddressLine3(const char* value) { m_addressLine3HasBeenSet = true; m_addressLine3.assign(value); }
    inline ContactInformation& WithAddressLine3(const Aws::String& value) { SetAddressLine3(value); return *this;}
    inline ContactInformation& WithAddressLine3(Aws::String&& value) { SetAddressLine3(std::move(value)); return *this;}
    inline ContactInformation& WithAddressLine3(const char* value) { SetAddressLine3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of the primary contact address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline ContactInformation& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline ContactInformation& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline ContactInformation& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline ContactInformation& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline ContactInformation& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline ContactInformation& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }
    inline ContactInformation& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}
    inline ContactInformation& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}
    inline ContactInformation& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetDistrictOrCounty() const{ return m_districtOrCounty; }
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }
    inline void SetDistrictOrCounty(const Aws::String& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = value; }
    inline void SetDistrictOrCounty(Aws::String&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::move(value); }
    inline void SetDistrictOrCounty(const char* value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty.assign(value); }
    inline ContactInformation& WithDistrictOrCounty(const Aws::String& value) { SetDistrictOrCounty(value); return *this;}
    inline ContactInformation& WithDistrictOrCounty(Aws::String&& value) { SetDistrictOrCounty(std::move(value)); return *this;}
    inline ContactInformation& WithDistrictOrCounty(const char* value) { SetDistrictOrCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline const Aws::String& GetFullName() const{ return m_fullName; }
    inline bool FullNameHasBeenSet() const { return m_fullNameHasBeenSet; }
    inline void SetFullName(const Aws::String& value) { m_fullNameHasBeenSet = true; m_fullName = value; }
    inline void SetFullName(Aws::String&& value) { m_fullNameHasBeenSet = true; m_fullName = std::move(value); }
    inline void SetFullName(const char* value) { m_fullNameHasBeenSet = true; m_fullName.assign(value); }
    inline ContactInformation& WithFullName(const Aws::String& value) { SetFullName(value); return *this;}
    inline ContactInformation& WithFullName(Aws::String&& value) { SetFullName(std::move(value)); return *this;}
    inline ContactInformation& WithFullName(const char* value) { SetFullName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline ContactInformation& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline ContactInformation& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline ContactInformation& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline ContactInformation& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline ContactInformation& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline ContactInformation& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state or region of the primary contact address. If the mailing address is
     * within the United States (US), the value in this field can be either a two
     * character state code (for example, <code>NJ</code>) or the full state name (for
     * example, <code>New Jersey</code>). This field is required in the following
     * countries: <code>US</code>, <code>CA</code>, <code>GB</code>, <code>DE</code>,
     * <code>JP</code>, <code>IN</code>, and <code>BR</code>.</p>
     */
    inline const Aws::String& GetStateOrRegion() const{ return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    inline void SetStateOrRegion(const Aws::String& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = value; }
    inline void SetStateOrRegion(Aws::String&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::move(value); }
    inline void SetStateOrRegion(const char* value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion.assign(value); }
    inline ContactInformation& WithStateOrRegion(const Aws::String& value) { SetStateOrRegion(value); return *this;}
    inline ContactInformation& WithStateOrRegion(Aws::String&& value) { SetStateOrRegion(std::move(value)); return *this;}
    inline ContactInformation& WithStateOrRegion(const char* value) { SetStateOrRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const{ return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    inline void SetWebsiteUrl(const Aws::String& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = value; }
    inline void SetWebsiteUrl(Aws::String&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::move(value); }
    inline void SetWebsiteUrl(const char* value) { m_websiteUrlHasBeenSet = true; m_websiteUrl.assign(value); }
    inline ContactInformation& WithWebsiteUrl(const Aws::String& value) { SetWebsiteUrl(value); return *this;}
    inline ContactInformation& WithWebsiteUrl(Aws::String&& value) { SetWebsiteUrl(std::move(value)); return *this;}
    inline ContactInformation& WithWebsiteUrl(const char* value) { SetWebsiteUrl(value); return *this;}
    ///@}
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
