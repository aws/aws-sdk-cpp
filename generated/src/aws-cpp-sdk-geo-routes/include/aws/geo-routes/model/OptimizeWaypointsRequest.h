/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationClusteringOptions.h>
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
    AWS_GEOROUTES_API OptimizeWaypointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OptimizeWaypoints"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are avoided. Avoidance is on a best-case basis. If an avoidance
     * can't be satisfied for a particular case, this setting is ignored.</p>
     */
    inline const WaypointOptimizationAvoidanceOptions& GetAvoid() const { return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    template<typename AvoidT = WaypointOptimizationAvoidanceOptions>
    void SetAvoid(AvoidT&& value) { m_avoidHasBeenSet = true; m_avoid = std::forward<AvoidT>(value); }
    template<typename AvoidT = WaypointOptimizationAvoidanceOptions>
    OptimizeWaypointsRequest& WithAvoid(AvoidT&& value) { SetAvoid(std::forward<AvoidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Clustering allows you to specify how nearby waypoints can be clustered to
     * improve the optimized sequence.</p>
     */
    inline const WaypointOptimizationClusteringOptions& GetClustering() const { return m_clustering; }
    inline bool ClusteringHasBeenSet() const { return m_clusteringHasBeenSet; }
    template<typename ClusteringT = WaypointOptimizationClusteringOptions>
    void SetClustering(ClusteringT&& value) { m_clusteringHasBeenSet = true; m_clustering = std::forward<ClusteringT>(value); }
    template<typename ClusteringT = WaypointOptimizationClusteringOptions>
    OptimizeWaypointsRequest& WithClustering(ClusteringT&& value) { SetClustering(std::forward<ClusteringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Departure time from the waypoint.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const { return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    template<typename DepartureTimeT = Aws::String>
    void SetDepartureTime(DepartureTimeT&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::forward<DepartureTimeT>(value); }
    template<typename DepartureTimeT = Aws::String>
    OptimizeWaypointsRequest& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final position for the route in the World Geodetic System (WGS 84)
     * format: <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::Vector<double>>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::Vector<double>>
    OptimizeWaypointsRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    inline OptimizeWaypointsRequest& AddDestination(double value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const WaypointOptimizationDestinationOptions& GetDestinationOptions() const { return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    template<typename DestinationOptionsT = WaypointOptimizationDestinationOptions>
    void SetDestinationOptions(DestinationOptionsT&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::forward<DestinationOptionsT>(value); }
    template<typename DestinationOptionsT = WaypointOptimizationDestinationOptions>
    OptimizeWaypointsRequest& WithDestinationOptions(DestinationOptionsT&& value) { SetDestinationOptions(std::forward<DestinationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Driver related options.</p>
     */
    inline const WaypointOptimizationDriverOptions& GetDriver() const { return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    template<typename DriverT = WaypointOptimizationDriverOptions>
    void SetDriver(DriverT&& value) { m_driverHasBeenSet = true; m_driver = std::forward<DriverT>(value); }
    template<typename DriverT = WaypointOptimizationDriverOptions>
    OptimizeWaypointsRequest& WithDriver(DriverT&& value) { SetDriver(std::forward<DriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features to be strictly excluded while calculating the route.</p>
     */
    inline const WaypointOptimizationExclusionOptions& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = WaypointOptimizationExclusionOptions>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = WaypointOptimizationExclusionOptions>
    OptimizeWaypointsRequest& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    OptimizeWaypointsRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for the calculated sequence.</p>
     * <p>Default Value: <code>FastestRoute</code>.</p>
     */
    inline WaypointOptimizationSequencingObjective GetOptimizeSequencingFor() const { return m_optimizeSequencingFor; }
    inline bool OptimizeSequencingForHasBeenSet() const { return m_optimizeSequencingForHasBeenSet; }
    inline void SetOptimizeSequencingFor(WaypointOptimizationSequencingObjective value) { m_optimizeSequencingForHasBeenSet = true; m_optimizeSequencingFor = value; }
    inline OptimizeWaypointsRequest& WithOptimizeSequencingFor(WaypointOptimizationSequencingObjective value) { SetOptimizeSequencingFor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position for the route.</p>
     */
    inline const Aws::Vector<double>& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = Aws::Vector<double>>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = Aws::Vector<double>>
    OptimizeWaypointsRequest& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    inline OptimizeWaypointsRequest& AddOrigin(double value) { m_originHasBeenSet = true; m_origin.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const WaypointOptimizationOriginOptions& GetOriginOptions() const { return m_originOptions; }
    inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
    template<typename OriginOptionsT = WaypointOptimizationOriginOptions>
    void SetOriginOptions(OriginOptionsT&& value) { m_originOptionsHasBeenSet = true; m_originOptions = std::forward<OriginOptionsT>(value); }
    template<typename OriginOptionsT = WaypointOptimizationOriginOptions>
    OptimizeWaypointsRequest& WithOriginOptions(OriginOptionsT&& value) { SetOriginOptions(std::forward<OriginOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic-related options.</p>
     */
    inline const WaypointOptimizationTrafficOptions& GetTraffic() const { return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    template<typename TrafficT = WaypointOptimizationTrafficOptions>
    void SetTraffic(TrafficT&& value) { m_trafficHasBeenSet = true; m_traffic = std::forward<TrafficT>(value); }
    template<typename TrafficT = WaypointOptimizationTrafficOptions>
    OptimizeWaypointsRequest& WithTraffic(TrafficT&& value) { SetTraffic(std::forward<TrafficT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline WaypointOptimizationTravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(WaypointOptimizationTravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline OptimizeWaypointsRequest& WithTravelMode(WaypointOptimizationTravelMode value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const WaypointOptimizationTravelModeOptions& GetTravelModeOptions() const { return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    template<typename TravelModeOptionsT = WaypointOptimizationTravelModeOptions>
    void SetTravelModeOptions(TravelModeOptionsT&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::forward<TravelModeOptionsT>(value); }
    template<typename TravelModeOptionsT = WaypointOptimizationTravelModeOptions>
    OptimizeWaypointsRequest& WithTravelModeOptions(TravelModeOptionsT&& value) { SetTravelModeOptions(std::forward<TravelModeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of waypoints between the <code>Origin</code> and
     * <code>Destination</code>.</p>
     */
    inline const Aws::Vector<WaypointOptimizationWaypoint>& GetWaypoints() const { return m_waypoints; }
    inline bool WaypointsHasBeenSet() const { return m_waypointsHasBeenSet; }
    template<typename WaypointsT = Aws::Vector<WaypointOptimizationWaypoint>>
    void SetWaypoints(WaypointsT&& value) { m_waypointsHasBeenSet = true; m_waypoints = std::forward<WaypointsT>(value); }
    template<typename WaypointsT = Aws::Vector<WaypointOptimizationWaypoint>>
    OptimizeWaypointsRequest& WithWaypoints(WaypointsT&& value) { SetWaypoints(std::forward<WaypointsT>(value)); return *this;}
    template<typename WaypointsT = WaypointOptimizationWaypoint>
    OptimizeWaypointsRequest& AddWaypoints(WaypointsT&& value) { m_waypointsHasBeenSet = true; m_waypoints.emplace_back(std::forward<WaypointsT>(value)); return *this; }
    ///@}
  private:

    WaypointOptimizationAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    WaypointOptimizationClusteringOptions m_clustering;
    bool m_clusteringHasBeenSet = false;

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

    WaypointOptimizationSequencingObjective m_optimizeSequencingFor{WaypointOptimizationSequencingObjective::NOT_SET};
    bool m_optimizeSequencingForHasBeenSet = false;

    Aws::Vector<double> m_origin;
    bool m_originHasBeenSet = false;

    WaypointOptimizationOriginOptions m_originOptions;
    bool m_originOptionsHasBeenSet = false;

    WaypointOptimizationTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    WaypointOptimizationTravelMode m_travelMode{WaypointOptimizationTravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    WaypointOptimizationTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;

    Aws::Vector<WaypointOptimizationWaypoint> m_waypoints;
    bool m_waypointsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
