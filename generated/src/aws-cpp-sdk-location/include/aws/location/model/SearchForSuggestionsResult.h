/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains a place suggestion resulting from a place suggestion query that is
   * run on a place index resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchForSuggestionsResult">AWS
   * API Reference</a></p>
   */
  class SearchForSuggestionsResult
  {
  public:
    AWS_LOCATIONSERVICE_API SearchForSuggestionsResult() = default;
    AWS_LOCATIONSERVICE_API SearchForSuggestionsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API SearchForSuggestionsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SearchForSuggestionsResult& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Place. You can use this with the
     * <code>GetPlace</code> operation to find the place again later, or to get full
     * information for the Place.</p> <p>The <code>GetPlace</code> request must use the
     * same <code>PlaceIndex</code> resource as the
     * <code>SearchPlaceIndexForSuggestions</code> that generated the Place ID.</p>
     *  <p>For <code>SearchPlaceIndexForSuggestions</code> operations, the
     * <code>PlaceId</code> is returned by place indexes that use Esri, Grab, or HERE
     * as data providers.</p> 
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    SearchForSuggestionsResult& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service developer guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    SearchForSuggestionsResult& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Aws::String>
    SearchForSuggestionsResult& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupplementalCategories() const { return m_supplementalCategories; }
    inline bool SupplementalCategoriesHasBeenSet() const { return m_supplementalCategoriesHasBeenSet; }
    template<typename SupplementalCategoriesT = Aws::Vector<Aws::String>>
    void SetSupplementalCategories(SupplementalCategoriesT&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories = std::forward<SupplementalCategoriesT>(value); }
    template<typename SupplementalCategoriesT = Aws::Vector<Aws::String>>
    SearchForSuggestionsResult& WithSupplementalCategories(SupplementalCategoriesT&& value) { SetSupplementalCategories(std::forward<SupplementalCategoriesT>(value)); return *this;}
    template<typename SupplementalCategoriesT = Aws::String>
    SearchForSuggestionsResult& AddSupplementalCategories(SupplementalCategoriesT&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.emplace_back(std::forward<SupplementalCategoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supplementalCategories;
    bool m_supplementalCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
