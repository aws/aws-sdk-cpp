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
    AWS_ACCOUNT_API ContactInformation() = default;
    AWS_ACCOUNT_API ContactInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API ContactInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The first line of the primary contact address.</p>
     */
    inline const Aws::String& GetAddressLine1() const { return m_addressLine1; }
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }
    template<typename AddressLine1T = Aws::String>
    void SetAddressLine1(AddressLine1T&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::forward<AddressLine1T>(value); }
    template<typename AddressLine1T = Aws::String>
    ContactInformation& WithAddressLine1(AddressLine1T&& value) { SetAddressLine1(std::forward<AddressLine1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetAddressLine2() const { return m_addressLine2; }
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
    template<typename AddressLine2T = Aws::String>
    void SetAddressLine2(AddressLine2T&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::forward<AddressLine2T>(value); }
    template<typename AddressLine2T = Aws::String>
    ContactInformation& WithAddressLine2(AddressLine2T&& value) { SetAddressLine2(std::forward<AddressLine2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetAddressLine3() const { return m_addressLine3; }
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }
    template<typename AddressLine3T = Aws::String>
    void SetAddressLine3(AddressLine3T&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::forward<AddressLine3T>(value); }
    template<typename AddressLine3T = Aws::String>
    ContactInformation& WithAddressLine3(AddressLine3T&& value) { SetAddressLine3(std::forward<AddressLine3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of the primary contact address.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    ContactInformation& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the company associated with the primary contact information, if
     * any.</p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    ContactInformation& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-3166 two-letter country code for the primary contact address.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    ContactInformation& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or county of the primary contact address, if any.</p>
     */
    inline const Aws::String& GetDistrictOrCounty() const { return m_districtOrCounty; }
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }
    template<typename DistrictOrCountyT = Aws::String>
    void SetDistrictOrCounty(DistrictOrCountyT&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::forward<DistrictOrCountyT>(value); }
    template<typename DistrictOrCountyT = Aws::String>
    ContactInformation& WithDistrictOrCounty(DistrictOrCountyT&& value) { SetDistrictOrCounty(std::forward<DistrictOrCountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the primary contact address.</p>
     */
    inline const Aws::String& GetFullName() const { return m_fullName; }
    inline bool FullNameHasBeenSet() const { return m_fullNameHasBeenSet; }
    template<typename FullNameT = Aws::String>
    void SetFullName(FullNameT&& value) { m_fullNameHasBeenSet = true; m_fullName = std::forward<FullNameT>(value); }
    template<typename FullNameT = Aws::String>
    ContactInformation& WithFullName(FullNameT&& value) { SetFullName(std::forward<FullNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number of the primary contact information. The number will be
     * validated and, in some countries, checked for activation.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    ContactInformation& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of the primary contact address.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    ContactInformation& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
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
    inline const Aws::String& GetStateOrRegion() const { return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    template<typename StateOrRegionT = Aws::String>
    void SetStateOrRegion(StateOrRegionT&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::forward<StateOrRegionT>(value); }
    template<typename StateOrRegionT = Aws::String>
    ContactInformation& WithStateOrRegion(StateOrRegionT&& value) { SetStateOrRegion(std::forward<StateOrRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the website associated with the primary contact information, if
     * any.</p>
     */
    inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
    inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
    template<typename WebsiteUrlT = Aws::String>
    void SetWebsiteUrl(WebsiteUrlT&& value) { m_websiteUrlHasBeenSet = true; m_websiteUrl = std::forward<WebsiteUrlT>(value); }
    template<typename WebsiteUrlT = Aws::String>
    ContactInformation& WithWebsiteUrl(WebsiteUrlT&& value) { SetWebsiteUrl(std::forward<WebsiteUrlT>(value)); return *this;}
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
