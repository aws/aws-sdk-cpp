/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PlaceGeometry.h>
#include <aws/location/model/TimeZone.h>
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


    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline const Aws::String& GetAddressNumber() const{ return m_addressNumber; }

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline void SetAddressNumber(const Aws::String& value) { m_addressNumberHasBeenSet = true; m_addressNumber = value; }

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline void SetAddressNumber(Aws::String&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::move(value); }

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline void SetAddressNumber(const char* value) { m_addressNumberHasBeenSet = true; m_addressNumber.assign(value); }

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline Place& WithAddressNumber(const Aws::String& value) { SetAddressNumber(value); return *this;}

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline Place& WithAddressNumber(Aws::String&& value) { SetAddressNumber(std::move(value)); return *this;}

    /**
     * <p>The numerical portion of an address, such as a building number. </p>
     */
    inline Place& WithAddressNumber(const char* value) { SetAddressNumber(value); return *this;}


    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline Place& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline Place& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>A country/region specified using <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country/region code. For example, <code>CAN</code>.</p>
     */
    inline Place& WithCountry(const char* value) { SetCountry(value); return *this;}


    
    inline const PlaceGeometry& GetGeometry() const{ return m_geometry; }

    
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    
    inline void SetGeometry(const PlaceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    
    inline void SetGeometry(PlaceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    
    inline Place& WithGeometry(const PlaceGeometry& value) { SetGeometry(value); return *this;}

    
    inline Place& WithGeometry(PlaceGeometry&& value) { SetGeometry(std::move(value)); return *this;}


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

    /**
     * <p> <code>True</code> if the result is interpolated from other known places.</p>
     * <p> <code>False</code> if the Place is a known place.</p> <p>Not returned when
     * the partner does not provide the information.</p> <p>For example, returns
     * <code>False</code> for an address location that is found in the partner data,
     * but returns <code>True</code> if an address does not exist in the partner data
     * and its location is calculated by interpolating between other known addresses.
     * </p>
     */
    inline bool InterpolatedHasBeenSet() const { return m_interpolatedHasBeenSet; }

    /**
     * <p> <code>True</code> if the result is interpolated from other known places.</p>
     * <p> <code>False</code> if the Place is a known place.</p> <p>Not returned when
     * the partner does not provide the information.</p> <p>For example, returns
     * <code>False</code> for an address location that is found in the partner data,
     * but returns <code>True</code> if an address does not exist in the partner data
     * and its location is calculated by interpolating between other known addresses.
     * </p>
     */
    inline void SetInterpolated(bool value) { m_interpolatedHasBeenSet = true; m_interpolated = value; }

    /**
     * <p> <code>True</code> if the result is interpolated from other known places.</p>
     * <p> <code>False</code> if the Place is a known place.</p> <p>Not returned when
     * the partner does not provide the information.</p> <p>For example, returns
     * <code>False</code> for an address location that is found in the partner data,
     * but returns <code>True</code> if an address does not exist in the partner data
     * and its location is calculated by interpolating between other known addresses.
     * </p>
     */
    inline Place& WithInterpolated(bool value) { SetInterpolated(value); return *this;}


    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline Place& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline Place& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The full name and address of the point of interest such as a city, region, or
     * country. For example, <code>123 Any Street, Any Town, USA</code>.</p>
     */
    inline Place& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline const Aws::String& GetMunicipality() const{ return m_municipality; }

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline bool MunicipalityHasBeenSet() const { return m_municipalityHasBeenSet; }

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline void SetMunicipality(const Aws::String& value) { m_municipalityHasBeenSet = true; m_municipality = value; }

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline void SetMunicipality(Aws::String&& value) { m_municipalityHasBeenSet = true; m_municipality = std::move(value); }

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline void SetMunicipality(const char* value) { m_municipalityHasBeenSet = true; m_municipality.assign(value); }

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline Place& WithMunicipality(const Aws::String& value) { SetMunicipality(value); return *this;}

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline Place& WithMunicipality(Aws::String&& value) { SetMunicipality(std::move(value)); return *this;}

    /**
     * <p>A name for a local area, such as a city or town name. For example,
     * <code>Toronto</code>.</p>
     */
    inline Place& WithMunicipality(const char* value) { SetMunicipality(value); return *this;}


    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline const Aws::String& GetNeighborhood() const{ return m_neighborhood; }

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline bool NeighborhoodHasBeenSet() const { return m_neighborhoodHasBeenSet; }

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline void SetNeighborhood(const Aws::String& value) { m_neighborhoodHasBeenSet = true; m_neighborhood = value; }

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline void SetNeighborhood(Aws::String&& value) { m_neighborhoodHasBeenSet = true; m_neighborhood = std::move(value); }

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline void SetNeighborhood(const char* value) { m_neighborhoodHasBeenSet = true; m_neighborhood.assign(value); }

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline Place& WithNeighborhood(const Aws::String& value) { SetNeighborhood(value); return *this;}

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline Place& WithNeighborhood(Aws::String&& value) { SetNeighborhood(std::move(value)); return *this;}

    /**
     * <p>The name of a community district. For example, <code>Downtown</code>.</p>
     */
    inline Place& WithNeighborhood(const char* value) { SetNeighborhood(value); return *this;}


    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline Place& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline Place& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>A group of numbers and letters in a country-specific format, which
     * accompanies the address for the purpose of identifying a location. </p>
     */
    inline Place& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}


    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline Place& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline Place& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>A name for an area or geographical division, such as a province or state
     * name. For example, <code>British Columbia</code>.</p>
     */
    inline Place& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline const Aws::String& GetStreet() const{ return m_street; }

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline void SetStreet(const Aws::String& value) { m_streetHasBeenSet = true; m_street = value; }

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline void SetStreet(Aws::String&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline void SetStreet(const char* value) { m_streetHasBeenSet = true; m_street.assign(value); }

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline Place& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline Place& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}

    /**
     * <p>The name for a street or a road to identify a location. For example,
     * <code>Main Street</code>.</p>
     */
    inline Place& WithStreet(const char* value) { SetStreet(value); return *this;}


    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline const Aws::String& GetSubRegion() const{ return m_subRegion; }

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline void SetSubRegion(const Aws::String& value) { m_subRegionHasBeenSet = true; m_subRegion = value; }

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline void SetSubRegion(Aws::String&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::move(value); }

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline void SetSubRegion(const char* value) { m_subRegionHasBeenSet = true; m_subRegion.assign(value); }

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline Place& WithSubRegion(const Aws::String& value) { SetSubRegion(value); return *this;}

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline Place& WithSubRegion(Aws::String&& value) { SetSubRegion(std::move(value)); return *this;}

    /**
     * <p>A country, or an area that's part of a larger region. For example,
     * <code>Metro Vancouver</code>.</p>
     */
    inline Place& WithSubRegion(const char* value) { SetSubRegion(value); return *this;}


    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE as the selected partner.</p>
     */
    inline const TimeZone& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE as the selected partner.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE as the selected partner.</p>
     */
    inline void SetTimeZone(const TimeZone& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE as the selected partner.</p>
     */
    inline void SetTimeZone(TimeZone&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE as the selected partner.</p>
     */
    inline Place& WithTimeZone(const TimeZone& value) { SetTimeZone(value); return *this;}

    /**
     * <p>The time zone in which the <code>Place</code> is located. Returned only when
     * using HERE as the selected partner.</p>
     */
    inline Place& WithTimeZone(TimeZone&& value) { SetTimeZone(std::move(value)); return *this;}


    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline const Aws::String& GetUnitNumber() const{ return m_unitNumber; }

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline bool UnitNumberHasBeenSet() const { return m_unitNumberHasBeenSet; }

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline void SetUnitNumber(const Aws::String& value) { m_unitNumberHasBeenSet = true; m_unitNumber = value; }

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline void SetUnitNumber(Aws::String&& value) { m_unitNumberHasBeenSet = true; m_unitNumber = std::move(value); }

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline void SetUnitNumber(const char* value) { m_unitNumberHasBeenSet = true; m_unitNumber.assign(value); }

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline Place& WithUnitNumber(const Aws::String& value) { SetUnitNumber(value); return *this;}

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline Place& WithUnitNumber(Aws::String&& value) { SetUnitNumber(std::move(value)); return *this;}

    /**
     * <p>For addresses with multiple units, the unit identifier. Can include numbers
     * and letters, for example <code>3B</code> or <code>Unit 123</code>.</p> 
     * <p>Returned only for a place index that uses Esri as a data provider. Is not
     * returned for <code>SearchPlaceIndexForPosition</code>.</p> 
     */
    inline Place& WithUnitNumber(const char* value) { SetUnitNumber(value); return *this;}


    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline const Aws::String& GetUnitType() const{ return m_unitType; }

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline bool UnitTypeHasBeenSet() const { return m_unitTypeHasBeenSet; }

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline void SetUnitType(const Aws::String& value) { m_unitTypeHasBeenSet = true; m_unitType = value; }

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline void SetUnitType(Aws::String&& value) { m_unitTypeHasBeenSet = true; m_unitType = std::move(value); }

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline void SetUnitType(const char* value) { m_unitTypeHasBeenSet = true; m_unitType.assign(value); }

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline Place& WithUnitType(const Aws::String& value) { SetUnitType(value); return *this;}

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline Place& WithUnitType(Aws::String&& value) { SetUnitType(std::move(value)); return *this;}

    /**
     * <p>For addresses with a <code>UnitNumber</code>, the type of unit. For example,
     * <code>Apartment</code>.</p>
     */
    inline Place& WithUnitType(const char* value) { SetUnitType(value); return *this;}

  private:

    Aws::String m_addressNumber;
    bool m_addressNumberHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    PlaceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    bool m_interpolated;
    bool m_interpolatedHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_municipality;
    bool m_municipalityHasBeenSet = false;

    Aws::String m_neighborhood;
    bool m_neighborhoodHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_street;
    bool m_streetHasBeenSet = false;

    Aws::String m_subRegion;
    bool m_subRegionHasBeenSet = false;

    TimeZone m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::String m_unitNumber;
    bool m_unitNumberHasBeenSet = false;

    Aws::String m_unitType;
    bool m_unitTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
