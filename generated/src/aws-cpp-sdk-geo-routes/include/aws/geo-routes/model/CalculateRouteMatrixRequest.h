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
    AWS_GEOROUTES_API CalculateRouteMatrixRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateRouteMatrix"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are allowed while calculating a route.</p>
     */
    inline const RouteMatrixAllowOptions& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = RouteMatrixAllowOptions>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = RouteMatrixAllowOptions>
    CalculateRouteMatrixRequest& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, it
     * violates the avoidance and the returned response produces a notice for the
     * violation.</p>
     */
    inline const RouteMatrixAvoidanceOptions& GetAvoid() const { return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    template<typename AvoidT = RouteMatrixAvoidanceOptions>
    void SetAvoid(AvoidT&& value) { m_avoidHasBeenSet = true; m_avoid = std::forward<AvoidT>(value); }
    template<typename AvoidT = RouteMatrixAvoidanceOptions>
    CalculateRouteMatrixRequest& WithAvoid(AvoidT&& value) { SetAvoid(std::forward<AvoidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses the current time as the time of departure.</p>
     */
    inline bool GetDepartNow() const { return m_departNow; }
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
    inline const Aws::String& GetDepartureTime() const { return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    template<typename DepartureTimeT = Aws::String>
    void SetDepartureTime(DepartureTimeT&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::forward<DepartureTimeT>(value); }
    template<typename DepartureTimeT = Aws::String>
    CalculateRouteMatrixRequest& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of destinations for the route.</p>  <p>Route calculations are
     * billed for each origin and destination pair. If you use a large matrix of
     * origins and destinations, your costs will increase accordingly. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/routes-pricing.html`">
     * Amazon Location's pricing page</a> for more information.</p> 
     */
    inline const Aws::Vector<RouteMatrixDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<RouteMatrixDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<RouteMatrixDestination>>
    CalculateRouteMatrixRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = RouteMatrixDestination>
    CalculateRouteMatrixRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Features to be strictly excluded while calculating the route.</p>
     */
    inline const RouteMatrixExclusionOptions& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = RouteMatrixExclusionOptions>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = RouteMatrixExclusionOptions>
    CalculateRouteMatrixRequest& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
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
    CalculateRouteMatrixRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for calculating a route.</p> <p>Default
     * Value: <code>FastestRoute</code> </p>
     */
    inline RoutingObjective GetOptimizeRoutingFor() const { return m_optimizeRoutingFor; }
    inline bool OptimizeRoutingForHasBeenSet() const { return m_optimizeRoutingForHasBeenSet; }
    inline void SetOptimizeRoutingFor(RoutingObjective value) { m_optimizeRoutingForHasBeenSet = true; m_optimizeRoutingFor = value; }
    inline CalculateRouteMatrixRequest& WithOptimizeRoutingFor(RoutingObjective value) { SetOptimizeRoutingFor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in longitude and latitude for the origin.</p>  <p>Route
     * calculations are billed for each origin and destination pair. Using a large
     * amount of Origins in a request can lead you to incur unexpected charges. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/routes-pricing.html`">
     * Amazon Location's pricing page</a> for more information.</p> 
     */
    inline const Aws::Vector<RouteMatrixOrigin>& GetOrigins() const { return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    template<typename OriginsT = Aws::Vector<RouteMatrixOrigin>>
    void SetOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins = std::forward<OriginsT>(value); }
    template<typename OriginsT = Aws::Vector<RouteMatrixOrigin>>
    CalculateRouteMatrixRequest& WithOrigins(OriginsT&& value) { SetOrigins(std::forward<OriginsT>(value)); return *this;}
    template<typename OriginsT = RouteMatrixOrigin>
    CalculateRouteMatrixRequest& AddOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins.emplace_back(std::forward<OriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boundary within which the matrix is to be calculated. All data, origins and
     * destinations outside the boundary are considered invalid.</p>  <p>When
     * request routing boundary was set as AutoCircle, the response routing boundary
     * will return Circle derived from the AutoCircle settings.</p> 
     */
    inline const RouteMatrixBoundary& GetRoutingBoundary() const { return m_routingBoundary; }
    inline bool RoutingBoundaryHasBeenSet() const { return m_routingBoundaryHasBeenSet; }
    template<typename RoutingBoundaryT = RouteMatrixBoundary>
    void SetRoutingBoundary(RoutingBoundaryT&& value) { m_routingBoundaryHasBeenSet = true; m_routingBoundary = std::forward<RoutingBoundaryT>(value); }
    template<typename RoutingBoundaryT = RouteMatrixBoundary>
    CalculateRouteMatrixRequest& WithRoutingBoundary(RoutingBoundaryT&& value) { SetRoutingBoundary(std::forward<RoutingBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic related options.</p>
     */
    inline const RouteMatrixTrafficOptions& GetTraffic() const { return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    template<typename TrafficT = RouteMatrixTrafficOptions>
    void SetTraffic(TrafficT&& value) { m_trafficHasBeenSet = true; m_traffic = std::forward<TrafficT>(value); }
    template<typename TrafficT = RouteMatrixTrafficOptions>
    CalculateRouteMatrixRequest& WithTraffic(TrafficT&& value) { SetTraffic(std::forward<TrafficT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline RouteMatrixTravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(RouteMatrixTravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline CalculateRouteMatrixRequest& WithTravelMode(RouteMatrixTravelMode value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const RouteMatrixTravelModeOptions& GetTravelModeOptions() const { return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    template<typename TravelModeOptionsT = RouteMatrixTravelModeOptions>
    void SetTravelModeOptions(TravelModeOptionsT&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::forward<TravelModeOptionsT>(value); }
    template<typename TravelModeOptionsT = RouteMatrixTravelModeOptions>
    CalculateRouteMatrixRequest& WithTravelModeOptions(TravelModeOptionsT&& value) { SetTravelModeOptions(std::forward<TravelModeOptionsT>(value)); return *this;}
    ///@}
  private:

    RouteMatrixAllowOptions m_allow;
    bool m_allowHasBeenSet = false;

    RouteMatrixAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    bool m_departNow{false};
    bool m_departNowHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<RouteMatrixDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    RouteMatrixExclusionOptions m_exclude;
    bool m_excludeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    RoutingObjective m_optimizeRoutingFor{RoutingObjective::NOT_SET};
    bool m_optimizeRoutingForHasBeenSet = false;

    Aws::Vector<RouteMatrixOrigin> m_origins;
    bool m_originsHasBeenSet = false;

    RouteMatrixBoundary m_routingBoundary;
    bool m_routingBoundaryHasBeenSet = false;

    RouteMatrixTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    RouteMatrixTravelMode m_travelMode{RouteMatrixTravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    RouteMatrixTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
