/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/ParsedQueryComponent.h>
#include <aws/geo-places/model/ParsedQuerySecondaryAddressComponent.h>
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
   * <p>Parsed address components in the provided QueryText.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GeocodeParsedQueryAddressComponents">AWS
   * API Reference</a></p>
   */
  class GeocodeParsedQueryAddressComponents
  {
  public:
    AWS_GEOPLACES_API GeocodeParsedQueryAddressComponents() = default;
    AWS_GEOPLACES_API GeocodeParsedQueryAddressComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeParsedQueryAddressComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::Vector<ParsedQueryComponent>>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    template<typename CountryT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country.emplace_back(std::forward<CountryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The region or state results should be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::Vector<ParsedQueryComponent>>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    template<typename RegionT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region.emplace_back(std::forward<RegionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    template<typename SubRegionT = Aws::Vector<ParsedQueryComponent>>
    void SetSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::forward<SubRegionT>(value); }
    template<typename SubRegionT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithSubRegion(SubRegionT&& value) { SetSubRegion(std::forward<SubRegionT>(value)); return *this;}
    template<typename SubRegionT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion.emplace_back(std::forward<SubRegionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The city or locality of the address.</p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    template<typename LocalityT = Aws::Vector<ParsedQueryComponent>>
    void SetLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality = std::forward<LocalityT>(value); }
    template<typename LocalityT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithLocality(LocalityT&& value) { SetLocality(std::forward<LocalityT>(value)); return *this;}
    template<typename LocalityT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality.emplace_back(std::forward<LocalityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The district or division of a city the results should be present in.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetDistrict() const { return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    template<typename DistrictT = Aws::Vector<ParsedQueryComponent>>
    void SetDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district = std::forward<DistrictT>(value); }
    template<typename DistrictT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithDistrict(DistrictT&& value) { SetDistrict(std::forward<DistrictT>(value)); return *this;}
    template<typename DistrictT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district.emplace_back(std::forward<DistrictT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A subdivision of a district. </p> <p>Example:
     * <code>Minden-Lübbecke</code>.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetSubDistrict() const { return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    template<typename SubDistrictT = Aws::Vector<ParsedQueryComponent>>
    void SetSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::forward<SubDistrictT>(value); }
    template<typename SubDistrictT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithSubDistrict(SubDistrictT&& value) { SetSubDistrict(std::forward<SubDistrictT>(value)); return *this;}
    template<typename SubDistrictT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict.emplace_back(std::forward<SubDistrictT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code, for which the result should
     * possess. </p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::Vector<ParsedQueryComponent>>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    template<typename PostalCodeT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode.emplace_back(std::forward<PostalCodeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the block. </p> <p>Example: <code>Sunny Mansion 203 block: 2
     * Chome</code> </p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = Aws::Vector<ParsedQueryComponent>>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    template<typename BlockT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block.emplace_back(std::forward<BlockT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of sub-block. </p> <p>Example: <code>Sunny Mansion 203 sub-block:
     * 4</code> </p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetSubBlock() const { return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    template<typename SubBlockT = Aws::Vector<ParsedQueryComponent>>
    void SetSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::forward<SubBlockT>(value); }
    template<typename SubBlockT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithSubBlock(SubBlockT&& value) { SetSubBlock(std::forward<SubBlockT>(value)); return *this;}
    template<typename SubBlockT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock.emplace_back(std::forward<SubBlockT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the street results should be present in.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetStreet() const { return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    template<typename StreetT = Aws::Vector<ParsedQueryComponent>>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    template<typename StreetT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street.emplace_back(std::forward<StreetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number that identifies an address within a street.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetAddressNumber() const { return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    template<typename AddressNumberT = Aws::Vector<ParsedQueryComponent>>
    void SetAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::forward<AddressNumberT>(value); }
    template<typename AddressNumberT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithAddressNumber(AddressNumberT&& value) { SetAddressNumber(std::forward<AddressNumberT>(value)); return *this;}
    template<typename AddressNumberT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber.emplace_back(std::forward<AddressNumberT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the building at the address.</p>
     */
    inline const Aws::Vector<ParsedQueryComponent>& GetBuilding() const { return m_building; }
    inline bool BuildingHasBeenSet() const { return m_buildingHasBeenSet; }
    template<typename BuildingT = Aws::Vector<ParsedQueryComponent>>
    void SetBuilding(BuildingT&& value) { m_buildingHasBeenSet = true; m_building = std::forward<BuildingT>(value); }
    template<typename BuildingT = Aws::Vector<ParsedQueryComponent>>
    GeocodeParsedQueryAddressComponents& WithBuilding(BuildingT&& value) { SetBuilding(std::forward<BuildingT>(value)); return *this;}
    template<typename BuildingT = ParsedQueryComponent>
    GeocodeParsedQueryAddressComponents& AddBuilding(BuildingT&& value) { m_buildingHasBeenSet = true; m_building.emplace_back(std::forward<BuildingT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Parsed secondary address components from the provided query text.</p>
     */
    inline const Aws::Vector<ParsedQuerySecondaryAddressComponent>& GetSecondaryAddressComponents() const { return m_secondaryAddressComponents; }
    inline bool SecondaryAddressComponentsHasBeenSet() const { return m_secondaryAddressComponentsHasBeenSet; }
    template<typename SecondaryAddressComponentsT = Aws::Vector<ParsedQuerySecondaryAddressComponent>>
    void SetSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { m_secondaryAddressComponentsHasBeenSet = true; m_secondaryAddressComponents = std::forward<SecondaryAddressComponentsT>(value); }
    template<typename SecondaryAddressComponentsT = Aws::Vector<ParsedQuerySecondaryAddressComponent>>
    GeocodeParsedQueryAddressComponents& WithSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { SetSecondaryAddressComponents(std::forward<SecondaryAddressComponentsT>(value)); return *this;}
    template<typename SecondaryAddressComponentsT = ParsedQuerySecondaryAddressComponent>
    GeocodeParsedQueryAddressComponents& AddSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { m_secondaryAddressComponentsHasBeenSet = true; m_secondaryAddressComponents.emplace_back(std::forward<SecondaryAddressComponentsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ParsedQueryComponent> m_country;
    bool m_countryHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_subRegion;
    bool m_subRegionHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_locality;
    bool m_localityHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_district;
    bool m_districtHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_subDistrict;
    bool m_subDistrictHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_block;
    bool m_blockHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_subBlock;
    bool m_subBlockHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_street;
    bool m_streetHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_addressNumber;
    bool m_addressNumberHasBeenSet = false;

    Aws::Vector<ParsedQueryComponent> m_building;
    bool m_buildingHasBeenSet = false;

    Aws::Vector<ParsedQuerySecondaryAddressComponent> m_secondaryAddressComponents;
    bool m_secondaryAddressComponentsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
