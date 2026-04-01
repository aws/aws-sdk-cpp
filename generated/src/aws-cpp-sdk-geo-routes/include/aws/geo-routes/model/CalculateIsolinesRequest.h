/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/geo-routes/model/IsolineAllowOptions.h>
#include <aws/geo-routes/model/IsolineAvoidanceOptions.h>
#include <aws/geo-routes/model/IsolineDestinationOptions.h>
#include <aws/geo-routes/model/IsolineGranularityOptions.h>
#include <aws/geo-routes/model/IsolineOptimizationObjective.h>
#include <aws/geo-routes/model/IsolineOriginOptions.h>
#include <aws/geo-routes/model/IsolineThresholds.h>
#include <aws/geo-routes/model/IsolineTrafficOptions.h>
#include <aws/geo-routes/model/IsolineTravelMode.h>
#include <aws/geo-routes/model/IsolineTravelModeOptions.h>
#include <aws/geo-routes/model/RoutingObjective.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GeoRoutes {
namespace Model {

/**
 */
class CalculateIsolinesRequest : public GeoRoutesRequest {
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
   * <p>Enables special road types or features that should be considered for routing
   * even if they might be restricted by default for the selected travel mode. These
   * include high-occupancy vehicle and toll lanes.</p>
   */
  inline const IsolineAllowOptions& GetAllow() const { return m_allow; }
  inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
  template <typename AllowT = IsolineAllowOptions>
  void SetAllow(AllowT&& value) {
    m_allowHasBeenSet = true;
    m_allow = std::forward<AllowT>(value);
  }
  template <typename AllowT = IsolineAllowOptions>
  CalculateIsolinesRequest& WithAllow(AllowT&& value) {
    SetAllow(std::forward<AllowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determine areas from which <code>Destination</code> can be reached by this
   * time, taking into account predicted traffic conditions and working backward to
   * account for congestion patterns. This attribute cannot be used together with
   * <code>DepartureTime</code> or <code>DepartNow</code>. Specified as an ISO-8601
   * timestamp with timezone offset.</p> <p>Time format:
   * <code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code> </p>
   * <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
   * <code>2020-04-22T17:57:24+02:00</code> </p>
   */
  inline const Aws::String& GetArrivalTime() const { return m_arrivalTime; }
  inline bool ArrivalTimeHasBeenSet() const { return m_arrivalTimeHasBeenSet; }
  template <typename ArrivalTimeT = Aws::String>
  void SetArrivalTime(ArrivalTimeT&& value) {
    m_arrivalTimeHasBeenSet = true;
    m_arrivalTime = std::forward<ArrivalTimeT>(value);
  }
  template <typename ArrivalTimeT = Aws::String>
  CalculateIsolinesRequest& WithArrivalTime(ArrivalTimeT&& value) {
    SetArrivalTime(std::forward<ArrivalTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies road types, features, or areas to avoid (if possible) when
   * calculating reachable areas. These are treated as preferences rather than strict
   * constraints—if a route cannot be calculated without using an avoided feature,
   * that avoidance preference may be ignored.</p>
   */
  inline const IsolineAvoidanceOptions& GetAvoid() const { return m_avoid; }
  inline bool AvoidHasBeenSet() const { return m_avoidHasBeenSet; }
  template <typename AvoidT = IsolineAvoidanceOptions>
  void SetAvoid(AvoidT&& value) {
    m_avoidHasBeenSet = true;
    m_avoid = std::forward<AvoidT>(value);
  }
  template <typename AvoidT = IsolineAvoidanceOptions>
  CalculateIsolinesRequest& WithAvoid(AvoidT&& value) {
    SetAvoid(std::forward<AvoidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When true, uses the current time as the departure time and takes current
   * traffic conditions into account. This attribute cannot be used together with
   * <code>DepartureTime</code> or <code>ArrivalTime</code>.</p>
   */
  inline bool GetDepartNow() const { return m_departNow; }
  inline bool DepartNowHasBeenSet() const { return m_departNowHasBeenSet; }
  inline void SetDepartNow(bool value) {
    m_departNowHasBeenSet = true;
    m_departNow = value;
  }
  inline CalculateIsolinesRequest& WithDepartNow(bool value) {
    SetDepartNow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determine areas that can be reached when departing at this time, taking into
   * account predicted traffic conditions. This attribute cannot be used together
   * with <code>ArrivalTime</code> or <code>DepartNow</code>. Specified as an
   * ISO-8601 timestamp with timezone offset.</p> <p>Time
   * format:<code>YYYY-MM-DDThh:mm:ss.sssZ | YYYY-MM-DDThh:mm:ss.sss+hh:mm</code>
   * </p> <p>Examples:</p> <p> <code>2020-04-22T17:57:24Z</code> </p> <p>
   * <code>2020-04-22T17:57:24+02:00</code> </p>
   */
  inline const Aws::String& GetDepartureTime() const { return m_departureTime; }
  inline bool DepartureTimeHasBeenSet() const { return m_departureTimeHasBeenSet; }
  template <typename DepartureTimeT = Aws::String>
  void SetDepartureTime(DepartureTimeT&& value) {
    m_departureTimeHasBeenSet = true;
    m_departureTime = std::forward<DepartureTimeT>(value);
  }
  template <typename DepartureTimeT = Aws::String>
  CalculateIsolinesRequest& WithDepartureTime(DepartureTimeT&& value) {
    SetDepartureTime(std::forward<DepartureTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional destination point, specified as <code>[longitude,
   * latitude]</code> coordinates. When provided, the service calculates areas from
   * which this destination can be reached within the specified thresholds. This
   * reverses the usual isoline calculation to show areas that could reach your
   * location, rather than areas you could reach from your location. Either
   * <code>Origin</code> or <code>Destination</code> must be provided.</p>
   */
  inline const Aws::Vector<double>& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = Aws::Vector<double>>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = Aws::Vector<double>>
  CalculateIsolinesRequest& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  inline CalculateIsolinesRequest& AddDestination(double value) {
    m_destinationHasBeenSet = true;
    m_destination.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options that control how the destination point is matched to the road network
   * and how routes can approach it. These options help improve travel time accuracy
   * by accounting for real-world access to the destination.</p>
   */
  inline const IsolineDestinationOptions& GetDestinationOptions() const { return m_destinationOptions; }
  inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
  template <typename DestinationOptionsT = IsolineDestinationOptions>
  void SetDestinationOptions(DestinationOptionsT&& value) {
    m_destinationOptionsHasBeenSet = true;
    m_destinationOptions = std::forward<DestinationOptionsT>(value);
  }
  template <typename DestinationOptionsT = IsolineDestinationOptions>
  CalculateIsolinesRequest& WithDestinationOptions(DestinationOptionsT&& value) {
    SetDestinationOptions(std::forward<DestinationOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the returned IsolineGeometry. </p> <p>Default
   * value:<code>FlexiblePolyline</code> </p>
   */
  inline GeometryFormat GetIsolineGeometryFormat() const { return m_isolineGeometryFormat; }
  inline bool IsolineGeometryFormatHasBeenSet() const { return m_isolineGeometryFormatHasBeenSet; }
  inline void SetIsolineGeometryFormat(GeometryFormat value) {
    m_isolineGeometryFormatHasBeenSet = true;
    m_isolineGeometryFormat = value;
  }
  inline CalculateIsolinesRequest& WithIsolineGeometryFormat(GeometryFormat value) {
    SetIsolineGeometryFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the detail level of the generated isolines. Higher granularity
   * produces smoother shapes but requires more processing time and results in larger
   * responses.</p>
   */
  inline const IsolineGranularityOptions& GetIsolineGranularity() const { return m_isolineGranularity; }
  inline bool IsolineGranularityHasBeenSet() const { return m_isolineGranularityHasBeenSet; }
  template <typename IsolineGranularityT = IsolineGranularityOptions>
  void SetIsolineGranularity(IsolineGranularityT&& value) {
    m_isolineGranularityHasBeenSet = true;
    m_isolineGranularity = std::forward<IsolineGranularityT>(value);
  }
  template <typename IsolineGranularityT = IsolineGranularityOptions>
  CalculateIsolinesRequest& WithIsolineGranularity(IsolineGranularityT&& value) {
    SetIsolineGranularity(std::forward<IsolineGranularityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Location Service API Key with access to this action. If omitted,
   * the request must be signed using Signature Version 4.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  CalculateIsolinesRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the trade-off between calculation speed and isoline precision.
   * Choose <code> FastCalculation</code> for quicker results with less detail,
   * <code>AccurateCalculation</code> for more precise results, or
   * <code>BalancedCalculation</code> for a middle ground.</p> <p>Default value:
   * <code>BalancedCalculation</code> </p>
   */
  inline IsolineOptimizationObjective GetOptimizeIsolineFor() const { return m_optimizeIsolineFor; }
  inline bool OptimizeIsolineForHasBeenSet() const { return m_optimizeIsolineForHasBeenSet; }
  inline void SetOptimizeIsolineFor(IsolineOptimizationObjective value) {
    m_optimizeIsolineForHasBeenSet = true;
    m_optimizeIsolineFor = value;
  }
  inline CalculateIsolinesRequest& WithOptimizeIsolineFor(IsolineOptimizationObjective value) {
    SetOptimizeIsolineFor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether routes prioritize shortest travel time
   * (<code>FastestRoute</code>) or shortest physical distance
   * (<code>ShortestRoute</code>) when calculating reachable areas.</p> <p>Default
   * value: <code>FastestRoute</code> </p>
   */
  inline RoutingObjective GetOptimizeRoutingFor() const { return m_optimizeRoutingFor; }
  inline bool OptimizeRoutingForHasBeenSet() const { return m_optimizeRoutingForHasBeenSet; }
  inline void SetOptimizeRoutingFor(RoutingObjective value) {
    m_optimizeRoutingForHasBeenSet = true;
    m_optimizeRoutingFor = value;
  }
  inline CalculateIsolinesRequest& WithOptimizeRoutingFor(RoutingObjective value) {
    SetOptimizeRoutingFor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The starting point for isoline calculations, specified as <code>[longitude,
   * latitude]</code> coordinates. For example, this could be a store location,
   * service center, or any point from which you want to calculate reachable areas.
   * Either <code>Origin</code> or <code>Destination</code> must be provided.</p>
   */
  inline const Aws::Vector<double>& GetOrigin() const { return m_origin; }
  inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
  template <typename OriginT = Aws::Vector<double>>
  void SetOrigin(OriginT&& value) {
    m_originHasBeenSet = true;
    m_origin = std::forward<OriginT>(value);
  }
  template <typename OriginT = Aws::Vector<double>>
  CalculateIsolinesRequest& WithOrigin(OriginT&& value) {
    SetOrigin(std::forward<OriginT>(value));
    return *this;
  }
  inline CalculateIsolinesRequest& AddOrigin(double value) {
    m_originHasBeenSet = true;
    m_origin.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options that control how the origin point is matched to the road network and
   * how routes can depart from it. These options help improve travel time accuracy
   * by accounting for real-world access from the origin.</p>
   */
  inline const IsolineOriginOptions& GetOriginOptions() const { return m_originOptions; }
  inline bool OriginOptionsHasBeenSet() const { return m_originOptionsHasBeenSet; }
  template <typename OriginOptionsT = IsolineOriginOptions>
  void SetOriginOptions(OriginOptionsT&& value) {
    m_originOptionsHasBeenSet = true;
    m_originOptions = std::forward<OriginOptionsT>(value);
  }
  template <typename OriginOptionsT = IsolineOriginOptions>
  CalculateIsolinesRequest& WithOriginOptions(OriginOptionsT&& value) {
    SetOriginOptions(std::forward<OriginOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distance or time thresholds used to determine reachable areas. You can
   * specify up to five thresholds (which all must be the same type) to calculate
   * multiple isolines in a single request. For example, to determine the areas that
   * are reachable within 10 and 20 minutes of the origin, specify time thresholds of
   * 600 and 1200 seconds.</p> <p>You incur a calculation charge for each threshold.
   * Using a large number of thresholds in a request can lead to unexpected charges.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/location/latest/developerguide/routes-pricing.html">Routes
   * pricing</a> in the <i>Amazon Location Service Developer Guide</i>.</p>
   */
  inline const IsolineThresholds& GetThresholds() const { return m_thresholds; }
  inline bool ThresholdsHasBeenSet() const { return m_thresholdsHasBeenSet; }
  template <typename ThresholdsT = IsolineThresholds>
  void SetThresholds(ThresholdsT&& value) {
    m_thresholdsHasBeenSet = true;
    m_thresholds = std::forward<ThresholdsT>(value);
  }
  template <typename ThresholdsT = IsolineThresholds>
  CalculateIsolinesRequest& WithThresholds(ThresholdsT&& value) {
    SetThresholds(std::forward<ThresholdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures how real-time and historical traffic data affects isoline
   * calculations. Traffic patterns can significantly impact reachable areas,
   * especially during peak hours.</p>
   */
  inline const IsolineTrafficOptions& GetTraffic() const { return m_traffic; }
  inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
  template <typename TrafficT = IsolineTrafficOptions>
  void SetTraffic(TrafficT&& value) {
    m_trafficHasBeenSet = true;
    m_traffic = std::forward<TrafficT>(value);
  }
  template <typename TrafficT = IsolineTrafficOptions>
  CalculateIsolinesRequest& WithTraffic(TrafficT&& value) {
    SetTraffic(std::forward<TrafficT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode of transportation to use for calculations. This affects which road
   * types or features can be used, estimated speed, and the traffic levels that are
   * applied.</p> <ul> <li> <p> <code>Car</code>—Standard passenger vehicle routing
   * using roads accessible to cars</p> </li> <li> <p>
   * <code>Pedestrian</code>—Walking routes using pedestrian paths, sidewalks, and
   * crossings</p> </li> <li> <p> <code>Scooter</code>—Light two-wheeled vehicle
   * routing using roads and paths accessible to scooters</p> </li> <li> <p>
   * <code>Truck</code>—Commercial truck routing considering vehicle dimensions,
   * weight restrictions, and hazardous material regulations</p> </li> </ul>
   * <p>The mode <code>Scooter</code> also applies to motorcycles; set this to
   * <code>Scooter</code> when calculating isolines for motorcycles.</p>
   * <p>Default value: <code>Car</code> </p>
   */
  inline IsolineTravelMode GetTravelMode() const { return m_travelMode; }
  inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
  inline void SetTravelMode(IsolineTravelMode value) {
    m_travelModeHasBeenSet = true;
    m_travelMode = value;
  }
  inline CalculateIsolinesRequest& WithTravelMode(IsolineTravelMode value) {
    SetTravelMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional attributes that refine how reachable areas are calculated based on
   * specific vehicle characteristics. These options help produce more accurate
   * results by accounting for real-world constraints and capabilities.</p> <p>For
   * example:</p> <ul> <li> <p>For trucks (<code>Truck</code>), specify dimensions,
   * weight limits, and hazardous cargo restrictions to ensure isolines only include
   * roads that can physically and legally accommodate the vehicle</p> </li> <li>
   * <p>For cars (<code>Car</code>), set maximum speed capabilities or indicate
   * high-occupancy vehicle eligibility to better estimate reachable areas</p> </li>
   * <li> <p>For scooters (<code>Scooter</code>), specify engine type and speed
   * limitations to more accurately model their travel capabilities</p> </li> </ul>
   * <p>Without these options, calculations use default assumptions that may not
   * match your specific use case.</p>
   */
  inline const IsolineTravelModeOptions& GetTravelModeOptions() const { return m_travelModeOptions; }
  inline bool TravelModeOptionsHasBeenSet() const { return m_travelModeOptionsHasBeenSet; }
  template <typename TravelModeOptionsT = IsolineTravelModeOptions>
  void SetTravelModeOptions(TravelModeOptionsT&& value) {
    m_travelModeOptionsHasBeenSet = true;
    m_travelModeOptions = std::forward<TravelModeOptionsT>(value);
  }
  template <typename TravelModeOptionsT = IsolineTravelModeOptions>
  CalculateIsolinesRequest& WithTravelModeOptions(TravelModeOptionsT&& value) {
    SetTravelModeOptions(std::forward<TravelModeOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  IsolineAllowOptions m_allow;

  Aws::String m_arrivalTime;

  IsolineAvoidanceOptions m_avoid;

  bool m_departNow{false};

  Aws::String m_departureTime;

  Aws::Vector<double> m_destination;

  IsolineDestinationOptions m_destinationOptions;

  GeometryFormat m_isolineGeometryFormat{GeometryFormat::NOT_SET};

  IsolineGranularityOptions m_isolineGranularity;

  Aws::String m_key;

  IsolineOptimizationObjective m_optimizeIsolineFor{IsolineOptimizationObjective::NOT_SET};

  RoutingObjective m_optimizeRoutingFor{RoutingObjective::NOT_SET};

  Aws::Vector<double> m_origin;

  IsolineOriginOptions m_originOptions;

  IsolineThresholds m_thresholds;

  IsolineTrafficOptions m_traffic;

  IsolineTravelMode m_travelMode{IsolineTravelMode::NOT_SET};

  IsolineTravelModeOptions m_travelModeOptions;
  bool m_allowHasBeenSet = false;
  bool m_arrivalTimeHasBeenSet = false;
  bool m_avoidHasBeenSet = false;
  bool m_departNowHasBeenSet = false;
  bool m_departureTimeHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_destinationOptionsHasBeenSet = false;
  bool m_isolineGeometryFormatHasBeenSet = false;
  bool m_isolineGranularityHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_optimizeIsolineForHasBeenSet = false;
  bool m_optimizeRoutingForHasBeenSet = false;
  bool m_originHasBeenSet = false;
  bool m_originOptionsHasBeenSet = false;
  bool m_thresholdsHasBeenSet = false;
  bool m_trafficHasBeenSet = false;
  bool m_travelModeHasBeenSet = false;
  bool m_travelModeOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
