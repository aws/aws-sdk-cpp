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
    AWS_GEOPLACES_API GeocodeQueryComponents();
    AWS_GEOPLACES_API GeocodeQueryComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeQueryComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline GeocodeQueryComponents& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline GeocodeQueryComponents& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be to be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline GeocodeQueryComponents& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline GeocodeQueryComponents& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const Aws::String& GetSubRegion() const{ return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    inline void SetSubRegion(const Aws::String& value) { m_subRegionHasBeenSet = true; m_subRegion = value; }
    inline void SetSubRegion(Aws::String&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::move(value); }
    inline void SetSubRegion(const char* value) { m_subRegionHasBeenSet = true; m_subRegion.assign(value); }
    inline GeocodeQueryComponents& WithSubRegion(const Aws::String& value) { SetSubRegion(value); return *this;}
    inline GeocodeQueryComponents& WithSubRegion(Aws::String&& value) { SetSubRegion(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithSubRegion(const char* value) { SetSubRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>City or locality results should be present in. </p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::String& GetLocality() const{ return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(const Aws::String& value) { m_localityHasBeenSet = true; m_locality = value; }
    inline void SetLocality(Aws::String&& value) { m_localityHasBeenSet = true; m_locality = std::move(value); }
    inline void SetLocality(const char* value) { m_localityHasBeenSet = true; m_locality.assign(value); }
    inline GeocodeQueryComponents& WithLocality(const Aws::String& value) { SetLocality(value); return *this;}
    inline GeocodeQueryComponents& WithLocality(Aws::String&& value) { SetLocality(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithLocality(const char* value) { SetLocality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or division of a city the results should be present in.</p>
     */
    inline const Aws::String& GetDistrict() const{ return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    inline void SetDistrict(const Aws::String& value) { m_districtHasBeenSet = true; m_district = value; }
    inline void SetDistrict(Aws::String&& value) { m_districtHasBeenSet = true; m_district = std::move(value); }
    inline void SetDistrict(const char* value) { m_districtHasBeenSet = true; m_district.assign(value); }
    inline GeocodeQueryComponents& WithDistrict(const Aws::String& value) { SetDistrict(value); return *this;}
    inline GeocodeQueryComponents& WithDistrict(Aws::String&& value) { SetDistrict(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithDistrict(const char* value) { SetDistrict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the street results should be present in.</p>
     */
    inline const Aws::String& GetStreet() const{ return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    inline void SetStreet(const Aws::String& value) { m_streetHasBeenSet = true; m_street = value; }
    inline void SetStreet(Aws::String&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }
    inline void SetStreet(const char* value) { m_streetHasBeenSet = true; m_street.assign(value); }
    inline GeocodeQueryComponents& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}
    inline GeocodeQueryComponents& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithStreet(const char* value) { SetStreet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The house number or address results should have. </p>
     */
    inline const Aws::String& GetAddressNumber() const{ return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    inline void SetAddressNumber(const Aws::String& value) { m_addressNumberHasBeenSet = true; m_addressNumber = value; }
    inline void SetAddressNumber(Aws::String&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::move(value); }
    inline void SetAddressNumber(const char* value) { m_addressNumberHasBeenSet = true; m_addressNumber.assign(value); }
    inline GeocodeQueryComponents& WithAddressNumber(const Aws::String& value) { SetAddressNumber(value); return *this;}
    inline GeocodeQueryComponents& WithAddressNumber(Aws::String&& value) { SetAddressNumber(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithAddressNumber(const char* value) { SetAddressNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code for which the result should
     * posses. </p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline GeocodeQueryComponents& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline GeocodeQueryComponents& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline GeocodeQueryComponents& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
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
