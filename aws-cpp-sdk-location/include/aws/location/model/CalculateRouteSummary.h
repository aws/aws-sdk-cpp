/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DistanceUnit.h>
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
   * <p>A summary of the calculated route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteSummary">AWS
   * API Reference</a></p>
   */
  class CalculateRouteSummary
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteSummary();
    AWS_LOCATIONSERVICE_API CalculateRouteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CalculateRouteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline CalculateRouteSummary& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline CalculateRouteSummary& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data provider of traffic and road network data used to calculate the
     * route. Indicates one of the available providers:</p> <ul> <li> <p>
     * <code>Esri</code> </p> </li> <li> <p> <code>Here</code> </p> </li> </ul> <p>For
     * more information about data providers, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/what-is-data-provider.html">Amazon
     * Location Service data providers</a>.</p>
     */
    inline CalculateRouteSummary& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>The total distance covered by the route. The sum of the distance travelled
     * between every stop on the route.</p>  <p>If Esri is the data source for
     * the route calculator, the route distance can’t be greater than 400 km. If the
     * route exceeds 400 km, the response is a <code>400
     * RoutesValidationException</code> error.</p> 
     */
    inline double GetDistance() const{ return m_distance; }

    /**
     * <p>The total distance covered by the route. The sum of the distance travelled
     * between every stop on the route.</p>  <p>If Esri is the data source for
     * the route calculator, the route distance can’t be greater than 400 km. If the
     * route exceeds 400 km, the response is a <code>400
     * RoutesValidationException</code> error.</p> 
     */
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }

    /**
     * <p>The total distance covered by the route. The sum of the distance travelled
     * between every stop on the route.</p>  <p>If Esri is the data source for
     * the route calculator, the route distance can’t be greater than 400 km. If the
     * route exceeds 400 km, the response is a <code>400
     * RoutesValidationException</code> error.</p> 
     */
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }

    /**
     * <p>The total distance covered by the route. The sum of the distance travelled
     * between every stop on the route.</p>  <p>If Esri is the data source for
     * the route calculator, the route distance can’t be greater than 400 km. If the
     * route exceeds 400 km, the response is a <code>400
     * RoutesValidationException</code> error.</p> 
     */
    inline CalculateRouteSummary& WithDistance(double value) { SetDistance(value); return *this;}


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
    inline CalculateRouteSummary& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The unit of measurement for route distances.</p>
     */
    inline CalculateRouteSummary& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    /**
     * <p>The total travel time for the route measured in seconds. The sum of the
     * travel time between every stop on the route.</p>
     */
    inline double GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The total travel time for the route measured in seconds. The sum of the
     * travel time between every stop on the route.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The total travel time for the route measured in seconds. The sum of the
     * travel time between every stop on the route.</p>
     */
    inline void SetDurationSeconds(double value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The total travel time for the route measured in seconds. The sum of the
     * travel time between every stop on the route.</p>
     */
    inline CalculateRouteSummary& WithDurationSeconds(double value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline const Aws::Vector<double>& GetRouteBBox() const{ return m_routeBBox; }

    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline bool RouteBBoxHasBeenSet() const { return m_routeBBoxHasBeenSet; }

    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline void SetRouteBBox(const Aws::Vector<double>& value) { m_routeBBoxHasBeenSet = true; m_routeBBox = value; }

    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline void SetRouteBBox(Aws::Vector<double>&& value) { m_routeBBoxHasBeenSet = true; m_routeBBox = std::move(value); }

    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline CalculateRouteSummary& WithRouteBBox(const Aws::Vector<double>& value) { SetRouteBBox(value); return *this;}

    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline CalculateRouteSummary& WithRouteBBox(Aws::Vector<double>&& value) { SetRouteBBox(std::move(value)); return *this;}

    /**
     * <p>Specifies a geographical box surrounding a route. Used to zoom into a route
     * when displaying it in a map. For example, <code>[min x, min y, max x, max
     * y]</code>.</p> <p>The first 2 <code>bbox</code> parameters describe the lower
     * southwest corner: </p> <ul> <li> <p>The first <code>bbox</code> position is the
     * X coordinate or longitude of the lower southwest corner. </p> </li> <li> <p>The
     * second <code>bbox</code> position is the Y coordinate or latitude of the lower
     * southwest corner. </p> </li> </ul> <p>The next 2 <code>bbox</code> parameters
     * describe the upper northeast corner: </p> <ul> <li> <p>The third
     * <code>bbox</code> position is the X coordinate, or longitude of the upper
     * northeast corner. </p> </li> <li> <p>The fourth <code>bbox</code> position is
     * the Y coordinate, or latitude of the upper northeast corner. </p> </li> </ul>
     */
    inline CalculateRouteSummary& AddRouteBBox(double value) { m_routeBBoxHasBeenSet = true; m_routeBBox.push_back(value); return *this; }

  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    double m_distance;
    bool m_distanceHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;

    double m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    Aws::Vector<double> m_routeBBox;
    bool m_routeBBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
