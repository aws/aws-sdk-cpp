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
   * <p>Updates associated with the address properties of a customer
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateAddress">AWS
   * API Reference</a></p>
   */
  class UpdateAddress
  {
  public:
    AWS_CUSTOMERPROFILES_API UpdateAddress() = default;
    AWS_CUSTOMERPROFILES_API UpdateAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API UpdateAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The first line of a customer address.</p>
     */
    inline const Aws::String& GetAddress1() const { return m_address1; }
    inline bool Address1HasBeenSet() const { return m_address1HasBeenSet; }
    template<typename Address1T = Aws::String>
    void SetAddress1(Address1T&& value) { m_address1HasBeenSet = true; m_address1 = std::forward<Address1T>(value); }
    template<typename Address1T = Aws::String>
    UpdateAddress& WithAddress1(Address1T&& value) { SetAddress1(std::forward<Address1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line of a customer address.</p>
     */
    inline const Aws::String& GetAddress2() const { return m_address2; }
    inline bool Address2HasBeenSet() const { return m_address2HasBeenSet; }
    template<typename Address2T = Aws::String>
    void SetAddress2(Address2T&& value) { m_address2HasBeenSet = true; m_address2 = std::forward<Address2T>(value); }
    template<typename Address2T = Aws::String>
    UpdateAddress& WithAddress2(Address2T&& value) { SetAddress2(std::forward<Address2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line of a customer address.</p>
     */
    inline const Aws::String& GetAddress3() const { return m_address3; }
    inline bool Address3HasBeenSet() const { return m_address3HasBeenSet; }
    template<typename Address3T = Aws::String>
    void SetAddress3(Address3T&& value) { m_address3HasBeenSet = true; m_address3 = std::forward<Address3T>(value); }
    template<typename Address3T = Aws::String>
    UpdateAddress& WithAddress3(Address3T&& value) { SetAddress3(std::forward<Address3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fourth line of a customer address.</p>
     */
    inline const Aws::String& GetAddress4() const { return m_address4; }
    inline bool Address4HasBeenSet() const { return m_address4HasBeenSet; }
    template<typename Address4T = Aws::String>
    void SetAddress4(Address4T&& value) { m_address4HasBeenSet = true; m_address4 = std::forward<Address4T>(value); }
    template<typename Address4T = Aws::String>
    UpdateAddress& WithAddress4(Address4T&& value) { SetAddress4(std::forward<Address4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city in which a customer lives.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    UpdateAddress& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county in which a customer lives.</p>
     */
    inline const Aws::String& GetCounty() const { return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    template<typename CountyT = Aws::String>
    void SetCounty(CountyT&& value) { m_countyHasBeenSet = true; m_county = std::forward<CountyT>(value); }
    template<typename CountyT = Aws::String>
    UpdateAddress& WithCounty(CountyT&& value) { SetCounty(std::forward<CountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state in which a customer lives.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    UpdateAddress& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province in which a customer lives.</p>
     */
    inline const Aws::String& GetProvince() const { return m_province; }
    inline bool ProvinceHasBeenSet() const { return m_provinceHasBeenSet; }
    template<typename ProvinceT = Aws::String>
    void SetProvince(ProvinceT&& value) { m_provinceHasBeenSet = true; m_province = std::forward<ProvinceT>(value); }
    template<typename ProvinceT = Aws::String>
    UpdateAddress& WithProvince(ProvinceT&& value) { SetProvince(std::forward<ProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in which a customer lives.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    UpdateAddress& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code of a customer address.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    UpdateAddress& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
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
