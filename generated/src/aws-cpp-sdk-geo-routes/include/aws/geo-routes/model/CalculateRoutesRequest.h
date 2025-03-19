/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/model/RouteAllowOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteAvoidanceOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteDestinationOptions.h>
#include <aws/geo-routes/model/RouteDriverOptions.h>
#include <aws/geo-routes/model/RouteExclusionOptions.h>
#include <aws/geo-routes/model/MeasurementSystem.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/geo-routes/model/RoutingObjective.h>
#include <aws/geo-routes/model/RouteOriginOptions.h>
#include <aws/geo-routes/model/RouteTollOptions.h>
#include <aws/geo-routes/model/RouteTrafficOptions.h>
#include <aws/geo-routes/model/RouteTravelMode.h>
#include <aws/geo-routes/model/RouteTravelModeOptions.h>
#include <aws/geo-routes/model/RouteTravelStepType.h>
#include <aws/geo-routes/model/RouteLegAdditionalFeature.h>
#include <aws/geo-routes/model/RouteSpanAdditionalFeature.h>
#include <aws/geo-routes/model/RouteWaypoint.h>
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
  class CalculateRoutesRequest : public GeoRoutesRequest
  {
  public:
    AWS_GEOROUTES_API CalculateRoutesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateRoutes"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are allowed while calculating a route.</p>
     */
    inline const RouteAllowOptions& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = RouteAllowOptions>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = RouteAllowOptions>
    CalculateRoutesRequest& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of arrival at the destination.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetArrivalTime() const { return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    template<typename ArrivalTimeT = Aws::String>
    void SetArrivalTime(ArrivalTimeT&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::forward<ArrivalTimeT>(value); }
    template<typename ArrivalTimeT = Aws::String>
    CalculateRoutesRequest& WithArrivalTime(ArrivalTimeT&& value) { SetArrivalTime(std::forward<ArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, it
     * violates the avoidance and the returned response produces a notice for the
     * violation.</p>
     */
    inline const RouteAvoidanceOptions& GetAvoid() const { return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    template<typename AvoidT = RouteAvoidanceOptions>
    void SetAvoid(AvoidT&& value) { m_avoidHasBeenSet = true; m_avoid = std::forward<AvoidT>(value); }
    template<typename AvoidT = RouteAvoidanceOptions>
    CalculateRoutesRequest& WithAvoid(AvoidT&& value) { SetAvoid(std::forward<AvoidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses the current time as the time of departure.</p>
     */
    inline bool GetDepartNow() const { return m_departNow; }
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }
    inline CalculateRoutesRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of departure from thr origin.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetDepartureTime() const { return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    template<typename DepartureTimeT = Aws::String>
    void SetDepartureTime(DepartureTimeT&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::forward<DepartureTimeT>(value); }
    template<typename DepartureTimeT = Aws::String>
    CalculateRoutesRequest& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final position for the route. In the World Geodetic System (WGS 84)
     * format: <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::Vector<double>>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::Vector<double>>
    CalculateRoutesRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    inline CalculateRoutesRequest& AddDestination(double value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const RouteDestinationOptions& GetDestinationOptions() const { return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    template<typename DestinationOptionsT = RouteDestinationOptions>
    void SetDestinationOptions(DestinationOptionsT&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::forward<DestinationOptionsT>(value); }
    template<typename DestinationOptionsT = RouteDestinationOptions>
    CalculateRoutesRequest& WithDestinationOptions(DestinationOptionsT&& value) { SetDestinationOptions(std::forward<DestinationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Driver related options.</p>
     */
    inline const RouteDriverOptions& GetDriver() const { return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    template<typename DriverT = RouteDriverOptions>
    void SetDriver(DriverT&& value) { m_driverHasBeenSet = true; m_driver = std::forward<DriverT>(value); }
    template<typename DriverT = RouteDriverOptions>
    CalculateRoutesRequest& WithDriver(DriverT&& value) { SetDriver(std::forward<DriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features to be strictly excluded while calculating the route.</p>
     */
    inline const RouteExclusionOptions& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = RouteExclusionOptions>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = RouteExclusionOptions>
    CalculateRoutesRequest& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Measurement system to be used for instructions within steps in the
     * response.</p>
     */
    inline MeasurementSystem GetInstructionsMeasurementSystem() const { return m_instructionsMeasurementSystem; }
    inline bool InstructionsMeasurementSystemHasBeenSet() const { return m_instructionsMeasurementSystemHasBeenSet; }
    inline void SetInstructionsMeasurementSystem(MeasurementSystem value) { m_instructionsMeasurementSystemHasBeenSet = true; m_instructionsMeasurementSystem = value; }
    inline CalculateRoutesRequest& WithInstructionsMeasurementSystem(MeasurementSystem value) { SetInstructionsMeasurementSystem(value); return *this;}
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
    CalculateRoutesRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of languages for instructions within steps in the response.</p> 
     * <p>Instructions in the requested language are returned only if they are
     * available.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLanguages() const { return m_languages; }
    inline bool LanguagesHasBeenSet() const { return m_languagesHasBeenSet; }
    template<typename LanguagesT = Aws::Vector<Aws::String>>
    void SetLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages = std::forward<LanguagesT>(value); }
    template<typename LanguagesT = Aws::Vector<Aws::String>>
    CalculateRoutesRequest& WithLanguages(LanguagesT&& value) { SetLanguages(std::forward<LanguagesT>(value)); return *this;}
    template<typename LanguagesT = Aws::String>
    CalculateRoutesRequest& AddLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages.emplace_back(std::forward<LanguagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of optional additional parameters such as timezone that can be
     * requested for each result.</p> <ul> <li> <p> <code>Elevation</code>: Retrieves
     * the elevation information for each location.</p> </li> <li> <p>
     * <code>Incidents</code>: Provides information on traffic incidents along the
     * route.</p> </li> <li> <p> <code>PassThroughWaypoints</code>: Indicates waypoints
     * that are passed through without stopping.</p> </li> <li> <p>
     * <code>Summary</code>: Returns a summary of the route, including distance and
     * duration.</p> </li> <li> <p> <code>Tolls</code>: Supplies toll cost information
     * along the route.</p> </li> <li> <p> <code>TravelStepInstructions</code>:
     * Provides step-by-step instructions for travel along the route.</p> </li> <li>
     * <p> <code>TruckRoadTypes</code>: Returns information about road types suitable
     * for trucks.</p> </li> <li> <p> <code>TypicalDuration</code>: Gives typical
     * travel duration based on historical data.</p> </li> <li> <p> <code>Zones</code>:
     * Specifies the time zone information for each waypoint.</p> </li> </ul>
     */
    inline const Aws::Vector<RouteLegAdditionalFeature>& GetLegAdditionalFeatures() const { return m_legAdditionalFeatures; }
    inline bool LegAdditionalFeaturesHasBeenSet() const { return m_legAdditionalFeaturesHasBeenSet; }
    template<typename LegAdditionalFeaturesT = Aws::Vector<RouteLegAdditionalFeature>>
    void SetLegAdditionalFeatures(LegAdditionalFeaturesT&& value) { m_legAdditionalFeaturesHasBeenSet = true; m_legAdditionalFeatures = std::forward<LegAdditionalFeaturesT>(value); }
    template<typename LegAdditionalFeaturesT = Aws::Vector<RouteLegAdditionalFeature>>
    CalculateRoutesRequest& WithLegAdditionalFeatures(LegAdditionalFeaturesT&& value) { SetLegAdditionalFeatures(std::forward<LegAdditionalFeaturesT>(value)); return *this;}
    inline CalculateRoutesRequest& AddLegAdditionalFeatures(RouteLegAdditionalFeature value) { m_legAdditionalFeaturesHasBeenSet = true; m_legAdditionalFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the format of the geometry returned for each leg of the route. You
     * can choose between two different geometry encoding formats.</p> <p>
     * <code>FlexiblePolyline</code>: A compact and precise encoding format for the leg
     * geometry. For more information on the format, see the GitHub repository for <a
     * href="https://github.com/heremaps/flexible-polyline">
     * <code>FlexiblePolyline</code> </a>.</p> <p> <code>Simple</code>: A less compact
     * encoding, which is easier to decode but may be less precise and result in larger
     * payloads.</p>
     */
    inline GeometryFormat GetLegGeometryFormat() const { return m_legGeometryFormat; }
    inline bool LegGeometryFormatHasBeenSet() const { return m_legGeometryFormatHasBeenSet; }
    inline void SetLegGeometryFormat(GeometryFormat value) { m_legGeometryFormatHasBeenSet = true; m_legGeometryFormat = value; }
    inline CalculateRoutesRequest& WithLegGeometryFormat(GeometryFormat value) { SetLegGeometryFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of alternative routes to be provided in the response, if
     * available.</p>
     */
    inline int GetMaxAlternatives() const { return m_maxAlternatives; }
    inline bool MaxAlternativesHasBeenSet() const { return m_maxAlternativesHasBeenSet; }
    inline void SetMaxAlternatives(int value) { m_maxAlternativesHasBeenSet = true; m_maxAlternatives = value; }
    inline CalculateRoutesRequest& WithMaxAlternatives(int value) { SetMaxAlternatives(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for calculating a route.</p> <p>Default
     * Value: <code>FastestRoute</code> </p>
     */
    inline RoutingObjective GetOptimizeRoutingFor() const { return m_optimizeRoutingFor; }
    inline bool OptimizeRoutingForHasBeenSet() const { return m_optimizeRoutingForHasBeenSet; }
    inline void SetOptimizeRoutingFor(RoutingObjective value) { m_optimizeRoutingForHasBeenSet = true; m_optimizeRoutingFor = value; }
    inline CalculateRoutesRequest& WithOptimizeRoutingFor(RoutingObjective value) { SetOptimizeRoutingFor(value); return *this;}
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
    CalculateRoutesRequest& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    inline CalculateRoutesRequest& AddOrigin(double value) { m_originHasBeenSet = true; m_origin.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const RouteOriginOptions& GetOriginOptions() const { return m_originOptions; }
    inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
    template<typename OriginOptionsT = RouteOriginOptions>
    void SetOriginOptions(OriginOptionsT&& value) { m_originOptionsHasBeenSet = true; m_originOptions = std::forward<OriginOptionsT>(value); }
    template<typename OriginOptionsT = RouteOriginOptions>
    CalculateRoutesRequest& WithOriginOptions(OriginOptionsT&& value) { SetOriginOptions(std::forward<OriginOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional features such as SpeedLimit that can be requested for a
     * Span. A span is a section of a Leg for which the requested features have the
     * same values.</p>
     */
    inline const Aws::Vector<RouteSpanAdditionalFeature>& GetSpanAdditionalFeatures() const { return m_spanAdditionalFeatures; }
    inline bool SpanAdditionalFeaturesHasBeenSet() const { return m_spanAdditionalFeaturesHasBeenSet; }
    template<typename SpanAdditionalFeaturesT = Aws::Vector<RouteSpanAdditionalFeature>>
    void SetSpanAdditionalFeatures(SpanAdditionalFeaturesT&& value) { m_spanAdditionalFeaturesHasBeenSet = true; m_spanAdditionalFeatures = std::forward<SpanAdditionalFeaturesT>(value); }
    template<typename SpanAdditionalFeaturesT = Aws::Vector<RouteSpanAdditionalFeature>>
    CalculateRoutesRequest& WithSpanAdditionalFeatures(SpanAdditionalFeaturesT&& value) { SetSpanAdditionalFeatures(std::forward<SpanAdditionalFeaturesT>(value)); return *this;}
    inline CalculateRoutesRequest& AddSpanAdditionalFeatures(RouteSpanAdditionalFeature value) { m_spanAdditionalFeaturesHasBeenSet = true; m_spanAdditionalFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll related options.</p>
     */
    inline const RouteTollOptions& GetTolls() const { return m_tolls; }
    inline bool TollsHasBeenSet() const { return m_tollsHasBeenSet; }
    template<typename TollsT = RouteTollOptions>
    void SetTolls(TollsT&& value) { m_tollsHasBeenSet = true; m_tolls = std::forward<TollsT>(value); }
    template<typename TollsT = RouteTollOptions>
    CalculateRoutesRequest& WithTolls(TollsT&& value) { SetTolls(std::forward<TollsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic related options.</p>
     */
    inline const RouteTrafficOptions& GetTraffic() const { return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    template<typename TrafficT = RouteTrafficOptions>
    void SetTraffic(TrafficT&& value) { m_trafficHasBeenSet = true; m_traffic = std::forward<TrafficT>(value); }
    template<typename TrafficT = RouteTrafficOptions>
    CalculateRoutesRequest& WithTraffic(TrafficT&& value) { SetTraffic(std::forward<TrafficT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline RouteTravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(RouteTravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline CalculateRoutesRequest& WithTravelMode(RouteTravelMode value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const RouteTravelModeOptions& GetTravelModeOptions() const { return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    template<typename TravelModeOptionsT = RouteTravelModeOptions>
    void SetTravelModeOptions(TravelModeOptionsT&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::forward<TravelModeOptionsT>(value); }
    template<typename TravelModeOptionsT = RouteTravelModeOptions>
    CalculateRoutesRequest& WithTravelModeOptions(TravelModeOptionsT&& value) { SetTravelModeOptions(std::forward<TravelModeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of step returned by the response. Default provides basic steps intended
     * for web based applications. TurnByTurn provides detailed instructions with more
     * granularity intended for a turn based navigation system.</p>
     */
    inline RouteTravelStepType GetTravelStepType() const { return m_travelStepType; }
    inline bool TravelStepTypeHasBeenSet() const { return m_travelStepTypeHasBeenSet; }
    inline void SetTravelStepType(RouteTravelStepType value) { m_travelStepTypeHasBeenSet = true; m_travelStepType = value; }
    inline CalculateRoutesRequest& WithTravelStepType(RouteTravelStepType value) { SetTravelStepType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of waypoints between the Origin and Destination.</p>
     */
    inline const Aws::Vector<RouteWaypoint>& GetWaypoints() const { return m_waypoints; }
    inline bool WaypointsHasBeenSet() const { return m_waypointsHasBeenSet; }
    template<typename WaypointsT = Aws::Vector<RouteWaypoint>>
    void SetWaypoints(WaypointsT&& value) { m_waypointsHasBeenSet = true; m_waypoints = std::forward<WaypointsT>(value); }
    template<typename WaypointsT = Aws::Vector<RouteWaypoint>>
    CalculateRoutesRequest& WithWaypoints(WaypointsT&& value) { SetWaypoints(std::forward<WaypointsT>(value)); return *this;}
    template<typename WaypointsT = RouteWaypoint>
    CalculateRoutesRequest& AddWaypoints(WaypointsT&& value) { m_waypointsHasBeenSet = true; m_waypoints.emplace_back(std::forward<WaypointsT>(value)); return *this; }
    ///@}
  private:

    RouteAllowOptions m_allow;
    bool m_allowHasBeenSet = false;

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    RouteAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    bool m_departNow{false};
    bool m_departNowHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<double> m_destination;
    bool m_destinationHasBeenSet = false;

    RouteDestinationOptions m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;

    RouteDriverOptions m_driver;
    bool m_driverHasBeenSet = false;

    RouteExclusionOptions m_exclude;
    bool m_excludeHasBeenSet = false;

    MeasurementSystem m_instructionsMeasurementSystem{MeasurementSystem::NOT_SET};
    bool m_instructionsMeasurementSystemHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_languages;
    bool m_languagesHasBeenSet = false;

    Aws::Vector<RouteLegAdditionalFeature> m_legAdditionalFeatures;
    bool m_legAdditionalFeaturesHasBeenSet = false;

    GeometryFormat m_legGeometryFormat{GeometryFormat::NOT_SET};
    bool m_legGeometryFormatHasBeenSet = false;

    int m_maxAlternatives{0};
    bool m_maxAlternativesHasBeenSet = false;

    RoutingObjective m_optimizeRoutingFor{RoutingObjective::NOT_SET};
    bool m_optimizeRoutingForHasBeenSet = false;

    Aws::Vector<double> m_origin;
    bool m_originHasBeenSet = false;

    RouteOriginOptions m_originOptions;
    bool m_originOptionsHasBeenSet = false;

    Aws::Vector<RouteSpanAdditionalFeature> m_spanAdditionalFeatures;
    bool m_spanAdditionalFeaturesHasBeenSet = false;

    RouteTollOptions m_tolls;
    bool m_tollsHasBeenSet = false;

    RouteTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    RouteTravelMode m_travelMode{RouteTravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    RouteTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;

    RouteTravelStepType m_travelStepType{RouteTravelStepType::NOT_SET};
    bool m_travelStepTypeHasBeenSet = false;

    Aws::Vector<RouteWaypoint> m_waypoints;
    bool m_waypointsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
