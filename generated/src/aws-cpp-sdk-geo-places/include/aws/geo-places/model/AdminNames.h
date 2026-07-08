/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/AdminNamesPreference.h>
#include <aws/geo-places/model/TranslationName.h>

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
 * <p>The official administrative names for an address component, returned when
 * <code>AddressNamesMode</code> is set to
 * <code>Administrative</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AdminNames">AWS
 * API Reference</a></p>
 */
class AdminNames {
 public:
  AWS_GEOPLACES_API AdminNames() = default;
  AWS_GEOPLACES_API AdminNames(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API AdminNames& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of translation names for the administrative address component,
   * including name variants and translations in available languages.</p>
   */
  inline const Aws::Vector<TranslationName>& GetNames() const { return m_names; }
  inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
  template <typename NamesT = Aws::Vector<TranslationName>>
  void SetNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names = std::forward<NamesT>(value);
  }
  template <typename NamesT = Aws::Vector<TranslationName>>
  AdminNames& WithNames(NamesT&& value) {
    SetNames(std::forward<NamesT>(value));
    return *this;
  }
  template <typename NamesT = TranslationName>
  AdminNames& AddNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names.emplace_back(std::forward<NamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the preference level of the administrative name. Valid values are
   * <code>Primary</code> and <code>Alternative</code>.</p>
   */
  inline AdminNamesPreference GetPreference() const { return m_preference; }
  inline bool PreferenceHasBeenSet() const { return m_preferenceHasBeenSet; }
  inline void SetPreference(AdminNamesPreference value) {
    m_preferenceHasBeenSet = true;
    m_preference = value;
  }
  inline AdminNames& WithPreference(AdminNamesPreference value) {
    SetPreference(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TranslationName> m_names;

  AdminNamesPreference m_preference{AdminNamesPreference::NOT_SET};
  bool m_namesHasBeenSet = false;
  bool m_preferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
