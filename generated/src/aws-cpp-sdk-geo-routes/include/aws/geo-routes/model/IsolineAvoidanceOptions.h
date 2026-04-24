/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineAvoidanceArea.h>
#include <aws/geo-routes/model/IsolineAvoidanceZoneCategory.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Specifies features of the road network to avoid when calculating reachable
 * areas. These preferences guide route calculations but may be overridden when no
 * reasonable alternative exists. For example, if avoiding toll roads would make an
 * area unreachable, toll roads may still be used.</p> <p>Avoidance options include
 * physical features (like ferries and tunnels), road characteristics (like dirt
 * roads and highways), and regulated areas (like congestion zones). They can be
 * combined to match specific routing needs, such as avoiding both toll roads and
 * ferries.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineAvoidanceOptions">AWS
 * API Reference</a></p>
 */
class IsolineAvoidanceOptions {
 public:
  AWS_GEOROUTES_API IsolineAvoidanceOptions() = default;
  AWS_GEOROUTES_API IsolineAvoidanceOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineAvoidanceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies geographic areas to avoid where possible. Routes may still pass
   * through these areas if no reasonable alternative exists.</p>
   */
  inline const Aws::Vector<IsolineAvoidanceArea>& GetAreas() const { return m_areas; }
  inline bool AreasHasBeenSet() const { return m_areasHasBeenSet; }
  template <typename AreasT = Aws::Vector<IsolineAvoidanceArea>>
  void SetAreas(AreasT&& value) {
    m_areasHasBeenSet = true;
    m_areas = std::forward<AreasT>(value);
  }
  template <typename AreasT = Aws::Vector<IsolineAvoidanceArea>>
  IsolineAvoidanceOptions& WithAreas(AreasT&& value) {
    SetAreas(std::forward<AreasT>(value));
    return *this;
  }
  template <typename AreasT = IsolineAvoidanceArea>
  IsolineAvoidanceOptions& AddAreas(AreasT&& value) {
    m_areasHasBeenSet = true;
    m_areas.emplace_back(std::forward<AreasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid car shuttle trains (auto trains) where
   * possible. These may still be included if no reasonable alternative route
   * exists.</p>
   */
  inline bool GetCarShuttleTrains() const { return m_carShuttleTrains; }
  inline bool CarShuttleTrainsHasBeenSet() const { return m_carShuttleTrainsHasBeenSet; }
  inline void SetCarShuttleTrains(bool value) {
    m_carShuttleTrainsHasBeenSet = true;
    m_carShuttleTrains = value;
  }
  inline IsolineAvoidanceOptions& WithCarShuttleTrains(bool value) {
    SetCarShuttleTrains(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid controlled-access highways (such as
   * interstate highways or motorways) where possible. If a viable route cannot be
   * calculated using only local roads, controlled-access highways may still be
   * included.</p>
   */
  inline bool GetControlledAccessHighways() const { return m_controlledAccessHighways; }
  inline bool ControlledAccessHighwaysHasBeenSet() const { return m_controlledAccessHighwaysHasBeenSet; }
  inline void SetControlledAccessHighways(bool value) {
    m_controlledAccessHighwaysHasBeenSet = true;
    m_controlledAccessHighways = value;
  }
  inline IsolineAvoidanceOptions& WithControlledAccessHighways(bool value) {
    SetControlledAccessHighways(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid unpaved or dirt roads where possible. Routes
   * may still include dirt roads if no reasonable paved alternative exists.</p>
   */
  inline bool GetDirtRoads() const { return m_dirtRoads; }
  inline bool DirtRoadsHasBeenSet() const { return m_dirtRoadsHasBeenSet; }
  inline void SetDirtRoads(bool value) {
    m_dirtRoadsHasBeenSet = true;
    m_dirtRoads = value;
  }
  inline IsolineAvoidanceOptions& WithDirtRoads(bool value) {
    SetDirtRoads(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid ferries where possible. If a viable route
   * cannot be calculated without using ferries, they may still be included.</p>
   */
  inline bool GetFerries() const { return m_ferries; }
  inline bool FerriesHasBeenSet() const { return m_ferriesHasBeenSet; }
  inline void SetFerries(bool value) {
    m_ferriesHasBeenSet = true;
    m_ferries = value;
  }
  inline IsolineAvoidanceOptions& WithFerries(bool value) {
    SetFerries(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid roads that may be subject to seasonal
   * closures where possible. These roads may still be included if no reasonable
   * year-round alternative exists.</p>
   */
  inline bool GetSeasonalClosure() const { return m_seasonalClosure; }
  inline bool SeasonalClosureHasBeenSet() const { return m_seasonalClosureHasBeenSet; }
  inline void SetSeasonalClosure(bool value) {
    m_seasonalClosureHasBeenSet = true;
    m_seasonalClosure = value;
  }
  inline IsolineAvoidanceOptions& WithSeasonalClosure(bool value) {
    SetSeasonalClosure(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid toll roads where possible. If a viable route
   * cannot be calculated without using toll roads, they may still be included.</p>
   */
  inline bool GetTollRoads() const { return m_tollRoads; }
  inline bool TollRoadsHasBeenSet() const { return m_tollRoadsHasBeenSet; }
  inline void SetTollRoads(bool value) {
    m_tollRoadsHasBeenSet = true;
    m_tollRoads = value;
  }
  inline IsolineAvoidanceOptions& WithTollRoads(bool value) {
    SetTollRoads(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid roads that require electronic toll collection
   * transponders where possible. These roads may still be included if no viable
   * alternative route exists.</p>
   */
  inline bool GetTollTransponders() const { return m_tollTransponders; }
  inline bool TollTranspondersHasBeenSet() const { return m_tollTranspondersHasBeenSet; }
  inline void SetTollTransponders(bool value) {
    m_tollTranspondersHasBeenSet = true;
    m_tollTransponders = value;
  }
  inline IsolineAvoidanceOptions& WithTollTransponders(bool value) {
    SetTollTransponders(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For truck travel modes, indicates specific road classification types in
   * Sweden (<code> BK1</code> through <code>BK4</code>) and Mexico (<code>A2, A4,
   * B2, B4, C, D, ET2, ET4</code>) to avoid where possible. These road types may
   * still be used if no reasonable alternative exists.</p>  <p>There are
   * currently no other supported values as of 26th April 2024.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTruckRoadTypes() const { return m_truckRoadTypes; }
  inline bool TruckRoadTypesHasBeenSet() const { return m_truckRoadTypesHasBeenSet; }
  template <typename TruckRoadTypesT = Aws::Vector<Aws::String>>
  void SetTruckRoadTypes(TruckRoadTypesT&& value) {
    m_truckRoadTypesHasBeenSet = true;
    m_truckRoadTypes = std::forward<TruckRoadTypesT>(value);
  }
  template <typename TruckRoadTypesT = Aws::Vector<Aws::String>>
  IsolineAvoidanceOptions& WithTruckRoadTypes(TruckRoadTypesT&& value) {
    SetTruckRoadTypes(std::forward<TruckRoadTypesT>(value));
    return *this;
  }
  template <typename TruckRoadTypesT = Aws::String>
  IsolineAvoidanceOptions& AddTruckRoadTypes(TruckRoadTypesT&& value) {
    m_truckRoadTypesHasBeenSet = true;
    m_truckRoadTypes.emplace_back(std::forward<TruckRoadTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid tunnels where possible. If a viable route
   * cannot be calculated without using tunnels, they may still be included.</p>
   */
  inline bool GetTunnels() const { return m_tunnels; }
  inline bool TunnelsHasBeenSet() const { return m_tunnelsHasBeenSet; }
  inline void SetTunnels(bool value) {
    m_tunnelsHasBeenSet = true;
    m_tunnels = value;
  }
  inline IsolineAvoidanceOptions& WithTunnels(bool value) {
    SetTunnels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates a preference to avoid U-turns where possible. U-turns may still be
   * included if necessary to reach certain areas or when no reasonable alternative
   * exists.</p>
   */
  inline bool GetUTurns() const { return m_uTurns; }
  inline bool UTurnsHasBeenSet() const { return m_uTurnsHasBeenSet; }
  inline void SetUTurns(bool value) {
    m_uTurnsHasBeenSet = true;
    m_uTurns = value;
  }
  inline IsolineAvoidanceOptions& WithUTurns(bool value) {
    SetUTurns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates types of regulated zones (such as congestion pricing or
   * environmental zones) to avoid where possible. Routes may still pass through
   * these zones if no reasonable alternative exists.</p>
   */
  inline const Aws::Vector<IsolineAvoidanceZoneCategory>& GetZoneCategories() const { return m_zoneCategories; }
  inline bool ZoneCategoriesHasBeenSet() const { return m_zoneCategoriesHasBeenSet; }
  template <typename ZoneCategoriesT = Aws::Vector<IsolineAvoidanceZoneCategory>>
  void SetZoneCategories(ZoneCategoriesT&& value) {
    m_zoneCategoriesHasBeenSet = true;
    m_zoneCategories = std::forward<ZoneCategoriesT>(value);
  }
  template <typename ZoneCategoriesT = Aws::Vector<IsolineAvoidanceZoneCategory>>
  IsolineAvoidanceOptions& WithZoneCategories(ZoneCategoriesT&& value) {
    SetZoneCategories(std::forward<ZoneCategoriesT>(value));
    return *this;
  }
  template <typename ZoneCategoriesT = IsolineAvoidanceZoneCategory>
  IsolineAvoidanceOptions& AddZoneCategories(ZoneCategoriesT&& value) {
    m_zoneCategoriesHasBeenSet = true;
    m_zoneCategories.emplace_back(std::forward<ZoneCategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IsolineAvoidanceArea> m_areas;

  bool m_carShuttleTrains{false};

  bool m_controlledAccessHighways{false};

  bool m_dirtRoads{false};

  bool m_ferries{false};

  bool m_seasonalClosure{false};

  bool m_tollRoads{false};

  bool m_tollTransponders{false};

  Aws::Vector<Aws::String> m_truckRoadTypes;

  bool m_tunnels{false};

  bool m_uTurns{false};

  Aws::Vector<IsolineAvoidanceZoneCategory> m_zoneCategories;
  bool m_areasHasBeenSet = false;
  bool m_carShuttleTrainsHasBeenSet = false;
  bool m_controlledAccessHighwaysHasBeenSet = false;
  bool m_dirtRoadsHasBeenSet = false;
  bool m_ferriesHasBeenSet = false;
  bool m_seasonalClosureHasBeenSet = false;
  bool m_tollRoadsHasBeenSet = false;
  bool m_tollTranspondersHasBeenSet = false;
  bool m_truckRoadTypesHasBeenSet = false;
  bool m_tunnelsHasBeenSet = false;
  bool m_uTurnsHasBeenSet = false;
  bool m_zoneCategoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
