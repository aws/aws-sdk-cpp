/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
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
namespace Invoicing
{
namespace Model
{

  /**
   * <p> The details of the address associated with the receiver. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ReceiverAddress">AWS
   * API Reference</a></p>
   */
  class ReceiverAddress
  {
  public:
    AWS_INVOICING_API ReceiverAddress() = default;
    AWS_INVOICING_API ReceiverAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API ReceiverAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The first line of the address. </p>
     */
    inline const Aws::String& GetAddressLine1() const { return m_addressLine1; }
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }
    template<typename AddressLine1T = Aws::String>
    void SetAddressLine1(AddressLine1T&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::forward<AddressLine1T>(value); }
    template<typename AddressLine1T = Aws::String>
    ReceiverAddress& WithAddressLine1(AddressLine1T&& value) { SetAddressLine1(std::forward<AddressLine1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The second line of the address, if applicable. </p>
     */
    inline const Aws::String& GetAddressLine2() const { return m_addressLine2; }
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
    template<typename AddressLine2T = Aws::String>
    void SetAddressLine2(AddressLine2T&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::forward<AddressLine2T>(value); }
    template<typename AddressLine2T = Aws::String>
    ReceiverAddress& WithAddressLine2(AddressLine2T&& value) { SetAddressLine2(std::forward<AddressLine2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The third line of the address, if applicable. </p>
     */
    inline const Aws::String& GetAddressLine3() const { return m_addressLine3; }
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }
    template<typename AddressLine3T = Aws::String>
    void SetAddressLine3(AddressLine3T&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::forward<AddressLine3T>(value); }
    template<typename AddressLine3T = Aws::String>
    ReceiverAddress& WithAddressLine3(AddressLine3T&& value) { SetAddressLine3(std::forward<AddressLine3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The district or country the address is located in. </p>
     */
    inline const Aws::String& GetDistrictOrCounty() const { return m_districtOrCounty; }
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }
    template<typename DistrictOrCountyT = Aws::String>
    void SetDistrictOrCounty(DistrictOrCountyT&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::forward<DistrictOrCountyT>(value); }
    template<typename DistrictOrCountyT = Aws::String>
    ReceiverAddress& WithDistrictOrCounty(DistrictOrCountyT&& value) { SetDistrictOrCounty(std::forward<DistrictOrCountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The city that the address is in. </p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    ReceiverAddress& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state, region, or province the address is located. </p>
     */
    inline const Aws::String& GetStateOrRegion() const { return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    template<typename StateOrRegionT = Aws::String>
    void SetStateOrRegion(StateOrRegionT&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::forward<StateOrRegionT>(value); }
    template<typename StateOrRegionT = Aws::String>
    ReceiverAddress& WithStateOrRegion(StateOrRegionT&& value) { SetStateOrRegion(std::forward<StateOrRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The country code for the country the address is in. </p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    ReceiverAddress& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique company name. </p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    ReceiverAddress& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The postal code associated with the address. </p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    ReceiverAddress& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressLine1;
    bool m_addressLine1HasBeenSet = false;

    Aws::String m_addressLine2;
    bool m_addressLine2HasBeenSet = false;

    Aws::String m_addressLine3;
    bool m_addressLine3HasBeenSet = false;

    Aws::String m_districtOrCounty;
    bool m_districtOrCountyHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
