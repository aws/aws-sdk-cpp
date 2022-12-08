/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about an address. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_OUTPOSTS_API Address();
    AWS_OUTPOSTS_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the contact.</p>
     */
    inline const Aws::String& GetContactName() const{ return m_contactName; }

    /**
     * <p>The name of the contact.</p>
     */
    inline bool ContactNameHasBeenSet() const { return m_contactNameHasBeenSet; }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetContactName(const Aws::String& value) { m_contactNameHasBeenSet = true; m_contactName = value; }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetContactName(Aws::String&& value) { m_contactNameHasBeenSet = true; m_contactName = std::move(value); }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetContactName(const char* value) { m_contactNameHasBeenSet = true; m_contactName.assign(value); }

    /**
     * <p>The name of the contact.</p>
     */
    inline Address& WithContactName(const Aws::String& value) { SetContactName(value); return *this;}

    /**
     * <p>The name of the contact.</p>
     */
    inline Address& WithContactName(Aws::String&& value) { SetContactName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact.</p>
     */
    inline Address& WithContactName(const char* value) { SetContactName(value); return *this;}


    /**
     * <p>The phone number of the contact.</p>
     */
    inline const Aws::String& GetContactPhoneNumber() const{ return m_contactPhoneNumber; }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline bool ContactPhoneNumberHasBeenSet() const { return m_contactPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline void SetContactPhoneNumber(const Aws::String& value) { m_contactPhoneNumberHasBeenSet = true; m_contactPhoneNumber = value; }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline void SetContactPhoneNumber(Aws::String&& value) { m_contactPhoneNumberHasBeenSet = true; m_contactPhoneNumber = std::move(value); }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline void SetContactPhoneNumber(const char* value) { m_contactPhoneNumberHasBeenSet = true; m_contactPhoneNumber.assign(value); }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline Address& WithContactPhoneNumber(const Aws::String& value) { SetContactPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the contact.</p>
     */
    inline Address& WithContactPhoneNumber(Aws::String&& value) { SetContactPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the contact.</p>
     */
    inline Address& WithContactPhoneNumber(const char* value) { SetContactPhoneNumber(value); return *this;}


    /**
     * <p>The first line of the address.</p>
     */
    inline const Aws::String& GetAddressLine1() const{ return m_addressLine1; }

    /**
     * <p>The first line of the address.</p>
     */
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }

    /**
     * <p>The first line of the address.</p>
     */
    inline void SetAddressLine1(const Aws::String& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = value; }

    /**
     * <p>The first line of the address.</p>
     */
    inline void SetAddressLine1(Aws::String&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::move(value); }

    /**
     * <p>The first line of the address.</p>
     */
    inline void SetAddressLine1(const char* value) { m_addressLine1HasBeenSet = true; m_addressLine1.assign(value); }

    /**
     * <p>The first line of the address.</p>
     */
    inline Address& WithAddressLine1(const Aws::String& value) { SetAddressLine1(value); return *this;}

    /**
     * <p>The first line of the address.</p>
     */
    inline Address& WithAddressLine1(Aws::String&& value) { SetAddressLine1(std::move(value)); return *this;}

    /**
     * <p>The first line of the address.</p>
     */
    inline Address& WithAddressLine1(const char* value) { SetAddressLine1(value); return *this;}


    /**
     * <p>The second line of the address.</p>
     */
    inline const Aws::String& GetAddressLine2() const{ return m_addressLine2; }

    /**
     * <p>The second line of the address.</p>
     */
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }

    /**
     * <p>The second line of the address.</p>
     */
    inline void SetAddressLine2(const Aws::String& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = value; }

    /**
     * <p>The second line of the address.</p>
     */
    inline void SetAddressLine2(Aws::String&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::move(value); }

    /**
     * <p>The second line of the address.</p>
     */
    inline void SetAddressLine2(const char* value) { m_addressLine2HasBeenSet = true; m_addressLine2.assign(value); }

    /**
     * <p>The second line of the address.</p>
     */
    inline Address& WithAddressLine2(const Aws::String& value) { SetAddressLine2(value); return *this;}

    /**
     * <p>The second line of the address.</p>
     */
    inline Address& WithAddressLine2(Aws::String&& value) { SetAddressLine2(std::move(value)); return *this;}

    /**
     * <p>The second line of the address.</p>
     */
    inline Address& WithAddressLine2(const char* value) { SetAddressLine2(value); return *this;}


    /**
     * <p>The third line of the address.</p>
     */
    inline const Aws::String& GetAddressLine3() const{ return m_addressLine3; }

    /**
     * <p>The third line of the address.</p>
     */
    inline bool AddressLine3HasBeenSet() const { return m_addressLine3HasBeenSet; }

    /**
     * <p>The third line of the address.</p>
     */
    inline void SetAddressLine3(const Aws::String& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = value; }

    /**
     * <p>The third line of the address.</p>
     */
    inline void SetAddressLine3(Aws::String&& value) { m_addressLine3HasBeenSet = true; m_addressLine3 = std::move(value); }

    /**
     * <p>The third line of the address.</p>
     */
    inline void SetAddressLine3(const char* value) { m_addressLine3HasBeenSet = true; m_addressLine3.assign(value); }

    /**
     * <p>The third line of the address.</p>
     */
    inline Address& WithAddressLine3(const Aws::String& value) { SetAddressLine3(value); return *this;}

    /**
     * <p>The third line of the address.</p>
     */
    inline Address& WithAddressLine3(Aws::String&& value) { SetAddressLine3(std::move(value)); return *this;}

    /**
     * <p>The third line of the address.</p>
     */
    inline Address& WithAddressLine3(const char* value) { SetAddressLine3(value); return *this;}


    /**
     * <p>The city for the address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city for the address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city for the address.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city for the address.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city for the address.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city for the address.</p>
     */
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city for the address.</p>
     */
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city for the address.</p>
     */
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The state for the address.</p>
     */
    inline const Aws::String& GetStateOrRegion() const{ return m_stateOrRegion; }

    /**
     * <p>The state for the address.</p>
     */
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }

    /**
     * <p>The state for the address.</p>
     */
    inline void SetStateOrRegion(const Aws::String& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = value; }

    /**
     * <p>The state for the address.</p>
     */
    inline void SetStateOrRegion(Aws::String&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::move(value); }

    /**
     * <p>The state for the address.</p>
     */
    inline void SetStateOrRegion(const char* value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion.assign(value); }

    /**
     * <p>The state for the address.</p>
     */
    inline Address& WithStateOrRegion(const Aws::String& value) { SetStateOrRegion(value); return *this;}

    /**
     * <p>The state for the address.</p>
     */
    inline Address& WithStateOrRegion(Aws::String&& value) { SetStateOrRegion(std::move(value)); return *this;}

    /**
     * <p>The state for the address.</p>
     */
    inline Address& WithStateOrRegion(const char* value) { SetStateOrRegion(value); return *this;}


    /**
     * <p>The district or county for the address.</p>
     */
    inline const Aws::String& GetDistrictOrCounty() const{ return m_districtOrCounty; }

    /**
     * <p>The district or county for the address.</p>
     */
    inline bool DistrictOrCountyHasBeenSet() const { return m_districtOrCountyHasBeenSet; }

    /**
     * <p>The district or county for the address.</p>
     */
    inline void SetDistrictOrCounty(const Aws::String& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = value; }

    /**
     * <p>The district or county for the address.</p>
     */
    inline void SetDistrictOrCounty(Aws::String&& value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty = std::move(value); }

    /**
     * <p>The district or county for the address.</p>
     */
    inline void SetDistrictOrCounty(const char* value) { m_districtOrCountyHasBeenSet = true; m_districtOrCounty.assign(value); }

    /**
     * <p>The district or county for the address.</p>
     */
    inline Address& WithDistrictOrCounty(const Aws::String& value) { SetDistrictOrCounty(value); return *this;}

    /**
     * <p>The district or county for the address.</p>
     */
    inline Address& WithDistrictOrCounty(Aws::String&& value) { SetDistrictOrCounty(std::move(value)); return *this;}

    /**
     * <p>The district or county for the address.</p>
     */
    inline Address& WithDistrictOrCounty(const char* value) { SetDistrictOrCounty(value); return *this;}


    /**
     * <p>The postal code for the address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The postal code for the address.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The postal code for the address.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The postal code for the address.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The postal code for the address.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The postal code for the address.</p>
     */
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The postal code for the address.</p>
     */
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The postal code for the address.</p>
     */
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline Address& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline Address& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The ISO-3166 two-letter country code for the address.</p>
     */
    inline Address& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>The municipality for the address.</p>
     */
    inline const Aws::String& GetMunicipality() const{ return m_municipality; }

    /**
     * <p>The municipality for the address.</p>
     */
    inline bool MunicipalityHasBeenSet() const { return m_municipalityHasBeenSet; }

    /**
     * <p>The municipality for the address.</p>
     */
    inline void SetMunicipality(const Aws::String& value) { m_municipalityHasBeenSet = true; m_municipality = value; }

    /**
     * <p>The municipality for the address.</p>
     */
    inline void SetMunicipality(Aws::String&& value) { m_municipalityHasBeenSet = true; m_municipality = std::move(value); }

    /**
     * <p>The municipality for the address.</p>
     */
    inline void SetMunicipality(const char* value) { m_municipalityHasBeenSet = true; m_municipality.assign(value); }

    /**
     * <p>The municipality for the address.</p>
     */
    inline Address& WithMunicipality(const Aws::String& value) { SetMunicipality(value); return *this;}

    /**
     * <p>The municipality for the address.</p>
     */
    inline Address& WithMunicipality(Aws::String&& value) { SetMunicipality(std::move(value)); return *this;}

    /**
     * <p>The municipality for the address.</p>
     */
    inline Address& WithMunicipality(const char* value) { SetMunicipality(value); return *this;}

  private:

    Aws::String m_contactName;
    bool m_contactNameHasBeenSet = false;

    Aws::String m_contactPhoneNumber;
    bool m_contactPhoneNumberHasBeenSet = false;

    Aws::String m_addressLine1;
    bool m_addressLine1HasBeenSet = false;

    Aws::String m_addressLine2;
    bool m_addressLine2HasBeenSet = false;

    Aws::String m_addressLine3;
    bool m_addressLine3HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;

    Aws::String m_districtOrCounty;
    bool m_districtOrCountyHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_municipality;
    bool m_municipalityHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
