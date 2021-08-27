/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API SearchPlaceIndexForTextRequest : public LocationServiceRequest
  {
  public:
    SearchPlaceIndexForTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchPlaceIndexForText"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline const Aws::Vector<double>& GetBiasPosition() const{ return m_biasPosition; }

    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline bool BiasPositionHasBeenSet() const { return m_biasPositionHasBeenSet; }

    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline void SetBiasPosition(const Aws::Vector<double>& value) { m_biasPositionHasBeenSet = true; m_biasPosition = value; }

    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline void SetBiasPosition(Aws::Vector<double>&& value) { m_biasPositionHasBeenSet = true; m_biasPosition = std::move(value); }

    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithBiasPosition(const Aws::Vector<double>& value) { SetBiasPosition(value); return *this;}

    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithBiasPosition(Aws::Vector<double>&& value) { SetBiasPosition(std::move(value)); return *this;}

    /**
     * <p>Searches for results closest to the given position. An optional parameter
     * defined by longitude, and latitude.</p> <ul> <li> <p>The first <code>bias</code>
     * position is the X coordinate, or longitude.</p> </li> <li> <p>The second
     * <code>bias</code> position is the Y coordinate, or latitude. </p> </li> </ul>
     * <p>For example, <code>bias=xLongitude&amp;bias=yLatitude</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& AddBiasPosition(double value) { m_biasPositionHasBeenSet = true; m_biasPosition.push_back(value); return *this; }


    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline const Aws::Vector<double>& GetFilterBBox() const{ return m_filterBBox; }

    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline bool FilterBBoxHasBeenSet() const { return m_filterBBoxHasBeenSet; }

    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline void SetFilterBBox(const Aws::Vector<double>& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = value; }

    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline void SetFilterBBox(Aws::Vector<double>&& value) { m_filterBBoxHasBeenSet = true; m_filterBBox = std::move(value); }

    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline SearchPlaceIndexForTextRequest& WithFilterBBox(const Aws::Vector<double>& value) { SetFilterBBox(value); return *this;}

    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline SearchPlaceIndexForTextRequest& WithFilterBBox(Aws::Vector<double>&& value) { SetFilterBBox(std::move(value)); return *this;}

    /**
     * <p>Filters the results by returning only Places within the provided bounding
     * box. An optional parameter.</p> <p>The first 2 <code>bbox</code> parameters
     * describe the lower southwest corner:</p> <ul> <li> <p>The first
     * <code>bbox</code> position is the X coordinate or longitude of the lower
     * southwest corner.</p> </li> <li> <p>The second <code>bbox</code> position is the
     * Y coordinate or latitude of the lower southwest corner.</p> </li> </ul> <p>For
     * example, <code>bbox=xLongitudeSW&amp;bbox=yLatitudeSW</code>.</p> <p>The next
     * <code>bbox</code> parameters describe the upper northeast corner:</p> <ul> <li>
     * <p>The third <code>bbox</code> position is the X coordinate, or longitude of the
     * upper northeast corner.</p> </li> <li> <p>The fourth <code>bbox</code> position
     * is the Y coordinate, or longitude of the upper northeast corner.</p> </li> </ul>
     * <p>For example, <code>bbox=xLongitudeNE&amp;bbox=yLatitudeNE</code> </p>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterBBox(double value) { m_filterBBoxHasBeenSet = true; m_filterBBox.push_back(value); return *this; }


    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetFilterCountries() const{ return m_filterCountries; }

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline bool FilterCountriesHasBeenSet() const { return m_filterCountriesHasBeenSet; }

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline void SetFilterCountries(const Aws::Vector<Aws::String>& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = value; }

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline void SetFilterCountries(Aws::Vector<Aws::String>&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries = std::move(value); }

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& WithFilterCountries(const Aws::Vector<Aws::String>& value) { SetFilterCountries(value); return *this;}

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& WithFilterCountries(Aws::Vector<Aws::String>&& value) { SetFilterCountries(std::move(value)); return *this;}

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterCountries(const Aws::String& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(value); return *this; }

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterCountries(Aws::String&& value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(std::move(value)); return *this; }

    /**
     * <p>Limits the search to the given a list of countries/regions. An optional
     * parameter.</p> <ul> <li> <p>Use the <a
     * href="https://www.iso.org/iso-3166-country-codes.html">ISO 3166</a> 3-digit
     * country code. For example, Australia uses three upper-case characters:
     * <code>AUS</code>.</p> </li> </ul>
     */
    inline SearchPlaceIndexForTextRequest& AddFilterCountries(const char* value) { m_filterCountriesHasBeenSet = true; m_filterCountries.push_back(value); return *this; }


    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>The default: <code>50</code> </p>
     */
    inline SearchPlaceIndexForTextRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The address, name, city, or region to be used in the search. In free-form
     * text format. For example, <code>123 Any Street</code>.</p>
     */
    inline SearchPlaceIndexForTextRequest& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::Vector<double> m_biasPosition;
    bool m_biasPositionHasBeenSet;

    Aws::Vector<double> m_filterBBox;
    bool m_filterBBoxHasBeenSet;

    Aws::Vector<Aws::String> m_filterCountries;
    bool m_filterCountriesHasBeenSet;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
