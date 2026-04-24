/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineEngineType.h>
#include <aws/geo-routes/model/IsolineVehicleLicensePlate.h>

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
 * <p>Vehicle characteristics and preferences that affect routing for passenger
 * cars. This includes vehicle type, occupancy, and speed restrictions that may
 * influence which roads can be used and expected travel times.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineCarOptions">AWS
 * API Reference</a></p>
 */
class IsolineCarOptions {
 public:
  AWS_GEOROUTES_API IsolineCarOptions() = default;
  AWS_GEOROUTES_API IsolineCarOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineCarOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline IsolineCarOptions& WithEngineType(IsolineEngineType value) {
    SetEngineType(value);
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
  IsolineCarOptions& WithLicensePlate(LicensePlateT&& value) {
    SetLicensePlate(std::forward<LicensePlateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum speed of the vehicle in kilometers per hour. When specified,
   * routes will not include roads with higher speed limits. Valid values range from
   * 3.6 km/h (1 m/s) to 252 km/h (70 m/s).</p> <p> <b>Unit</b>: <code>kilometers per
   * hour</code> </p>
   */
  inline double GetMaxSpeed() const { return m_maxSpeed; }
  inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
  inline void SetMaxSpeed(double value) {
    m_maxSpeedHasBeenSet = true;
    m_maxSpeed = value;
  }
  inline IsolineCarOptions& WithMaxSpeed(double value) {
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
  inline IsolineCarOptions& WithOccupancy(int value) {
    SetOccupancy(value);
    return *this;
  }
  ///@}
 private:
  IsolineEngineType m_engineType{IsolineEngineType::NOT_SET};

  IsolineVehicleLicensePlate m_licensePlate;

  double m_maxSpeed{0.0};

  int m_occupancy{0};
  bool m_engineTypeHasBeenSet = false;
  bool m_licensePlateHasBeenSet = false;
  bool m_maxSpeedHasBeenSet = false;
  bool m_occupancyHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
