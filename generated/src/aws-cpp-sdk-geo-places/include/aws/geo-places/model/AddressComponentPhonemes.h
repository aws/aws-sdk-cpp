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
    AWS_GEOPLACES_API AddressComponentPhonemes();
    AWS_GEOPLACES_API AddressComponentPhonemes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AddressComponentPhonemes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country that the results will
     * be present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::Vector<PhonemeTranscription>& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::Vector<PhonemeTranscription>&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline AddressComponentPhonemes& WithCountry(const Aws::Vector<PhonemeTranscription>& value) { SetCountry(value); return *this;}
    inline AddressComponentPhonemes& WithCountry(Aws::Vector<PhonemeTranscription>&& value) { SetCountry(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddCountry(const PhonemeTranscription& value) { m_countryHasBeenSet = true; m_country.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddCountry(PhonemeTranscription&& value) { m_countryHasBeenSet = true; m_country.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the region or state results should be to be present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::Vector<PhonemeTranscription>& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::Vector<PhonemeTranscription>&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline AddressComponentPhonemes& WithRegion(const Aws::Vector<PhonemeTranscription>& value) { SetRegion(value); return *this;}
    inline AddressComponentPhonemes& WithRegion(Aws::Vector<PhonemeTranscription>&& value) { SetRegion(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddRegion(const PhonemeTranscription& value) { m_regionHasBeenSet = true; m_region.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddRegion(PhonemeTranscription&& value) { m_regionHasBeenSet = true; m_region.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the sub-region or county for which results should be present
     * in. </p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetSubRegion() const{ return m_subRegion; }
    inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
    inline void SetSubRegion(const Aws::Vector<PhonemeTranscription>& value) { m_subRegionHasBeenSet = true; m_subRegion = value; }
    inline void SetSubRegion(Aws::Vector<PhonemeTranscription>&& value) { m_subRegionHasBeenSet = true; m_subRegion = std::move(value); }
    inline AddressComponentPhonemes& WithSubRegion(const Aws::Vector<PhonemeTranscription>& value) { SetSubRegion(value); return *this;}
    inline AddressComponentPhonemes& WithSubRegion(Aws::Vector<PhonemeTranscription>&& value) { SetSubRegion(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddSubRegion(const PhonemeTranscription& value) { m_subRegionHasBeenSet = true; m_subRegion.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddSubRegion(PhonemeTranscription&& value) { m_subRegionHasBeenSet = true; m_subRegion.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the city or locality results should be present in. </p>
     * <p>Example: <code>Vancouver</code>.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetLocality() const{ return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(const Aws::Vector<PhonemeTranscription>& value) { m_localityHasBeenSet = true; m_locality = value; }
    inline void SetLocality(Aws::Vector<PhonemeTranscription>&& value) { m_localityHasBeenSet = true; m_locality = std::move(value); }
    inline AddressComponentPhonemes& WithLocality(const Aws::Vector<PhonemeTranscription>& value) { SetLocality(value); return *this;}
    inline AddressComponentPhonemes& WithLocality(Aws::Vector<PhonemeTranscription>&& value) { SetLocality(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddLocality(const PhonemeTranscription& value) { m_localityHasBeenSet = true; m_locality.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddLocality(PhonemeTranscription&& value) { m_localityHasBeenSet = true; m_locality.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the district or division of a city results should be present
     * in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetDistrict() const{ return m_district; }
    inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
    inline void SetDistrict(const Aws::Vector<PhonemeTranscription>& value) { m_districtHasBeenSet = true; m_district = value; }
    inline void SetDistrict(Aws::Vector<PhonemeTranscription>&& value) { m_districtHasBeenSet = true; m_district = std::move(value); }
    inline AddressComponentPhonemes& WithDistrict(const Aws::Vector<PhonemeTranscription>& value) { SetDistrict(value); return *this;}
    inline AddressComponentPhonemes& WithDistrict(Aws::Vector<PhonemeTranscription>&& value) { SetDistrict(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddDistrict(const PhonemeTranscription& value) { m_districtHasBeenSet = true; m_district.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddDistrict(PhonemeTranscription&& value) { m_districtHasBeenSet = true; m_district.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the sub-district or division of a city results should be
     * present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetSubDistrict() const{ return m_subDistrict; }
    inline bool SubDistrictHasBeenSet() const { return m_subDistrictHasBeenSet; }
    inline void SetSubDistrict(const Aws::Vector<PhonemeTranscription>& value) { m_subDistrictHasBeenSet = true; m_subDistrict = value; }
    inline void SetSubDistrict(Aws::Vector<PhonemeTranscription>&& value) { m_subDistrictHasBeenSet = true; m_subDistrict = std::move(value); }
    inline AddressComponentPhonemes& WithSubDistrict(const Aws::Vector<PhonemeTranscription>& value) { SetSubDistrict(value); return *this;}
    inline AddressComponentPhonemes& WithSubDistrict(Aws::Vector<PhonemeTranscription>&& value) { SetSubDistrict(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddSubDistrict(const PhonemeTranscription& value) { m_subDistrictHasBeenSet = true; m_subDistrict.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddSubDistrict(PhonemeTranscription&& value) { m_subDistrictHasBeenSet = true; m_subDistrict.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the name of the block.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetBlock() const{ return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    inline void SetBlock(const Aws::Vector<PhonemeTranscription>& value) { m_blockHasBeenSet = true; m_block = value; }
    inline void SetBlock(Aws::Vector<PhonemeTranscription>&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }
    inline AddressComponentPhonemes& WithBlock(const Aws::Vector<PhonemeTranscription>& value) { SetBlock(value); return *this;}
    inline AddressComponentPhonemes& WithBlock(Aws::Vector<PhonemeTranscription>&& value) { SetBlock(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddBlock(const PhonemeTranscription& value) { m_blockHasBeenSet = true; m_block.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddBlock(PhonemeTranscription&& value) { m_blockHasBeenSet = true; m_block.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the name of the sub-block.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetSubBlock() const{ return m_subBlock; }
    inline bool SubBlockHasBeenSet() const { return m_subBlockHasBeenSet; }
    inline void SetSubBlock(const Aws::Vector<PhonemeTranscription>& value) { m_subBlockHasBeenSet = true; m_subBlock = value; }
    inline void SetSubBlock(Aws::Vector<PhonemeTranscription>&& value) { m_subBlockHasBeenSet = true; m_subBlock = std::move(value); }
    inline AddressComponentPhonemes& WithSubBlock(const Aws::Vector<PhonemeTranscription>& value) { SetSubBlock(value); return *this;}
    inline AddressComponentPhonemes& WithSubBlock(Aws::Vector<PhonemeTranscription>&& value) { SetSubBlock(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddSubBlock(const PhonemeTranscription& value) { m_subBlockHasBeenSet = true; m_subBlock.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddSubBlock(PhonemeTranscription&& value) { m_subBlockHasBeenSet = true; m_subBlock.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>How to pronounce the name of the street results should be present in.</p>
     */
    inline const Aws::Vector<PhonemeTranscription>& GetStreet() const{ return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    inline void SetStreet(const Aws::Vector<PhonemeTranscription>& value) { m_streetHasBeenSet = true; m_street = value; }
    inline void SetStreet(Aws::Vector<PhonemeTranscription>&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }
    inline AddressComponentPhonemes& WithStreet(const Aws::Vector<PhonemeTranscription>& value) { SetStreet(value); return *this;}
    inline AddressComponentPhonemes& WithStreet(Aws::Vector<PhonemeTranscription>&& value) { SetStreet(std::move(value)); return *this;}
    inline AddressComponentPhonemes& AddStreet(const PhonemeTranscription& value) { m_streetHasBeenSet = true; m_street.push_back(value); return *this; }
    inline AddressComponentPhonemes& AddStreet(PhonemeTranscription&& value) { m_streetHasBeenSet = true; m_street.push_back(std::move(value)); return *this; }
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
