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
    AWS_GEOROUTES_API CalculateRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateRoutes"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are allowed while calculating. a route</p>
     */
    inline const RouteAllowOptions& GetAllow() const{ return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    inline void SetAllow(const RouteAllowOptions& value) { m_allowHasBeenSet = true; m_allow = value; }
    inline void SetAllow(RouteAllowOptions&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }
    inline CalculateRoutesRequest& WithAllow(const RouteAllowOptions& value) { SetAllow(value); return *this;}
    inline CalculateRoutesRequest& WithAllow(RouteAllowOptions&& value) { SetAllow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of arrival at the destination.</p> <p>Time
     * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
     * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetArrivalTime() const{ return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    inline void SetArrivalTime(const Aws::String& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = value; }
    inline void SetArrivalTime(Aws::String&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::move(value); }
    inline void SetArrivalTime(const char* value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime.assign(value); }
    inline CalculateRoutesRequest& WithArrivalTime(const Aws::String& value) { SetArrivalTime(value); return *this;}
    inline CalculateRoutesRequest& WithArrivalTime(Aws::String&& value) { SetArrivalTime(std::move(value)); return *this;}
    inline CalculateRoutesRequest& WithArrivalTime(const char* value) { SetArrivalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, it
     * violates the avoidance and the returned response produces a notice for the
     * violation.</p>
     */
    inline const RouteAvoidanceOptions& GetAvoid() const{ return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    inline void SetAvoid(const RouteAvoidanceOptions& value) { m_avoidHasBeenSet = true; m_avoid = value; }
    inline void SetAvoid(RouteAvoidanceOptions&& value) { m_avoidHasBeenSet = true; m_avoid = std::move(value); }
    inline CalculateRoutesRequest& WithAvoid(const RouteAvoidanceOptions& value) { SetAvoid(value); return *this;}
    inline CalculateRoutesRequest& WithAvoid(RouteAvoidanceOptions&& value) { SetAvoid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses the current time as the time of departure.</p>
     */
    inline bool GetDepartNow() const{ return m_departNow; }
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
    inline const Aws::String& GetDepartureTime() const{ return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    inline void SetDepartureTime(const Aws::String& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }
    inline void SetDepartureTime(Aws::String&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }
    inline void SetDepartureTime(const char* value) { m_departureTimeHasBeenSet = true; m_departureTime.assign(value); }
    inline CalculateRoutesRequest& WithDepartureTime(const Aws::String& value) { SetDepartureTime(value); return *this;}
    inline CalculateRoutesRequest& WithDepartureTime(Aws::String&& value) { SetDepartureTime(std::move(value)); return *this;}
    inline CalculateRoutesRequest& WithDepartureTime(const char* value) { SetDepartureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final position for the route. In the World Geodetic System (WGS 84)
     * format: <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::Vector<double>& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::Vector<double>&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline CalculateRoutesRequest& WithDestination(const Aws::Vector<double>& value) { SetDestination(value); return *this;}
    inline CalculateRoutesRequest& WithDestination(Aws::Vector<double>&& value) { SetDestination(std::move(value)); return *this;}
    inline CalculateRoutesRequest& AddDestination(double value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const RouteDestinationOptions& GetDestinationOptions() const{ return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    inline void SetDestinationOptions(const RouteDestinationOptions& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = value; }
    inline void SetDestinationOptions(RouteDestinationOptions&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::move(value); }
    inline CalculateRoutesRequest& WithDestinationOptions(const RouteDestinationOptions& value) { SetDestinationOptions(value); return *this;}
    inline CalculateRoutesRequest& WithDestinationOptions(RouteDestinationOptions&& value) { SetDestinationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Driver related options.</p>
     */
    inline const RouteDriverOptions& GetDriver() const{ return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    inline void SetDriver(const RouteDriverOptions& value) { m_driverHasBeenSet = true; m_driver = value; }
    inline void SetDriver(RouteDriverOptions&& value) { m_driverHasBeenSet = true; m_driver = std::move(value); }
    inline CalculateRoutesRequest& WithDriver(const RouteDriverOptions& value) { SetDriver(value); return *this;}
    inline CalculateRoutesRequest& WithDriver(RouteDriverOptions&& value) { SetDriver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features to be strictly excluded while calculating the route.</p>
     */
    inline const RouteExclusionOptions& GetExclude() const{ return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    inline void SetExclude(const RouteExclusionOptions& value) { m_excludeHasBeenSet = true; m_exclude = value; }
    inline void SetExclude(RouteExclusionOptions&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }
    inline CalculateRoutesRequest& WithExclude(const RouteExclusionOptions& value) { SetExclude(value); return *this;}
    inline CalculateRoutesRequest& WithExclude(RouteExclusionOptions&& value) { SetExclude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Measurement system to be used for instructions within steps in the
     * response.</p>
     */
    inline const MeasurementSystem& GetInstructionsMeasurementSystem() const{ return m_instructionsMeasurementSystem; }
    inline bool InstructionsMeasurementSystemHasBeenSet() const { return m_instructionsMeasurementSystemHasBeenSet; }
    inline void SetInstructionsMeasurementSystem(const MeasurementSystem& value) { m_instructionsMeasurementSystemHasBeenSet = true; m_instructionsMeasurementSystem = value; }
    inline void SetInstructionsMeasurementSystem(MeasurementSystem&& value) { m_instructionsMeasurementSystemHasBeenSet = true; m_instructionsMeasurementSystem = std::move(value); }
    inline CalculateRoutesRequest& WithInstructionsMeasurementSystem(const MeasurementSystem& value) { SetInstructionsMeasurementSystem(value); return *this;}
    inline CalculateRoutesRequest& WithInstructionsMeasurementSystem(MeasurementSystem&& value) { SetInstructionsMeasurementSystem(std::move(value)); return *this;}
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
    inline CalculateRoutesRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline CalculateRoutesRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline CalculateRoutesRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of languages for instructions within steps in the response.</p> 
     * <p>Instructions in the requested language are returned only if they are
     * available.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLanguages() const{ return m_languages; }
    inline bool LanguagesHasBeenSet() const { return m_languagesHasBeenSet; }
    inline void SetLanguages(const Aws::Vector<Aws::String>& value) { m_languagesHasBeenSet = true; m_languages = value; }
    inline void SetLanguages(Aws::Vector<Aws::String>&& value) { m_languagesHasBeenSet = true; m_languages = std::move(value); }
    inline CalculateRoutesRequest& WithLanguages(const Aws::Vector<Aws::String>& value) { SetLanguages(value); return *this;}
    inline CalculateRoutesRequest& WithLanguages(Aws::Vector<Aws::String>&& value) { SetLanguages(std::move(value)); return *this;}
    inline CalculateRoutesRequest& AddLanguages(const Aws::String& value) { m_languagesHasBeenSet = true; m_languages.push_back(value); return *this; }
    inline CalculateRoutesRequest& AddLanguages(Aws::String&& value) { m_languagesHasBeenSet = true; m_languages.push_back(std::move(value)); return *this; }
    inline CalculateRoutesRequest& AddLanguages(const char* value) { m_languagesHasBeenSet = true; m_languages.push_back(value); return *this; }
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
    inline const Aws::Vector<RouteLegAdditionalFeature>& GetLegAdditionalFeatures() const{ return m_legAdditionalFeatures; }
    inline bool LegAdditionalFeaturesHasBeenSet() const { return m_legAdditionalFeaturesHasBeenSet; }
    inline void SetLegAdditionalFeatures(const Aws::Vector<RouteLegAdditionalFeature>& value) { m_legAdditionalFeaturesHasBeenSet = true; m_legAdditionalFeatures = value; }
    inline void SetLegAdditionalFeatures(Aws::Vector<RouteLegAdditionalFeature>&& value) { m_legAdditionalFeaturesHasBeenSet = true; m_legAdditionalFeatures = std::move(value); }
    inline CalculateRoutesRequest& WithLegAdditionalFeatures(const Aws::Vector<RouteLegAdditionalFeature>& value) { SetLegAdditionalFeatures(value); return *this;}
    inline CalculateRoutesRequest& WithLegAdditionalFeatures(Aws::Vector<RouteLegAdditionalFeature>&& value) { SetLegAdditionalFeatures(std::move(value)); return *this;}
    inline CalculateRoutesRequest& AddLegAdditionalFeatures(const RouteLegAdditionalFeature& value) { m_legAdditionalFeaturesHasBeenSet = true; m_legAdditionalFeatures.push_back(value); return *this; }
    inline CalculateRoutesRequest& AddLegAdditionalFeatures(RouteLegAdditionalFeature&& value) { m_legAdditionalFeaturesHasBeenSet = true; m_legAdditionalFeatures.push_back(std::move(value)); return *this; }
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
    inline const GeometryFormat& GetLegGeometryFormat() const{ return m_legGeometryFormat; }
    inline bool LegGeometryFormatHasBeenSet() const { return m_legGeometryFormatHasBeenSet; }
    inline void SetLegGeometryFormat(const GeometryFormat& value) { m_legGeometryFormatHasBeenSet = true; m_legGeometryFormat = value; }
    inline void SetLegGeometryFormat(GeometryFormat&& value) { m_legGeometryFormatHasBeenSet = true; m_legGeometryFormat = std::move(value); }
    inline CalculateRoutesRequest& WithLegGeometryFormat(const GeometryFormat& value) { SetLegGeometryFormat(value); return *this;}
    inline CalculateRoutesRequest& WithLegGeometryFormat(GeometryFormat&& value) { SetLegGeometryFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of alternative routes to be provided in the response, if
     * available.</p>
     */
    inline int GetMaxAlternatives() const{ return m_maxAlternatives; }
    inline bool MaxAlternativesHasBeenSet() const { return m_maxAlternativesHasBeenSet; }
    inline void SetMaxAlternatives(int value) { m_maxAlternativesHasBeenSet = true; m_maxAlternatives = value; }
    inline CalculateRoutesRequest& WithMaxAlternatives(int value) { SetMaxAlternatives(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for calculating a route.</p> <p>Default
     * Value: <code>FastestRoute</code> </p>
     */
    inline const RoutingObjective& GetOptimizeRoutingFor() const{ return m_optimizeRoutingFor; }
    inline bool OptimizeRoutingForHasBeenSet() const { return m_optimizeRoutingForHasBeenSet; }
    inline void SetOptimizeRoutingFor(const RoutingObjective& value) { m_optimizeRoutingForHasBeenSet = true; m_optimizeRoutingFor = value; }
    inline void SetOptimizeRoutingFor(RoutingObjective&& value) { m_optimizeRoutingForHasBeenSet = true; m_optimizeRoutingFor = std::move(value); }
    inline CalculateRoutesRequest& WithOptimizeRoutingFor(const RoutingObjective& value) { SetOptimizeRoutingFor(value); return *this;}
    inline CalculateRoutesRequest& WithOptimizeRoutingFor(RoutingObjective&& value) { SetOptimizeRoutingFor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position for the route.</p>
     */
    inline const Aws::Vector<double>& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Aws::Vector<double>& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Aws::Vector<double>&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline CalculateRoutesRequest& WithOrigin(const Aws::Vector<double>& value) { SetOrigin(value); return *this;}
    inline CalculateRoutesRequest& WithOrigin(Aws::Vector<double>&& value) { SetOrigin(std::move(value)); return *this;}
    inline CalculateRoutesRequest& AddOrigin(double value) { m_originHasBeenSet = true; m_origin.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const RouteOriginOptions& GetOriginOptions() const{ return m_originOptions; }
    inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
    inline void SetOriginOptions(const RouteOriginOptions& value) { m_originOptionsHasBeenSet = true; m_originOptions = value; }
    inline void SetOriginOptions(RouteOriginOptions&& value) { m_originOptionsHasBeenSet = true; m_originOptions = std::move(value); }
    inline CalculateRoutesRequest& WithOriginOptions(const RouteOriginOptions& value) { SetOriginOptions(value); return *this;}
    inline CalculateRoutesRequest& WithOriginOptions(RouteOriginOptions&& value) { SetOriginOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of optional features such as SpeedLimit that can be requested for a
     * Span. A span is a section of a Leg for which the requested features have the
     * same values.</p>
     */
    inline const Aws::Vector<RouteSpanAdditionalFeature>& GetSpanAdditionalFeatures() const{ return m_spanAdditionalFeatures; }
    inline bool SpanAdditionalFeaturesHasBeenSet() const { return m_spanAdditionalFeaturesHasBeenSet; }
    inline void SetSpanAdditionalFeatures(const Aws::Vector<RouteSpanAdditionalFeature>& value) { m_spanAdditionalFeaturesHasBeenSet = true; m_spanAdditionalFeatures = value; }
    inline void SetSpanAdditionalFeatures(Aws::Vector<RouteSpanAdditionalFeature>&& value) { m_spanAdditionalFeaturesHasBeenSet = true; m_spanAdditionalFeatures = std::move(value); }
    inline CalculateRoutesRequest& WithSpanAdditionalFeatures(const Aws::Vector<RouteSpanAdditionalFeature>& value) { SetSpanAdditionalFeatures(value); return *this;}
    inline CalculateRoutesRequest& WithSpanAdditionalFeatures(Aws::Vector<RouteSpanAdditionalFeature>&& value) { SetSpanAdditionalFeatures(std::move(value)); return *this;}
    inline CalculateRoutesRequest& AddSpanAdditionalFeatures(const RouteSpanAdditionalFeature& value) { m_spanAdditionalFeaturesHasBeenSet = true; m_spanAdditionalFeatures.push_back(value); return *this; }
    inline CalculateRoutesRequest& AddSpanAdditionalFeatures(RouteSpanAdditionalFeature&& value) { m_spanAdditionalFeaturesHasBeenSet = true; m_spanAdditionalFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll related options.</p>
     */
    inline const RouteTollOptions& GetTolls() const{ return m_tolls; }
    inline bool TollsHasBeenSet() const { return m_tollsHasBeenSet; }
    inline void SetTolls(const RouteTollOptions& value) { m_tollsHasBeenSet = true; m_tolls = value; }
    inline void SetTolls(RouteTollOptions&& value) { m_tollsHasBeenSet = true; m_tolls = std::move(value); }
    inline CalculateRoutesRequest& WithTolls(const RouteTollOptions& value) { SetTolls(value); return *this;}
    inline CalculateRoutesRequest& WithTolls(RouteTollOptions&& value) { SetTolls(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic related options.</p>
     */
    inline const RouteTrafficOptions& GetTraffic() const{ return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    inline void SetTraffic(const RouteTrafficOptions& value) { m_trafficHasBeenSet = true; m_traffic = value; }
    inline void SetTraffic(RouteTrafficOptions&& value) { m_trafficHasBeenSet = true; m_traffic = std::move(value); }
    inline CalculateRoutesRequest& WithTraffic(const RouteTrafficOptions& value) { SetTraffic(value); return *this;}
    inline CalculateRoutesRequest& WithTraffic(RouteTrafficOptions&& value) { SetTraffic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline const RouteTravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const RouteTravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(RouteTravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline CalculateRoutesRequest& WithTravelMode(const RouteTravelMode& value) { SetTravelMode(value); return *this;}
    inline CalculateRoutesRequest& WithTravelMode(RouteTravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const RouteTravelModeOptions& GetTravelModeOptions() const{ return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    inline void SetTravelModeOptions(const RouteTravelModeOptions& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = value; }
    inline void SetTravelModeOptions(RouteTravelModeOptions&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::move(value); }
    inline CalculateRoutesRequest& WithTravelModeOptions(const RouteTravelModeOptions& value) { SetTravelModeOptions(value); return *this;}
    inline CalculateRoutesRequest& WithTravelModeOptions(RouteTravelModeOptions&& value) { SetTravelModeOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of step returned by the response. Default provides basic steps intended
     * for web based applications. TurnByTurn provides detailed instructions with more
     * granularity intended for a turn based naviagtion system.</p>
     */
    inline const RouteTravelStepType& GetTravelStepType() const{ return m_travelStepType; }
    inline bool TravelStepTypeHasBeenSet() const { return m_travelStepTypeHasBeenSet; }
    inline void SetTravelStepType(const RouteTravelStepType& value) { m_travelStepTypeHasBeenSet = true; m_travelStepType = value; }
    inline void SetTravelStepType(RouteTravelStepType&& value) { m_travelStepTypeHasBeenSet = true; m_travelStepType = std::move(value); }
    inline CalculateRoutesRequest& WithTravelStepType(const RouteTravelStepType& value) { SetTravelStepType(value); return *this;}
    inline CalculateRoutesRequest& WithTravelStepType(RouteTravelStepType&& value) { SetTravelStepType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of waypoints between the Origin and Destination.</p>
     */
    inline const Aws::Vector<RouteWaypoint>& GetWaypoints() const{ return m_waypoints; }
    inline bool WaypointsHasBeenSet() const { return m_waypointsHasBeenSet; }
    inline void SetWaypoints(const Aws::Vector<RouteWaypoint>& value) { m_waypointsHasBeenSet = true; m_waypoints = value; }
    inline void SetWaypoints(Aws::Vector<RouteWaypoint>&& value) { m_waypointsHasBeenSet = true; m_waypoints = std::move(value); }
    inline CalculateRoutesRequest& WithWaypoints(const Aws::Vector<RouteWaypoint>& value) { SetWaypoints(value); return *this;}
    inline CalculateRoutesRequest& WithWaypoints(Aws::Vector<RouteWaypoint>&& value) { SetWaypoints(std::move(value)); return *this;}
    inline CalculateRoutesRequest& AddWaypoints(const RouteWaypoint& value) { m_waypointsHasBeenSet = true; m_waypoints.push_back(value); return *this; }
    inline CalculateRoutesRequest& AddWaypoints(RouteWaypoint&& value) { m_waypointsHasBeenSet = true; m_waypoints.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RouteAllowOptions m_allow;
    bool m_allowHasBeenSet = false;

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    RouteAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    bool m_departNow;
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

    MeasurementSystem m_instructionsMeasurementSystem;
    bool m_instructionsMeasurementSystemHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_languages;
    bool m_languagesHasBeenSet = false;

    Aws::Vector<RouteLegAdditionalFeature> m_legAdditionalFeatures;
    bool m_legAdditionalFeaturesHasBeenSet = false;

    GeometryFormat m_legGeometryFormat;
    bool m_legGeometryFormatHasBeenSet = false;

    int m_maxAlternatives;
    bool m_maxAlternativesHasBeenSet = false;

    RoutingObjective m_optimizeRoutingFor;
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

    RouteTravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    RouteTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;

    RouteTravelStepType m_travelStepType;
    bool m_travelStepTypeHasBeenSet = false;

    Aws::Vector<RouteWaypoint> m_waypoints;
    bool m_waypointsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
