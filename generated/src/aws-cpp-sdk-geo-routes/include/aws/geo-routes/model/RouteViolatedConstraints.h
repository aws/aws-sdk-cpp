/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteNoticeDetailRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteWeightConstraint.h>
#include <aws/geo-routes/model/WeightPerAxleGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteTruckType.h>
#include <aws/geo-routes/model/RouteHazardousCargoType.h>
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
   * <p>This property contains a summary of violated constraints.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteViolatedConstraints">AWS
   * API Reference</a></p>
   */
  class RouteViolatedConstraints
  {
  public:
    AWS_GEOROUTES_API RouteViolatedConstraints() = default;
    AWS_GEOROUTES_API RouteViolatedConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteViolatedConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This restriction applies to truck cargo, where the resulting route excludes
     * roads on which hazardous materials are prohibited from being transported.</p>
     */
    inline bool GetAllHazardsRestricted() const { return m_allHazardsRestricted; }
    inline bool AllHazardsRestrictedHasBeenSet() const { return m_allHazardsRestrictedHasBeenSet; }
    inline void SetAllHazardsRestricted(bool value) { m_allHazardsRestrictedHasBeenSet = true; m_allHazardsRestricted = value; }
    inline RouteViolatedConstraints& WithAllHazardsRestricted(bool value) { SetAllHazardsRestricted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of axles of the vehicle.</p>
     */
    inline const RouteNoticeDetailRange& GetAxleCount() const { return m_axleCount; }
    inline bool AxleCountHasBeenSet() const { return m_axleCountHasBeenSet; }
    template<typename AxleCountT = RouteNoticeDetailRange>
    void SetAxleCount(AxleCountT&& value) { m_axleCountHasBeenSet = true; m_axleCount = std::forward<AxleCountT>(value); }
    template<typename AxleCountT = RouteNoticeDetailRange>
    RouteViolatedConstraints& WithAxleCount(AxleCountT&& value) { SetAxleCount(std::forward<AxleCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Hazardous cargo contained in the vehicle.</p>
     */
    inline const Aws::Vector<RouteHazardousCargoType>& GetHazardousCargos() const { return m_hazardousCargos; }
    inline bool HazardousCargosHasBeenSet() const { return m_hazardousCargosHasBeenSet; }
    template<typename HazardousCargosT = Aws::Vector<RouteHazardousCargoType>>
    void SetHazardousCargos(HazardousCargosT&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = std::forward<HazardousCargosT>(value); }
    template<typename HazardousCargosT = Aws::Vector<RouteHazardousCargoType>>
    RouteViolatedConstraints& WithHazardousCargos(HazardousCargosT&& value) { SetHazardousCargos(std::forward<HazardousCargosT>(value)); return *this;}
    inline RouteViolatedConstraints& AddHazardousCargos(RouteHazardousCargoType value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum height of the vehicle.</p>
     */
    inline long long GetMaxHeight() const { return m_maxHeight; }
    inline bool MaxHeightHasBeenSet() const { return m_maxHeightHasBeenSet; }
    inline void SetMaxHeight(long long value) { m_maxHeightHasBeenSet = true; m_maxHeight = value; }
    inline RouteViolatedConstraints& WithMaxHeight(long long value) { SetMaxHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum Kpra length of the vehicle.</p> <p> <b>Unit</b>:
     * <code>centimeters</code> </p>
     */
    inline long long GetMaxKpraLength() const { return m_maxKpraLength; }
    inline bool MaxKpraLengthHasBeenSet() const { return m_maxKpraLengthHasBeenSet; }
    inline void SetMaxKpraLength(long long value) { m_maxKpraLengthHasBeenSet = true; m_maxKpraLength = value; }
    inline RouteViolatedConstraints& WithMaxKpraLength(long long value) { SetMaxKpraLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of the vehicle.</p>
     */
    inline long long GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(long long value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline RouteViolatedConstraints& WithMaxLength(long long value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum load capacity of the vehicle.</p> <p> <b>Unit</b>:
     * <code>kilograms</code> </p>
     */
    inline long long GetMaxPayloadCapacity() const { return m_maxPayloadCapacity; }
    inline bool MaxPayloadCapacityHasBeenSet() const { return m_maxPayloadCapacityHasBeenSet; }
    inline void SetMaxPayloadCapacity(long long value) { m_maxPayloadCapacityHasBeenSet = true; m_maxPayloadCapacity = value; }
    inline RouteViolatedConstraints& WithMaxPayloadCapacity(long long value) { SetMaxPayloadCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum weight of the route.</p> <p> <b>Unit</b>: <code>Kilograms</code>
     * </p>
     */
    inline const RouteWeightConstraint& GetMaxWeight() const { return m_maxWeight; }
    inline bool MaxWeightHasBeenSet() const { return m_maxWeightHasBeenSet; }
    template<typename MaxWeightT = RouteWeightConstraint>
    void SetMaxWeight(MaxWeightT&& value) { m_maxWeightHasBeenSet = true; m_maxWeight = std::forward<MaxWeightT>(value); }
    template<typename MaxWeightT = RouteWeightConstraint>
    RouteViolatedConstraints& WithMaxWeight(MaxWeightT&& value) { SetMaxWeight(std::forward<MaxWeightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum weight per axle of the vehicle.</p> <p> <b>Unit</b>:
     * <code>Kilograms</code> </p>
     */
    inline long long GetMaxWeightPerAxle() const { return m_maxWeightPerAxle; }
    inline bool MaxWeightPerAxleHasBeenSet() const { return m_maxWeightPerAxleHasBeenSet; }
    inline void SetMaxWeightPerAxle(long long value) { m_maxWeightPerAxleHasBeenSet = true; m_maxWeightPerAxle = value; }
    inline RouteViolatedConstraints& WithMaxWeightPerAxle(long long value) { SetMaxWeightPerAxle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum weight per axle group of the vehicle.</p> <p> <b>Unit</b>:
     * <code>Kilograms</code> </p>
     */
    inline const WeightPerAxleGroup& GetMaxWeightPerAxleGroup() const { return m_maxWeightPerAxleGroup; }
    inline bool MaxWeightPerAxleGroupHasBeenSet() const { return m_maxWeightPerAxleGroupHasBeenSet; }
    template<typename MaxWeightPerAxleGroupT = WeightPerAxleGroup>
    void SetMaxWeightPerAxleGroup(MaxWeightPerAxleGroupT&& value) { m_maxWeightPerAxleGroupHasBeenSet = true; m_maxWeightPerAxleGroup = std::forward<MaxWeightPerAxleGroupT>(value); }
    template<typename MaxWeightPerAxleGroupT = WeightPerAxleGroup>
    RouteViolatedConstraints& WithMaxWeightPerAxleGroup(MaxWeightPerAxleGroupT&& value) { SetMaxWeightPerAxleGroup(std::forward<MaxWeightPerAxleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum width of the vehicle.</p>
     */
    inline long long GetMaxWidth() const { return m_maxWidth; }
    inline bool MaxWidthHasBeenSet() const { return m_maxWidthHasBeenSet; }
    inline void SetMaxWidth(long long value) { m_maxWidthHasBeenSet = true; m_maxWidth = value; }
    inline RouteViolatedConstraints& WithMaxWidth(long long value) { SetMaxWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of occupants in the vehicle.</p> <p>Default Value: <code>1</code>
     * </p>
     */
    inline const RouteNoticeDetailRange& GetOccupancy() const { return m_occupancy; }
    inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
    template<typename OccupancyT = RouteNoticeDetailRange>
    void SetOccupancy(OccupancyT&& value) { m_occupancyHasBeenSet = true; m_occupancy = std::forward<OccupancyT>(value); }
    template<typename OccupancyT = RouteNoticeDetailRange>
    RouteViolatedConstraints& WithOccupancy(OccupancyT&& value) { SetOccupancy(std::forward<OccupancyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access radius restrictions based on time.</p>
     */
    inline const Aws::String& GetRestrictedTimes() const { return m_restrictedTimes; }
    inline bool RestrictedTimesHasBeenSet() const { return m_restrictedTimesHasBeenSet; }
    template<typename RestrictedTimesT = Aws::String>
    void SetRestrictedTimes(RestrictedTimesT&& value) { m_restrictedTimesHasBeenSet = true; m_restrictedTimes = std::forward<RestrictedTimesT>(value); }
    template<typename RestrictedTimesT = Aws::String>
    RouteViolatedConstraints& WithRestrictedTimes(RestrictedTimesT&& value) { SetRestrictedTimes(std::forward<RestrictedTimesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time dependent constraint.</p>
     */
    inline bool GetTimeDependent() const { return m_timeDependent; }
    inline bool TimeDependentHasBeenSet() const { return m_timeDependentHasBeenSet; }
    inline void SetTimeDependent(bool value) { m_timeDependentHasBeenSet = true; m_timeDependent = value; }
    inline RouteViolatedConstraints& WithTimeDependent(bool value) { SetTimeDependent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of trailers attached to the vehicle.</p> <p>Default Value:
     * <code>0</code> </p>
     */
    inline const RouteNoticeDetailRange& GetTrailerCount() const { return m_trailerCount; }
    inline bool TrailerCountHasBeenSet() const { return m_trailerCountHasBeenSet; }
    template<typename TrailerCountT = RouteNoticeDetailRange>
    void SetTrailerCount(TrailerCountT&& value) { m_trailerCountHasBeenSet = true; m_trailerCount = std::forward<TrailerCountT>(value); }
    template<typename TrailerCountT = RouteNoticeDetailRange>
    RouteViolatedConstraints& WithTrailerCount(TrailerCountT&& value) { SetTrailerCount(std::forward<TrailerCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode corresponding to the leg.</p>
     */
    inline bool GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(bool value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline RouteViolatedConstraints& WithTravelMode(bool value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Truck road type identifiers. <code>BK1</code> through <code>BK4</code> apply
     * only to Sweden. <code>A2,A4,B2,B4,C,D,ET2,ET4</code> apply only to Mexico.</p>
     *  <p>There are currently no other supported values as of 26th April
     * 2024.</p> 
     */
    inline const Aws::String& GetTruckRoadType() const { return m_truckRoadType; }
    inline bool TruckRoadTypeHasBeenSet() const { return m_truckRoadTypeHasBeenSet; }
    template<typename TruckRoadTypeT = Aws::String>
    void SetTruckRoadType(TruckRoadTypeT&& value) { m_truckRoadTypeHasBeenSet = true; m_truckRoadType = std::forward<TruckRoadTypeT>(value); }
    template<typename TruckRoadTypeT = Aws::String>
    RouteViolatedConstraints& WithTruckRoadType(TruckRoadTypeT&& value) { SetTruckRoadType(std::forward<TruckRoadTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the truck.</p>
     */
    inline RouteTruckType GetTruckType() const { return m_truckType; }
    inline bool TruckTypeHasBeenSet() const { return m_truckTypeHasBeenSet; }
    inline void SetTruckType(RouteTruckType value) { m_truckTypeHasBeenSet = true; m_truckType = value; }
    inline RouteViolatedConstraints& WithTruckType(RouteTruckType value) { SetTruckType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tunnel restriction code.</p> <p>Tunnel categories in this list indicate
     * the restrictions which apply to certain tunnels in Great Britain. They relate to
     * the types of dangerous goods that can be transported through them.</p> <ul> <li>
     * <p> <i>Tunnel Category B</i> </p> <ul> <li> <p> <i>Risk Level</i>: Limited
     * risk</p> </li> <li> <p> <i>Restrictions</i>: Few restrictions</p> </li> </ul>
     * </li> <li> <p> <i>Tunnel Category C</i> </p> <ul> <li> <p> <i>Risk Level</i>:
     * Medium risk</p> </li> <li> <p> <i>Restrictions</i>: Some restrictions</p> </li>
     * </ul> </li> <li> <p> <i>Tunnel Category D</i> </p> <ul> <li> <p> <i>Risk
     * Level</i>: High risk</p> </li> <li> <p> <i>Restrictions</i>: Many restrictions
     * occur</p> </li> </ul> </li> <li> <p> <i>Tunnel Category E</i> </p> <ul> <li> <p>
     * <i>Risk Level</i>: Very high risk</p> </li> <li> <p> <i>Restrictions</i>:
     * Restricted tunnel</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetTunnelRestrictionCode() const { return m_tunnelRestrictionCode; }
    inline bool TunnelRestrictionCodeHasBeenSet() const { return m_tunnelRestrictionCodeHasBeenSet; }
    template<typename TunnelRestrictionCodeT = Aws::String>
    void SetTunnelRestrictionCode(TunnelRestrictionCodeT&& value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode = std::forward<TunnelRestrictionCodeT>(value); }
    template<typename TunnelRestrictionCodeT = Aws::String>
    RouteViolatedConstraints& WithTunnelRestrictionCode(TunnelRestrictionCodeT&& value) { SetTunnelRestrictionCode(std::forward<TunnelRestrictionCodeT>(value)); return *this;}
    ///@}
  private:

    bool m_allHazardsRestricted{false};
    bool m_allHazardsRestrictedHasBeenSet = false;

    RouteNoticeDetailRange m_axleCount;
    bool m_axleCountHasBeenSet = false;

    Aws::Vector<RouteHazardousCargoType> m_hazardousCargos;
    bool m_hazardousCargosHasBeenSet = false;

    long long m_maxHeight{0};
    bool m_maxHeightHasBeenSet = false;

    long long m_maxKpraLength{0};
    bool m_maxKpraLengthHasBeenSet = false;

    long long m_maxLength{0};
    bool m_maxLengthHasBeenSet = false;

    long long m_maxPayloadCapacity{0};
    bool m_maxPayloadCapacityHasBeenSet = false;

    RouteWeightConstraint m_maxWeight;
    bool m_maxWeightHasBeenSet = false;

    long long m_maxWeightPerAxle{0};
    bool m_maxWeightPerAxleHasBeenSet = false;

    WeightPerAxleGroup m_maxWeightPerAxleGroup;
    bool m_maxWeightPerAxleGroupHasBeenSet = false;

    long long m_maxWidth{0};
    bool m_maxWidthHasBeenSet = false;

    RouteNoticeDetailRange m_occupancy;
    bool m_occupancyHasBeenSet = false;

    Aws::String m_restrictedTimes;
    bool m_restrictedTimesHasBeenSet = false;

    bool m_timeDependent{false};
    bool m_timeDependentHasBeenSet = false;

    RouteNoticeDetailRange m_trailerCount;
    bool m_trailerCountHasBeenSet = false;

    bool m_travelMode{false};
    bool m_travelModeHasBeenSet = false;

    Aws::String m_truckRoadType;
    bool m_truckRoadTypeHasBeenSet = false;

    RouteTruckType m_truckType{RouteTruckType::NOT_SET};
    bool m_truckTypeHasBeenSet = false;

    Aws::String m_tunnelRestrictionCode;
    bool m_tunnelRestrictionCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
