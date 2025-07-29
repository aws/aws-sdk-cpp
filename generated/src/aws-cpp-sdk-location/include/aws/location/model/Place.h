/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PlaceGeometry.h>
#include <aws/location/model/TimeZone.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains details about addresses or points of interest that match the search
   * criteria.</p> <p>Not all details are included with all responses. Some details
   * may only be returned by specific data partners.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/Place">AWS API
   * Reference</a></p>
   */
  class Place
  {
  public:
    AWS_LOCATIONSERVICE_API Place() = default;
    AWS_LOCATIONSERVICE_API Place(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Place& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    Place& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PlaceGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = PlaceGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = PlaceGeometry>
    Place& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline const Aws::String& GetAddressNumber() const { return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    template<typename AddressNumberT = Aws::String>
    void SetAddressNumber(AddressNumberT&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::forward<AddressNumberT>(value); }
    template<typename AddressNumberT = Aws::String>
    Place& WithAddressNumber(AddressNumberT&& value) { SetAddressNumber(std::forward<AddressNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline const Aws::String& GetStreet() const { return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    template<typename StreetT = Aws::String>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::String>
    Place& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline const Aws::String& GetNeighborhood() const { return m_neighborhood; }
    inline bool NeighborhoodHasBeenSet() const { return m_neighborhoodHasBeenSet; }
    template<typename NeighborhoodT = Aws::String>
    void SetNeighborhood(NeighborhoodT&& value) { m_neighborhoodHasBeenSet = true; m_neighborhood = std::forward<NeighborhoodT>(value); }
    template<typename NeighborhoodT = Aws::String>
    Place& WithNeighborhood(NeighborhoodT&& value) { SetNeighborhood(std::forward<NeighborhoodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline const Aws::String& GetMunicipality() const { return m_municipality; }
    inline bool MunicipalityHasBeenSet() const { return m_municipalityHasBeenSet; }
    template<typename MunicipalityT = Aws::String>
    void SetMunicipality(MunicipalityT&& value) { m_municipalityHasBeenSet = true; m_municipality = std::forward<MunicipalityT>(value); }
    template<typename MunicipalityT = Aws::String>
    Place& WithMunicipality(MunicipalityT&& value) { SetMunicipality(std::forward<MunicipalityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A county, or an area that's part of a larger region. For example, <code>Metro
     * Vancouver</code>.</p>
     */
    inline const Aws::String& GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    template<typename SubRegionT = Aws::String>
    void SetSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::forward<SubRegionT>(value); }
    template<typename SubRegionT = Aws::String>
    Place& WithSubRegion(SubRegionT&& value) { SetSubRegion(std::forward<SubRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Place& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    Place& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    Place& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the result is interpolated from other known places.</p>
     * <p> <code>False</code> if the Place is a known place.</p> <p>Not returned when
     * the partner does not provide the information.</p> <p>For example, returns
     * <code>False</code> for an address location that is found in the partner data,
     * but returns <code>True</code> if an address does not exist in the partner data
     * and its location is calculated by interpolating between other known addresses.
     * </p>
     */
    inline bool GetInterpolated() const { return m_interpolated; }
    inline bool InterpolatedHasBeenSet() const { return m_interpolatedHasBeenSet; }
    inline void SetInterpolated(bool value) { m_interpolatedHasBeenSet = true; m_interpolated = value; }
    inline Place& WithInterpolated(bool value) { SetInterpolated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE or Grab as the selected partner.</p>
     */
    inline const TimeZone& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = TimeZone>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = TimeZone>
    Place& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>  <p>Returned only for a place index that uses
     * Esri as a data provider.</p> 
     */
    inline const Aws::String& GetUnitType() const { return m_unitType; }
    inline bool UnitTypeHasBeenSet() const { return m_unitTypeHasBeenSet; }
    template<typename UnitTypeT = Aws::String>
    void SetUnitType(UnitTypeT&& value) { m_unitTypeHasBeenSet = true; m_unitType = std::forward<UnitTypeT>(value); }
    template<typename UnitTypeT = Aws::String>
    Place& WithUnitType(UnitTypeT&& value) { SetUnitType(std::forward<UnitTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri or Grab as a data provider. Is
     * not returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline const Aws::String& GetUnitNumber() const { return m_unitNumber; }
    inline bool UnitNumberHasBeenSet() const { return m_unitNumberHasBeenSet; }
    template<typename UnitNumberT = Aws::String>
    void SetUnitNumber(UnitNumberT&& value) { m_unitNumberHasBeenSet = true; m_unitNumber = std::forward<UnitNumberT>(value); }
    template<typename UnitNumberT = Aws::String>
    Place& WithUnitNumber(UnitNumberT&& value) { SetUnitNumber(std::forward<UnitNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Location categories that describe this Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service developer guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    Place& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Aws::String>
    Place& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupplementalCategories() const { return m_supplementalCategories; }
    inline bool SupplementalCategoriesHasBeenSet() const { return m_supplementalCategoriesHasBeenSet; }
    template<typename SupplementalCategoriesT = Aws::Vector<Aws::String>>
    void SetSupplementalCategories(SupplementalCategoriesT&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories = std::forward<SupplementalCategoriesT>(value); }
    template<typename SupplementalCategoriesT = Aws::Vector<Aws::String>>
    Place& WithSupplementalCategories(SupplementalCategoriesT&& value) { SetSupplementalCategories(std::forward<SupplementalCategoriesT>(value)); return *this;}
    template<typename SupplementalCategoriesT = Aws::String>
    Place& AddSupplementalCategories(SupplementalCategoriesT&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.emplace_back(std::forward<SupplementalCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An area that's part of a larger municipality. For example, <code>Blissville
     * </code> is a submunicipality in the Queen County in New York.</p>  <p>This
     * property supported by Esri and OpenData. The Esri property is
     * <code>district</code>, and the OpenData property is <code>borough</code>.</p>
     * 
     */
    inline const Aws::String& GetSubMunicipality() const { return m_subMunicipality; }
    inline bool SubMunicipalityHasBeenSet() const { return m_subMunicipalityHasBeenSet; }
    template<typename SubMunicipalityT = Aws::String>
    void SetSubMunicipality(SubMunicipalityT&& value) { m_subMunicipalityHasBeenSet = true; m_subMunicipality = std::forward<SubMunicipalityT>(value); }
    template<typename SubMunicipalityT = Aws::String>
    Place& WithSubMunicipality(SubMunicipalityT&& value) { SetSubMunicipality(std::forward<SubMunicipalityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    PlaceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::String m_addressNumber;
    bool m_addressNumberHasBeenSet = false;

    Aws::String m_street;
    bool m_streetHasBeenSet = false;

    Aws::String m_neighborhood;
    bool m_neighborhoodHasBeenSet = false;

    Aws::String m_municipality;
    bool m_municipalityHasBeenSet = false;

    Aws::String m_subRegion;
    bool m_subRegionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    bool m_interpolated{false};
    bool m_interpolatedHasBeenSet = false;

    TimeZone m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::String m_unitType;
    bool m_unitTypeHasBeenSet = false;

    Aws::String m_unitNumber;
    bool m_unitNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supplementalCategories;
    bool m_supplementalCategoriesHasBeenSet = false;

    Aws::String m_subMunicipality;
    bool m_subMunicipalityHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
