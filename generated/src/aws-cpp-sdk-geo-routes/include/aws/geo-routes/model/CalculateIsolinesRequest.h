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
    AWS_GEOROUTES_API CalculateIsolinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CalculateIsolines"; }

    AWS_GEOROUTES_API Aws::String SerializePayload() const override;

    AWS_GEOROUTES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Features that are allowed while calculating. a route</p>
     */
    inline const IsolineAllowOptions& GetAllow() const{ return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    inline void SetAllow(const IsolineAllowOptions& value) { m_allowHasBeenSet = true; m_allow = value; }
    inline void SetAllow(IsolineAllowOptions&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }
    inline CalculateIsolinesRequest& WithAllow(const IsolineAllowOptions& value) { SetAllow(value); return *this;}
    inline CalculateIsolinesRequest& WithAllow(IsolineAllowOptions&& value) { SetAllow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of arrival at the destination.</p> <p>Time format:
     * <code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code> </p>
     * <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
     * <code>2020-04-22T17:57:24+02:00</code> </p>
     */
    inline const Aws::String& GetArrivalTime() const{ return m_arrivalTime; }
    inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
    inline void SetArrivalTime(const Aws::String& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = value; }
    inline void SetArrivalTime(Aws::String&& value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime = std::move(value); }
    inline void SetArrivalTime(const char* value) { m_arrivalTimeHasBeenSet = true; m_arrivalTime.assign(value); }
    inline CalculateIsolinesRequest& WithArrivalTime(const Aws::String& value) { SetArrivalTime(value); return *this;}
    inline CalculateIsolinesRequest& WithArrivalTime(Aws::String&& value) { SetArrivalTime(std::move(value)); return *this;}
    inline CalculateIsolinesRequest& WithArrivalTime(const char* value) { SetArrivalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Features that are avoided while calculating a route. Avoidance is on a
     * best-case basis. If an avoidance can't be satisfied for a particular case, it
     * violates the avoidance and the returned response produces a notice for the
     * violation.</p>
     */
    inline const IsolineAvoidanceOptions& GetAvoid() const{ return m_avoid; }
    inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
    inline void SetAvoid(const IsolineAvoidanceOptions& value) { m_avoidHasBeenSet = true; m_avoid = value; }
    inline void SetAvoid(IsolineAvoidanceOptions&& value) { m_avoidHasBeenSet = true; m_avoid = std::move(value); }
    inline CalculateIsolinesRequest& WithAvoid(const IsolineAvoidanceOptions& value) { SetAvoid(value); return *this;}
    inline CalculateIsolinesRequest& WithAvoid(IsolineAvoidanceOptions&& value) { SetAvoid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses the current time as the time of departure.</p>
     */
    inline bool GetDepartNow() const{ return m_departNow; }
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
    inline const Aws::String& GetDepartureTime() const{ return m_departureTime; }
    inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
    inline void SetDepartureTime(const Aws::String& value) { m_departureTimeHasBeenSet = true; m_departureTime = value; }
    inline void SetDepartureTime(Aws::String&& value) { m_departureTimeHasBeenSet = true; m_departureTime = std::move(value); }
    inline void SetDepartureTime(const char* value) { m_departureTimeHasBeenSet = true; m_departureTime.assign(value); }
    inline CalculateIsolinesRequest& WithDepartureTime(const Aws::String& value) { SetDepartureTime(value); return *this;}
    inline CalculateIsolinesRequest& WithDepartureTime(Aws::String&& value) { SetDepartureTime(std::move(value)); return *this;}
    inline CalculateIsolinesRequest& WithDepartureTime(const char* value) { SetDepartureTime(value); return *this;}
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
    inline CalculateIsolinesRequest& WithDestination(const Aws::Vector<double>& value) { SetDestination(value); return *this;}
    inline CalculateIsolinesRequest& WithDestination(Aws::Vector<double>&& value) { SetDestination(std::move(value)); return *this;}
    inline CalculateIsolinesRequest& AddDestination(double value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const IsolineDestinationOptions& GetDestinationOptions() const{ return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    inline void SetDestinationOptions(const IsolineDestinationOptions& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = value; }
    inline void SetDestinationOptions(IsolineDestinationOptions&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::move(value); }
    inline CalculateIsolinesRequest& WithDestinationOptions(const IsolineDestinationOptions& value) { SetDestinationOptions(value); return *this;}
    inline CalculateIsolinesRequest& WithDestinationOptions(IsolineDestinationOptions&& value) { SetDestinationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the returned IsolineGeometry. </p> <p>Default
     * Value:<code>FlexiblePolyline</code> </p>
     */
    inline const GeometryFormat& GetIsolineGeometryFormat() const{ return m_isolineGeometryFormat; }
    inline bool IsolineGeometryFormatHasBeenSet() const { return m_isolineGeometryFormatHasBeenSet; }
    inline void SetIsolineGeometryFormat(const GeometryFormat& value) { m_isolineGeometryFormatHasBeenSet = true; m_isolineGeometryFormat = value; }
    inline void SetIsolineGeometryFormat(GeometryFormat&& value) { m_isolineGeometryFormatHasBeenSet = true; m_isolineGeometryFormat = std::move(value); }
    inline CalculateIsolinesRequest& WithIsolineGeometryFormat(const GeometryFormat& value) { SetIsolineGeometryFormat(value); return *this;}
    inline CalculateIsolinesRequest& WithIsolineGeometryFormat(GeometryFormat&& value) { SetIsolineGeometryFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the granularity of the returned Isoline</p>
     */
    inline const IsolineGranularityOptions& GetIsolineGranularity() const{ return m_isolineGranularity; }
    inline bool IsolineGranularityHasBeenSet() const { return m_isolineGranularityHasBeenSet; }
    inline void SetIsolineGranularity(const IsolineGranularityOptions& value) { m_isolineGranularityHasBeenSet = true; m_isolineGranularity = value; }
    inline void SetIsolineGranularity(IsolineGranularityOptions&& value) { m_isolineGranularityHasBeenSet = true; m_isolineGranularity = std::move(value); }
    inline CalculateIsolinesRequest& WithIsolineGranularity(const IsolineGranularityOptions& value) { SetIsolineGranularity(value); return *this;}
    inline CalculateIsolinesRequest& WithIsolineGranularity(IsolineGranularityOptions&& value) { SetIsolineGranularity(std::move(value)); return *this;}
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
    inline CalculateIsolinesRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline CalculateIsolinesRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline CalculateIsolinesRequest& WithKey(const char* value) { SetKey(value); return *this;}
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
    inline const IsolineOptimizationObjective& GetOptimizeIsolineFor() const{ return m_optimizeIsolineFor; }
    inline bool OptimizeIsolineForHasBeenSet() const { return m_optimizeIsolineForHasBeenSet; }
    inline void SetOptimizeIsolineFor(const IsolineOptimizationObjective& value) { m_optimizeIsolineForHasBeenSet = true; m_optimizeIsolineFor = value; }
    inline void SetOptimizeIsolineFor(IsolineOptimizationObjective&& value) { m_optimizeIsolineForHasBeenSet = true; m_optimizeIsolineFor = std::move(value); }
    inline CalculateIsolinesRequest& WithOptimizeIsolineFor(const IsolineOptimizationObjective& value) { SetOptimizeIsolineFor(value); return *this;}
    inline CalculateIsolinesRequest& WithOptimizeIsolineFor(IsolineOptimizationObjective&& value) { SetOptimizeIsolineFor(std::move(value)); return *this;}
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
    inline CalculateIsolinesRequest& WithOptimizeRoutingFor(const RoutingObjective& value) { SetOptimizeRoutingFor(value); return *this;}
    inline CalculateIsolinesRequest& WithOptimizeRoutingFor(RoutingObjective&& value) { SetOptimizeRoutingFor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position for the route.</p>
     */
    inline const Aws::Vector<double>& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Aws::Vector<double>& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Aws::Vector<double>&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline CalculateIsolinesRequest& WithOrigin(const Aws::Vector<double>& value) { SetOrigin(value); return *this;}
    inline CalculateIsolinesRequest& WithOrigin(Aws::Vector<double>&& value) { SetOrigin(std::move(value)); return *this;}
    inline CalculateIsolinesRequest& AddOrigin(double value) { m_originHasBeenSet = true; m_origin.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Origin related options.</p>
     */
    inline const IsolineOriginOptions& GetOriginOptions() const{ return m_originOptions; }
    inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
    inline void SetOriginOptions(const IsolineOriginOptions& value) { m_originOptionsHasBeenSet = true; m_originOptions = value; }
    inline void SetOriginOptions(IsolineOriginOptions&& value) { m_originOptionsHasBeenSet = true; m_originOptions = std::move(value); }
    inline CalculateIsolinesRequest& WithOriginOptions(const IsolineOriginOptions& value) { SetOriginOptions(value); return *this;}
    inline CalculateIsolinesRequest& WithOriginOptions(IsolineOriginOptions&& value) { SetOriginOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Threshold to be used for the isoline calculation. Up to 3 thresholds per
     * provided type can be requested.</p>
     */
    inline const IsolineThresholds& GetThresholds() const{ return m_thresholds; }
    inline bool ThresholdsHasBeenSet() const { return m_thresholdsHasBeenSet; }
    inline void SetThresholds(const IsolineThresholds& value) { m_thresholdsHasBeenSet = true; m_thresholds = value; }
    inline void SetThresholds(IsolineThresholds&& value) { m_thresholdsHasBeenSet = true; m_thresholds = std::move(value); }
    inline CalculateIsolinesRequest& WithThresholds(const IsolineThresholds& value) { SetThresholds(value); return *this;}
    inline CalculateIsolinesRequest& WithThresholds(IsolineThresholds&& value) { SetThresholds(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic related options.</p>
     */
    inline const IsolineTrafficOptions& GetTraffic() const{ return m_traffic; }
    inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
    inline void SetTraffic(const IsolineTrafficOptions& value) { m_trafficHasBeenSet = true; m_traffic = value; }
    inline void SetTraffic(IsolineTrafficOptions&& value) { m_trafficHasBeenSet = true; m_traffic = std::move(value); }
    inline CalculateIsolinesRequest& WithTraffic(const IsolineTrafficOptions& value) { SetTraffic(value); return *this;}
    inline CalculateIsolinesRequest& WithTraffic(IsolineTrafficOptions&& value) { SetTraffic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p>  <p> The mode
     * <code>Scooter</code> also applies to motorcycles, set to <code>Scooter</code>
     * when wanted to calculate options for motorcycles.</p>  <p>Default Value:
     * <code>Car</code> </p>
     */
    inline const IsolineTravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const IsolineTravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(IsolineTravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline CalculateIsolinesRequest& WithTravelMode(const IsolineTravelMode& value) { SetTravelMode(value); return *this;}
    inline CalculateIsolinesRequest& WithTravelMode(IsolineTravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode related options for the provided travel mode.</p>
     */
    inline const IsolineTravelModeOptions& GetTravelModeOptions() const{ return m_travelModeOptions; }
    inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
    inline void SetTravelModeOptions(const IsolineTravelModeOptions& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = value; }
    inline void SetTravelModeOptions(IsolineTravelModeOptions&& value) { m_travelModeOptionsHasBeenSet = true; m_travelModeOptions = std::move(value); }
    inline CalculateIsolinesRequest& WithTravelModeOptions(const IsolineTravelModeOptions& value) { SetTravelModeOptions(value); return *this;}
    inline CalculateIsolinesRequest& WithTravelModeOptions(IsolineTravelModeOptions&& value) { SetTravelModeOptions(std::move(value)); return *this;}
    ///@}
  private:

    IsolineAllowOptions m_allow;
    bool m_allowHasBeenSet = false;

    Aws::String m_arrivalTime;
    bool m_arrivalTimeHasBeenSet = false;

    IsolineAvoidanceOptions m_avoid;
    bool m_avoidHasBeenSet = false;

    bool m_departNow;
    bool m_departNowHasBeenSet = false;

    Aws::String m_departureTime;
    bool m_departureTimeHasBeenSet = false;

    Aws::Vector<double> m_destination;
    bool m_destinationHasBeenSet = false;

    IsolineDestinationOptions m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;

    GeometryFormat m_isolineGeometryFormat;
    bool m_isolineGeometryFormatHasBeenSet = false;

    IsolineGranularityOptions m_isolineGranularity;
    bool m_isolineGranularityHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    IsolineOptimizationObjective m_optimizeIsolineFor;
    bool m_optimizeIsolineForHasBeenSet = false;

    RoutingObjective m_optimizeRoutingFor;
    bool m_optimizeRoutingForHasBeenSet = false;

    Aws::Vector<double> m_origin;
    bool m_originHasBeenSet = false;

    IsolineOriginOptions m_originOptions;
    bool m_originOptionsHasBeenSet = false;

    IsolineThresholds m_thresholds;
    bool m_thresholdsHasBeenSet = false;

    IsolineTrafficOptions m_traffic;
    bool m_trafficHasBeenSet = false;

    IsolineTravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    IsolineTravelModeOptions m_travelModeOptions;
    bool m_travelModeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
