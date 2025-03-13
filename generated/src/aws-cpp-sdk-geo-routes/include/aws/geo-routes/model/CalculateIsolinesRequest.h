/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/model/IsolineAllowOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/IsolineAvoidanceOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/IsolineDestinationOptions.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/geo-routes/model/IsolineGranularityOptions.h>
#include <aws/geo-routes/model/IsolineOptimizationObjective.h>
#include <aws/geo-routes/model/RoutingObjective.h>
#include <aws/geo-routes/model/IsolineOriginOptions.h>
#include <aws/geo-routes/model/IsolineThresholds.h>
#include <aws/geo-routes/model/IsolineTrafficOptions.h>
#include <aws/geo-routes/model/IsolineTravelMode.h>
#include <aws/geo-routes/model/IsolineTravelModeOptions.h>
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
  class CalculateIsolinesRequest : public GeoRoutesRequest
  {
  public:
    AWS_GEOROUTES_API CalculateIsolinesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateIsolines"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are allowed while calculating an isoline.</p>
     */
    inline const IsolineAllowOptions& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = IsolineAllowOptions>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = IsolineAllowOptions>
    CalculateIsolinesRequest& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of arrival at the destination.</p> <p>Time format:
     * <code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code> </p>
     * <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetArrivalTime() const { return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    template<typename ArrivalTimeT = Aws::String>
    void SetArrivalTime(ArrivalTimeT&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::forward<ArrivalTimeT>(value); }
    template<typename ArrivalTimeT = Aws::String>
    CalculateIsolinesRequest& WithArrivalTime(ArrivalTimeT&& value) { SetArrivalTime(std::forward<ArrivalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, it
     * violates the avoidance and the returned response produces a notice for the
     * violation.</p>
     */
    inline const IsolineAvoidanceOptions& GetAvoid() const { return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    template<typename AvoidT = IsolineAvoidanceOptions>
    void SetAvoid(AvoidT&& value) { m_avoidHasBeenSet = true; m_avoid = std::forward<AvoidT>(value); }
    template<typename AvoidT = IsolineAvoidanceOptions>
    CalculateIsolinesRequest& WithAvoid(AvoidT&& value) { SetAvoid(std::forward<AvoidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses the current time as the time of departure.</p>
     */
    inline bool GetDepartNow() const { return m_departNow; }
    inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
    inline void SetDepartNow(bool value) { m_departNowHasBeenSet = true; m_departNow = value; }
    inline CalculateIsolinesRequest& WithDepartNow(bool value) { SetDepartNow(value); return *this;}
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
    CalculateIsolinesRequest& WithDepartureTime(DepartureTimeT&& value) { SetDepartureTime(std::forward<DepartureTimeT>(value)); return *this;}
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
    CalculateIsolinesRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    inline CalculateIsolinesRequest& AddDestination(double value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const IsolineDestinationOptions& GetDestinationOptions() const { return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    template<typename DestinationOptionsT = IsolineDestinationOptions>
    void SetDestinationOptions(DestinationOptionsT&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::forward<DestinationOptionsT>(value); }
    template<typename DestinationOptionsT = IsolineDestinationOptions>
    CalculateIsolinesRequest& WithDestinationOptions(DestinationOptionsT&& value) { SetDestinationOptions(std::forward<DestinationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the returned IsolineGeometry. </p> <p>Default
     * Value:<code>FlexiblePolyline</code> </p>
     */
    inline GeometryFormat GetIsolineGeometryFormat() const { return m_isolineGeometryFormat; }
    inline bool IsolineGeometryFormatHasBeenSet() const { return m_isolineGeometryFormatHasBeenSet; }
    inline void SetIsolineGeometryFormat(GeometryFormat value) { m_isolineGeometryFormatHasBeenSet = true; m_isolineGeometryFormat = value; }
    inline CalculateIsolinesRequest& WithIsolineGeometryFormat(GeometryFormat value) { SetIsolineGeometryFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the granularity of the returned Isoline.</p>
     */
    inline const IsolineGranularityOptions& GetIsolineGranularity() const { return m_isolineGranularity; }
    inline bool IsolineGranularityHasBeenSet() const { return m_isolineGranularityHasBeenSet; }
    template<typename IsolineGranularityT = IsolineGranularityOptions>
    void SetIsolineGranularity(IsolineGranularityT&& value) { m_isolineGranularityHasBeenSet = true; m_isolineGranularity = std::forward<IsolineGranularityT>(value); }
    template<typename IsolineGranularityT = IsolineGranularityOptions>
    CalculateIsolinesRequest& WithIsolineGranularity(IsolineGranularityT&& value) { SetIsolineGranularity(std::forward<IsolineGranularityT>(value)); return *this;}
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
    CalculateIsolinesRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for when calculating an isoline.
     * AccurateCalculation generates an isoline of higher granularity that is more
     * precise. FastCalculation generates an isoline faster by reducing the
     * granularity, and in turn the quality of the isoline. BalancedCalculation
     * generates an isoline by balancing between quality and performance. </p>
     * <p>Default Value: <code>BalancedCalculation</code> </p>
     */
    inline IsolineOptimizationObjective GetOptimizeIsolineFor() const { return m_optimizeIsolineFor; }
    inline bool OptimizeIsolineForHasBeenSet() const { return m_optimizeIsolineForHasBeenSet; }
    inline void SetOptimizeIsolineFor(IsolineOptimizationObjective value) { m_optimizeIsolineForHasBeenSet = true; m_optimizeIsolineFor = value; }
    inline CalculateIsolinesRequest& WithOptimizeIsolineFor(IsolineOptimizationObjective value) { SetOptimizeIsolineFor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optimization criteria for calculating a route.</p> <p>Default
     * Value: <code>FastestRoute</code> </p>
     */
    inline RoutingObjective GetOptimizeRoutingFor() const { return m_optimizeRoutingFor; }
    inline bool OptimizeRoutingForHasBeenSet() const { return m_optimizeRoutingForHasBeenSet; }
    inline void SetOptimizeRoutingFor(RoutingObjective value) { m_optimizeRoutingForHasBeenSet = true; m_optimizeRoutingFor = value; }
    inline CalculateIsolinesRequest& WithOptimizeRoutingFor(RoutingObjective value) { SetOptimizeRoutingFor(value); return *this;}
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
    CalculateIsolinesRequest& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    inline CalculateIsolinesRequest& AddOrigin(double value) { m_originHasBeenSet = true; m_origin.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const IsolineOriginOptions& GetOriginOptions() const { return m_originOptions; }
    inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
    template<typename OriginOptionsT = IsolineOriginOptions>
    void SetOriginOptions(OriginOptionsT&& value) { m_originOptionsHasBeenSet = true; m_originOptions = std::forward<OriginOptionsT>(value); }
    template<typename OriginOptionsT = IsolineOriginOptions>
    CalculateIsolinesRequest& WithOriginOptions(OriginOptionsT&& value) { SetOriginOptions(std::forward<OriginOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Threshold to be used for the isoline calculation. Up to 3 thresholds per
     * provided type can be requested.</p> <p> You incur a calculation charge for each
     * threshold. Using a large amount of thresholds in a request can lead you to incur
     * unexpected charges. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/routes-pricing.html`">
     * Amazon Location's pricing page</a> for more information.</p>
     */
    inline const IsolineThresholds& GetThresholds() const { return m_thresholds; }
    inline bool ThresholdsHasBeenSet() const { return m_thresholdsHasBeenSet; }
    template<typename ThresholdsT = IsolineThresholds>
    void SetThresholds(ThresholdsT&& value) { m_thresholdsHasBeenSet = true; m_thresholds = std::forward<ThresholdsT>(value); }
    template<typename ThresholdsT = IsolineThresholds>
    CalculateIsolinesRequest& WithThresholds(ThresholdsT&& value) { SetThresholds(std::forward<ThresholdsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic related options.</p>
     */
    inline const IsolineTrafficOptions& GetTraffic() const { return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    template<typename TrafficT = IsolineTrafficOptions>
    void SetTraffic(TrafficT&& value) { m_trafficHasBeenSet = true; m_traffic = std::forward<TrafficT>(value); }
    template<typename TrafficT = IsolineTrafficOptions>
    CalculateIsolinesRequest& WithTraffic(TrafficT&& value) { SetTraffic(std::forward<TrafficT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p>  <p> The mode
     * <code>Scooter</code> also applies to motorcycles, set to <code>Scooter</code>
     * when wanted to calculate options for motorcycles.</p>  <p>Default Value:
     * <code>Car</code> </p>
     */
    inline IsolineTravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(IsolineTravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline CalculateIsolinesRequest& WithTravelMode(IsolineTravelMode value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const IsolineTravelModeOptions& GetTravelModeOptions() const { return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    template<typename TravelModeOptionsT = IsolineTravelModeOptions>
    void SetTravelModeOptions(TravelModeOptionsT&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::forward<TravelModeOptionsT>(value); }
    template<typename TravelModeOptionsT = IsolineTravelModeOptions>
    CalculateIsolinesRequest& WithTravelModeOptions(TravelModeOptionsT&& value) { SetTravelModeOptions(std::forward<TravelModeOptionsT>(value)); return *this;}
    ///@}
  private:

    IsolineAllowOptions m_allow;
    bool m_allowHasBeenSet = false;

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    IsolineAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    bool m_departNow{false};
    bool m_departNowHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<double> m_destination;
    bool m_destinationHasBeenSet = false;

    IsolineDestinationOptions m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;

    GeometryFormat m_isolineGeometryFormat{GeometryFormat::NOT_SET};
    bool m_isolineGeometryFormatHasBeenSet = false;

    IsolineGranularityOptions m_isolineGranularity;
    bool m_isolineGranularityHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    IsolineOptimizationObjective m_optimizeIsolineFor{IsolineOptimizationObjective::NOT_SET};
    bool m_optimizeIsolineForHasBeenSet = false;

    RoutingObjective m_optimizeRoutingFor{RoutingObjective::NOT_SET};
    bool m_optimizeRoutingForHasBeenSet = false;

    Aws::Vector<double> m_origin;
    bool m_originHasBeenSet = false;

    IsolineOriginOptions m_originOptions;
    bool m_originOptionsHasBeenSet = false;

    IsolineThresholds m_thresholds;
    bool m_thresholdsHasBeenSet = false;

    IsolineTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    IsolineTravelMode m_travelMode{IsolineTravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    IsolineTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
