/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A generic address associated with the customer that is not mailing, shipping,
   * or billing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_CUSTOMERPROFILES_API Address();
    AWS_CUSTOMERPROFILES_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The first line of a customer address.</p>
     */
    inline const Aws::String& GetAddress1() const{ return m_address1; }
    inline bool Address1HasBeenSet() const { return m_address1HasBeenSet; }
    inline void SetAddress1(const Aws::String& value) { m_address1HasBeenSet = true; m_address1 = value; }
    inline void SetAddress1(Aws::String&& value) { m_address1HasBeenSet = true; m_address1 = std::move(value); }
    inline void SetAddress1(const char* value) { m_address1HasBeenSet = true; m_address1.assign(value); }
    inline Address& WithAddress1(const Aws::String& value) { SetAddress1(value); return *this;}
    inline Address& WithAddress1(Aws::String&& value) { SetAddress1(std::move(value)); return *this;}
    inline Address& WithAddress1(const char* value) { SetAddress1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer address.</p>
     */
    inline const Aws::String& GetAddress2() const{ return m_address2; }
    inline bool Address2HasBeenSet() const { return m_address2HasBeenSet; }
    inline void SetAddress2(const Aws::String& value) { m_address2HasBeenSet = true; m_address2 = value; }
    inline void SetAddress2(Aws::String&& value) { m_address2HasBeenSet = true; m_address2 = std::move(value); }
    inline void SetAddress2(const char* value) { m_address2HasBeenSet = true; m_address2.assign(value); }
    inline Address& WithAddress2(const Aws::String& value) { SetAddress2(value); return *this;}
    inline Address& WithAddress2(Aws::String&& value) { SetAddress2(std::move(value)); return *this;}
    inline Address& WithAddress2(const char* value) { SetAddress2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer address.</p>
     */
    inline const Aws::String& GetAddress3() const{ return m_address3; }
    inline bool Address3HasBeenSet() const { return m_address3HasBeenSet; }
    inline void SetAddress3(const Aws::String& value) { m_address3HasBeenSet = true; m_address3 = value; }
    inline void SetAddress3(Aws::String&& value) { m_address3HasBeenSet = true; m_address3 = std::move(value); }
    inline void SetAddress3(const char* value) { m_address3HasBeenSet = true; m_address3.assign(value); }
    inline Address& WithAddress3(const Aws::String& value) { SetAddress3(value); return *this;}
    inline Address& WithAddress3(Aws::String&& value) { SetAddress3(std::move(value)); return *this;}
    inline Address& WithAddress3(const char* value) { SetAddress3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer address.</p>
     */
    inline const Aws::String& GetAddress4() const{ return m_address4; }
    inline bool Address4HasBeenSet() const { return m_address4HasBeenSet; }
    inline void SetAddress4(const Aws::String& value) { m_address4HasBeenSet = true; m_address4 = value; }
    inline void SetAddress4(Aws::String&& value) { m_address4HasBeenSet = true; m_address4 = std::move(value); }
    inline void SetAddress4(const char* value) { m_address4HasBeenSet = true; m_address4.assign(value); }
    inline Address& WithAddress4(const Aws::String& value) { SetAddress4(value); return *this;}
    inline Address& WithAddress4(Aws::String&& value) { SetAddress4(std::move(value)); return *this;}
    inline Address& WithAddress4(const char* value) { SetAddress4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city in which a customer lives.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county in which a customer lives.</p>
     */
    inline const Aws::String& GetCounty() const{ return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    inline void SetCounty(const Aws::String& value) { m_countyHasBeenSet = true; m_county = value; }
    inline void SetCounty(Aws::String&& value) { m_countyHasBeenSet = true; m_county = std::move(value); }
    inline void SetCounty(const char* value) { m_countyHasBeenSet = true; m_county.assign(value); }
    inline Address& WithCounty(const Aws::String& value) { SetCounty(value); return *this;}
    inline Address& WithCounty(Aws::String&& value) { SetCounty(std::move(value)); return *this;}
    inline Address& WithCounty(const char* value) { SetCounty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state in which a customer lives.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline Address& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline Address& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline Address& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province in which a customer lives.</p>
     */
    inline const Aws::String& GetProvince() const{ return m_province; }
    inline bool ProvinceHasBeenSet() const { return m_provinceHasBeenSet; }
    inline void SetProvince(const Aws::String& value) { m_provinceHasBeenSet = true; m_province = value; }
    inline void SetProvince(Aws::String&& value) { m_provinceHasBeenSet = true; m_province = std::move(value); }
    inline void SetProvince(const char* value) { m_provinceHasBeenSet = true; m_province.assign(value); }
    inline Address& WithProvince(const Aws::String& value) { SetProvince(value); return *this;}
    inline Address& WithProvince(Aws::String&& value) { SetProvince(std::move(value)); return *this;}
    inline Address& WithProvince(const char* value) { SetProvince(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in which a customer lives.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline Address& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline Address& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer address.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}
  private:

    Aws::String m_address1;
    bool m_address1HasBeenSet = false;

    Aws::String m_address2;
    bool m_address2HasBeenSet = false;

    Aws::String m_address3;
    bool m_address3HasBeenSet = false;

    Aws::String m_address4;
    bool m_address4HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_county;
    bool m_countyHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_province;
    bool m_provinceHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
