/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>SearchNearby structure which contains a set of inclusion/exclusion properties
   * that results must possess in order to be returned as a result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchNearbyFilter">AWS
   * API Reference</a></p>
   */
  class SearchNearbyFilter
  {
  public:
    AWS_GEOPLACES_API SearchNearbyFilter() = default;
    AWS_GEOPLACES_API SearchNearbyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SearchNearbyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SearchNearbyFilter& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    inline SearchNearbyFilter& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of countries that all results must be in. Countries are represented by
     * either their alpha-2 or alpha-3 character codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCountries() const { return m_includeCountries; }
    inline bool IncludeCountriesHasBeenSet() const { return m_includeCountriesHasBeenSet; }
    template<typename IncludeCountriesT = Aws::Vector<Aws::String>>
    void SetIncludeCountries(IncludeCountriesT&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = std::forward<IncludeCountriesT>(value); }
    template<typename IncludeCountriesT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithIncludeCountries(IncludeCountriesT&& value) { SetIncludeCountries(std::forward<IncludeCountriesT>(value)); return *this;}
    template<typename IncludeCountriesT = Aws::String>
    SearchNearbyFilter& AddIncludeCountries(IncludeCountriesT&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.emplace_back(std::forward<IncludeCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong too.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCategories() const { return m_includeCategories; }
    inline bool IncludeCategoriesHasBeenSet() const { return m_includeCategoriesHasBeenSet; }
    template<typename IncludeCategoriesT = Aws::Vector<Aws::String>>
    void SetIncludeCategories(IncludeCategoriesT&& value) { m_includeCategoriesHasBeenSet = true; m_includeCategories = std::forward<IncludeCategoriesT>(value); }
    template<typename IncludeCategoriesT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithIncludeCategories(IncludeCategoriesT&& value) { SetIncludeCategories(std::forward<IncludeCategoriesT>(value)); return *this;}
    template<typename IncludeCategoriesT = Aws::String>
    SearchNearbyFilter& AddIncludeCategories(IncludeCategoriesT&& value) { m_includeCategoriesHasBeenSet = true; m_includeCategories.emplace_back(std::forward<IncludeCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results are excluded from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeCategories() const { return m_excludeCategories; }
    inline bool ExcludeCategoriesHasBeenSet() const { return m_excludeCategoriesHasBeenSet; }
    template<typename ExcludeCategoriesT = Aws::Vector<Aws::String>>
    void SetExcludeCategories(ExcludeCategoriesT&& value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories = std::forward<ExcludeCategoriesT>(value); }
    template<typename ExcludeCategoriesT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithExcludeCategories(ExcludeCategoriesT&& value) { SetExcludeCategories(std::forward<ExcludeCategoriesT>(value)); return *this;}
    template<typename ExcludeCategoriesT = Aws::String>
    SearchNearbyFilter& AddExcludeCategories(ExcludeCategoriesT&& value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories.emplace_back(std::forward<ExcludeCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeBusinessChains() const { return m_includeBusinessChains; }
    inline bool IncludeBusinessChainsHasBeenSet() const { return m_includeBusinessChainsHasBeenSet; }
    template<typename IncludeBusinessChainsT = Aws::Vector<Aws::String>>
    void SetIncludeBusinessChains(IncludeBusinessChainsT&& value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains = std::forward<IncludeBusinessChainsT>(value); }
    template<typename IncludeBusinessChainsT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithIncludeBusinessChains(IncludeBusinessChainsT&& value) { SetIncludeBusinessChains(std::forward<IncludeBusinessChainsT>(value)); return *this;}
    template<typename IncludeBusinessChainsT = Aws::String>
    SearchNearbyFilter& AddIncludeBusinessChains(IncludeBusinessChainsT&& value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains.emplace_back(std::forward<IncludeBusinessChainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeBusinessChains() const { return m_excludeBusinessChains; }
    inline bool ExcludeBusinessChainsHasBeenSet() const { return m_excludeBusinessChainsHasBeenSet; }
    template<typename ExcludeBusinessChainsT = Aws::Vector<Aws::String>>
    void SetExcludeBusinessChains(ExcludeBusinessChainsT&& value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains = std::forward<ExcludeBusinessChainsT>(value); }
    template<typename ExcludeBusinessChainsT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithExcludeBusinessChains(ExcludeBusinessChainsT&& value) { SetExcludeBusinessChains(std::forward<ExcludeBusinessChainsT>(value)); return *this;}
    template<typename ExcludeBusinessChainsT = Aws::String>
    SearchNearbyFilter& AddExcludeBusinessChains(ExcludeBusinessChainsT&& value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains.emplace_back(std::forward<ExcludeBusinessChainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Food types that results are included from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeFoodTypes() const { return m_includeFoodTypes; }
    inline bool IncludeFoodTypesHasBeenSet() const { return m_includeFoodTypesHasBeenSet; }
    template<typename IncludeFoodTypesT = Aws::Vector<Aws::String>>
    void SetIncludeFoodTypes(IncludeFoodTypesT&& value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes = std::forward<IncludeFoodTypesT>(value); }
    template<typename IncludeFoodTypesT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithIncludeFoodTypes(IncludeFoodTypesT&& value) { SetIncludeFoodTypes(std::forward<IncludeFoodTypesT>(value)); return *this;}
    template<typename IncludeFoodTypesT = Aws::String>
    SearchNearbyFilter& AddIncludeFoodTypes(IncludeFoodTypesT&& value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes.emplace_back(std::forward<IncludeFoodTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Food types that results are excluded from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeFoodTypes() const { return m_excludeFoodTypes; }
    inline bool ExcludeFoodTypesHasBeenSet() const { return m_excludeFoodTypesHasBeenSet; }
    template<typename ExcludeFoodTypesT = Aws::Vector<Aws::String>>
    void SetExcludeFoodTypes(ExcludeFoodTypesT&& value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes = std::forward<ExcludeFoodTypesT>(value); }
    template<typename ExcludeFoodTypesT = Aws::Vector<Aws::String>>
    SearchNearbyFilter& WithExcludeFoodTypes(ExcludeFoodTypesT&& value) { SetExcludeFoodTypes(std::forward<ExcludeFoodTypesT>(value)); return *this;}
    template<typename ExcludeFoodTypesT = Aws::String>
    SearchNearbyFilter& AddExcludeFoodTypes(ExcludeFoodTypesT&& value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes.emplace_back(std::forward<ExcludeFoodTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeCountries;
    bool m_includeCountriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeCategories;
    bool m_includeCategoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeCategories;
    bool m_excludeCategoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeBusinessChains;
    bool m_includeBusinessChainsHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeBusinessChains;
    bool m_excludeBusinessChainsHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeFoodTypes;
    bool m_includeFoodTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeFoodTypes;
    bool m_excludeFoodTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
