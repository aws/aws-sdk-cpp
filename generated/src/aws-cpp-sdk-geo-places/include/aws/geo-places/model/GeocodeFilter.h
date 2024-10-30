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
   * results must posses in order to be returned as a result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GeocodeFilter">AWS
   * API Reference</a></p>
   */
  class GeocodeFilter
  {
  public:
    AWS_GEOPLACES_API GeocodeFilter();
    AWS_GEOPLACES_API GeocodeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API GeocodeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of countries that all results must be in. Countries are represented
     * by either their alpha-2 or alpha-3 character codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCountries() const{ return m_includeCountries; }
    inline bool IncludeCountriesHasBeenSet() const { return m_includeCountriesHasBeenSet; }
    inline void SetIncludeCountries(const Aws::Vector<Aws::String>& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = value; }
    inline void SetIncludeCountries(Aws::Vector<Aws::String>&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = std::move(value); }
    inline GeocodeFilter& WithIncludeCountries(const Aws::Vector<Aws::String>& value) { SetIncludeCountries(value); return *this;}
    inline GeocodeFilter& WithIncludeCountries(Aws::Vector<Aws::String>&& value) { SetIncludeCountries(std::move(value)); return *this;}
    inline GeocodeFilter& AddIncludeCountries(const Aws::String& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(value); return *this; }
    inline GeocodeFilter& AddIncludeCountries(Aws::String&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(std::move(value)); return *this; }
    inline GeocodeFilter& AddIncludeCountries(const char* value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The included place types.</p>
     */
    inline const Aws::Vector<GeocodeFilterPlaceType>& GetIncludePlaceTypes() const{ return m_includePlaceTypes; }
    inline bool IncludePlaceTypesHasBeenSet() const { return m_includePlaceTypesHasBeenSet; }
    inline void SetIncludePlaceTypes(const Aws::Vector<GeocodeFilterPlaceType>& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes = value; }
    inline void SetIncludePlaceTypes(Aws::Vector<GeocodeFilterPlaceType>&& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes = std::move(value); }
    inline GeocodeFilter& WithIncludePlaceTypes(const Aws::Vector<GeocodeFilterPlaceType>& value) { SetIncludePlaceTypes(value); return *this;}
    inline GeocodeFilter& WithIncludePlaceTypes(Aws::Vector<GeocodeFilterPlaceType>&& value) { SetIncludePlaceTypes(std::move(value)); return *this;}
    inline GeocodeFilter& AddIncludePlaceTypes(const GeocodeFilterPlaceType& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes.push_back(value); return *this; }
    inline GeocodeFilter& AddIncludePlaceTypes(GeocodeFilterPlaceType&& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes.push_back(std::move(value)); return *this; }
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
