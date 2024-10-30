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
    AWS_GEOPLACES_API Address();
    AWS_GEOPLACES_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Assembled address value built out of the address components, according to the
     * regional postal rules. This is the correctly formatted address.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline Address& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline Address& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline Address& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country component of the address.</p>
     */
    inline const Country& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Country& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Country&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline Address& WithCountry(const Country& value) { SetCountry(value); return *this;}
    inline Address& WithCountry(Country&& value) { SetCountry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline const Region& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Region& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Region&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline Address& WithRegion(const Region& value) { SetRegion(value); return *this;}
    inline Address& WithRegion(Region&& value) { SetRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline const SubRegion& GetSubRegion() const{ return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    inline void SetSubRegion(const SubRegion& value) { m_subRegionHasBeenSet = true; m_subRegion = value; }
    inline void SetSubRegion(SubRegion&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::move(value); }
    inline Address& WithSubRegion(const SubRegion& value) { SetSubRegion(value); return *this;}
    inline Address& WithSubRegion(SubRegion&& value) { SetSubRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locality or city of the address.</p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline const Aws::String& GetLocality() const{ return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(const Aws::String& value) { m_localityHasBeenSet = true; m_locality = value; }
    inline void SetLocality(Aws::String&& value) { m_localityHasBeenSet = true; m_locality = std::move(value); }
    inline void SetLocality(const char* value) { m_localityHasBeenSet = true; m_locality.assign(value); }
    inline Address& WithLocality(const Aws::String& value) { SetLocality(value); return *this;}
    inline Address& WithLocality(Aws::String&& value) { SetLocality(std::move(value)); return *this;}
    inline Address& WithLocality(const char* value) { SetLocality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or division of a locality associated with this address.</p>
     */
    inline const Aws::String& GetDistrict() const{ return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    inline void SetDistrict(const Aws::String& value) { m_districtHasBeenSet = true; m_district = value; }
    inline void SetDistrict(Aws::String&& value) { m_districtHasBeenSet = true; m_district = std::move(value); }
    inline void SetDistrict(const char* value) { m_districtHasBeenSet = true; m_district.assign(value); }
    inline Address& WithDistrict(const Aws::String& value) { SetDistrict(value); return *this;}
    inline Address& WithDistrict(Aws::String&& value) { SetDistrict(std::move(value)); return *this;}
    inline Address& WithDistrict(const char* value) { SetDistrict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdivision of a district. </p> <p>Example:
     * <code>Minden-Lübbecke</code>.</p>
     */
    inline const Aws::String& GetSubDistrict() const{ return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    inline void SetSubDistrict(const Aws::String& value) { m_subDistrictHasBeenSet = true; m_subDistrict = value; }
    inline void SetSubDistrict(Aws::String&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::move(value); }
    inline void SetSubDistrict(const char* value) { m_subDistrictHasBeenSet = true; m_subDistrict.assign(value); }
    inline Address& WithSubDistrict(const Aws::String& value) { SetSubDistrict(value); return *this;}
    inline Address& WithSubDistrict(Aws::String&& value) { SetSubDistrict(std::move(value)); return *this;}
    inline Address& WithSubDistrict(const char* value) { SetSubDistrict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code, for which the result should
     * posses. </p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the block. </p> <p>Example: <code>Sunny Mansion 203 block: 2
     * Chome</code> </p>
     */
    inline const Aws::String& GetBlock() const{ return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    inline void SetBlock(const Aws::String& value) { m_blockHasBeenSet = true; m_block = value; }
    inline void SetBlock(Aws::String&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }
    inline void SetBlock(const char* value) { m_blockHasBeenSet = true; m_block.assign(value); }
    inline Address& WithBlock(const Aws::String& value) { SetBlock(value); return *this;}
    inline Address& WithBlock(Aws::String&& value) { SetBlock(std::move(value)); return *this;}
    inline Address& WithBlock(const char* value) { SetBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of sub-block. </p> <p>Example: <code>Sunny Mansion 203 sub-block:
     * 4</code> </p>
     */
    inline const Aws::String& GetSubBlock() const{ return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    inline void SetSubBlock(const Aws::String& value) { m_subBlockHasBeenSet = true; m_subBlock = value; }
    inline void SetSubBlock(Aws::String&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::move(value); }
    inline void SetSubBlock(const char* value) { m_subBlockHasBeenSet = true; m_subBlock.assign(value); }
    inline Address& WithSubBlock(const Aws::String& value) { SetSubBlock(value); return *this;}
    inline Address& WithSubBlock(Aws::String&& value) { SetSubBlock(std::move(value)); return *this;}
    inline Address& WithSubBlock(const char* value) { SetSubBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the streets in the intersection. </p> <p>Example:
     * <code>["Friedrichstraße","Unter den Linden"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIntersection() const{ return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    inline void SetIntersection(const Aws::Vector<Aws::String>& value) { m_intersectionHasBeenSet = true; m_intersection = value; }
    inline void SetIntersection(Aws::Vector<Aws::String>&& value) { m_intersectionHasBeenSet = true; m_intersection = std::move(value); }
    inline Address& WithIntersection(const Aws::Vector<Aws::String>& value) { SetIntersection(value); return *this;}
    inline Address& WithIntersection(Aws::Vector<Aws::String>&& value) { SetIntersection(std::move(value)); return *this;}
    inline Address& AddIntersection(const Aws::String& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
    inline Address& AddIntersection(Aws::String&& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(std::move(value)); return *this; }
    inline Address& AddIntersection(const char* value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
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
    inline Address& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}
    inline Address& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}
    inline Address& WithStreet(const char* value) { SetStreet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Components of the street. </p> <p>Example: Younge from the "Younge
     * street".</p>
     */
    inline const Aws::Vector<StreetComponents>& GetStreetComponents() const{ return m_streetComponents; }
    inline bool StreetComponentsHasBeenSet() const { return m_streetComponentsHasBeenSet; }
    inline void SetStreetComponents(const Aws::Vector<StreetComponents>& value) { m_streetComponentsHasBeenSet = true; m_streetComponents = value; }
    inline void SetStreetComponents(Aws::Vector<StreetComponents>&& value) { m_streetComponentsHasBeenSet = true; m_streetComponents = std::move(value); }
    inline Address& WithStreetComponents(const Aws::Vector<StreetComponents>& value) { SetStreetComponents(value); return *this;}
    inline Address& WithStreetComponents(Aws::Vector<StreetComponents>&& value) { SetStreetComponents(std::move(value)); return *this;}
    inline Address& AddStreetComponents(const StreetComponents& value) { m_streetComponentsHasBeenSet = true; m_streetComponents.push_back(value); return *this; }
    inline Address& AddStreetComponents(StreetComponents&& value) { m_streetComponentsHasBeenSet = true; m_streetComponents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number that identifies an address within a street.</p>
     */
    inline const Aws::String& GetAddressNumber() const{ return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    inline void SetAddressNumber(const Aws::String& value) { m_addressNumberHasBeenSet = true; m_addressNumber = value; }
    inline void SetAddressNumber(Aws::String&& value) { m_addressNumberHasBeenSet = true; m_addressNumber = std::move(value); }
    inline void SetAddressNumber(const char* value) { m_addressNumberHasBeenSet = true; m_addressNumber.assign(value); }
    inline Address& WithAddressNumber(const Aws::String& value) { SetAddressNumber(value); return *this;}
    inline Address& WithAddressNumber(Aws::String&& value) { SetAddressNumber(std::move(value)); return *this;}
    inline Address& WithAddressNumber(const char* value) { SetAddressNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the building at the address.</p>
     */
    inline const Aws::String& GetBuilding() const{ return m_building; }
    inline bool BuildingHasBeenSet() const { return m_buildingHasBeenSet; }
    inline void SetBuilding(const Aws::String& value) { m_buildingHasBeenSet = true; m_building = value; }
    inline void SetBuilding(Aws::String&& value) { m_buildingHasBeenSet = true; m_building = std::move(value); }
    inline void SetBuilding(const char* value) { m_buildingHasBeenSet = true; m_building.assign(value); }
    inline Address& WithBuilding(const Aws::String& value) { SetBuilding(value); return *this;}
    inline Address& WithBuilding(Aws::String&& value) { SetBuilding(std::move(value)); return *this;}
    inline Address& WithBuilding(const char* value) { SetBuilding(value); return *this;}
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
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
