/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/Country.h>
#include <aws/geo-places/model/Region.h>
#include <aws/geo-places/model/SubRegion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/StreetComponents.h>
#include <aws/geo-places/model/SecondaryAddressComponent.h>
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
   * <p>The place address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_GEOPLACES_API Address() = default;
    AWS_GEOPLACES_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Assembled address value built out of the address components, according to the
     * regional postal rules. This is the correctly formatted address.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    Address& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country component of the address.</p>
     */
    inline const Country& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Country>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Country>
    Address& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const Region& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Region>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Region>
    Address& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const SubRegion& GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    template<typename SubRegionT = SubRegion>
    void SetSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::forward<SubRegionT>(value); }
    template<typename SubRegionT = SubRegion>
    Address& WithSubRegion(SubRegionT&& value) { SetSubRegion(std::forward<SubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city or locality of the address.</p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::String& GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    template<typename LocalityT = Aws::String>
    void SetLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality = std::forward<LocalityT>(value); }
    template<typename LocalityT = Aws::String>
    Address& WithLocality(LocalityT&& value) { SetLocality(std::forward<LocalityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or division of a locality associated with this address.</p>
     */
    inline const Aws::String& GetDistrict() const { return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    template<typename DistrictT = Aws::String>
    void SetDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district = std::forward<DistrictT>(value); }
    template<typename DistrictT = Aws::String>
    Address& WithDistrict(DistrictT&& value) { SetDistrict(std::forward<DistrictT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdivision of a district. </p> <p>Example:
     * <code>Minden-Lübbecke</code>.</p>
     */
    inline const Aws::String& GetSubDistrict() const { return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    template<typename SubDistrictT = Aws::String>
    void SetSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::forward<SubDistrictT>(value); }
    template<typename SubDistrictT = Aws::String>
    Address& WithSubDistrict(SubDistrictT&& value) { SetSubDistrict(std::forward<SubDistrictT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code, for which the result should
     * possess. </p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    Address& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the block. </p> <p>Example: <code>Sunny Mansion 203 block: 2
     * Chome</code> </p>
     */
    inline const Aws::String& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = Aws::String>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = Aws::String>
    Address& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of sub-block. </p> <p>Example: <code>Sunny Mansion 203 sub-block:
     * 4</code> </p>
     */
    inline const Aws::String& GetSubBlock() const { return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    template<typename SubBlockT = Aws::String>
    void SetSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::forward<SubBlockT>(value); }
    template<typename SubBlockT = Aws::String>
    Address& WithSubBlock(SubBlockT&& value) { SetSubBlock(std::forward<SubBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the streets in the intersection. </p> <p>Example:
     * <code>["Friedrichstraße","Unter den Linden"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIntersection() const { return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    template<typename IntersectionT = Aws::Vector<Aws::String>>
    void SetIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection = std::forward<IntersectionT>(value); }
    template<typename IntersectionT = Aws::Vector<Aws::String>>
    Address& WithIntersection(IntersectionT&& value) { SetIntersection(std::forward<IntersectionT>(value)); return *this;}
    template<typename IntersectionT = Aws::String>
    Address& AddIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection.emplace_back(std::forward<IntersectionT>(value)); return *this; }
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
    Address& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Components of the street. </p> <p>Example: Younge from the "Younge
     * street".</p>
     */
    inline const Aws::Vector<StreetComponents>& GetStreetComponents() const { return m_streetComponents; }
    inline bool StreetComponentsHasBeenSet() const { return m_streetComponentsHasBeenSet; }
    template<typename StreetComponentsT = Aws::Vector<StreetComponents>>
    void SetStreetComponents(StreetComponentsT&& value) { m_streetComponentsHasBeenSet = true; m_streetComponents = std::forward<StreetComponentsT>(value); }
    template<typename StreetComponentsT = Aws::Vector<StreetComponents>>
    Address& WithStreetComponents(StreetComponentsT&& value) { SetStreetComponents(std::forward<StreetComponentsT>(value)); return *this;}
    template<typename StreetComponentsT = StreetComponents>
    Address& AddStreetComponents(StreetComponentsT&& value) { m_streetComponentsHasBeenSet = true; m_streetComponents.emplace_back(std::forward<StreetComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number that identifies an address within a street.</p>
     */
    inline const Aws::String& GetAddressNumber() const { return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    template<typename AddressNumberT = Aws::String>
    void SetAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::forward<AddressNumberT>(value); }
    template<typename AddressNumberT = Aws::String>
    Address& WithAddressNumber(AddressNumberT&& value) { SetAddressNumber(std::forward<AddressNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the building at the address.</p>
     */
    inline const Aws::String& GetBuilding() const { return m_building; }
    inline bool BuildingHasBeenSet() const { return m_buildingHasBeenSet; }
    template<typename BuildingT = Aws::String>
    void SetBuilding(BuildingT&& value) { m_buildingHasBeenSet = true; m_building = std::forward<BuildingT>(value); }
    template<typename BuildingT = Aws::String>
    Address& WithBuilding(BuildingT&& value) { SetBuilding(std::forward<BuildingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Components that correspond to secondary identifiers on an Address. Secondary
     * address components include information such as Suite or Unit Number, Building,
     * or Floor.</p>
     */
    inline const Aws::Vector<SecondaryAddressComponent>& GetSecondaryAddressComponents() const { return m_secondaryAddressComponents; }
    inline bool SecondaryAddressComponentsHasBeenSet() const { return m_secondaryAddressComponentsHasBeenSet; }
    template<typename SecondaryAddressComponentsT = Aws::Vector<SecondaryAddressComponent>>
    void SetSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { m_secondaryAddressComponentsHasBeenSet = true; m_secondaryAddressComponents = std::forward<SecondaryAddressComponentsT>(value); }
    template<typename SecondaryAddressComponentsT = Aws::Vector<SecondaryAddressComponent>>
    Address& WithSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { SetSecondaryAddressComponents(std::forward<SecondaryAddressComponentsT>(value)); return *this;}
    template<typename SecondaryAddressComponentsT = SecondaryAddressComponent>
    Address& AddSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { m_secondaryAddressComponentsHasBeenSet = true; m_secondaryAddressComponents.emplace_back(std::forward<SecondaryAddressComponentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Country m_country;
    bool m_countryHasBeenSet = false;

    Region m_region;
    bool m_regionHasBeenSet = false;

    SubRegion m_subRegion;
    bool m_subRegionHasBeenSet = false;

    Aws::String m_locality;
    bool m_localityHasBeenSet = false;

    Aws::String m_district;
    bool m_districtHasBeenSet = false;

    Aws::String m_subDistrict;
    bool m_subDistrictHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_block;
    bool m_blockHasBeenSet = false;

    Aws::String m_subBlock;
    bool m_subBlockHasBeenSet = false;

    Aws::Vector<Aws::String> m_intersection;
    bool m_intersectionHasBeenSet = false;

    Aws::String m_street;
    bool m_streetHasBeenSet = false;

    Aws::Vector<StreetComponents> m_streetComponents;
    bool m_streetComponentsHasBeenSet = false;

    Aws::String m_addressNumber;
    bool m_addressNumberHasBeenSet = false;

    Aws::String m_building;
    bool m_buildingHasBeenSet = false;

    Aws::Vector<SecondaryAddressComponent> m_secondaryAddressComponents;
    bool m_secondaryAddressComponentsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
