/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DistanceUnit.h>
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
   * <p>A summary of the calculated route matrix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteMatrixSummary">AWS
   * API Reference</a></p>
   */
  class CalculateRouteMatrixSummary
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixSummary();
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CalculateRouteMatrixSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline CalculateRouteMatrixSummary& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline CalculateRouteMatrixSummary& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * routes. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline CalculateRouteMatrixSummary& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline CalculateRouteMatrixSummary& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline CalculateRouteMatrixSummary& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The count of error results in the route matrix. If this number is 0, all
     * routes were calculated successfully.</p>
     */
    inline int GetErrorCount() const{ return m_errorCount; }

    /**
     * <p>The count of error results in the route matrix. If this number is 0, all
     * routes were calculated successfully.</p>
     */
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }

    /**
     * <p>The count of error results in the route matrix. If this number is 0, all
     * routes were calculated successfully.</p>
     */
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }

    /**
     * <p>The count of error results in the route matrix. If this number is 0, all
     * routes were calculated successfully.</p>
     */
    inline CalculateRouteMatrixSummary& WithErrorCount(int value) { SetErrorCount(value); return *this;}


    /**
     * <p>The count of cells in the route matrix. Equal to the number of
     * <code>DeparturePositions</code> multiplied by the number of
     * <code>DestinationPositions</code>.</p>
     */
    inline int GetRouteCount() const{ return m_routeCount; }

    /**
     * <p>The count of cells in the route matrix. Equal to the number of
     * <code>DeparturePositions</code> multiplied by the number of
     * <code>DestinationPositions</code>.</p>
     */
    inline bool RouteCountHasBeenSet() const { return m_routeCountHasBeenSet; }

    /**
     * <p>The count of cells in the route matrix. Equal to the number of
     * <code>DeparturePositions</code> multiplied by the number of
     * <code>DestinationPositions</code>.</p>
     */
    inline void SetRouteCount(int value) { m_routeCountHasBeenSet = true; m_routeCount = value; }

    /**
     * <p>The count of cells in the route matrix. Equal to the number of
     * <code>DeparturePositions</code> multiplied by the number of
     * <code>DestinationPositions</code>.</p>
     */
    inline CalculateRouteMatrixSummary& WithRouteCount(int value) { SetRouteCount(value); return *this;}

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    int m_errorCount;
    bool m_errorCountHasBeenSet = false;

    int m_routeCount;
    bool m_routeCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
