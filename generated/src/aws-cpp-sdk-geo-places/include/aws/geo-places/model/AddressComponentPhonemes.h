/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/PhonemeTranscription.h>
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
   * <p>How to pronounce the various components of the address or
   * place.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AddressComponentPhonemes">AWS
   * API Reference</a></p>
   */
  class AddressComponentPhonemes
  {
  public:
    AWS_GEOPLACES_API AddressComponentPhonemes() = default;
    AWS_GEOPLACES_API AddressComponentPhonemes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AddressComponentPhonemes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::Vector<PhonemeTranscription>>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    template<typename CountryT = PhonemeTranscription>
    AddressComponentPhonemes& AddCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country.emplace_back(std::forward<CountryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the region or state results should be to be present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::Vector<PhonemeTranscription>>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    template<typename RegionT = PhonemeTranscription>
    AddressComponentPhonemes& AddRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region.emplace_back(std::forward<RegionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the sub-region or county for which results should be present
     * in. </p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetSubRegion() const { return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    template<typename SubRegionT = Aws::Vector<PhonemeTranscription>>
    void SetSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::forward<SubRegionT>(value); }
    template<typename SubRegionT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithSubRegion(SubRegionT&& value) { SetSubRegion(std::forward<SubRegionT>(value)); return *this;}
    template<typename SubRegionT = PhonemeTranscription>
    AddressComponentPhonemes& AddSubRegion(SubRegionT&& value) { m_subRegionHasBeenSet = true; m_subRegion.emplace_back(std::forward<SubRegionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the city or locality results should be present in. </p>
     * <p>Example: <code>Vancouver</code>.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    template<typename LocalityT = Aws::Vector<PhonemeTranscription>>
    void SetLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality = std::forward<LocalityT>(value); }
    template<typename LocalityT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithLocality(LocalityT&& value) { SetLocality(std::forward<LocalityT>(value)); return *this;}
    template<typename LocalityT = PhonemeTranscription>
    AddressComponentPhonemes& AddLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality.emplace_back(std::forward<LocalityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the district or division of a city results should be present
     * in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetDistrict() const { return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    template<typename DistrictT = Aws::Vector<PhonemeTranscription>>
    void SetDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district = std::forward<DistrictT>(value); }
    template<typename DistrictT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithDistrict(DistrictT&& value) { SetDistrict(std::forward<DistrictT>(value)); return *this;}
    template<typename DistrictT = PhonemeTranscription>
    AddressComponentPhonemes& AddDistrict(DistrictT&& value) { m_districtHasBeenSet = true; m_district.emplace_back(std::forward<DistrictT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the sub-district or division of a city results should be
     * present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetSubDistrict() const { return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    template<typename SubDistrictT = Aws::Vector<PhonemeTranscription>>
    void SetSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::forward<SubDistrictT>(value); }
    template<typename SubDistrictT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithSubDistrict(SubDistrictT&& value) { SetSubDistrict(std::forward<SubDistrictT>(value)); return *this;}
    template<typename SubDistrictT = PhonemeTranscription>
    AddressComponentPhonemes& AddSubDistrict(SubDistrictT&& value) { m_subDistrictHasBeenSet = true; m_subDistrict.emplace_back(std::forward<SubDistrictT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the name of the block.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = Aws::Vector<PhonemeTranscription>>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    template<typename BlockT = PhonemeTranscription>
    AddressComponentPhonemes& AddBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block.emplace_back(std::forward<BlockT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the name of the sub-block.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetSubBlock() const { return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    template<typename SubBlockT = Aws::Vector<PhonemeTranscription>>
    void SetSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::forward<SubBlockT>(value); }
    template<typename SubBlockT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithSubBlock(SubBlockT&& value) { SetSubBlock(std::forward<SubBlockT>(value)); return *this;}
    template<typename SubBlockT = PhonemeTranscription>
    AddressComponentPhonemes& AddSubBlock(SubBlockT&& value) { m_subBlockHasBeenSet = true; m_subBlock.emplace_back(std::forward<SubBlockT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the name of the street results should be present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetStreet() const { return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    template<typename StreetT = Aws::Vector<PhonemeTranscription>>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::Vector<PhonemeTranscription>>
    AddressComponentPhonemes& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    template<typename StreetT = PhonemeTranscription>
    AddressComponentPhonemes& AddStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street.emplace_back(std::forward<StreetT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PhonemeTranscription> m_country;
    bool m_countryHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_subRegion;
    bool m_subRegionHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_locality;
    bool m_localityHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_district;
    bool m_districtHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_subDistrict;
    bool m_subDistrictHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_block;
    bool m_blockHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_subBlock;
    bool m_subBlockHasBeenSet = false;

    Aws::Vector<PhonemeTranscription> m_street;
    bool m_streetHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
