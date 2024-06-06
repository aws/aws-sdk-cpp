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
    AWS_LOCATIONSERVICE_API SearchForSuggestionsResult();
    AWS_LOCATIONSERVICE_API SearchForSuggestionsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API SearchForSuggestionsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline SearchForSuggestionsResult& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline SearchForSuggestionsResult& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of the place suggestion, typically formatted as an address
     * string.</p>
     */
    inline SearchForSuggestionsResult& WithText(const char* value) { SetText(value); return *this;}


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
    inline const Aws::String& GetPlaceId() const{ return m_placeId; }

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
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }

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
    inline void SetPlaceId(const Aws::String& value) { m_placeIdHasBeenSet = true; m_placeId = value; }

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
    inline void SetPlaceId(Aws::String&& value) { m_placeIdHasBeenSet = true; m_placeId = std::move(value); }

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
    inline void SetPlaceId(const char* value) { m_placeIdHasBeenSet = true; m_placeId.assign(value); }

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
    inline SearchForSuggestionsResult& WithPlaceId(const Aws::String& value) { SetPlaceId(value); return *this;}

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
    inline SearchForSuggestionsResult& WithPlaceId(Aws::String&& value) { SetPlaceId(std::move(value)); return *this;}

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
    inline SearchForSuggestionsResult& WithPlaceId(const char* value) { SetPlaceId(value); return *this;}


    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const{ return m_categories; }

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline void SetCategories(const Aws::Vector<Aws::String>& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline void SetCategories(Aws::Vector<Aws::String>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline SearchForSuggestionsResult& WithCategories(const Aws::Vector<Aws::String>& value) { SetCategories(value); return *this;}

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline SearchForSuggestionsResult& WithCategories(Aws::Vector<Aws::String>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline SearchForSuggestionsResult& AddCategories(const Aws::String& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline SearchForSuggestionsResult& AddCategories(Aws::String&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Location categories that describe the Place.</p> <p>For more
     * information about using categories, including a list of Amazon Location
     * categories, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service Developer Guide</i>.</p>
     */
    inline SearchForSuggestionsResult& AddCategories(const char* value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }


    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupplementalCategories() const{ return m_supplementalCategories; }

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline bool SupplementalCategoriesHasBeenSet() const { return m_supplementalCategoriesHasBeenSet; }

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline void SetSupplementalCategories(const Aws::Vector<Aws::String>& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories = value; }

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline void SetSupplementalCategories(Aws::Vector<Aws::String>&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories = std::move(value); }

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline SearchForSuggestionsResult& WithSupplementalCategories(const Aws::Vector<Aws::String>& value) { SetSupplementalCategories(value); return *this;}

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline SearchForSuggestionsResult& WithSupplementalCategories(Aws::Vector<Aws::String>&& value) { SetSupplementalCategories(std::move(value)); return *this;}

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline SearchForSuggestionsResult& AddSupplementalCategories(const Aws::String& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.push_back(value); return *this; }

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline SearchForSuggestionsResult& AddSupplementalCategories(Aws::String&& value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>Categories from the data provider that describe the Place that are not mapped
     * to any Amazon Location categories.</p>
     */
    inline SearchForSuggestionsResult& AddSupplementalCategories(const char* value) { m_supplementalCategoriesHasBeenSet = true; m_supplementalCategories.push_back(value); return *this; }

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
