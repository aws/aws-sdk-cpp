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
    AWS_GEOROUTES_API RoutePedestrianSpan();
    AWS_GEOROUTES_API RoutePedestrianSpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the computed span without traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetBestCaseDuration() const{ return m_bestCaseDuration; }
    inline bool BestCaseDurationHasBeenSet() const { return m_bestCaseDurationHasBeenSet; }
    inline void SetBestCaseDuration(long long value) { m_bestCaseDurationHasBeenSet = true; m_bestCaseDuration = value; }
    inline RoutePedestrianSpan& WithBestCaseDuration(long long value) { SetBestCaseDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>3 letter Country code corresponding to the Span.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline RoutePedestrianSpan& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline RoutePedestrianSpan& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline RoutePedestrianSpan& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
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
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RoutePedestrianSpan& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dynamic speed details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanDynamicSpeedDetails& GetDynamicSpeed() const{ return m_dynamicSpeed; }
    inline bool DynamicSpeedHasBeenSet() const { return m_dynamicSpeedHasBeenSet; }
    inline void SetDynamicSpeed(const RouteSpanDynamicSpeedDetails& value) { m_dynamicSpeedHasBeenSet = true; m_dynamicSpeed = value; }
    inline void SetDynamicSpeed(RouteSpanDynamicSpeedDetails&& value) { m_dynamicSpeedHasBeenSet = true; m_dynamicSpeed = std::move(value); }
    inline RoutePedestrianSpan& WithDynamicSpeed(const RouteSpanDynamicSpeedDetails& value) { SetDynamicSpeed(value); return *this;}
    inline RoutePedestrianSpan& WithDynamicSpeed(RouteSpanDynamicSpeedDetails&& value) { SetDynamicSpeed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Functional classification of the road segment corresponding to the span.</p>
     */
    inline int GetFunctionalClassification() const{ return m_functionalClassification; }
    inline bool FunctionalClassificationHasBeenSet() const { return m_functionalClassificationHasBeenSet; }
    inline void SetFunctionalClassification(int value) { m_functionalClassificationHasBeenSet = true; m_functionalClassification = value; }
    inline RoutePedestrianSpan& WithFunctionalClassification(int value) { SetFunctionalClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this span.</p>
     */
    inline int GetGeometryOffset() const{ return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RoutePedestrianSpan& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incidents corresponding to the span. These index into the Incidents in the
     * parent Leg.</p>
     */
    inline const Aws::Vector<int>& GetIncidents() const{ return m_incidents; }
    inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
    inline void SetIncidents(const Aws::Vector<int>& value) { m_incidentsHasBeenSet = true; m_incidents = value; }
    inline void SetIncidents(Aws::Vector<int>&& value) { m_incidentsHasBeenSet = true; m_incidents = std::move(value); }
    inline RoutePedestrianSpan& WithIncidents(const Aws::Vector<int>& value) { SetIncidents(value); return *this;}
    inline RoutePedestrianSpan& WithIncidents(Aws::Vector<int>&& value) { SetIncidents(std::move(value)); return *this;}
    inline RoutePedestrianSpan& AddIncidents(int value) { m_incidentsHasBeenSet = true; m_incidents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an array of names of the pedestrian span in available languages.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<LocalizedString>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<LocalizedString>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline RoutePedestrianSpan& WithNames(const Aws::Vector<LocalizedString>& value) { SetNames(value); return *this;}
    inline RoutePedestrianSpan& WithNames(Aws::Vector<LocalizedString>&& value) { SetNames(std::move(value)); return *this;}
    inline RoutePedestrianSpan& AddNames(const LocalizedString& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline RoutePedestrianSpan& AddNames(LocalizedString&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access attributes for a pedestrian corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanPedestrianAccessAttribute>& GetPedestrianAccess() const{ return m_pedestrianAccess; }
    inline bool PedestrianAccessHasBeenSet() const { return m_pedestrianAccessHasBeenSet; }
    inline void SetPedestrianAccess(const Aws::Vector<RouteSpanPedestrianAccessAttribute>& value) { m_pedestrianAccessHasBeenSet = true; m_pedestrianAccess = value; }
    inline void SetPedestrianAccess(Aws::Vector<RouteSpanPedestrianAccessAttribute>&& value) { m_pedestrianAccessHasBeenSet = true; m_pedestrianAccess = std::move(value); }
    inline RoutePedestrianSpan& WithPedestrianAccess(const Aws::Vector<RouteSpanPedestrianAccessAttribute>& value) { SetPedestrianAccess(value); return *this;}
    inline RoutePedestrianSpan& WithPedestrianAccess(Aws::Vector<RouteSpanPedestrianAccessAttribute>&& value) { SetPedestrianAccess(std::move(value)); return *this;}
    inline RoutePedestrianSpan& AddPedestrianAccess(const RouteSpanPedestrianAccessAttribute& value) { m_pedestrianAccessHasBeenSet = true; m_pedestrianAccess.push_back(value); return *this; }
    inline RoutePedestrianSpan& AddPedestrianAccess(RouteSpanPedestrianAccessAttribute&& value) { m_pedestrianAccessHasBeenSet = true; m_pedestrianAccess.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>2-3 letter Region code corresponding to the Span. This is either a province
     * or a state.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RoutePedestrianSpan& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RoutePedestrianSpan& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RoutePedestrianSpan& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for the road segment corresponding to the span. </p>
     */
    inline const Aws::Vector<RouteSpanRoadAttribute>& GetRoadAttributes() const{ return m_roadAttributes; }
    inline bool RoadAttributesHasBeenSet() const { return m_roadAttributesHasBeenSet; }
    inline void SetRoadAttributes(const Aws::Vector<RouteSpanRoadAttribute>& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes = value; }
    inline void SetRoadAttributes(Aws::Vector<RouteSpanRoadAttribute>&& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes = std::move(value); }
    inline RoutePedestrianSpan& WithRoadAttributes(const Aws::Vector<RouteSpanRoadAttribute>& value) { SetRoadAttributes(value); return *this;}
    inline RoutePedestrianSpan& WithRoadAttributes(Aws::Vector<RouteSpanRoadAttribute>&& value) { SetRoadAttributes(std::move(value)); return *this;}
    inline RoutePedestrianSpan& AddRoadAttributes(const RouteSpanRoadAttribute& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes.push_back(value); return *this; }
    inline RoutePedestrianSpan& AddRoadAttributes(RouteSpanRoadAttribute&& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Designated route name or number corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteNumber>& GetRouteNumbers() const{ return m_routeNumbers; }
    inline bool RouteNumbersHasBeenSet() const { return m_routeNumbersHasBeenSet; }
    inline void SetRouteNumbers(const Aws::Vector<RouteNumber>& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers = value; }
    inline void SetRouteNumbers(Aws::Vector<RouteNumber>&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers = std::move(value); }
    inline RoutePedestrianSpan& WithRouteNumbers(const Aws::Vector<RouteNumber>& value) { SetRouteNumbers(value); return *this;}
    inline RoutePedestrianSpan& WithRouteNumbers(Aws::Vector<RouteNumber>&& value) { SetRouteNumbers(std::move(value)); return *this;}
    inline RoutePedestrianSpan& AddRouteNumbers(const RouteNumber& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers.push_back(value); return *this; }
    inline RoutePedestrianSpan& AddRouteNumbers(RouteNumber&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Speed limit details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanSpeedLimitDetails& GetSpeedLimit() const{ return m_speedLimit; }
    inline bool SpeedLimitHasBeenSet() const { return m_speedLimitHasBeenSet; }
    inline void SetSpeedLimit(const RouteSpanSpeedLimitDetails& value) { m_speedLimitHasBeenSet = true; m_speedLimit = value; }
    inline void SetSpeedLimit(RouteSpanSpeedLimitDetails&& value) { m_speedLimitHasBeenSet = true; m_speedLimit = std::move(value); }
    inline RoutePedestrianSpan& WithSpeedLimit(const RouteSpanSpeedLimitDetails& value) { SetSpeedLimit(value); return *this;}
    inline RoutePedestrianSpan& WithSpeedLimit(RouteSpanSpeedLimitDetails&& value) { SetSpeedLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span under typical traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTypicalDuration() const{ return m_typicalDuration; }
    inline bool TypicalDurationHasBeenSet() const { return m_typicalDurationHasBeenSet; }
    inline void SetTypicalDuration(long long value) { m_typicalDurationHasBeenSet = true; m_typicalDuration = value; }
    inline RoutePedestrianSpan& WithTypicalDuration(long long value) { SetTypicalDuration(value); return *this;}
    ///@}
  private:

    long long m_bestCaseDuration;
    bool m_bestCaseDurationHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    long long m_distance;
    bool m_distanceHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    RouteSpanDynamicSpeedDetails m_dynamicSpeed;
    bool m_dynamicSpeedHasBeenSet = false;

    int m_functionalClassification;
    bool m_functionalClassificationHasBeenSet = false;

    int m_geometryOffset;
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

    long long m_typicalDuration;
    bool m_typicalDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
