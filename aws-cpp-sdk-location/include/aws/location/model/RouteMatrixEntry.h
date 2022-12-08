/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/RouteMatrixEntryError.h>
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
   * <p>The result for the calculated route of one <code>DeparturePosition</code>
   * <code>DestinationPosition</code> pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/RouteMatrixEntry">AWS
   * API Reference</a></p>
   */
  class RouteMatrixEntry
  {
  public:
    AWS_LOCATIONSERVICE_API RouteMatrixEntry();
    AWS_LOCATIONSERVICE_API RouteMatrixEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API RouteMatrixEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total distance of travel for the route.</p>
     */
    inline double GetDistance() const{ return m_distance; }

    /**
     * <p>The total distance of travel for the route.</p>
     */
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }

    /**
     * <p>The total distance of travel for the route.</p>
     */
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }

    /**
     * <p>The total distance of travel for the route.</p>
     */
    inline RouteMatrixEntry& WithDistance(double value) { SetDistance(value); return *this;}


    /**
     * <p>The expected duration of travel for the route.</p>
     */
    inline double GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The expected duration of travel for the route.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The expected duration of travel for the route.</p>
     */
    inline void SetDurationSeconds(double value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The expected duration of travel for the route.</p>
     */
    inline RouteMatrixEntry& WithDurationSeconds(double value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>An error corresponding to the calculation of a route between the
     * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p>
     */
    inline const RouteMatrixEntryError& GetError() const{ return m_error; }

    /**
     * <p>An error corresponding to the calculation of a route between the
     * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error corresponding to the calculation of a route between the
     * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p>
     */
    inline void SetError(const RouteMatrixEntryError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error corresponding to the calculation of a route between the
     * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p>
     */
    inline void SetError(RouteMatrixEntryError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error corresponding to the calculation of a route between the
     * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p>
     */
    inline RouteMatrixEntry& WithError(const RouteMatrixEntryError& value) { SetError(value); return *this;}

    /**
     * <p>An error corresponding to the calculation of a route between the
     * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p>
     */
    inline RouteMatrixEntry& WithError(RouteMatrixEntryError&& value) { SetError(std::move(value)); return *this;}

  private:

    double m_distance;
    bool m_distanceHasBeenSet = false;

    double m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    RouteMatrixEntryError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
