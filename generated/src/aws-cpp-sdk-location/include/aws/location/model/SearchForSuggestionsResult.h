/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
     * <p>The unique identifier of the Place. You can use this with the
     * <code>GetPlace</code> operation to find the place again later, or to get full
     * information for the Place.</p> <p>The <code>GetPlace</code> request must use the
     * same <code>PlaceIndex</code> resource as the
     * <code>SearchPlaceIndexForSuggestions</code> that generated the Place ID.</p>
     *  <p>For <code>SearchPlaceIndexForSuggestions</code> operations, the
     * <code>PlaceId</code> is returned by place indexes that use Esri, Grab, or HERE
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
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
     * as data providers.</p>  <p>While you can use PlaceID in subsequent
     * requests, PlaceID is not intended to be a permanent identifier and the ID can
     * change between consecutive API calls. Please see the following PlaceID behaviour
     * for each data provider:</p> <ul> <li> <p>Esri: Place IDs will change every
     * quarter at a minimum. The typical time period for these changes would be March,
     * June, September, and December. Place IDs might also change between the typical
     * quarterly change but that will be much less frequent.</p> </li> <li> <p>HERE: We
     * recommend that you cache data for no longer than a week to keep your data data
     * fresh. You can assume that less than 1% ID shifts will release over release
     * which is approximately 1 - 2 times per week.</p> </li> <li> <p>Grab: Place IDs
     * can expire or become invalid in the following situations.</p> <ul> <li> <p>Data
     * operations: The POI may be removed from Grab POI database by Grab Map Ops based
     * on the ground-truth, such as being closed in the real world, being detected as a
     * duplicate POI, or having incorrect information. Grab will synchronize data to
     * the Waypoint environment on weekly basis.</p> </li> <li> <p>Interpolated POI:
     * Interpolated POI is a temporary POI generated in real time when serving a
     * request, and it will be marked as derived in the <code>place.result_type</code>
     * field in the response. The information of interpolated POIs will be retained for
     * at least 30 days, which means that within 30 days, you are able to obtain POI
     * details by Place ID from Place Details API. After 30 days, the interpolated
     * POIs(both Place ID and details) may expire and inaccessible from the Places
     * Details API.</p> </li> </ul> </li> </ul>
     */
    inline SearchForSuggestionsResult& WithPlaceId(const char* value) { SetPlaceId(value); return *this;}


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

  private:

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_supplementalCategories;
    bool m_supplementalCategoriesHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
