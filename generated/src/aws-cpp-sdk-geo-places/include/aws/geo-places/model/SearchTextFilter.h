/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/FilterCircle.h>
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
   * <p>SearchText structure which contains a set of inclusion/exclusion properties
   * that results must posses in order to be returned as a result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchTextFilter">AWS
   * API Reference</a></p>
   */
  class SearchTextFilter
  {
  public:
    AWS_GEOPLACES_API SearchTextFilter();
    AWS_GEOPLACES_API SearchTextFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API SearchTextFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline SearchTextFilter& WithBoundingBox(const Aws::Vector<double>& value) { SetBoundingBox(value); return *this;}
    inline SearchTextFilter& WithBoundingBox(Aws::Vector<double>&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline SearchTextFilter& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const FilterCircle& GetCircle() const{ return m_circle; }
    inline bool CircleHasBeenSet() const { return m_circleHasBeenSet; }
    inline void SetCircle(const FilterCircle& value) { m_circleHasBeenSet = true; m_circle = value; }
    inline void SetCircle(FilterCircle&& value) { m_circleHasBeenSet = true; m_circle = std::move(value); }
    inline SearchTextFilter& WithCircle(const FilterCircle& value) { SetCircle(value); return *this;}
    inline SearchTextFilter& WithCircle(FilterCircle&& value) { SetCircle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of countries that all results must be in. Countries are represented
     * by either their alpha-2 or alpha-3 character codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeCountries() const{ return m_includeCountries; }
    inline bool IncludeCountriesHasBeenSet() const { return m_includeCountriesHasBeenSet; }
    inline void SetIncludeCountries(const Aws::Vector<Aws::String>& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = value; }
    inline void SetIncludeCountries(Aws::Vector<Aws::String>&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries = std::move(value); }
    inline SearchTextFilter& WithIncludeCountries(const Aws::Vector<Aws::String>& value) { SetIncludeCountries(value); return *this;}
    inline SearchTextFilter& WithIncludeCountries(Aws::Vector<Aws::String>&& value) { SetIncludeCountries(std::move(value)); return *this;}
    inline SearchTextFilter& AddIncludeCountries(const Aws::String& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(value); return *this; }
    inline SearchTextFilter& AddIncludeCountries(Aws::String&& value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(std::move(value)); return *this; }
    inline SearchTextFilter& AddIncludeCountries(const char* value) { m_includeCountriesHasBeenSet = true; m_includeCountries.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    FilterCircle m_circle;
    bool m_circleHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeCountries;
    bool m_includeCountriesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
