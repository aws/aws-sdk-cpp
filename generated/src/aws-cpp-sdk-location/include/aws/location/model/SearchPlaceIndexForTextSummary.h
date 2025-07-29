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
   * <p>A summary of the request sent by using
   * <code>SearchPlaceIndexForText</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForTextSummary">AWS
   * API Reference</a></p>
   */
  class SearchPlaceIndexForTextSummary
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextSummary() = default;
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The search text specified in the request.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SearchPlaceIndexForTextSummary& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline const Aws::Vector<double>& GetBiasPosition() const { return m_biasPosition; }
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }
    template<typename BiasPositionT = Aws::Vector<double>>
    void SetBiasPosition(BiasPositionT&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::forward<BiasPositionT>(value); }
    template<typename BiasPositionT = Aws::Vector<double>>
    SearchPlaceIndexForTextSummary& WithBiasPosition(BiasPositionT&& value) { SetBiasPosition(std::forward<BiasPositionT>(value)); return *this;}
    inline SearchPlaceIndexForTextSummary& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline const Aws::Vector<double>& GetFilterBBox() const { return m_filterBBox; }
    inline bool FilterBBoxHasBeenSet() const { return m_filterBBoxHasBeenSet; }
    template<typename FilterBBoxT = Aws::Vector<double>>
    void SetFilterBBox(FilterBBoxT&& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = std::forward<FilterBBoxT>(value); }
    template<typename FilterBBoxT = Aws::Vector<double>>
    SearchPlaceIndexForTextSummary& WithFilterBBox(FilterBBoxT&& value) { SetFilterBBox(std::forward<FilterBBoxT>(value)); return *this;}
    inline SearchPlaceIndexForTextSummary& AddFilterBBox(double value) { m_filterBBoxHasBeenSet = true; m_filterBBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCountries() const { return m_filterCountries; }
    inline bool FilterCountriesHasBeenSet() const { return m_filterCountriesHasBeenSet; }
    template<typename FilterCountriesT = Aws::Vector<Aws::String>>
    void SetFilterCountries(FilterCountriesT&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = std::forward<FilterCountriesT>(value); }
    template<typename FilterCountriesT = Aws::Vector<Aws::String>>
    SearchPlaceIndexForTextSummary& WithFilterCountries(FilterCountriesT&& value) { SetFilterCountries(std::forward<FilterCountriesT>(value)); return *this;}
    template<typename FilterCountriesT = Aws::String>
    SearchPlaceIndexForTextSummary& AddFilterCountries(FilterCountriesT&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.emplace_back(std::forward<FilterCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the optional result count limit specified in the request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchPlaceIndexForTextSummary& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline const Aws::Vector<double>& GetResultBBox() const { return m_resultBBox; }
    inline bool ResultBBoxHasBeenSet() const { return m_resultBBoxHasBeenSet; }
    template<typename ResultBBoxT = Aws::Vector<double>>
    void SetResultBBox(ResultBBoxT&& value) { m_resultBBoxHasBeenSet = true; m_resultBBox = std::forward<ResultBBoxT>(value); }
    template<typename ResultBBoxT = Aws::Vector<double>>
    SearchPlaceIndexForTextSummary& WithResultBBox(ResultBBoxT&& value) { SetResultBBox(std::forward<ResultBBoxT>(value)); return *this;}
    inline SearchPlaceIndexForTextSummary& AddResultBBox(double value) { m_resultBBoxHasBeenSet = true; m_resultBBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Grab</p> </li> <li> <p>Here</p> </li> </ul> <p>For more
     * information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = Aws::String>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = Aws::String>
    SearchPlaceIndexForTextSummary& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    SearchPlaceIndexForTextSummary& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional category filter specified in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCategories() const { return m_filterCategories; }
    inline bool FilterCategoriesHasBeenSet() const { return m_filterCategoriesHasBeenSet; }
    template<typename FilterCategoriesT = Aws::Vector<Aws::String>>
    void SetFilterCategories(FilterCategoriesT&& value) { m_filterCategoriesHasBeenSet = true; m_filterCategories = std::forward<FilterCategoriesT>(value); }
    template<typename FilterCategoriesT = Aws::Vector<Aws::String>>
    SearchPlaceIndexForTextSummary& WithFilterCategories(FilterCategoriesT&& value) { SetFilterCategories(std::forward<FilterCategoriesT>(value)); return *this;}
    template<typename FilterCategoriesT = Aws::String>
    SearchPlaceIndexForTextSummary& AddFilterCategories(FilterCategoriesT&& value) { m_filterCategoriesHasBeenSet = true; m_filterCategories.emplace_back(std::forward<FilterCategoriesT>(value)); return *this; }
    ///@}
  private:

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

    Aws::Vector<double> m_resultBBox;
    bool m_resultBBoxHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterCategories;
    bool m_filterCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
