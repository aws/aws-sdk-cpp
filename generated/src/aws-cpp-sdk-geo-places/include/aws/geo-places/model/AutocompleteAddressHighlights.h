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
    AWS_GEOPLACES_API AutocompleteAddressHighlights();
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
    inline const Aws::Vector<Highlight>& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::Vector<Highlight>& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::Vector<Highlight>&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline AutocompleteAddressHighlights& WithLabel(const Aws::Vector<Highlight>& value) { SetLabel(value); return *this;}
    inline AutocompleteAddressHighlights& WithLabel(Aws::Vector<Highlight>&& value) { SetLabel(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddLabel(const Highlight& value) { m_labelHasBeenSet = true; m_label.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddLabel(Highlight&& value) { m_labelHasBeenSet = true; m_label.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const CountryHighlights& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const CountryHighlights& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(CountryHighlights&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline AutocompleteAddressHighlights& WithCountry(const CountryHighlights& value) { SetCountry(value); return *this;}
    inline AutocompleteAddressHighlights& WithCountry(CountryHighlights&& value) { SetCountry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be to be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const RegionHighlights& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const RegionHighlights& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(RegionHighlights&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline AutocompleteAddressHighlights& WithRegion(const RegionHighlights& value) { SetRegion(value); return *this;}
    inline AutocompleteAddressHighlights& WithRegion(RegionHighlights&& value) { SetRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const SubRegionHighlights& GetSubRegion() const{ return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    inline void SetSubRegion(const SubRegionHighlights& value) { m_subRegionHasBeenSet = true; m_subRegion = value; }
    inline void SetSubRegion(SubRegionHighlights&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::move(value); }
    inline AutocompleteAddressHighlights& WithSubRegion(const SubRegionHighlights& value) { SetSubRegion(value); return *this;}
    inline AutocompleteAddressHighlights& WithSubRegion(SubRegionHighlights&& value) { SetSubRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city or locality results should be present in. </p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::Vector<Highlight>& GetLocality() const{ return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(const Aws::Vector<Highlight>& value) { m_localityHasBeenSet = true; m_locality = value; }
    inline void SetLocality(Aws::Vector<Highlight>&& value) { m_localityHasBeenSet = true; m_locality = std::move(value); }
    inline AutocompleteAddressHighlights& WithLocality(const Aws::Vector<Highlight>& value) { SetLocality(value); return *this;}
    inline AutocompleteAddressHighlights& WithLocality(Aws::Vector<Highlight>&& value) { SetLocality(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddLocality(const Highlight& value) { m_localityHasBeenSet = true; m_locality.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddLocality(Highlight&& value) { m_localityHasBeenSet = true; m_locality.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The district or division of a city the results should be present in.</p>
     */
    inline const Aws::Vector<Highlight>& GetDistrict() const{ return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    inline void SetDistrict(const Aws::Vector<Highlight>& value) { m_districtHasBeenSet = true; m_district = value; }
    inline void SetDistrict(Aws::Vector<Highlight>&& value) { m_districtHasBeenSet = true; m_district = std::move(value); }
    inline AutocompleteAddressHighlights& WithDistrict(const Aws::Vector<Highlight>& value) { SetDistrict(value); return *this;}
    inline AutocompleteAddressHighlights& WithDistrict(Aws::Vector<Highlight>&& value) { SetDistrict(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddDistrict(const Highlight& value) { m_districtHasBeenSet = true; m_district.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddDistrict(Highlight&& value) { m_districtHasBeenSet = true; m_district.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the starting and ending index of the title in the text query that
     * match the found title. </p>
     */
    inline const Aws::Vector<Highlight>& GetSubDistrict() const{ return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    inline void SetSubDistrict(const Aws::Vector<Highlight>& value) { m_subDistrictHasBeenSet = true; m_subDistrict = value; }
    inline void SetSubDistrict(Aws::Vector<Highlight>&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::move(value); }
    inline AutocompleteAddressHighlights& WithSubDistrict(const Aws::Vector<Highlight>& value) { SetSubDistrict(value); return *this;}
    inline AutocompleteAddressHighlights& WithSubDistrict(Aws::Vector<Highlight>&& value) { SetSubDistrict(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddSubDistrict(const Highlight& value) { m_subDistrictHasBeenSet = true; m_subDistrict.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddSubDistrict(Highlight&& value) { m_subDistrictHasBeenSet = true; m_subDistrict.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the street results should be present in.</p>
     */
    inline const Aws::Vector<Highlight>& GetStreet() const{ return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    inline void SetStreet(const Aws::Vector<Highlight>& value) { m_streetHasBeenSet = true; m_street = value; }
    inline void SetStreet(Aws::Vector<Highlight>&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }
    inline AutocompleteAddressHighlights& WithStreet(const Aws::Vector<Highlight>& value) { SetStreet(value); return *this;}
    inline AutocompleteAddressHighlights& WithStreet(Aws::Vector<Highlight>&& value) { SetStreet(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddStreet(const Highlight& value) { m_streetHasBeenSet = true; m_street.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddStreet(Highlight&& value) { m_streetHasBeenSet = true; m_street.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the block. Example: Sunny Mansion 203 block: 2 Chome</p>
     */
    inline const Aws::Vector<Highlight>& GetBlock() const{ return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    inline void SetBlock(const Aws::Vector<Highlight>& value) { m_blockHasBeenSet = true; m_block = value; }
    inline void SetBlock(Aws::Vector<Highlight>&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }
    inline AutocompleteAddressHighlights& WithBlock(const Aws::Vector<Highlight>& value) { SetBlock(value); return *this;}
    inline AutocompleteAddressHighlights& WithBlock(Aws::Vector<Highlight>&& value) { SetBlock(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddBlock(const Highlight& value) { m_blockHasBeenSet = true; m_block.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddBlock(Highlight&& value) { m_blockHasBeenSet = true; m_block.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of sub-block. Example Sunny Mansion 203 sub-block: 4</p>
     */
    inline const Aws::Vector<Highlight>& GetSubBlock() const{ return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    inline void SetSubBlock(const Aws::Vector<Highlight>& value) { m_subBlockHasBeenSet = true; m_subBlock = value; }
    inline void SetSubBlock(Aws::Vector<Highlight>&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::move(value); }
    inline AutocompleteAddressHighlights& WithSubBlock(const Aws::Vector<Highlight>& value) { SetSubBlock(value); return *this;}
    inline AutocompleteAddressHighlights& WithSubBlock(Aws::Vector<Highlight>&& value) { SetSubBlock(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddSubBlock(const Highlight& value) { m_subBlockHasBeenSet = true; m_subBlock.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddSubBlock(Highlight&& value) { m_subBlockHasBeenSet = true; m_subBlock.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the streets in the intersection. For example: e.g.
     * ["Friedrichstraße","Unter den Linden"]</p>
     */
    inline const Aws::Vector<Aws::Vector<Highlight>>& GetIntersection() const{ return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    inline void SetIntersection(const Aws::Vector<Aws::Vector<Highlight>>& value) { m_intersectionHasBeenSet = true; m_intersection = value; }
    inline void SetIntersection(Aws::Vector<Aws::Vector<Highlight>>&& value) { m_intersectionHasBeenSet = true; m_intersection = std::move(value); }
    inline AutocompleteAddressHighlights& WithIntersection(const Aws::Vector<Aws::Vector<Highlight>>& value) { SetIntersection(value); return *this;}
    inline AutocompleteAddressHighlights& WithIntersection(Aws::Vector<Aws::Vector<Highlight>>&& value) { SetIntersection(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddIntersection(const Aws::Vector<Highlight>& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddIntersection(Aws::Vector<Highlight>&& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code for which the result should
     * posses. </p>
     */
    inline const Aws::Vector<Highlight>& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::Vector<Highlight>& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::Vector<Highlight>&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline AutocompleteAddressHighlights& WithPostalCode(const Aws::Vector<Highlight>& value) { SetPostalCode(value); return *this;}
    inline AutocompleteAddressHighlights& WithPostalCode(Aws::Vector<Highlight>&& value) { SetPostalCode(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddPostalCode(const Highlight& value) { m_postalCodeHasBeenSet = true; m_postalCode.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddPostalCode(Highlight&& value) { m_postalCodeHasBeenSet = true; m_postalCode.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The house number or address results should have. </p>
     */
    inline const Aws::Vector<Highlight>& GetAddressNumber() const{ return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    inline void SetAddressNumber(const Aws::Vector<Highlight>& value) { m_addressNumberHasBeenSet = true; m_addressNumber = value; }
    inline void SetAddressNumber(Aws::Vector<Highlight>&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::move(value); }
    inline AutocompleteAddressHighlights& WithAddressNumber(const Aws::Vector<Highlight>& value) { SetAddressNumber(value); return *this;}
    inline AutocompleteAddressHighlights& WithAddressNumber(Aws::Vector<Highlight>&& value) { SetAddressNumber(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddAddressNumber(const Highlight& value) { m_addressNumberHasBeenSet = true; m_addressNumber.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddAddressNumber(Highlight&& value) { m_addressNumberHasBeenSet = true; m_addressNumber.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the building at the address.</p>
     */
    inline const Aws::Vector<Highlight>& GetBuilding() const{ return m_building; }
    inline bool BuildingHasBeenSet() const { return m_buildingHasBeenSet; }
    inline void SetBuilding(const Aws::Vector<Highlight>& value) { m_buildingHasBeenSet = true; m_building = value; }
    inline void SetBuilding(Aws::Vector<Highlight>&& value) { m_buildingHasBeenSet = true; m_building = std::move(value); }
    inline AutocompleteAddressHighlights& WithBuilding(const Aws::Vector<Highlight>& value) { SetBuilding(value); return *this;}
    inline AutocompleteAddressHighlights& WithBuilding(Aws::Vector<Highlight>&& value) { SetBuilding(std::move(value)); return *this;}
    inline AutocompleteAddressHighlights& AddBuilding(const Highlight& value) { m_buildingHasBeenSet = true; m_building.push_back(value); return *this; }
    inline AutocompleteAddressHighlights& AddBuilding(Highlight&& value) { m_buildingHasBeenSet = true; m_building.push_back(std::move(value)); return *this; }
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
