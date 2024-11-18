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
    AWS_CUSTOMERPROFILES_API AddressDimension();
    AWS_CUSTOMERPROFILES_API AddressDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AddressDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The city belonging to the address.</p>
     */
    inline const ProfileDimension& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const ProfileDimension& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(ProfileDimension&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline AddressDimension& WithCity(const ProfileDimension& value) { SetCity(value); return *this;}
    inline AddressDimension& WithCity(ProfileDimension&& value) { SetCity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country belonging to the address.</p>
     */
    inline const ProfileDimension& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const ProfileDimension& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(ProfileDimension&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline AddressDimension& WithCountry(const ProfileDimension& value) { SetCountry(value); return *this;}
    inline AddressDimension& WithCountry(ProfileDimension&& value) { SetCountry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The county belonging to the address.</p>
     */
    inline const ProfileDimension& GetCounty() const{ return m_county; }
    inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
    inline void SetCounty(const ProfileDimension& value) { m_countyHasBeenSet = true; m_county = value; }
    inline void SetCounty(ProfileDimension&& value) { m_countyHasBeenSet = true; m_county = std::move(value); }
    inline AddressDimension& WithCounty(const ProfileDimension& value) { SetCounty(value); return *this;}
    inline AddressDimension& WithCounty(ProfileDimension&& value) { SetCounty(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code belonging to the address.</p>
     */
    inline const ProfileDimension& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const ProfileDimension& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(ProfileDimension&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline AddressDimension& WithPostalCode(const ProfileDimension& value) { SetPostalCode(value); return *this;}
    inline AddressDimension& WithPostalCode(ProfileDimension&& value) { SetPostalCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The province belonging to the address.</p>
     */
    inline const ProfileDimension& GetProvince() const{ return m_province; }
    inline bool ProvinceHasBeenSet() const { return m_provinceHasBeenSet; }
    inline void SetProvince(const ProfileDimension& value) { m_provinceHasBeenSet = true; m_province = value; }
    inline void SetProvince(ProfileDimension&& value) { m_provinceHasBeenSet = true; m_province = std::move(value); }
    inline AddressDimension& WithProvince(const ProfileDimension& value) { SetProvince(value); return *this;}
    inline AddressDimension& WithProvince(ProfileDimension&& value) { SetProvince(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state belonging to the address.</p>
     */
    inline const ProfileDimension& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ProfileDimension& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ProfileDimension&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AddressDimension& WithState(const ProfileDimension& value) { SetState(value); return *this;}
    inline AddressDimension& WithState(ProfileDimension&& value) { SetState(std::move(value)); return *this;}
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
