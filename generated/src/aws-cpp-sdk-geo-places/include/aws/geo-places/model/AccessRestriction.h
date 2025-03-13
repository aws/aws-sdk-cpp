/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/Category.h>
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
   * <p>Indicates if the access location is restricted. Index correlates to that of
   * an access point and indicates if access through this point has some form of
   * restriction. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AccessRestriction">AWS
   * API Reference</a></p>
   */
  class AccessRestriction
  {
  public:
    AWS_GEOPLACES_API AccessRestriction() = default;
    AWS_GEOPLACES_API AccessRestriction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API AccessRestriction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The restriction.</p>
     */
    inline bool GetRestricted() const { return m_restricted; }
    inline bool RestrictedHasBeenSet() const { return m_restrictedHasBeenSet; }
    inline void SetRestricted(bool value) { m_restrictedHasBeenSet = true; m_restricted = value; }
    inline AccessRestriction& WithRestricted(bool value) { SetRestricted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong too.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Category>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Category>>
    AccessRestriction& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Category>
    AccessRestriction& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}
  private:

    bool m_restricted{false};
    bool m_restrictedHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
