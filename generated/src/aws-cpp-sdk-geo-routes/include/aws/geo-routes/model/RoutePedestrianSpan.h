/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteSpanDynamicSpeedDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteSpanSpeedLimitDetails.h>
#include <aws/geo-routes/model/LocalizedString.h>
#include <aws/geo-routes/model/RouteSpanPedestrianAccessAttribute.h>
#include <aws/geo-routes/model/RouteSpanRoadAttribute.h>
#include <aws/geo-routes/model/RouteNumber.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Span computed for the requested SpanAdditionalFeatures.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePedestrianSpan">AWS
   * API Reference</a></p>
   */
  class RoutePedestrianSpan
  {
  public:
    AWS_GEOROUTES_API RoutePedestrianSpan() = default;
    AWS_GEOROUTES_API RoutePedestrianSpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the computed span without traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetBestCaseDuration() const { return m_bestCaseDuration; }
    inline bool BestCaseDurationHasBeenSet() const { return m_bestCaseDurationHasBeenSet; }
    inline void SetBestCaseDuration(long long value) { m_bestCaseDurationHasBeenSet = true; m_bestCaseDuration = value; }
    inline RoutePedestrianSpan& WithBestCaseDuration(long long value) { SetBestCaseDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>3 letter Country code corresponding to the Span.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    RoutePedestrianSpan& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RoutePedestrianSpan& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RoutePedestrianSpan& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dynamic speed details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanDynamicSpeedDetails& GetDynamicSpeed() const { return m_dynamicSpeed; }
    inline bool DynamicSpeedHasBeenSet() const { return m_dynamicSpeedHasBeenSet; }
    template<typename DynamicSpeedT = RouteSpanDynamicSpeedDetails>
    void SetDynamicSpeed(DynamicSpeedT&& value) { m_dynamicSpeedHasBeenSet = true; m_dynamicSpeed = std::forward<DynamicSpeedT>(value); }
    template<typename DynamicSpeedT = RouteSpanDynamicSpeedDetails>
    RoutePedestrianSpan& WithDynamicSpeed(DynamicSpeedT&& value) { SetDynamicSpeed(std::forward<DynamicSpeedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Functional classification of the road segment corresponding to the span.</p>
     */
    inline int GetFunctionalClassification() const { return m_functionalClassification; }
    inline bool FunctionalClassificationHasBeenSet() const { return m_functionalClassificationHasBeenSet; }
    inline void SetFunctionalClassification(int value) { m_functionalClassificationHasBeenSet = true; m_functionalClassification = value; }
    inline RoutePedestrianSpan& WithFunctionalClassification(int value) { SetFunctionalClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this span.</p>
     */
    inline int GetGeometryOffset() const { return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RoutePedestrianSpan& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incidents corresponding to the span. These index into the Incidents in the
     * parent Leg.</p>
     */
    inline const Aws::Vector<int>& GetIncidents() const { return m_incidents; }
    inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
    template<typename IncidentsT = Aws::Vector<int>>
    void SetIncidents(IncidentsT&& value) { m_incidentsHasBeenSet = true; m_incidents = std::forward<IncidentsT>(value); }
    template<typename IncidentsT = Aws::Vector<int>>
    RoutePedestrianSpan& WithIncidents(IncidentsT&& value) { SetIncidents(std::forward<IncidentsT>(value)); return *this;}
    inline RoutePedestrianSpan& AddIncidents(int value) { m_incidentsHasBeenSet = true; m_incidents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an array of names of the pedestrian span in available languages.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<LocalizedString>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<LocalizedString>>
    RoutePedestrianSpan& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = LocalizedString>
    RoutePedestrianSpan& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access attributes for a pedestrian corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanPedestrianAccessAttribute>& GetPedestrianAccess() const { return m_pedestrianAccess; }
    inline bool PedestrianAccessHasBeenSet() const { return m_pedestrianAccessHasBeenSet; }
    template<typename PedestrianAccessT = Aws::Vector<RouteSpanPedestrianAccessAttribute>>
    void SetPedestrianAccess(PedestrianAccessT&& value) { m_pedestrianAccessHasBeenSet = true; m_pedestrianAccess = std::forward<PedestrianAccessT>(value); }
    template<typename PedestrianAccessT = Aws::Vector<RouteSpanPedestrianAccessAttribute>>
    RoutePedestrianSpan& WithPedestrianAccess(PedestrianAccessT&& value) { SetPedestrianAccess(std::forward<PedestrianAccessT>(value)); return *this;}
    inline RoutePedestrianSpan& AddPedestrianAccess(RouteSpanPedestrianAccessAttribute value) { m_pedestrianAccessHasBeenSet = true; m_pedestrianAccess.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>2-3 letter Region code corresponding to the Span. This is either a province
     * or a state.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RoutePedestrianSpan& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for the road segment corresponding to the span. </p>
     */
    inline const Aws::Vector<RouteSpanRoadAttribute>& GetRoadAttributes() const { return m_roadAttributes; }
    inline bool RoadAttributesHasBeenSet() const { return m_roadAttributesHasBeenSet; }
    template<typename RoadAttributesT = Aws::Vector<RouteSpanRoadAttribute>>
    void SetRoadAttributes(RoadAttributesT&& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes = std::forward<RoadAttributesT>(value); }
    template<typename RoadAttributesT = Aws::Vector<RouteSpanRoadAttribute>>
    RoutePedestrianSpan& WithRoadAttributes(RoadAttributesT&& value) { SetRoadAttributes(std::forward<RoadAttributesT>(value)); return *this;}
    inline RoutePedestrianSpan& AddRoadAttributes(RouteSpanRoadAttribute value) { m_roadAttributesHasBeenSet = true; m_roadAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Designated route name or number corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteNumber>& GetRouteNumbers() const { return m_routeNumbers; }
    inline bool RouteNumbersHasBeenSet() const { return m_routeNumbersHasBeenSet; }
    template<typename RouteNumbersT = Aws::Vector<RouteNumber>>
    void SetRouteNumbers(RouteNumbersT&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers = std::forward<RouteNumbersT>(value); }
    template<typename RouteNumbersT = Aws::Vector<RouteNumber>>
    RoutePedestrianSpan& WithRouteNumbers(RouteNumbersT&& value) { SetRouteNumbers(std::forward<RouteNumbersT>(value)); return *this;}
    template<typename RouteNumbersT = RouteNumber>
    RoutePedestrianSpan& AddRouteNumbers(RouteNumbersT&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers.emplace_back(std::forward<RouteNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Speed limit details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanSpeedLimitDetails& GetSpeedLimit() const { return m_speedLimit; }
    inline bool SpeedLimitHasBeenSet() const { return m_speedLimitHasBeenSet; }
    template<typename SpeedLimitT = RouteSpanSpeedLimitDetails>
    void SetSpeedLimit(SpeedLimitT&& value) { m_speedLimitHasBeenSet = true; m_speedLimit = std::forward<SpeedLimitT>(value); }
    template<typename SpeedLimitT = RouteSpanSpeedLimitDetails>
    RoutePedestrianSpan& WithSpeedLimit(SpeedLimitT&& value) { SetSpeedLimit(std::forward<SpeedLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span under typical traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTypicalDuration() const { return m_typicalDuration; }
    inline bool TypicalDurationHasBeenSet() const { return m_typicalDurationHasBeenSet; }
    inline void SetTypicalDuration(long long value) { m_typicalDurationHasBeenSet = true; m_typicalDuration = value; }
    inline RoutePedestrianSpan& WithTypicalDuration(long long value) { SetTypicalDuration(value); return *this;}
    ///@}
  private:

    long long m_bestCaseDuration{0};
    bool m_bestCaseDurationHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    RouteSpanDynamicSpeedDetails m_dynamicSpeed;
    bool m_dynamicSpeedHasBeenSet = false;

    int m_functionalClassification{0};
    bool m_functionalClassificationHasBeenSet = false;

    int m_geometryOffset{0};
    bool m_geometryOffsetHasBeenSet = false;

    Aws::Vector<int> m_incidents;
    bool m_incidentsHasBeenSet = false;

    Aws::Vector<LocalizedString> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<RouteSpanPedestrianAccessAttribute> m_pedestrianAccess;
    bool m_pedestrianAccessHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<RouteSpanRoadAttribute> m_roadAttributes;
    bool m_roadAttributesHasBeenSet = false;

    Aws::Vector<RouteNumber> m_routeNumbers;
    bool m_routeNumbersHasBeenSet = false;

    RouteSpanSpeedLimitDetails m_speedLimit;
    bool m_speedLimitHasBeenSet = false;

    long long m_typicalDuration{0};
    bool m_typicalDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
