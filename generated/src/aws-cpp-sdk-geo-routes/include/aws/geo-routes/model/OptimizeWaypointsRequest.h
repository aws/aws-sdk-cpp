/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/WaypointOptimizationDestinationOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationDriverOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationExclusionOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationSequencingObjective.h>
#include <aws/geo-routes/model/WaypointOptimizationOriginOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTrafficOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTravelMode.h>
#include <aws/geo-routes/model/WaypointOptimizationTravelModeOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationWaypoint.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GeoRoutes
{
namespace Model
{

  /**
   */
  class OptimizeWaypointsRequest : public GeoRoutesRequest
  {
  public:
    AWS_GEOROUTES_API OptimizeWaypointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OptimizeWaypoints"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, this
     * setting is ignored.</p>
     */
    inline const WaypointOptimizationAvoidanceOptions& GetAvoid() const{ return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    inline void SetAvoid(const WaypointOptimizationAvoidanceOptions& value) { m_avoidHasBeenSet = true; m_avoid = value; }
    inline void SetAvoid(WaypointOptimizationAvoidanceOptions&& value) { m_avoidHasBeenSet = true; m_avoid = std::move(value); }
    inline OptimizeWaypointsRequest& WithAvoid(const WaypointOptimizationAvoidanceOptions& value) { SetAvoid(value); return *this;}
    inline OptimizeWaypointsRequest& WithAvoid(WaypointOptimizationAvoidanceOptions&& value) { SetAvoid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Departure time from the waypoint.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const{ return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    inline void SetDepartureTime(const Aws::String& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }
    inline void SetDepartureTime(Aws::String&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }
    inline void SetDepartureTime(const char* value) { m_departureTimeHasBeenSet = true; m_departureTime.assign(value); }
    inline OptimizeWaypointsRequest& WithDepartureTime(const Aws::String& value) { SetDepartureTime(value); return *this;}
    inline OptimizeWaypointsRequest& WithDepartureTime(Aws::String&& value) { SetDepartureTime(std::move(value)); return *this;}
    inline OptimizeWaypointsRequest& WithDepartureTime(const char* value) { SetDepartureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final position for the route in the World Geodetic System (WGS 84)
     * format: <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::Vector<double>& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::Vector<double>&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline OptimizeWaypointsRequest& WithDestination(const Aws::Vector<double>& value) { SetDestination(value); return *this;}
    inline OptimizeWaypointsRequest& WithDestination(Aws::Vector<double>&& value) { SetDestination(std::move(value)); return *this;}
    inline OptimizeWaypointsRequest& AddDestination(double value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const WaypointOptimizationDestinationOptions& GetDestinationOptions() const{ return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    inline void SetDestinationOptions(const WaypointOptimizationDestinationOptions& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = value; }
    inline void SetDestinationOptions(WaypointOptimizationDestinationOptions&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::move(value); }
    inline OptimizeWaypointsRequest& WithDestinationOptions(const WaypointOptimizationDestinationOptions& value) { SetDestinationOptions(value); return *this;}
    inline OptimizeWaypointsRequest& WithDestinationOptions(WaypointOptimizationDestinationOptions&& value) { SetDestinationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Driver related options.</p>
     */
    inline const WaypointOptimizationDriverOptions& GetDriver() const{ return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    inline void SetDriver(const WaypointOptimizationDriverOptions& value) { m_driverHasBeenSet = true; m_driver = value; }
    inline void SetDriver(WaypointOptimizationDriverOptions&& value) { m_driverHasBeenSet = true; m_driver = std::move(value); }
    inline OptimizeWaypointsRequest& WithDriver(const WaypointOptimizationDriverOptions& value) { SetDriver(value); return *this;}
    inline OptimizeWaypointsRequest& WithDriver(WaypointOptimizationDriverOptions&& value) { SetDriver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features to be strictly excluded while calculating the route.</p>
     */
    inline const WaypointOptimizationExclusionOptions& GetExclude() const{ return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    inline void SetExclude(const WaypointOptimizationExclusionOptions& value) { m_excludeHasBeenSet = true; m_exclude = value; }
    inline void SetExclude(WaypointOptimizationExclusionOptions&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }
    inline OptimizeWaypointsRequest& WithExclude(const WaypointOptimizationExclusionOptions& value) { SetExclude(value); return *this;}
    inline OptimizeWaypointsRequest& WithExclude(WaypointOptimizationExclusionOptions&& value) { SetExclude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline OptimizeWaypointsRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline OptimizeWaypointsRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline OptimizeWaypointsRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for the calculated sequence.</p>
     * <p>Default Value: <code>FastestRoute</code>.</p>
     */
    inline const WaypointOptimizationSequencingObjective& GetOptimizeSequencingFor() const{ return m_optimizeSequencingFor; }
    inline bool OptimizeSequencingForHasBeenSet() const { return m_optimizeSequencingForHasBeenSet; }
    inline void SetOptimizeSequencingFor(const WaypointOptimizationSequencingObjective& value) { m_optimizeSequencingForHasBeenSet = true; m_optimizeSequencingFor = value; }
    inline void SetOptimizeSequencingFor(WaypointOptimizationSequencingObjective&& value) { m_optimizeSequencingForHasBeenSet = true; m_optimizeSequencingFor = std::move(value); }
    inline OptimizeWaypointsRequest& WithOptimizeSequencingFor(const WaypointOptimizationSequencingObjective& value) { SetOptimizeSequencingFor(value); return *this;}
    inline OptimizeWaypointsRequest& WithOptimizeSequencingFor(WaypointOptimizationSequencingObjective&& value) { SetOptimizeSequencingFor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position for the route.</p>
     */
    inline const Aws::Vector<double>& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Aws::Vector<double>& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Aws::Vector<double>&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline OptimizeWaypointsRequest& WithOrigin(const Aws::Vector<double>& value) { SetOrigin(value); return *this;}
    inline OptimizeWaypointsRequest& WithOrigin(Aws::Vector<double>&& value) { SetOrigin(std::move(value)); return *this;}
    inline OptimizeWaypointsRequest& AddOrigin(double value) { m_originHasBeenSet = true; m_origin.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const WaypointOptimizationOriginOptions& GetOriginOptions() const{ return m_originOptions; }
    inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
    inline void SetOriginOptions(const WaypointOptimizationOriginOptions& value) { m_originOptionsHasBeenSet = true; m_originOptions = value; }
    inline void SetOriginOptions(WaypointOptimizationOriginOptions&& value) { m_originOptionsHasBeenSet = true; m_originOptions = std::move(value); }
    inline OptimizeWaypointsRequest& WithOriginOptions(const WaypointOptimizationOriginOptions& value) { SetOriginOptions(value); return *this;}
    inline OptimizeWaypointsRequest& WithOriginOptions(WaypointOptimizationOriginOptions&& value) { SetOriginOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic-related options.</p>
     */
    inline const WaypointOptimizationTrafficOptions& GetTraffic() const{ return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    inline void SetTraffic(const WaypointOptimizationTrafficOptions& value) { m_trafficHasBeenSet = true; m_traffic = value; }
    inline void SetTraffic(WaypointOptimizationTrafficOptions&& value) { m_trafficHasBeenSet = true; m_traffic = std::move(value); }
    inline OptimizeWaypointsRequest& WithTraffic(const WaypointOptimizationTrafficOptions& value) { SetTraffic(value); return *this;}
    inline OptimizeWaypointsRequest& WithTraffic(WaypointOptimizationTrafficOptions&& value) { SetTraffic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline const WaypointOptimizationTravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const WaypointOptimizationTravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(WaypointOptimizationTravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline OptimizeWaypointsRequest& WithTravelMode(const WaypointOptimizationTravelMode& value) { SetTravelMode(value); return *this;}
    inline OptimizeWaypointsRequest& WithTravelMode(WaypointOptimizationTravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const WaypointOptimizationTravelModeOptions& GetTravelModeOptions() const{ return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    inline void SetTravelModeOptions(const WaypointOptimizationTravelModeOptions& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = value; }
    inline void SetTravelModeOptions(WaypointOptimizationTravelModeOptions&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::move(value); }
    inline OptimizeWaypointsRequest& WithTravelModeOptions(const WaypointOptimizationTravelModeOptions& value) { SetTravelModeOptions(value); return *this;}
    inline OptimizeWaypointsRequest& WithTravelModeOptions(WaypointOptimizationTravelModeOptions&& value) { SetTravelModeOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of waypoints between the <code>Origin</code> and
     * <code>Destination</code>.</p>
     */
    inline const Aws::Vector<WaypointOptimizationWaypoint>& GetWaypoints() const{ return m_waypoints; }
    inline bool WaypointsHasBeenSet() const { return m_waypointsHasBeenSet; }
    inline void SetWaypoints(const Aws::Vector<WaypointOptimizationWaypoint>& value) { m_waypointsHasBeenSet = true; m_waypoints = value; }
    inline void SetWaypoints(Aws::Vector<WaypointOptimizationWaypoint>&& value) { m_waypointsHasBeenSet = true; m_waypoints = std::move(value); }
    inline OptimizeWaypointsRequest& WithWaypoints(const Aws::Vector<WaypointOptimizationWaypoint>& value) { SetWaypoints(value); return *this;}
    inline OptimizeWaypointsRequest& WithWaypoints(Aws::Vector<WaypointOptimizationWaypoint>&& value) { SetWaypoints(std::move(value)); return *this;}
    inline OptimizeWaypointsRequest& AddWaypoints(const WaypointOptimizationWaypoint& value) { m_waypointsHasBeenSet = true; m_waypoints.push_back(value); return *this; }
    inline OptimizeWaypointsRequest& AddWaypoints(WaypointOptimizationWaypoint&& value) { m_waypointsHasBeenSet = true; m_waypoints.push_back(std::move(value)); return *this; }
    ///@}
  private:

    WaypointOptimizationAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<double> m_destination;
    bool m_destinationHasBeenSet = false;

    WaypointOptimizationDestinationOptions m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;

    WaypointOptimizationDriverOptions m_driver;
    bool m_driverHasBeenSet = false;

    WaypointOptimizationExclusionOptions m_exclude;
    bool m_excludeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    WaypointOptimizationSequencingObjective m_optimizeSequencingFor;
    bool m_optimizeSequencingForHasBeenSet = false;

    Aws::Vector<double> m_origin;
    bool m_originHasBeenSet = false;

    WaypointOptimizationOriginOptions m_originOptions;
    bool m_originOptionsHasBeenSet = false;

    WaypointOptimizationTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    WaypointOptimizationTravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    WaypointOptimizationTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;

    Aws::Vector<WaypointOptimizationWaypoint> m_waypoints;
    bool m_waypointsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
