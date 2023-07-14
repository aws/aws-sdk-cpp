﻿/**
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
   * <p>A summary of the request sent by using
   * <code>SearchPlaceIndexForText</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForTextSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextSummary
  {
  public:
    SearchPlaceIndexForTextSummary();
    SearchPlaceIndexForTextSummary(Aws::Utils::Json::JsonView jsonValue);
    SearchPlaceIndexForTextSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline const Aws::Vector<double>& GetBiasPosition() const{ return m_biasPosition; }

    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }

    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline void SetBiasPosition(const Aws::Vector<double>& value) { m_biasPositionHasBeenSet = true; m_biasPosition = value; }

    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline void SetBiasPosition(Aws::Vector<double>&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::move(value); }

    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithBiasPosition(const Aws::Vector<double>& value) { SetBiasPosition(value); return *this;}

    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithBiasPosition(Aws::Vector<double>&& value) { SetBiasPosition(std::move(value)); return *this;}

    /**
     * <p>Contains the coordinates for the optional bias position specified in the
     * request.</p> <p>This parameter contains a pair of numbers. The first number
     * represents the X coordinate, or longitude; the second number represents the Y
     * coordinate, or latitude.</p> <p>For example, <code>[-123.1174, 49.2847]</code>
     * represents the position with longitude <code>-123.1174</code> and latitude
     * <code>49.2847</code>.</p>
     */
    inline SearchPlaceIndexForTextSummary& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }


    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline const Aws::Vector<double>& GetFilterBBox() const{ return m_filterBBox; }

    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline bool FilterBBoxHasBeenSet() const { return m_filterBBoxHasBeenSet; }

    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline void SetFilterBBox(const Aws::Vector<double>& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = value; }

    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline void SetFilterBBox(Aws::Vector<double>&& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = std::move(value); }

    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithFilterBBox(const Aws::Vector<double>& value) { SetFilterBBox(value); return *this;}

    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithFilterBBox(Aws::Vector<double>&& value) { SetFilterBBox(std::move(value)); return *this;}

    /**
     * <p>Contains the coordinates for the optional bounding box specified in the
     * request.</p>
     */
    inline SearchPlaceIndexForTextSummary& AddFilterBBox(double value) { m_filterBBoxHasBeenSet = true; m_filterBBox.push_back(value); return *this; }


    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCountries() const{ return m_filterCountries; }

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline bool FilterCountriesHasBeenSet() const { return m_filterCountriesHasBeenSet; }

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline void SetFilterCountries(const Aws::Vector<Aws::String>& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = value; }

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline void SetFilterCountries(Aws::Vector<Aws::String>&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = std::move(value); }

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithFilterCountries(const Aws::Vector<Aws::String>& value) { SetFilterCountries(value); return *this;}

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithFilterCountries(Aws::Vector<Aws::String>&& value) { SetFilterCountries(std::move(value)); return *this;}

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& AddFilterCountries(const Aws::String& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(value); return *this; }

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& AddFilterCountries(Aws::String&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains the optional country filter specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& AddFilterCountries(const char* value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(value); return *this; }


    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>Contains the optional result count limit specified in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Contains the optional result count limit specified in the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Contains the optional result count limit specified in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Contains the optional result count limit specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline const Aws::Vector<double>& GetResultBBox() const{ return m_resultBBox; }

    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline bool ResultBBoxHasBeenSet() const { return m_resultBBoxHasBeenSet; }

    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline void SetResultBBox(const Aws::Vector<double>& value) { m_resultBBoxHasBeenSet = true; m_resultBBox = value; }

    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline void SetResultBBox(Aws::Vector<double>&& value) { m_resultBBoxHasBeenSet = true; m_resultBBox = std::move(value); }

    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline SearchPlaceIndexForTextSummary& WithResultBBox(const Aws::Vector<double>& value) { SetResultBBox(value); return *this;}

    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline SearchPlaceIndexForTextSummary& WithResultBBox(Aws::Vector<double>&& value) { SetResultBBox(std::move(value)); return *this;}

    /**
     * <p>The bounding box that fully contains all search results.</p>  <p>If you
     * specified the optional <code>FilterBBox</code> parameter in the request,
     * <code>ResultBBox</code> is contained within <code>FilterBBox</code>.</p> 
     */
    inline SearchPlaceIndexForTextSummary& AddResultBBox(double value) { m_resultBBoxHasBeenSet = true; m_resultBBox.push_back(value); return *this; }


    /**
     * <p>The search text specified in the request.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The search text specified in the request.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The search text specified in the request.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The search text specified in the request.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The search text specified in the request.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The search text specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The search text specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The search text specified in the request.</p>
     */
    inline SearchPlaceIndexForTextSummary& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::Vector<double> m_biasPosition;
    bool m_biasPositionHasBeenSet;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::Vector<double> m_filterBBox;
    bool m_filterBBoxHasBeenSet;

    Aws::Vector<Aws::String> m_filterCountries;
    bool m_filterCountriesHasBeenSet;

    Aws::String m_language;
    bool m_languageHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<double> m_resultBBox;
    bool m_resultBBoxHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
