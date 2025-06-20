/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>A structured free text query allows you to search for places by the name or
   * text representation of specific properties of the place. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GeocodeQueryComponents">AWS
   * API Reference</a></p>
   */
  class GeocodeQueryComponents
  {
  public:
    AWS_GEOPLACES_API GeocodeQueryComponents() = default;
    AWS_GEOPLACES_API GeocodeQueryComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeQueryComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    GeocodeQueryComponents& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be to be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GeocodeQueryComponents& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const Aws::String& GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    template<typename SubRegionT = Aws::String>
    void SetSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::forward<SubRegionT>(value); }
    template<typename SubRegionT = Aws::String>
    GeocodeQueryComponents& WithSubRegion(SubRegionT&& value) { SetSubRegion(std::forward<SubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city or locality results should be present in. </p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::String& GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    template<typename LocalityT = Aws::String>
    void SetLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality = std::forward<LocalityT>(value); }
    template<typename LocalityT = Aws::String>
    GeocodeQueryComponents& WithLocality(LocalityT&& value) { SetLocality(std::forward<LocalityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or division of a city the results should be present in.</p>
     */
    inline const Aws::String& GetDistrict() const { return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    template<typename DistrictT = Aws::String>
    void SetDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district = std::forward<DistrictT>(value); }
    template<typename DistrictT = Aws::String>
    GeocodeQueryComponents& WithDistrict(DistrictT&& value) { SetDistrict(std::forward<DistrictT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the street results should be present in.</p>
     */
    inline const Aws::String& GetStreet() const { return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    template<typename StreetT = Aws::String>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::String>
    GeocodeQueryComponents& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The house number or address results should have. </p>
     */
    inline const Aws::String& GetAddressNumber() const { return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    template<typename AddressNumberT = Aws::String>
    void SetAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::forward<AddressNumberT>(value); }
    template<typename AddressNumberT = Aws::String>
    GeocodeQueryComponents& WithAddressNumber(AddressNumberT&& value) { SetAddressNumber(std::forward<AddressNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code for which the result should
     * possess. </p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    GeocodeQueryComponents& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_subRegion;
    bool m_subRegionHasBeenSet = false;

    Aws::String m_locality;
    bool m_localityHasBeenSet = false;

    Aws::String m_district;
    bool m_districtHasBeenSet = false;

    Aws::String m_street;
    bool m_streetHasBeenSet = false;

    Aws::String m_addressNumber;
    bool m_addressNumberHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
