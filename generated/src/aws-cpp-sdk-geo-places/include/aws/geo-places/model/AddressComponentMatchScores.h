/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/SecondaryAddressComponentMatchScore.h>
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
   * <p>Indicates how well the entire input matches the returned. It is equal to 1 if
   * all input tokens are recognized and matched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AddressComponentMatchScores">AWS
   * API Reference</a></p>
   */
  class AddressComponentMatchScores
  {
  public:
    AWS_GEOPLACES_API AddressComponentMatchScores() = default;
    AWS_GEOPLACES_API AddressComponentMatchScores(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AddressComponentMatchScores& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline double GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(double value) { m_countryHasBeenSet = true; m_country = value; }
    inline AddressComponentMatchScores& WithCountry(double value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region or state results should be to be present in. </p> <p>Example:
     * <code>North Rhine-Westphalia</code>.</p>
     */
    inline double GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(double value) { m_regionHasBeenSet = true; m_region = value; }
    inline AddressComponentMatchScores& WithRegion(double value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-region or county for which results should be present in. </p>
     */
    inline double GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    inline void SetSubRegion(double value) { m_subRegionHasBeenSet = true; m_subRegion = value; }
    inline AddressComponentMatchScores& WithSubRegion(double value) { SetSubRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city or locality results should be present in. </p> <p>Example:
     * <code>Vancouver</code>.</p>
     */
    inline double GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(double value) { m_localityHasBeenSet = true; m_locality = value; }
    inline AddressComponentMatchScores& WithLocality(double value) { SetLocality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The district or division of a city the results should be present in.</p>
     */
    inline double GetDistrict() const { return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    inline void SetDistrict(double value) { m_districtHasBeenSet = true; m_district = value; }
    inline AddressComponentMatchScores& WithDistrict(double value) { SetDistrict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdivision of a district. </p> <p>Example: <code>Minden-Lübbecke</code>
     * </p>
     */
    inline double GetSubDistrict() const { return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    inline void SetSubDistrict(double value) { m_subDistrictHasBeenSet = true; m_subDistrict = value; }
    inline AddressComponentMatchScores& WithSubDistrict(double value) { SetSubDistrict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alphanumeric string included in a postal address to facilitate mail
     * sorting, such as post code, postcode, or ZIP code, for which the result should
     * possess. </p>
     */
    inline double GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(double value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline AddressComponentMatchScores& WithPostalCode(double value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the block. </p> <p>Example: <code>Sunny Mansion 203 block: 2
     * Chome</code> </p>
     */
    inline double GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    inline void SetBlock(double value) { m_blockHasBeenSet = true; m_block = value; }
    inline AddressComponentMatchScores& WithBlock(double value) { SetBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of sub-block. </p> <p>Example: <code>Sunny Mansion 203 sub-block:
     * 4</code> </p>
     */
    inline double GetSubBlock() const { return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    inline void SetSubBlock(double value) { m_subBlockHasBeenSet = true; m_subBlock = value; }
    inline AddressComponentMatchScores& WithSubBlock(double value) { SetSubBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the streets in the intersection. </p> <p>Example:
     * <code>["Friedrichstraße","Unter den Linden"]</code> </p>
     */
    inline const Aws::Vector<double>& GetIntersection() const { return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    template<typename IntersectionT = Aws::Vector<double>>
    void SetIntersection(IntersectionT&& value) { m_intersectionHasBeenSet = true; m_intersection = std::forward<IntersectionT>(value); }
    template<typename IntersectionT = Aws::Vector<double>>
    AddressComponentMatchScores& WithIntersection(IntersectionT&& value) { SetIntersection(std::forward<IntersectionT>(value)); return *this;}
    inline AddressComponentMatchScores& AddIntersection(double value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The house number or address results should have. </p>
     */
    inline double GetAddressNumber() const { return m_addressNumber; }
    inline bool AddressNumberHasBeenSet() const { return m_addressNumberHasBeenSet; }
    inline void SetAddressNumber(double value) { m_addressNumberHasBeenSet = true; m_addressNumber = value; }
    inline AddressComponentMatchScores& WithAddressNumber(double value) { SetAddressNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the building at the address.</p>
     */
    inline double GetBuilding() const { return m_building; }
    inline bool BuildingHasBeenSet() const { return m_buildingHasBeenSet; }
    inline void SetBuilding(double value) { m_buildingHasBeenSet = true; m_building = value; }
    inline AddressComponentMatchScores& WithBuilding(double value) { SetBuilding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Match scores for the secondary address components in the result.</p>
     */
    inline const Aws::Vector<SecondaryAddressComponentMatchScore>& GetSecondaryAddressComponents() const { return m_secondaryAddressComponents; }
    inline bool SecondaryAddressComponentsHasBeenSet() const { return m_secondaryAddressComponentsHasBeenSet; }
    template<typename SecondaryAddressComponentsT = Aws::Vector<SecondaryAddressComponentMatchScore>>
    void SetSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { m_secondaryAddressComponentsHasBeenSet = true; m_secondaryAddressComponents = std::forward<SecondaryAddressComponentsT>(value); }
    template<typename SecondaryAddressComponentsT = Aws::Vector<SecondaryAddressComponentMatchScore>>
    AddressComponentMatchScores& WithSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { SetSecondaryAddressComponents(std::forward<SecondaryAddressComponentsT>(value)); return *this;}
    template<typename SecondaryAddressComponentsT = SecondaryAddressComponentMatchScore>
    AddressComponentMatchScores& AddSecondaryAddressComponents(SecondaryAddressComponentsT&& value) { m_secondaryAddressComponentsHasBeenSet = true; m_secondaryAddressComponents.emplace_back(std::forward<SecondaryAddressComponentsT>(value)); return *this; }
    ///@}
  private:

    double m_country{0.0};
    bool m_countryHasBeenSet = false;

    double m_region{0.0};
    bool m_regionHasBeenSet = false;

    double m_subRegion{0.0};
    bool m_subRegionHasBeenSet = false;

    double m_locality{0.0};
    bool m_localityHasBeenSet = false;

    double m_district{0.0};
    bool m_districtHasBeenSet = false;

    double m_subDistrict{0.0};
    bool m_subDistrictHasBeenSet = false;

    double m_postalCode{0.0};
    bool m_postalCodeHasBeenSet = false;

    double m_block{0.0};
    bool m_blockHasBeenSet = false;

    double m_subBlock{0.0};
    bool m_subBlockHasBeenSet = false;

    Aws::Vector<double> m_intersection;
    bool m_intersectionHasBeenSet = false;

    double m_addressNumber{0.0};
    bool m_addressNumberHasBeenSet = false;

    double m_building{0.0};
    bool m_buildingHasBeenSet = false;

    Aws::Vector<SecondaryAddressComponentMatchScore> m_secondaryAddressComponents;
    bool m_secondaryAddressComponentsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
