/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/CountryHighlights.h>
#include <aws/geo-places/model/RegionHighlights.h>
#include <aws/geo-places/model/SubRegionHighlights.h>
#include <aws/geo-places/model/Highlight.h>
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
   * <p>Describes how the parts of the response element matched the input query by
   * returning the sections of the response which matched to input query
   * terms.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AutocompleteAddressHighlights">AWS
   * API Reference</a></p>
   */
  class AutocompleteAddressHighlights
  {
  public:
    AWS_GEOPLACES_API AutocompleteAddressHighlights() = default;
    AWS_GEOPLACES_API AutocompleteAddressHighlights(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AutocompleteAddressHighlights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the starting and ending indexes for result items where they are
     * identified to match the input query. This should be used to provide emphasis to
     * output display to make selecting the correct result from a list easier for end
     * users.</p>
     */
    inline const Aws::Vector<Highlight>& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::Vector<Highlight>>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    template<typename LabelT = Highlight>
    AutocompleteAddressHighlights& AddLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label.emplace_back(std::forward<LabelT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const CountryHighlights& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = CountryHighlights>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = CountryHighlights>
    AutocompleteAddressHighlights& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be to be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const RegionHighlights& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = RegionHighlights>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = RegionHighlights>
    AutocompleteAddressHighlights& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const SubRegionHighlights& GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    template<typename SubRegionT = SubRegionHighlights>
    void SetSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::forward<SubRegionT>(value); }
    template<typename SubRegionT = SubRegionHighlights>
    AutocompleteAddressHighlights& WithSubRegion(SubRegionT&& value) { SetSubRegion(std::forward<SubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city or locality results should be present in. </p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::Vector<Highlight>& GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    template<typename LocalityT = Aws::Vector<Highlight>>
    void SetLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality = std::forward<LocalityT>(value); }
    template<typename LocalityT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithLocality(LocalityT&& value) { SetLocality(std::forward<LocalityT>(value)); return *this;}
    template<typename LocalityT = Highlight>
    AutocompleteAddressHighlights& AddLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality.emplace_back(std::forward<LocalityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The district or division of a city the results should be present in.</p>
     */
    inline const Aws::Vector<Highlight>& GetDistrict() const { return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    template<typename DistrictT = Aws::Vector<Highlight>>
    void SetDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district = std::forward<DistrictT>(value); }
    template<typename DistrictT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithDistrict(DistrictT&& value) { SetDistrict(std::forward<DistrictT>(value)); return *this;}
    template<typename DistrictT = Highlight>
    AutocompleteAddressHighlights& AddDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district.emplace_back(std::forward<DistrictT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the starting and ending index of the title in the text query that
     * match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetSubDistrict() const { return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    template<typename SubDistrictT = Aws::Vector<Highlight>>
    void SetSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::forward<SubDistrictT>(value); }
    template<typename SubDistrictT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithSubDistrict(SubDistrictT&& value) { SetSubDistrict(std::forward<SubDistrictT>(value)); return *this;}
    template<typename SubDistrictT = Highlight>
    AutocompleteAddressHighlights& AddSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict.emplace_back(std::forward<SubDistrictT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the street results should be present in.</p>
     */
    inline const Aws::Vector<Highlight>& GetStreet() const { return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    template<typename StreetT = Aws::Vector<Highlight>>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    template<typename StreetT = Highlight>
    AutocompleteAddressHighlights& AddStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street.emplace_back(std::forward<StreetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the block. </p> <p>Example: <code>Sunny Mansion 203 block: 2
     * Chome</code> </p>
     */
    inline const Aws::Vector<Highlight>& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = Aws::Vector<Highlight>>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    template<typename BlockT = Highlight>
    AutocompleteAddressHighlights& AddBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block.emplace_back(std::forward<BlockT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of sub-block. </p> <p>Example: <code>Sunny Mansion 203 sub-block:
     * 4</code> </p>
     */
    inline const Aws::Vector<Highlight>& GetSubBlock() const { return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    template<typename SubBlockT = Aws::Vector<Highlight>>
    void SetSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::forward<SubBlockT>(value); }
    template<typename SubBlockT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithSubBlock(SubBlockT&& value) { SetSubBlock(std::forward<SubBlockT>(value)); return *this;}
    template<typename SubBlockT = Highlight>
    AutocompleteAddressHighlights& AddSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock.emplace_back(std::forward<SubBlockT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the streets in the intersection. For example: e.g.
     * ["Friedrichstraße","Unter den Linden"]</p>
     */
    inline const Aws::Vector<Aws::Vector<Highlight>>& GetIntersection() const { return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    template<typename IntersectionT = Aws::Vector<Aws::Vector<Highlight>>>
    void SetIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection = std::forward<IntersectionT>(value); }
    template<typename IntersectionT = Aws::Vector<Aws::Vector<Highlight>>>
    AutocompleteAddressHighlights& WithIntersection(IntersectionT&& value) { SetIntersection(std::forward<IntersectionT>(value)); return *this;}
    template<typename IntersectionT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& AddIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection.emplace_back(std::forward<IntersectionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code for which the result should
     * possess. </p>
     */
    inline const Aws::Vector<Highlight>& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::Vector<Highlight>>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    template<typename PostalCodeT = Highlight>
    AutocompleteAddressHighlights& AddPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode.emplace_back(std::forward<PostalCodeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The house number or address results should have. </p>
     */
    inline const Aws::Vector<Highlight>& GetAddressNumber() const { return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    template<typename AddressNumberT = Aws::Vector<Highlight>>
    void SetAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::forward<AddressNumberT>(value); }
    template<typename AddressNumberT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithAddressNumber(AddressNumberT&& value) { SetAddressNumber(std::forward<AddressNumberT>(value)); return *this;}
    template<typename AddressNumberT = Highlight>
    AutocompleteAddressHighlights& AddAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber.emplace_back(std::forward<AddressNumberT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the building at the address.</p>
     */
    inline const Aws::Vector<Highlight>& GetBuilding() const { return m_building; }
    inline bool BuildingHasBeenSet() const { return m_buildingHasBeenSet; }
    template<typename BuildingT = Aws::Vector<Highlight>>
    void SetBuilding(BuildingT&& value) { m_buildingHasBeenSet = true; m_building = std::forward<BuildingT>(value); }
    template<typename BuildingT = Aws::Vector<Highlight>>
    AutocompleteAddressHighlights& WithBuilding(BuildingT&& value) { SetBuilding(std::forward<BuildingT>(value)); return *this;}
    template<typename BuildingT = Highlight>
    AutocompleteAddressHighlights& AddBuilding(BuildingT&& value) { m_buildingHasBeenSet = true; m_building.emplace_back(std::forward<BuildingT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Highlight> m_label;
    bool m_labelHasBeenSet = false;

    CountryHighlights m_country;
    bool m_countryHasBeenSet = false;

    RegionHighlights m_region;
    bool m_regionHasBeenSet = false;

    SubRegionHighlights m_subRegion;
    bool m_subRegionHasBeenSet = false;

    Aws::Vector<Highlight> m_locality;
    bool m_localityHasBeenSet = false;

    Aws::Vector<Highlight> m_district;
    bool m_districtHasBeenSet = false;

    Aws::Vector<Highlight> m_subDistrict;
    bool m_subDistrictHasBeenSet = false;

    Aws::Vector<Highlight> m_street;
    bool m_streetHasBeenSet = false;

    Aws::Vector<Highlight> m_block;
    bool m_blockHasBeenSet = false;

    Aws::Vector<Highlight> m_subBlock;
    bool m_subBlockHasBeenSet = false;

    Aws::Vector<Aws::Vector<Highlight>> m_intersection;
    bool m_intersectionHasBeenSet = false;

    Aws::Vector<Highlight> m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::Vector<Highlight> m_addressNumber;
    bool m_addressNumberHasBeenSet = false;

    Aws::Vector<Highlight> m_building;
    bool m_buildingHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
