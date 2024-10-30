/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details related to contacts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/ContactDetails">AWS
   * API Reference</a></p>
   */
  class ContactDetails
  {
  public:
    AWS_GEOPLACES_API ContactDetails();
    AWS_GEOPLACES_API ContactDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API ContactDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contact's label.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline ContactDetails& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline ContactDetails& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline ContactDetails& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ContactDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ContactDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ContactDetails& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Categories of results that results must belong too.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline ContactDetails& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline ContactDetails& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline ContactDetails& AddCategories(const Category& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline ContactDetails& AddCategories(Category&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
