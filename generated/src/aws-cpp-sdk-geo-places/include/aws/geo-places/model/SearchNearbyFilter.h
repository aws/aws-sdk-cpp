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
   * that results must posses in order to be returned as a result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchNearbyFilter">AWS
   * API Reference</a></p>
   */
  class SearchNearbyFilter
  {
  public:
    AWS_GEOPLACES_API SearchNearbyFilter();
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
    inline const Aws::Vector<double>& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const Aws::Vector<double>& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(Aws::Vector<double>&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline SearchNearbyFilter& WithBoundingBox(const Aws::Vector<double>& value) { SetBoundingBox(value); return *this;}
    inline SearchNearbyFilter& WithBoundingBox(Aws::Vector<double>&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of countries that all results must be in. Countries are represented by
     * either their alpha-2 or alpha-3 character codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCountries() const{ return m_includeCountries; }
    inline bool IncludeCountriesHasBeenSet() const { return m_includeCountriesHasBeenSet; }
    inline void SetIncludeCountries(const Aws::Vector<Aws::String>& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = value; }
    inline void SetIncludeCountries(Aws::Vector<Aws::String>&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = std::move(value); }
    inline SearchNearbyFilter& WithIncludeCountries(const Aws::Vector<Aws::String>& value) { SetIncludeCountries(value); return *this;}
    inline SearchNearbyFilter& WithIncludeCountries(Aws::Vector<Aws::String>&& value) { SetIncludeCountries(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddIncludeCountries(const Aws::String& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(value); return *this; }
    inline SearchNearbyFilter& AddIncludeCountries(Aws::String&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddIncludeCountries(const char* value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong too.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCategories() const{ return m_includeCategories; }
    inline bool IncludeCategoriesHasBeenSet() const { return m_includeCategoriesHasBeenSet; }
    inline void SetIncludeCategories(const Aws::Vector<Aws::String>& value) { m_includeCategoriesHasBeenSet = true; m_includeCategories = value; }
    inline void SetIncludeCategories(Aws::Vector<Aws::String>&& value) { m_includeCategoriesHasBeenSet = true; m_includeCategories = std::move(value); }
    inline SearchNearbyFilter& WithIncludeCategories(const Aws::Vector<Aws::String>& value) { SetIncludeCategories(value); return *this;}
    inline SearchNearbyFilter& WithIncludeCategories(Aws::Vector<Aws::String>&& value) { SetIncludeCategories(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddIncludeCategories(const Aws::String& value) { m_includeCategoriesHasBeenSet = true; m_includeCategories.push_back(value); return *this; }
    inline SearchNearbyFilter& AddIncludeCategories(Aws::String&& value) { m_includeCategoriesHasBeenSet = true; m_includeCategories.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddIncludeCategories(const char* value) { m_includeCategoriesHasBeenSet = true; m_includeCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results are excluded from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeCategories() const{ return m_excludeCategories; }
    inline bool ExcludeCategoriesHasBeenSet() const { return m_excludeCategoriesHasBeenSet; }
    inline void SetExcludeCategories(const Aws::Vector<Aws::String>& value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories = value; }
    inline void SetExcludeCategories(Aws::Vector<Aws::String>&& value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories = std::move(value); }
    inline SearchNearbyFilter& WithExcludeCategories(const Aws::Vector<Aws::String>& value) { SetExcludeCategories(value); return *this;}
    inline SearchNearbyFilter& WithExcludeCategories(Aws::Vector<Aws::String>&& value) { SetExcludeCategories(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddExcludeCategories(const Aws::String& value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories.push_back(value); return *this; }
    inline SearchNearbyFilter& AddExcludeCategories(Aws::String&& value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddExcludeCategories(const char* value) { m_excludeCategoriesHasBeenSet = true; m_excludeCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeBusinessChains() const{ return m_includeBusinessChains; }
    inline bool IncludeBusinessChainsHasBeenSet() const { return m_includeBusinessChainsHasBeenSet; }
    inline void SetIncludeBusinessChains(const Aws::Vector<Aws::String>& value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains = value; }
    inline void SetIncludeBusinessChains(Aws::Vector<Aws::String>&& value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains = std::move(value); }
    inline SearchNearbyFilter& WithIncludeBusinessChains(const Aws::Vector<Aws::String>& value) { SetIncludeBusinessChains(value); return *this;}
    inline SearchNearbyFilter& WithIncludeBusinessChains(Aws::Vector<Aws::String>&& value) { SetIncludeBusinessChains(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddIncludeBusinessChains(const Aws::String& value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains.push_back(value); return *this; }
    inline SearchNearbyFilter& AddIncludeBusinessChains(Aws::String&& value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddIncludeBusinessChains(const char* value) { m_includeBusinessChainsHasBeenSet = true; m_includeBusinessChains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Business Chains associated with the place.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeBusinessChains() const{ return m_excludeBusinessChains; }
    inline bool ExcludeBusinessChainsHasBeenSet() const { return m_excludeBusinessChainsHasBeenSet; }
    inline void SetExcludeBusinessChains(const Aws::Vector<Aws::String>& value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains = value; }
    inline void SetExcludeBusinessChains(Aws::Vector<Aws::String>&& value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains = std::move(value); }
    inline SearchNearbyFilter& WithExcludeBusinessChains(const Aws::Vector<Aws::String>& value) { SetExcludeBusinessChains(value); return *this;}
    inline SearchNearbyFilter& WithExcludeBusinessChains(Aws::Vector<Aws::String>&& value) { SetExcludeBusinessChains(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddExcludeBusinessChains(const Aws::String& value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains.push_back(value); return *this; }
    inline SearchNearbyFilter& AddExcludeBusinessChains(Aws::String&& value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddExcludeBusinessChains(const char* value) { m_excludeBusinessChainsHasBeenSet = true; m_excludeBusinessChains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Food types that results are included from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeFoodTypes() const{ return m_includeFoodTypes; }
    inline bool IncludeFoodTypesHasBeenSet() const { return m_includeFoodTypesHasBeenSet; }
    inline void SetIncludeFoodTypes(const Aws::Vector<Aws::String>& value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes = value; }
    inline void SetIncludeFoodTypes(Aws::Vector<Aws::String>&& value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes = std::move(value); }
    inline SearchNearbyFilter& WithIncludeFoodTypes(const Aws::Vector<Aws::String>& value) { SetIncludeFoodTypes(value); return *this;}
    inline SearchNearbyFilter& WithIncludeFoodTypes(Aws::Vector<Aws::String>&& value) { SetIncludeFoodTypes(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddIncludeFoodTypes(const Aws::String& value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes.push_back(value); return *this; }
    inline SearchNearbyFilter& AddIncludeFoodTypes(Aws::String&& value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddIncludeFoodTypes(const char* value) { m_includeFoodTypesHasBeenSet = true; m_includeFoodTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Food types that results are excluded from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeFoodTypes() const{ return m_excludeFoodTypes; }
    inline bool ExcludeFoodTypesHasBeenSet() const { return m_excludeFoodTypesHasBeenSet; }
    inline void SetExcludeFoodTypes(const Aws::Vector<Aws::String>& value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes = value; }
    inline void SetExcludeFoodTypes(Aws::Vector<Aws::String>&& value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes = std::move(value); }
    inline SearchNearbyFilter& WithExcludeFoodTypes(const Aws::Vector<Aws::String>& value) { SetExcludeFoodTypes(value); return *this;}
    inline SearchNearbyFilter& WithExcludeFoodTypes(Aws::Vector<Aws::String>&& value) { SetExcludeFoodTypes(std::move(value)); return *this;}
    inline SearchNearbyFilter& AddExcludeFoodTypes(const Aws::String& value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes.push_back(value); return *this; }
    inline SearchNearbyFilter& AddExcludeFoodTypes(Aws::String&& value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes.push_back(std::move(value)); return *this; }
    inline SearchNearbyFilter& AddExcludeFoodTypes(const char* value) { m_excludeFoodTypesHasBeenSet = true; m_excludeFoodTypes.push_back(value); return *this; }
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
