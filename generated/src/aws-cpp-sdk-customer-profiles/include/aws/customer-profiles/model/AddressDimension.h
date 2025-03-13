/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ProfileDimension.h>
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
   * <p>Object that segments on Customer Profile's address object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AddressDimension">AWS
   * API Reference</a></p>
   */
  class AddressDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API AddressDimension() = default;
    AWS_CUSTOMERPROFILES_API AddressDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AddressDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The city belonging to the address.</p>
     */
    inline const ProfileDimension& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = ProfileDimension>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = ProfileDimension>
    AddressDimension& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country belonging to the address.</p>
     */
    inline const ProfileDimension& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = ProfileDimension>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = ProfileDimension>
    AddressDimension& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county belonging to the address.</p>
     */
    inline const ProfileDimension& GetCounty() const { return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    template<typename CountyT = ProfileDimension>
    void SetCounty(CountyT&& value) { m_countyHasBeenSet = true; m_county = std::forward<CountyT>(value); }
    template<typename CountyT = ProfileDimension>
    AddressDimension& WithCounty(CountyT&& value) { SetCounty(std::forward<CountyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code belonging to the address.</p>
     */
    inline const ProfileDimension& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = ProfileDimension>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = ProfileDimension>
    AddressDimension& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province belonging to the address.</p>
     */
    inline const ProfileDimension& GetProvince() const { return m_province; }
    inline bool ProvinceHasBeenSet() const { return m_provinceHasBeenSet; }
    template<typename ProvinceT = ProfileDimension>
    void SetProvince(ProvinceT&& value) { m_provinceHasBeenSet = true; m_province = std::forward<ProvinceT>(value); }
    template<typename ProvinceT = ProfileDimension>
    AddressDimension& WithProvince(ProvinceT&& value) { SetProvince(std::forward<ProvinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state belonging to the address.</p>
     */
    inline const ProfileDimension& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = ProfileDimension>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = ProfileDimension>
    AddressDimension& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    ProfileDimension m_city;
    bool m_cityHasBeenSet = false;

    ProfileDimension m_country;
    bool m_countryHasBeenSet = false;

    ProfileDimension m_county;
    bool m_countyHasBeenSet = false;

    ProfileDimension m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    ProfileDimension m_province;
    bool m_provinceHasBeenSet = false;

    ProfileDimension m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
