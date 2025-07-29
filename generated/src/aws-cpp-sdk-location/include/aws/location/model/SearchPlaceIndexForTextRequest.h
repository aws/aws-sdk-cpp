/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LocationService
{
namespace Model
{

  /**
   */
  class SearchPlaceIndexForTextRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchPlaceIndexForText"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the place index resource you want to use for the search.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    SearchPlaceIndexForTextRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address, name, city, or region to be used in the search in free-form text
     * format. For example, <code>123 Any Street</code>.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SearchPlaceIndexForTextRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that indicates a preference for places that are closer
     * to a specified position.</p> <p> If provided, this parameter must contain a pair
     * of numbers. The first number represents the X coordinate, or longitude; the
     * second number represents the Y coordinate, or latitude.</p> <p>For example,
     * <code>[-123.1174, 49.2847]</code> represents the position with longitude
     * <code>-123.1174</code> and latitude <code>49.2847</code>.</p>  <p>
     * <code>BiasPosition</code> and <code>FilterBBox</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline const Aws::Vector<double>& GetBiasPosition() const { return m_biasPosition; }
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }
    template<typename BiasPositionT = Aws::Vector<double>>
    void SetBiasPosition(BiasPositionT&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::forward<BiasPositionT>(value); }
    template<typename BiasPositionT = Aws::Vector<double>>
    SearchPlaceIndexForTextRequest& WithBiasPosition(BiasPositionT&& value) { SetBiasPosition(std::forward<BiasPositionT>(value)); return *this;}
    inline SearchPlaceIndexForTextRequest& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are within the provided bounding box.</p> <p> If provided, this parameter
     * must contain a total of four consecutive numbers in two pairs. The first pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the southwest corner of the bounding box; the second pair of
     * numbers represents the X and Y coordinates (longitude and latitude,
     * respectively) of the northeast corner of the bounding box.</p> <p>For example,
     * <code>[-12.7935, -37.4835, -12.0684, -36.9542]</code> represents a bounding box
     * where the southwest corner has longitude <code>-12.7935</code> and latitude
     * <code>-37.4835</code>, and the northeast corner has longitude
     * <code>-12.0684</code> and latitude <code>-36.9542</code>.</p>  <p>
     * <code>FilterBBox</code> and <code>BiasPosition</code> are mutually exclusive.
     * Specifying both options results in an error. </p> 
     */
    inline const Aws::Vector<double>& GetFilterBBox() const { return m_filterBBox; }
    inline bool FilterBBoxHasBeenSet() const { return m_filterBBoxHasBeenSet; }
    template<typename FilterBBoxT = Aws::Vector<double>>
    void SetFilterBBox(FilterBBoxT&& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = std::forward<FilterBBoxT>(value); }
    template<typename FilterBBoxT = Aws::Vector<double>>
    SearchPlaceIndexForTextRequest& WithFilterBBox(FilterBBoxT&& value) { SetFilterBBox(std::forward<FilterBBoxT>(value)); return *this;}
    inline SearchPlaceIndexForTextRequest& AddFilterBBox(double value) { m_filterBBoxHasBeenSet = true; m_filterBBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that limits the search results by returning only places
     * that are in a specified list of countries.</p> <ul> <li> <p>Valid values include
     * <a href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country codes. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCountries() const { return m_filterCountries; }
    inline bool FilterCountriesHasBeenSet() const { return m_filterCountriesHasBeenSet; }
    template<typename FilterCountriesT = Aws::Vector<Aws::String>>
    void SetFilterCountries(FilterCountriesT&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = std::forward<FilterCountriesT>(value); }
    template<typename FilterCountriesT = Aws::Vector<Aws::String>>
    SearchPlaceIndexForTextRequest& WithFilterCountries(FilterCountriesT&& value) { SetFilterCountries(std::forward<FilterCountriesT>(value)); return *this;}
    template<typename FilterCountriesT = Aws::String>
    SearchPlaceIndexForTextRequest& AddFilterCountries(FilterCountriesT&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.emplace_back(std::forward<FilterCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchPlaceIndexForTextRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred language used to return results. The value must be a valid <a
     * href="https://tools.ietf.org/search/bcp47">BCP 47</a> language tag, for example,
     * <code>en</code> for English.</p> <p>This setting affects the languages used in
     * the results, but not the results themselves. If no language is specified, or not
     * supported for a particular result, the partner automatically chooses a language
     * for the result.</p> <p>For an example, we'll use the Greek language. You search
     * for <code>Athens, Greece</code>, with the <code>language</code> parameter set to
     * <code>en</code>. The result found will most likely be returned as
     * <code>Athens</code>.</p> <p>If you set the <code>language</code> parameter to
     * <code>el</code>, for Greek, then the result found will more likely be returned
     * as <code>Αθήνα</code>.</p> <p>If the data provider does not have a value for
     * Greek, the result will be in a language that the provider does support.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    SearchPlaceIndexForTextRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more Amazon Location categories to filter the returned
     * places. If you include more than one category, the results will include results
     * that match <i>any</i> of the categories listed.</p> <p>For more information
     * about using categories, including a list of Amazon Location categories, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/category-filtering.html">Categories
     * and filtering</a>, in the <i>Amazon Location Service developer guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCategories() const { return m_filterCategories; }
    inline bool FilterCategoriesHasBeenSet() const { return m_filterCategoriesHasBeenSet; }
    template<typename FilterCategoriesT = Aws::Vector<Aws::String>>
    void SetFilterCategories(FilterCategoriesT&& value) { m_filterCategoriesHasBeenSet = true; m_filterCategories = std::forward<FilterCategoriesT>(value); }
    template<typename FilterCategoriesT = Aws::Vector<Aws::String>>
    SearchPlaceIndexForTextRequest& WithFilterCategories(FilterCategoriesT&& value) { SetFilterCategories(std::forward<FilterCategoriesT>(value)); return *this;}
    template<typename FilterCategoriesT = Aws::String>
    SearchPlaceIndexForTextRequest& AddFilterCategories(FilterCategoriesT&& value) { m_filterCategoriesHasBeenSet = true; m_filterCategories.emplace_back(std::forward<FilterCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    SearchPlaceIndexForTextRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<double> m_biasPosition;
    bool m_biasPositionHasBeenSet = false;

    Aws::Vector<double> m_filterBBox;
    bool m_filterBBoxHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterCountries;
    bool m_filterCountriesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterCategories;
    bool m_filterCategoriesHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
