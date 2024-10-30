/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/model/RouteMatrixAllowOptions.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteMatrixExclusionOptions.h>
#include <aws/geo-routes/model/RoutingObjective.h>
#include <aws/geo-routes/model/RouteMatrixBoundary.h>
#include <aws/geo-routes/model/RouteMatrixTrafficOptions.h>
#include <aws/geo-routes/model/RouteMatrixTravelMode.h>
#include <aws/geo-routes/model/RouteMatrixTravelModeOptions.h>
#include <aws/geo-routes/model/RouteMatrixDestination.h>
#include <aws/geo-routes/model/RouteMatrixOrigin.h>
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
  class CalculateRouteMatrixRequest : public GeoRoutesRequest
  {
  public:
    AWS_GEOROUTES_API CalculateRouteMatrixRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateRouteMatrix"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are allowed while calculating. a route</p>
     */
    inline const RouteMatrixAllowOptions& GetAllow() const{ return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    inline void SetAllow(const RouteMatrixAllowOptions& value) { m_allowHasBeenSet = true; m_allow = value; }
    inline void SetAllow(RouteMatrixAllowOptions&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }
    inline CalculateRouteMatrixRequest& WithAllow(const RouteMatrixAllowOptions& value) { SetAllow(value); return *this;}
    inline CalculateRouteMatrixRequest& WithAllow(RouteMatrixAllowOptions&& value) { SetAllow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, it
     * violates the avoidance and the returned response produces a notice for the
     * violation.</p>
     */
    inline const RouteMatrixAvoidanceOptions& GetAvoid() const{ return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    inline void SetAvoid(const RouteMatrixAvoidanceOptions& value) { m_avoidHasBeenSet = true; m_avoid = value; }
    inline void SetAvoid(RouteMatrixAvoidanceOptions&& value) { m_avoidHasBeenSet = true; m_avoid = std::move(value); }
    inline CalculateRouteMatrixRequest& WithAvoid(const RouteMatrixAvoidanceOptions& value) { SetAvoid(value); return *this;}
    inline CalculateRouteMatrixRequest& WithAvoid(RouteMatrixAvoidanceOptions&& value) { SetAvoid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses the current time as the time of departure.</p>
     */
    inline bool GetDepartNow() const{ return m_departNow; }
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }
    inline CalculateRouteMatrixRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}
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
    inline CalculateRouteMatrixRequest& WithDepartureTime(const Aws::String& value) { SetDepartureTime(value); return *this;}
    inline CalculateRouteMatrixRequest& WithDepartureTime(Aws::String&& value) { SetDepartureTime(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& WithDepartureTime(const char* value) { SetDepartureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of destinations for the route.</p>
     */
    inline const Aws::Vector<RouteMatrixDestination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<RouteMatrixDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<RouteMatrixDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline CalculateRouteMatrixRequest& WithDestinations(const Aws::Vector<RouteMatrixDestination>& value) { SetDestinations(value); return *this;}
    inline CalculateRouteMatrixRequest& WithDestinations(Aws::Vector<RouteMatrixDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& AddDestinations(const RouteMatrixDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline CalculateRouteMatrixRequest& AddDestinations(RouteMatrixDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Features to be strictly excluded while calculating the route.</p>
     */
    inline const RouteMatrixExclusionOptions& GetExclude() const{ return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    inline void SetExclude(const RouteMatrixExclusionOptions& value) { m_excludeHasBeenSet = true; m_exclude = value; }
    inline void SetExclude(RouteMatrixExclusionOptions&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }
    inline CalculateRouteMatrixRequest& WithExclude(const RouteMatrixExclusionOptions& value) { SetExclude(value); return *this;}
    inline CalculateRouteMatrixRequest& WithExclude(RouteMatrixExclusionOptions&& value) { SetExclude(std::move(value)); return *this;}
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
    inline CalculateRouteMatrixRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline CalculateRouteMatrixRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& WithKey(const char* value) { SetKey(value); return *this;}
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
    inline CalculateRouteMatrixRequest& WithOptimizeRoutingFor(const RoutingObjective& value) { SetOptimizeRoutingFor(value); return *this;}
    inline CalculateRouteMatrixRequest& WithOptimizeRoutingFor(RoutingObjective&& value) { SetOptimizeRoutingFor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in longitude and latitude for the origin.</p>
     */
    inline const Aws::Vector<RouteMatrixOrigin>& GetOrigins() const{ return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    inline void SetOrigins(const Aws::Vector<RouteMatrixOrigin>& value) { m_originsHasBeenSet = true; m_origins = value; }
    inline void SetOrigins(Aws::Vector<RouteMatrixOrigin>&& value) { m_originsHasBeenSet = true; m_origins = std::move(value); }
    inline CalculateRouteMatrixRequest& WithOrigins(const Aws::Vector<RouteMatrixOrigin>& value) { SetOrigins(value); return *this;}
    inline CalculateRouteMatrixRequest& WithOrigins(Aws::Vector<RouteMatrixOrigin>&& value) { SetOrigins(std::move(value)); return *this;}
    inline CalculateRouteMatrixRequest& AddOrigins(const RouteMatrixOrigin& value) { m_originsHasBeenSet = true; m_origins.push_back(value); return *this; }
    inline CalculateRouteMatrixRequest& AddOrigins(RouteMatrixOrigin&& value) { m_originsHasBeenSet = true; m_origins.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boundary within which the matrix is to be calculated. All data, origins and
     * destinations outside the boundary are considered invalid.</p>  <p>When
     * request routing boundary was set as AutoCircle, the response routing boundary
     * will return Circle derived from the AutoCircle settings.</p> 
     */
    inline const RouteMatrixBoundary& GetRoutingBoundary() const{ return m_routingBoundary; }
    inline bool RoutingBoundaryHasBeenSet() const { return m_routingBoundaryHasBeenSet; }
    inline void SetRoutingBoundary(const RouteMatrixBoundary& value) { m_routingBoundaryHasBeenSet = true; m_routingBoundary = value; }
    inline void SetRoutingBoundary(RouteMatrixBoundary&& value) { m_routingBoundaryHasBeenSet = true; m_routingBoundary = std::move(value); }
    inline CalculateRouteMatrixRequest& WithRoutingBoundary(const RouteMatrixBoundary& value) { SetRoutingBoundary(value); return *this;}
    inline CalculateRouteMatrixRequest& WithRoutingBoundary(RouteMatrixBoundary&& value) { SetRoutingBoundary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic related options.</p>
     */
    inline const RouteMatrixTrafficOptions& GetTraffic() const{ return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    inline void SetTraffic(const RouteMatrixTrafficOptions& value) { m_trafficHasBeenSet = true; m_traffic = value; }
    inline void SetTraffic(RouteMatrixTrafficOptions&& value) { m_trafficHasBeenSet = true; m_traffic = std::move(value); }
    inline CalculateRouteMatrixRequest& WithTraffic(const RouteMatrixTrafficOptions& value) { SetTraffic(value); return *this;}
    inline CalculateRouteMatrixRequest& WithTraffic(RouteMatrixTrafficOptions&& value) { SetTraffic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline const RouteMatrixTravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const RouteMatrixTravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(RouteMatrixTravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline CalculateRouteMatrixRequest& WithTravelMode(const RouteMatrixTravelMode& value) { SetTravelMode(value); return *this;}
    inline CalculateRouteMatrixRequest& WithTravelMode(RouteMatrixTravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const RouteMatrixTravelModeOptions& GetTravelModeOptions() const{ return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    inline void SetTravelModeOptions(const RouteMatrixTravelModeOptions& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = value; }
    inline void SetTravelModeOptions(RouteMatrixTravelModeOptions&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::move(value); }
    inline CalculateRouteMatrixRequest& WithTravelModeOptions(const RouteMatrixTravelModeOptions& value) { SetTravelModeOptions(value); return *this;}
    inline CalculateRouteMatrixRequest& WithTravelModeOptions(RouteMatrixTravelModeOptions&& value) { SetTravelModeOptions(std::move(value)); return *this;}
    ///@}
  private:

    RouteMatrixAllowOptions m_allow;
    bool m_allowHasBeenSet = false;

    RouteMatrixAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    bool m_departNow;
    bool m_departNowHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<RouteMatrixDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    RouteMatrixExclusionOptions m_exclude;
    bool m_excludeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    RoutingObjective m_optimizeRoutingFor;
    bool m_optimizeRoutingForHasBeenSet = false;

    Aws::Vector<RouteMatrixOrigin> m_origins;
    bool m_originsHasBeenSet = false;

    RouteMatrixBoundary m_routingBoundary;
    bool m_routingBoundaryHasBeenSet = false;

    RouteMatrixTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    RouteMatrixTravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    RouteMatrixTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
