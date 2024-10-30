/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/OpeningHoursComponents.h>
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
   * <p>List of opening hours objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/OpeningHours">AWS
   * API Reference</a></p>
   */
  class OpeningHours
  {
  public:
    AWS_GEOPLACES_API OpeningHours();
    AWS_GEOPLACES_API OpeningHours(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API OpeningHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of opening hours in the format they are displayed in. This can vary by
     * result and in most cases represents how the result uniquely formats their
     * opening hours. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDisplay() const{ return m_display; }
    inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
    inline void SetDisplay(const Aws::Vector<Aws::String>& value) { m_displayHasBeenSet = true; m_display = value; }
    inline void SetDisplay(Aws::Vector<Aws::String>&& value) { m_displayHasBeenSet = true; m_display = std::move(value); }
    inline OpeningHours& WithDisplay(const Aws::Vector<Aws::String>& value) { SetDisplay(value); return *this;}
    inline OpeningHours& WithDisplay(Aws::Vector<Aws::String>&& value) { SetDisplay(std::move(value)); return *this;}
    inline OpeningHours& AddDisplay(const Aws::String& value) { m_displayHasBeenSet = true; m_display.push_back(value); return *this; }
    inline OpeningHours& AddDisplay(Aws::String&& value) { m_displayHasBeenSet = true; m_display.push_back(std::move(value)); return *this; }
    inline OpeningHours& AddDisplay(const char* value) { m_displayHasBeenSet = true; m_display.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boolean which indicates if the result/place is currently open. </p>
     */
    inline bool GetOpenNow() const{ return m_openNow; }
    inline bool OpenNowHasBeenSet() const { return m_openNowHasBeenSet; }
    inline void SetOpenNow(bool value) { m_openNowHasBeenSet = true; m_openNow = value; }
    inline OpeningHours& WithOpenNow(bool value) { SetOpenNow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Components of the opening hours object.</p>
     */
    inline const Aws::Vector<OpeningHoursComponents>& GetComponents() const{ return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    inline void SetComponents(const Aws::Vector<OpeningHoursComponents>& value) { m_componentsHasBeenSet = true; m_components = value; }
    inline void SetComponents(Aws::Vector<OpeningHoursComponents>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }
    inline OpeningHours& WithComponents(const Aws::Vector<OpeningHoursComponents>& value) { SetComponents(value); return *this;}
    inline OpeningHours& WithComponents(Aws::Vector<OpeningHoursComponents>&& value) { SetComponents(std::move(value)); return *this;}
    inline OpeningHours& AddComponents(const OpeningHoursComponents& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }
    inline OpeningHours& AddComponents(OpeningHoursComponents&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong too.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline OpeningHours& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline OpeningHours& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline OpeningHours& AddCategories(const Category& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline OpeningHours& AddCategories(Category&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_display;
    bool m_displayHasBeenSet = false;

    bool m_openNow;
    bool m_openNowHasBeenSet = false;

    Aws::Vector<OpeningHoursComponents> m_components;
    bool m_componentsHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
