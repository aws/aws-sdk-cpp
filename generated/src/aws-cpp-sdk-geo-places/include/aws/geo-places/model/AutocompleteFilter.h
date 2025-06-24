/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/FilterCircle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/AutocompleteFilterPlaceType.h>
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
   * <p>Autocomplete structure which contains a set of inclusion/exclusion properties
   * that results must possess in order to be returned as a result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AutocompleteFilter">AWS
   * API Reference</a></p>
   */
  class AutocompleteFilter
  {
  public:
    AWS_GEOPLACES_API AutocompleteFilter() = default;
    AWS_GEOPLACES_API AutocompleteFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AutocompleteFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bounding box enclosing the geometric shape (area or line) that an
     * individual result covers.</p> <p>The bounding box formed is defined as a set 4
     * coordinates: <code>[{westward lng}, {southern lat}, {eastward lng}, {northern
     * lat}]</code> </p>
     */
    inline const Aws::Vector<double>& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = Aws::Vector<double>>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = Aws::Vector<double>>
    AutocompleteFilter& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    inline AutocompleteFilter& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const FilterCircle& GetCircle() const { return m_circle; }
    inline bool CircleHasBeenSet() const { return m_circleHasBeenSet; }
    template<typename CircleT = FilterCircle>
    void SetCircle(CircleT&& value) { m_circleHasBeenSet = true; m_circle = std::forward<CircleT>(value); }
    template<typename CircleT = FilterCircle>
    AutocompleteFilter& WithCircle(CircleT&& value) { SetCircle(std::forward<CircleT>(value)); return *this;}
    ///@}

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
    AutocompleteFilter& WithIncludeCountries(IncludeCountriesT&& value) { SetIncludeCountries(std::forward<IncludeCountriesT>(value)); return *this;}
    template<typename IncludeCountriesT = Aws::String>
    AutocompleteFilter& AddIncludeCountries(IncludeCountriesT&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.emplace_back(std::forward<IncludeCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The included place types.</p>
     */
    inline const Aws::Vector<AutocompleteFilterPlaceType>& GetIncludePlaceTypes() const { return m_includePlaceTypes; }
    inline bool IncludePlaceTypesHasBeenSet() const { return m_includePlaceTypesHasBeenSet; }
    template<typename IncludePlaceTypesT = Aws::Vector<AutocompleteFilterPlaceType>>
    void SetIncludePlaceTypes(IncludePlaceTypesT&& value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes = std::forward<IncludePlaceTypesT>(value); }
    template<typename IncludePlaceTypesT = Aws::Vector<AutocompleteFilterPlaceType>>
    AutocompleteFilter& WithIncludePlaceTypes(IncludePlaceTypesT&& value) { SetIncludePlaceTypes(std::forward<IncludePlaceTypesT>(value)); return *this;}
    inline AutocompleteFilter& AddIncludePlaceTypes(AutocompleteFilterPlaceType value) { m_includePlaceTypesHasBeenSet = true; m_includePlaceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    FilterCircle m_circle;
    bool m_circleHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeCountries;
    bool m_includeCountriesHasBeenSet = false;

    Aws::Vector<AutocompleteFilterPlaceType> m_includePlaceTypes;
    bool m_includePlaceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
