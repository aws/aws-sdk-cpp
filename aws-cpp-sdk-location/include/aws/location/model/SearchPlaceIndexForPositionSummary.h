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
   * <p>A summary of the reverse geocoding request sent using
   * <code>SearchPlaceIndexForPosition</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPositionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionSummary
  {
  public:
    SearchPlaceIndexForPositionSummary();
    SearchPlaceIndexForPositionSummary(Aws::Utils::Json::JsonView jsonValue);
    SearchPlaceIndexForPositionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data provider of geospatial data. Indicates one of the available
     * providers:</p> <ul> <li> <p>Esri</p> </li> <li> <p>HERE</p> </li> </ul> <p>For
     * additional details on data providers, see the <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers page</a>.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>Default value: <code>50</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>Default value: <code>50</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>Default value: <code>50</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter. The maximum number of results returned per request.
     * </p> <p>Default value: <code>50</code> </p>
     */
    inline SearchPlaceIndexForPositionSummary& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline SearchPlaceIndexForPositionSummary& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The position given in the reverse geocoding request.</p>
     */
    inline SearchPlaceIndexForPositionSummary& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
