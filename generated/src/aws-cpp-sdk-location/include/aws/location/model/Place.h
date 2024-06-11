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
    AWS_LOCATIONSERVICE_API Place();
    AWS_LOCATIONSERVICE_API Place(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Place& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline Place& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline Place& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline Place& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    
    inline const PlaceGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const PlaceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(PlaceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline Place& WithGeometry(const PlaceGeometry& value) { SetGeometry(value); return *this;}
    inline Place& WithGeometry(PlaceGeometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline const Aws::String& GetAddressNumber() const{ return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    inline void SetAddressNumber(const Aws::String& value) { m_addressNumberHasBeenSet = true; m_addressNumber = value; }
    inline void SetAddressNumber(Aws::String&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::move(value); }
    inline void SetAddressNumber(const char* value) { m_addressNumberHasBeenSet = true; m_addressNumber.assign(value); }
    inline Place& WithAddressNumber(const Aws::String& value) { SetAddressNumber(value); return *this;}
    inline Place& WithAddressNumber(Aws::String&& value) { SetAddressNumber(std::move(value)); return *this;}
    inline Place& WithAddressNumber(const char* value) { SetAddressNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline const Aws::String& GetStreet() const{ return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    inline void SetStreet(const Aws::String& value) { m_streetHasBeenSet = true; m_street = value; }
    inline void SetStreet(Aws::String&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }
    inline void SetStreet(const char* value) { m_streetHasBeenSet = true; m_street.assign(value); }
    inline Place& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}
    inline Place& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}
    inline Place& WithStreet(const char* value) { SetStreet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline const Aws::String& GetNeighborhood() const{ return m_neighborhood; }
    inline bool NeighborhoodHasBeenSet() const { return m_neighborhoodHasBeenSet; }
    inline void SetNeighborhood(const Aws::String& value) { m_neighborhoodHasBeenSet = true; m_neighborhood = value; }
    inline void SetNeighborhood(Aws::String&& value) { m_neighborhoodHasBeenSet = true; m_neighborhood = std::move(value); }
    inline void SetNeighborhood(const char* value) { m_neighborhoodHasBeenSet = true; m_neighborhood.assign(value); }
    inline Place& WithNeighborhood(const Aws::String& value) { SetNeighborhood(value); return *this;}
    inline Place& WithNeighborhood(Aws::String&& value) { SetNeighborhood(std::move(value)); return *this;}
    inline Place& WithNeighborhood(const char* value) { SetNeighborhood(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline const Aws::String& GetMunicipality() const{ return m_municipality; }
    inline bool MunicipalityHasBeenSet() const { return m_municipalityHasBeenSet; }
    inline void SetMunicipality(const Aws::String& value) { m_municipalityHasBeenSet = true; m_municipality = value; }
    inline void SetMunicipality(Aws::String&& value) { m_municipalityHasBeenSet = true; m_municipality = std::move(value); }
    inline void SetMunicipality(const char* value) { m_municipalityHasBeenSet = true; m_municipality.assign(value); }
    inline Place& WithMunicipality(const Aws::String& value) { SetMunicipality(value); return *this;}
    inline Place& WithMunicipality(Aws::String&& value) { SetMunicipality(std::move(value)); return *this;}
    inline Place& WithMunicipality(const char* value) { SetMunicipality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A county, or an area that's part of a larger region. For example, <code>Metro
     * Vancouver</code>.</p>
     */
    inline const Aws::String& GetSubRegion() const{ return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    inline void SetSubRegion(const Aws::String& value) { m_subRegionHasBeenSet = true; m_subRegion = value; }
    inline void SetSubRegion(Aws::String&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::move(value); }
    inline void SetSubRegion(const char* value) { m_subRegionHasBeenSet = true; m_subRegion.assign(value); }
    inline Place& WithSubRegion(const Aws::String& value) { SetSubRegion(value); return *this;}
    inline Place& WithSubRegion(Aws::String&& value) { SetSubRegion(std::move(value)); return *this;}
    inline Place& WithSubRegion(const char* value) { SetSubRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Place& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Place& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Place& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline Place& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline Place& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline Place& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline Place& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline Place& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline Place& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
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
    inline bool GetInterpolated() const{ return m_interpolated; }
    inline bool InterpolatedHasBeenSet() const { return m_interpolatedHasBeenSet; }
    inline void SetInterpolated(bool value) { m_interpolatedHasBeenSet = true; m_interpolated = value; }
    inline Place& WithInterpolated(bool value) { SetInterpolated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE or Grab as the selected partner.</p>
     */
    inline const TimeZone& GetTimeZone() const{ return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    inline void SetTimeZone(const TimeZone& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }
    inline void SetTimeZone(TimeZone&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }
    inline Place& WithTimeZone(const TimeZone& value) { SetTimeZone(value); return *this;}
    inline Place& WithTimeZone(TimeZone&& value) { SetTimeZone(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>  <p>Returned only for a place index that uses
     * Esri as a data provider.</p> 
     */
    inline const Aws::String& GetUnitType() const{ return m_unitType; }
    inline bool UnitTypeHasBeenSet() const { return m_unitTypeHasBeenSet; }
    inline void SetUnitType(const Aws::String& value) { m_unitTypeHasBeenSet = true; m_unitType = value; }
    inline void SetUnitType(Aws::String&& value) { m_unitTypeHasBeenSet = true; m_unitType = std::move(value); }
    inline void SetUnitType(const char* value) { m_unitTypeHasBeenSet = true; m_unitType.assign(value); }
    inline Place& WithUnitType(const Aws::String& value) { SetUnitType(value); return *this;}
    inline Place& WithUnitType(Aws::String&& value) { SetUnitType(std::move(value)); return *this;}
    inline Place& WithUnitType(const char* value) { SetUnitType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri or Grab as a data provider. Is
     * not returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline const Aws::String& GetUnitNumber() const{ return m_unitNumber; }
    inline bool UnitNumberHasBeenSet() const { return m_unitNumberHasBeenSet; }
    inline void SetUnitNumber(const Aws::String& value) { m_unitNumberHasBeenSet = true; m_unitNumber = value; }
    inline void SetUnitNumber(Aws::String&& value) { m_unitNumberHasBeenSet = true; m_unitNumber = std::move(value); }
    inline void SetUnitNumber(const char* value) { m_unitNumberHasBeenSet = true; m_unitNumber.assign(value); }
    inline Place& WithUnitNumber(const Aws::String& value) { SetUnitNumber(value); return *this;}
    inline Place& WithUnitNumber(Aws::String&& value) { SetUnitNumber(std::move(value)); return *this;}
    inline Place& WithUnitNumber(const char* value) { SetUnitNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Location categories that describe this Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Aws::String>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Aws::String>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline Place& WithCategories(const Aws::Vector<Aws::String>& value) { SetCategories(value); return *this;}
    inline Place& WithCategories(Aws::Vector<Aws::String>&& value) { SetCategories(std::move(value)); return *this;}
    inline Place& AddCategories(const Aws::String& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline Place& AddCategories(Aws::String&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    inline Place& AddCategories(const char* value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupplementalCategories() const{ return m_supplementalCategories; }
    inline bool SupplementalCategoriesHasBeenSet() const { return m_supplementalCategoriesHasBeenSet; }
    inline void SetSupplementalCategories(const Aws::Vector<Aws::String>& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories = value; }
    inline void SetSupplementalCategories(Aws::Vector<Aws::String>&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories = std::move(value); }
    inline Place& WithSupplementalCategories(const Aws::Vector<Aws::String>& value) { SetSupplementalCategories(value); return *this;}
    inline Place& WithSupplementalCategories(Aws::Vector<Aws::String>&& value) { SetSupplementalCategories(std::move(value)); return *this;}
    inline Place& AddSupplementalCategories(const Aws::String& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.push_back(value); return *this; }
    inline Place& AddSupplementalCategories(Aws::String&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.push_back(std::move(value)); return *this; }
    inline Place& AddSupplementalCategories(const char* value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An area that's part of a larger municipality. For example, <code>Blissville
     * </code> is a submunicipality in the Queen County in New York.</p>  <p>This
     * property supported by Esri and OpenData. The Esri property is
     * <code>district</code>, and the OpenData property is <code>borough</code>.</p>
     * 
     */
    inline const Aws::String& GetSubMunicipality() const{ return m_subMunicipality; }
    inline bool SubMunicipalityHasBeenSet() const { return m_subMunicipalityHasBeenSet; }
    inline void SetSubMunicipality(const Aws::String& value) { m_subMunicipalityHasBeenSet = true; m_subMunicipality = value; }
    inline void SetSubMunicipality(Aws::String&& value) { m_subMunicipalityHasBeenSet = true; m_subMunicipality = std::move(value); }
    inline void SetSubMunicipality(const char* value) { m_subMunicipalityHasBeenSet = true; m_subMunicipality.assign(value); }
    inline Place& WithSubMunicipality(const Aws::String& value) { SetSubMunicipality(value); return *this;}
    inline Place& WithSubMunicipality(Aws::String&& value) { SetSubMunicipality(std::move(value)); return *this;}
    inline Place& WithSubMunicipality(const char* value) { SetSubMunicipality(value); return *this;}
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

    bool m_interpolated;
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
