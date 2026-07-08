/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/AdminNames.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoPlaces {
namespace Model {

/**
 * <p>Translation details for the address, including alternative names and
 * translations in available languages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/TranslationDetails">AWS
 * API Reference</a></p>
 */
class TranslationDetails {
 public:
  AWS_GEOPLACES_API TranslationDetails() = default;
  AWS_GEOPLACES_API TranslationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API TranslationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of administrative names and translations for the locality address
   * component.</p>
   */
  inline const Aws::Vector<AdminNames>& GetLocality() const { return m_locality; }
  inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
  template <typename LocalityT = Aws::Vector<AdminNames>>
  void SetLocality(LocalityT&& value) {
    m_localityHasBeenSet = true;
    m_locality = std::forward<LocalityT>(value);
  }
  template <typename LocalityT = Aws::Vector<AdminNames>>
  TranslationDetails& WithLocality(LocalityT&& value) {
    SetLocality(std::forward<LocalityT>(value));
    return *this;
  }
  template <typename LocalityT = AdminNames>
  TranslationDetails& AddLocality(LocalityT&& value) {
    m_localityHasBeenSet = true;
    m_locality.emplace_back(std::forward<LocalityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of administrative names and translations for the region address
   * component.</p>
   */
  inline const Aws::Vector<AdminNames>& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::Vector<AdminNames>>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::Vector<AdminNames>>
  TranslationDetails& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  template <typename RegionT = AdminNames>
  TranslationDetails& AddRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region.emplace_back(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of administrative names and translations for the district address
   * component.</p>
   */
  inline const Aws::Vector<AdminNames>& GetDistrict() const { return m_district; }
  inline bool DistrictHasBeenSet() const { return m_districtHasBeenSet; }
  template <typename DistrictT = Aws::Vector<AdminNames>>
  void SetDistrict(DistrictT&& value) {
    m_districtHasBeenSet = true;
    m_district = std::forward<DistrictT>(value);
  }
  template <typename DistrictT = Aws::Vector<AdminNames>>
  TranslationDetails& WithDistrict(DistrictT&& value) {
    SetDistrict(std::forward<DistrictT>(value));
    return *this;
  }
  template <typename DistrictT = AdminNames>
  TranslationDetails& AddDistrict(DistrictT&& value) {
    m_districtHasBeenSet = true;
    m_district.emplace_back(std::forward<DistrictT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of administrative names and translations for the sub-region address
   * component.</p>
   */
  inline const Aws::Vector<AdminNames>& GetSubRegion() const { return m_subRegion; }
  inline bool SubRegionHasBeenSet() const { return m_subRegionHasBeenSet; }
  template <typename SubRegionT = Aws::Vector<AdminNames>>
  void SetSubRegion(SubRegionT&& value) {
    m_subRegionHasBeenSet = true;
    m_subRegion = std::forward<SubRegionT>(value);
  }
  template <typename SubRegionT = Aws::Vector<AdminNames>>
  TranslationDetails& WithSubRegion(SubRegionT&& value) {
    SetSubRegion(std::forward<SubRegionT>(value));
    return *this;
  }
  template <typename SubRegionT = AdminNames>
  TranslationDetails& AddSubRegion(SubRegionT&& value) {
    m_subRegionHasBeenSet = true;
    m_subRegion.emplace_back(std::forward<SubRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AdminNames> m_locality;

  Aws::Vector<AdminNames> m_region;

  Aws::Vector<AdminNames> m_district;

  Aws::Vector<AdminNames> m_subRegion;
  bool m_localityHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_districtHasBeenSet = false;
  bool m_subRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
