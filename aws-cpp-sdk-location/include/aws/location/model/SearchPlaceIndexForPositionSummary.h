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
   * <code>SearchPlaceIndexForPosition</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPositionSummary">AWS
   * API Reference</a></p>
   */
  class SearchPlaceIndexForPositionSummary
  {
  public:
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionSummary();
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SearchPlaceIndexForPositionSummary& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The geospatial data provider attached to the place index resource specified
     * in the request. Values can be one of the following:</p> <ul> <li> <p>Esri</p>
     * </li> <li> <p>Here</p> </li> </ul> <p>For more information about data providers,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithDataSource(const char* value) { SetDataSource(value); return *this;}


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
    inline SearchPlaceIndexForPositionSummary& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The preferred language used to return results. Matches the language in the
     * request. The value is a valid <a href="https://tools.ietf.org/search/bcp47">BCP
     * 47</a> language tag, for example, <code>en</code> for English.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>Contains the optional result count limit that is specified in the
     * request.</p> <p>Default value: <code>50</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Contains the optional result count limit that is specified in the
     * request.</p> <p>Default value: <code>50</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Contains the optional result count limit that is specified in the
     * request.</p> <p>Default value: <code>50</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Contains the optional result count limit that is specified in the
     * request.</p> <p>Default value: <code>50</code> </p>
     */
    inline SearchPlaceIndexForPositionSummary& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The position specified in the request.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>The position specified in the request.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The position specified in the request.</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position specified in the request.</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The position specified in the request.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>The position specified in the request.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The position specified in the request.</p>
     */
    inline SearchPlaceIndexForPositionSummary& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
