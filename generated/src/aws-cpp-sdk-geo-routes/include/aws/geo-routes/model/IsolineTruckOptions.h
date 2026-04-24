/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineEngineType.h>
#include <aws/geo-routes/model/IsolineHazardousCargoType.h>
#include <aws/geo-routes/model/IsolineTrailerOptions.h>
#include <aws/geo-routes/model/IsolineTruckType.h>
#include <aws/geo-routes/model/IsolineVehicleLicensePlate.h>
#include <aws/geo-routes/model/WeightPerAxleGroup.h>

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
 * <p>Vehicle characteristics and restrictions that affect which roads can be used
 * when calculating reachable areas for trucks. These details ensure that routes
 * respect physical limitations and legal requirements.</p> <p>These apply when the
 * provided travel mode is <code>Truck</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineTruckOptions">AWS
 * API Reference</a></p>
 */
class IsolineTruckOptions {
 public:
  AWS_GEOROUTES_API IsolineTruckOptions() = default;
  AWS_GEOROUTES_API IsolineTruckOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineTruckOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of axles on the vehicle. Required for certain road
   * restrictions and weight limit calculations.</p>
   */
  inline int GetAxleCount() const { return m_axleCount; }
  inline bool AxleCountHasBeenSet() const { return m_axleCountHasBeenSet; }
  inline void SetAxleCount(int value) {
    m_axleCountHasBeenSet = true;
    m_axleCount = value;
  }
  inline IsolineTruckOptions& WithAxleCount(int value) {
    SetAxleCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of engine powering the vehicle, which may affect route calculation
   * due to road restrictions or vehicle characteristics.</p> <ul> <li> <p>
   * <code>INTERNAL_COMBUSTION</code>—Standard gasoline or diesel engine.</p> </li>
   * <li> <p> <code>ELECTRIC</code>—Battery electric vehicle.</p> </li> <li> <p>
   * <code>PLUGIN_HYBRID</code>—Combination of electric and internal combustion
   * engines with plug-in charging capability.</p> </li> </ul>
   */
  inline IsolineEngineType GetEngineType() const { return m_engineType; }
  inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
  inline void SetEngineType(IsolineEngineType value) {
    m_engineTypeHasBeenSet = true;
    m_engineType = value;
  }
  inline IsolineTruckOptions& WithEngineType(IsolineEngineType value) {
    SetEngineType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gross vehicle weight (the maximum weight a vehicle can safely operate at,
   * as specified by the manufacturer) in kilograms. Used to avoid roads with weight
   * restrictions and ensure compliance with maximum allowed vehicle weight
   * regulations.</p> <p> <b>Unit</b>: <code>kilograms</code> </p>
   */
  inline long long GetGrossWeight() const { return m_grossWeight; }
  inline bool GrossWeightHasBeenSet() const { return m_grossWeightHasBeenSet; }
  inline void SetGrossWeight(long long value) {
    m_grossWeightHasBeenSet = true;
    m_grossWeight = value;
  }
  inline IsolineTruckOptions& WithGrossWeight(long long value) {
    SetGrossWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Types of hazardous materials being transported. This affects which roads and
   * tunnels can be used based on local regulations.</p> <ul> <li> <p>
   * <code>Combustible</code>—Materials that can burn readily</p> </li> <li> <p>
   * <code>Corrosive</code>—Materials that can destroy or irreversibly damage other
   * substances</p> </li> <li> <p> <code>Explosive</code>—Materials that can produce
   * an explosion by chemical reaction</p> </li> <li> <p>
   * <code>Flammable</code>—Materials that can easily ignite</p> </li> <li> <p>
   * <code>Gas</code>—Hazardous materials in gaseous form</p> </li> <li> <p>
   * <code>HarmfulToWater</code>—Materials that pose a risk to water sources if
   * released</p> </li> <li> <p> <code>Organic</code>—Hazardous organic compounds</p>
   * </li> <li> <p> <code>Other</code>—Hazardous materials not covered by other
   * categories</p> </li> <li> <p> <code>Poison</code>—Toxic materials</p> </li> <li>
   * <p> <code>PoisonousInhalation</code>—Materials that are toxic when inhaled</p>
   * </li> <li> <p> <code>Radioactive</code>—Materials that emit ionizing
   * radiation</p> </li> </ul>
   */
  inline const Aws::Vector<IsolineHazardousCargoType>& GetHazardousCargos() const { return m_hazardousCargos; }
  inline bool HazardousCargosHasBeenSet() const { return m_hazardousCargosHasBeenSet; }
  template <typename HazardousCargosT = Aws::Vector<IsolineHazardousCargoType>>
  void SetHazardousCargos(HazardousCargosT&& value) {
    m_hazardousCargosHasBeenSet = true;
    m_hazardousCargos = std::forward<HazardousCargosT>(value);
  }
  template <typename HazardousCargosT = Aws::Vector<IsolineHazardousCargoType>>
  IsolineTruckOptions& WithHazardousCargos(HazardousCargosT&& value) {
    SetHazardousCargos(std::forward<HazardousCargosT>(value));
    return *this;
  }
  inline IsolineTruckOptions& AddHazardousCargos(IsolineHazardousCargoType value) {
    m_hazardousCargosHasBeenSet = true;
    m_hazardousCargos.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vehicle height in centimeters. Used to avoid routes with low bridges or
   * other height restrictions.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
   */
  inline long long GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  inline void SetHeight(long long value) {
    m_heightHasBeenSet = true;
    m_height = value;
  }
  inline IsolineTruckOptions& WithHeight(long long value) {
    SetHeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height in centimeters measured from the ground to the highest point above
   * the first axle. Used for specific bridge and tunnel clearance restrictions.</p>
   * <p> <b>Unit</b>: <code>centimeters</code> </p>
   */
  inline long long GetHeightAboveFirstAxle() const { return m_heightAboveFirstAxle; }
  inline bool HeightAboveFirstAxleHasBeenSet() const { return m_heightAboveFirstAxleHasBeenSet; }
  inline void SetHeightAboveFirstAxle(long long value) {
    m_heightAboveFirstAxleHasBeenSet = true;
    m_heightAboveFirstAxle = value;
  }
  inline IsolineTruckOptions& WithHeightAboveFirstAxle(long long value) {
    SetHeightAboveFirstAxle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kingpin to rear axle (KPRA) length in centimeters. Used to determine if
   * the vehicle can safely navigate turns and intersections.</p> <p> <b>Unit</b>:
   * <code>centimeters</code> </p>
   */
  inline long long GetKpraLength() const { return m_kpraLength; }
  inline bool KpraLengthHasBeenSet() const { return m_kpraLengthHasBeenSet; }
  inline void SetKpraLength(long long value) {
    m_kpraLengthHasBeenSet = true;
    m_kpraLength = value;
  }
  inline IsolineTruckOptions& WithKpraLength(long long value) {
    SetKpraLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total vehicle length in centimeters. Used to avoid roads with length
   * restrictions and determine if the vehicle can safely navigate turns.</p> <p>
   * <b>Unit</b>: <code>centimeters</code> </p>
   */
  inline long long GetLength() const { return m_length; }
  inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
  inline void SetLength(long long value) {
    m_lengthHasBeenSet = true;
    m_length = value;
  }
  inline IsolineTruckOptions& WithLength(long long value) {
    SetLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License plate information used in regions where road access or routing
   * restrictions are based on license plate numbers.</p>
   */
  inline const IsolineVehicleLicensePlate& GetLicensePlate() const { return m_licensePlate; }
  inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
  template <typename LicensePlateT = IsolineVehicleLicensePlate>
  void SetLicensePlate(LicensePlateT&& value) {
    m_licensePlateHasBeenSet = true;
    m_licensePlate = std::forward<LicensePlateT>(value);
  }
  template <typename LicensePlateT = IsolineVehicleLicensePlate>
  IsolineTruckOptions& WithLicensePlate(LicensePlateT&& value) {
    SetLicensePlate(std::forward<LicensePlateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum speed in kilometers per hour at which the vehicle can or is
   * permitted to travel. This affects travel time calculations and may result in
   * different reachable areas compared to using default speed limits. Value must be
   * between 3.6 and 252 kilometers per hour.</p> <p> <b>Unit</b>: <code>kilometers
   * per hour</code> </p>
   */
  inline double GetMaxSpeed() const { return m_maxSpeed; }
  inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
  inline void SetMaxSpeed(double value) {
    m_maxSpeedHasBeenSet = true;
    m_maxSpeed = value;
  }
  inline IsolineTruckOptions& WithMaxSpeed(double value) {
    SetMaxSpeed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of occupants in the vehicle. This can affect route calculations by
   * enabling the use of high-occupancy vehicle (HOV) lanes where minimum occupancy
   * requirements are met.</p> <p>Default value: <code>1</code> </p>
   */
  inline int GetOccupancy() const { return m_occupancy; }
  inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
  inline void SetOccupancy(int value) {
    m_occupancyHasBeenSet = true;
    m_occupancy = value;
  }
  inline IsolineTruckOptions& WithOccupancy(int value) {
    SetOccupancy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum cargo weight in kilograms that the vehicle (including attached
   * trailers) is rated to carry.</p> <p> <b>Unit</b>: <code>kilograms</code> </p>
   */
  inline long long GetPayloadCapacity() const { return m_payloadCapacity; }
  inline bool PayloadCapacityHasBeenSet() const { return m_payloadCapacityHasBeenSet; }
  inline void SetPayloadCapacity(long long value) {
    m_payloadCapacityHasBeenSet = true;
    m_payloadCapacity = value;
  }
  inline IsolineTruckOptions& WithPayloadCapacity(long long value) {
    SetPayloadCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of tires on the vehicle.</p>
   */
  inline int GetTireCount() const { return m_tireCount; }
  inline bool TireCountHasBeenSet() const { return m_tireCountHasBeenSet; }
  inline void SetTireCount(int value) {
    m_tireCountHasBeenSet = true;
    m_tireCount = value;
  }
  inline IsolineTruckOptions& WithTireCount(int value) {
    SetTireCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional specifications for attached trailers. When provided, trailer
   * characteristics affect route calculations to ensure compliance with
   * trailer-specific restrictions such as length limits, weight distribution
   * requirements, and access restrictions for multi-trailer configurations.</p>
   */
  inline const IsolineTrailerOptions& GetTrailer() const { return m_trailer; }
  inline bool TrailerHasBeenSet() const { return m_trailerHasBeenSet; }
  template <typename TrailerT = IsolineTrailerOptions>
  void SetTrailer(TrailerT&& value) {
    m_trailerHasBeenSet = true;
    m_trailer = std::forward<TrailerT>(value);
  }
  template <typename TrailerT = IsolineTrailerOptions>
  IsolineTruckOptions& WithTrailer(TrailerT&& value) {
    SetTrailer(std::forward<TrailerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of truck: <code>LightTruck</code> for smaller delivery vehicles,
   * <code> StraightTruck </code> for rigid body trucks, or <code>Tractor</code> for
   * tractor-trailer combinations.</p>
   */
  inline IsolineTruckType GetTruckType() const { return m_truckType; }
  inline bool TruckTypeHasBeenSet() const { return m_truckTypeHasBeenSet; }
  inline void SetTruckType(IsolineTruckType value) {
    m_truckTypeHasBeenSet = true;
    m_truckType = value;
  }
  inline IsolineTruckOptions& WithTruckType(IsolineTruckType value) {
    SetTruckType(value);
    return *this;
  }
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
  template <typename TunnelRestrictionCodeT = Aws::String>
  void SetTunnelRestrictionCode(TunnelRestrictionCodeT&& value) {
    m_tunnelRestrictionCodeHasBeenSet = true;
    m_tunnelRestrictionCode = std::forward<TunnelRestrictionCodeT>(value);
  }
  template <typename TunnelRestrictionCodeT = Aws::String>
  IsolineTruckOptions& WithTunnelRestrictionCode(TunnelRestrictionCodeT&& value) {
    SetTunnelRestrictionCode(std::forward<TunnelRestrictionCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The heaviest weight per axle in kilograms, regardless of axle type or
   * grouping. Used for roads with axle-weight restrictions in regions where
   * regulations don't distinguish between different axle configurations.</p> <p>
   * <b>Unit</b>: <code>kilograms</code> </p>
   */
  inline long long GetWeightPerAxle() const { return m_weightPerAxle; }
  inline bool WeightPerAxleHasBeenSet() const { return m_weightPerAxleHasBeenSet; }
  inline void SetWeightPerAxle(long long value) {
    m_weightPerAxleHasBeenSet = true;
    m_weightPerAxle = value;
  }
  inline IsolineTruckOptions& WithWeightPerAxle(long long value) {
    SetWeightPerAxle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the total weight for different axle group configurations. Used in
   * regions where regulations set different weight limits based on axle group
   * types.</p> <p> <b>Unit</b>: <code>kilograms</code> </p>
   */
  inline const WeightPerAxleGroup& GetWeightPerAxleGroup() const { return m_weightPerAxleGroup; }
  inline bool WeightPerAxleGroupHasBeenSet() const { return m_weightPerAxleGroupHasBeenSet; }
  template <typename WeightPerAxleGroupT = WeightPerAxleGroup>
  void SetWeightPerAxleGroup(WeightPerAxleGroupT&& value) {
    m_weightPerAxleGroupHasBeenSet = true;
    m_weightPerAxleGroup = std::forward<WeightPerAxleGroupT>(value);
  }
  template <typename WeightPerAxleGroupT = WeightPerAxleGroup>
  IsolineTruckOptions& WithWeightPerAxleGroup(WeightPerAxleGroupT&& value) {
    SetWeightPerAxleGroup(std::forward<WeightPerAxleGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vehicle width in centimeters. Used to avoid routes with width
   * restrictions.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
   */
  inline long long GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  inline void SetWidth(long long value) {
    m_widthHasBeenSet = true;
    m_width = value;
  }
  inline IsolineTruckOptions& WithWidth(long long value) {
    SetWidth(value);
    return *this;
  }
  ///@}
 private:
  int m_axleCount{0};

  IsolineEngineType m_engineType{IsolineEngineType::NOT_SET};

  long long m_grossWeight{0};

  Aws::Vector<IsolineHazardousCargoType> m_hazardousCargos;

  long long m_height{0};

  long long m_heightAboveFirstAxle{0};

  long long m_kpraLength{0};

  long long m_length{0};

  IsolineVehicleLicensePlate m_licensePlate;

  double m_maxSpeed{0.0};

  int m_occupancy{0};

  long long m_payloadCapacity{0};

  int m_tireCount{0};

  IsolineTrailerOptions m_trailer;

  IsolineTruckType m_truckType{IsolineTruckType::NOT_SET};

  Aws::String m_tunnelRestrictionCode;

  long long m_weightPerAxle{0};

  WeightPerAxleGroup m_weightPerAxleGroup;

  long long m_width{0};
  bool m_axleCountHasBeenSet = false;
  bool m_engineTypeHasBeenSet = false;
  bool m_grossWeightHasBeenSet = false;
  bool m_hazardousCargosHasBeenSet = false;
  bool m_heightHasBeenSet = false;
  bool m_heightAboveFirstAxleHasBeenSet = false;
  bool m_kpraLengthHasBeenSet = false;
  bool m_lengthHasBeenSet = false;
  bool m_licensePlateHasBeenSet = false;
  bool m_maxSpeedHasBeenSet = false;
  bool m_occupancyHasBeenSet = false;
  bool m_payloadCapacityHasBeenSet = false;
  bool m_tireCountHasBeenSet = false;
  bool m_trailerHasBeenSet = false;
  bool m_truckTypeHasBeenSet = false;
  bool m_tunnelRestrictionCodeHasBeenSet = false;
  bool m_weightPerAxleHasBeenSet = false;
  bool m_weightPerAxleGroupHasBeenSet = false;
  bool m_widthHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
