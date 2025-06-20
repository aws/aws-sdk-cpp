/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/GeocodeFilterPlaceType.h>
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
   * <p>Geocode structure which contains a set of inclusion/exclusion properties that
   * results must possess in order to be returned as a result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GeocodeFilter">AWS
   * API Reference</a></p>
   */
  class GeocodeFilter
  {
  public:
    AWS_GEOPLACES_API GeocodeFilter() = default;
    AWS_GEOPLACES_API GeocodeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of countries that all results must be in. Countries are represented
     * by either their alpha-2 or alpha-3 character codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCountries() const { return m_includeCountries; }
    inline bool IncludeCountriesHasBeenSet() const { return m_includeCountriesHasBeenSet; }
    template<typename IncludeCountriesT = Aws::Vector<Aws::String>>
    void SetIncludeCountries(IncludeCountriesT&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = std::forward<IncludeCountriesT>(value); }
    template<typename IncludeCountriesT = Aws::Vector<Aws::String>>
    GeocodeFilter& WithIncludeCountries(IncludeCountriesT&& value) { SetIncludeCountries(std::forward<IncludeCountriesT>(value)); return *this;}
    template<typename IncludeCountriesT = Aws::String>
    GeocodeFilter& AddIncludeCountries(IncludeCountriesT&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.emplace_back(std::forward<IncludeCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The included place types.</p>
     */
    inline const Aws::Vector<GeocodeFilterPlaceType>& GetIncludePlaceTypes() const { return m_includePlaceTypes; }
    inline bool IncludePlaceTypesHasBeenSet() const { return m_includePlaceTypesHasBeenSet; }
    template<typename IncludePlaceTypesT = Aws::Vector<GeocodeFilterPlaceType>>
    void SetIncludePlaceTypes(IncludePlaceTypesT&& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes = std::forward<IncludePlaceTypesT>(value); }
    template<typename IncludePlaceTypesT = Aws::Vector<GeocodeFilterPlaceType>>
    GeocodeFilter& WithIncludePlaceTypes(IncludePlaceTypesT&& value) { SetIncludePlaceTypes(std::forward<IncludePlaceTypesT>(value)); return *this;}
    inline GeocodeFilter& AddIncludePlaceTypes(GeocodeFilterPlaceType value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_includeCountries;
    bool m_includeCountriesHasBeenSet = false;

    Aws::Vector<GeocodeFilterPlaceType> m_includePlaceTypes;
    bool m_includePlaceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
