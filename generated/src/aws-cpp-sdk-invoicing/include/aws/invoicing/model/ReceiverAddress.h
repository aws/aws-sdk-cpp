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
    AWS_INVOICING_API ReceiverAddress();
    AWS_INVOICING_API ReceiverAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API ReceiverAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The first line of the address. </p>
     */
    inline const Aws::String& GetAddressLine1() const{ return m_addressLine1; }
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }
    inline void SetAddressLine1(const Aws::String& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = value; }
    inline void SetAddressLine1(Aws::String&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::move(value); }
    inline void SetAddressLine1(const char* value) { m_addressLine1HasBeenSet = true; m_addressLine1.assign(value); }
    inline ReceiverAddress& WithAddressLine1(const Aws::String& value) { SetAddressLine1(value); return *this;}
    inline ReceiverAddress& WithAddressLine1(Aws::String&& value) { SetAddressLine1(std::move(value)); return *this;}
    inline ReceiverAddress& WithAddressLine1(const char* value) { SetAddressLine1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The second line of the address, if applicable. </p>
     */
    inline const Aws::String& GetAddressLine2() const{ return m_addressLine2; }
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
    inline void SetAddressLine2(const Aws::String& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = value; }
    inline void SetAddressLine2(Aws::String&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::move(value); }
    inline void SetAddressLine2(const char* value) { m_addressLine2HasBeenSet = true; m_addressLine2.assign(value); }
    inline ReceiverAddress& WithAddressLine2(const Aws::String& value) { SetAddressLine2(value); return *this;}
    inline ReceiverAddress& WithAddressLine2(Aws::String&& value) { SetAddressLine2(std::move(value)); return *this;}
    inline ReceiverAddress& WithAddressLine2(const char* value) { SetAddressLine2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The third line of the address, if applicable. </p>
     */
    inline const Aws::String& GetAddressLine3() const{ return m_addressLine3; }
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }
    inline void SetAddressLine3(const Aws::String& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = value; }
    inline void SetAddressLine3(Aws::String&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::move(value); }
    inline void SetAddressLine3(const char* value) { m_addressLine3HasBeenSet = true; m_addressLine3.assign(value); }
    inline ReceiverAddress& WithAddressLine3(const Aws::String& value) { SetAddressLine3(value); return *this;}
    inline ReceiverAddress& WithAddressLine3(Aws::String&& value) { SetAddressLine3(std::move(value)); return *this;}
    inline ReceiverAddress& WithAddressLine3(const char* value) { SetAddressLine3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The district or country the address is located in. </p>
     */
    inline const Aws::String& GetDistrictOrCounty() const{ return m_districtOrCounty; }
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }
    inline void SetDistrictOrCounty(const Aws::String& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = value; }
    inline void SetDistrictOrCounty(Aws::String&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::move(value); }
    inline void SetDistrictOrCounty(const char* value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty.assign(value); }
    inline ReceiverAddress& WithDistrictOrCounty(const Aws::String& value) { SetDistrictOrCounty(value); return *this;}
    inline ReceiverAddress& WithDistrictOrCounty(Aws::String&& value) { SetDistrictOrCounty(std::move(value)); return *this;}
    inline ReceiverAddress& WithDistrictOrCounty(const char* value) { SetDistrictOrCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The city that the address is in. </p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline ReceiverAddress& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline ReceiverAddress& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline ReceiverAddress& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state, region, or province the address is located. </p>
     */
    inline const Aws::String& GetStateOrRegion() const{ return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    inline void SetStateOrRegion(const Aws::String& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = value; }
    inline void SetStateOrRegion(Aws::String&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::move(value); }
    inline void SetStateOrRegion(const char* value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion.assign(value); }
    inline ReceiverAddress& WithStateOrRegion(const Aws::String& value) { SetStateOrRegion(value); return *this;}
    inline ReceiverAddress& WithStateOrRegion(Aws::String&& value) { SetStateOrRegion(std::move(value)); return *this;}
    inline ReceiverAddress& WithStateOrRegion(const char* value) { SetStateOrRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The country code for the country the address is in. </p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }
    inline ReceiverAddress& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}
    inline ReceiverAddress& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}
    inline ReceiverAddress& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique company name. </p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline ReceiverAddress& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline ReceiverAddress& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline ReceiverAddress& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The postal code associated with the address. </p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline ReceiverAddress& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline ReceiverAddress& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline ReceiverAddress& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
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
