/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAccessibilityAttribute.h>
#include <aws/geo-routes/model/RouteIntermodalPedestrianOptions.h>
#include <aws/geo-routes/model/RouteIntermodalRentalOptions.h>
#include <aws/geo-routes/model/RouteIntermodalTaxiOptions.h>
#include <aws/geo-routes/model/RouteIntermodalTransitOptions.h>
#include <aws/geo-routes/model/RouteIntermodalVehicleOptions.h>

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
 * <p>Options related to intermodal routing.</p>  <p>Not supported in
 * <code>ap-southeast-1</code> and <code>ap-southeast-5</code> regions for <a
 * href="https://docs.aws.amazon.com/location/latest/developerguide/GrabMaps.html">GrabMaps</a>
 * customers.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteIntermodalOptions">AWS
 * API Reference</a></p>
 */
class RouteIntermodalOptions {
 public:
  AWS_GEOROUTES_API RouteIntermodalOptions() = default;
  AWS_GEOROUTES_API RouteIntermodalOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteIntermodalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Accessibility attributes to consider when calculating the route.</p>
   */
  inline const Aws::Vector<RouteAccessibilityAttribute>& GetAccessibilityAttributes() const { return m_accessibilityAttributes; }
  inline bool AccessibilityAttributesHasBeenSet() const { return m_accessibilityAttributesHasBeenSet; }
  template <typename AccessibilityAttributesT = Aws::Vector<RouteAccessibilityAttribute>>
  void SetAccessibilityAttributes(AccessibilityAttributesT&& value) {
    m_accessibilityAttributesHasBeenSet = true;
    m_accessibilityAttributes = std::forward<AccessibilityAttributesT>(value);
  }
  template <typename AccessibilityAttributesT = Aws::Vector<RouteAccessibilityAttribute>>
  RouteIntermodalOptions& WithAccessibilityAttributes(AccessibilityAttributesT&& value) {
    SetAccessibilityAttributes(std::forward<AccessibilityAttributesT>(value));
    return *this;
  }
  inline RouteIntermodalOptions& AddAccessibilityAttributes(RouteAccessibilityAttribute value) {
    m_accessibilityAttributesHasBeenSet = true;
    m_accessibilityAttributes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of transfers allowed when calculating the route.</p>
   */
  inline int GetMaxTransfers() const { return m_maxTransfers; }
  inline bool MaxTransfersHasBeenSet() const { return m_maxTransfersHasBeenSet; }
  inline void SetMaxTransfers(int value) {
    m_maxTransfersHasBeenSet = true;
    m_maxTransfers = value;
  }
  inline RouteIntermodalOptions& WithMaxTransfers(int value) {
    SetMaxTransfers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for the pedestrian leg of the intermodal route.</p>
   */
  inline const RouteIntermodalPedestrianOptions& GetPedestrian() const { return m_pedestrian; }
  inline bool PedestrianHasBeenSet() const { return m_pedestrianHasBeenSet; }
  template <typename PedestrianT = RouteIntermodalPedestrianOptions>
  void SetPedestrian(PedestrianT&& value) {
    m_pedestrianHasBeenSet = true;
    m_pedestrian = std::forward<PedestrianT>(value);
  }
  template <typename PedestrianT = RouteIntermodalPedestrianOptions>
  RouteIntermodalOptions& WithPedestrian(PedestrianT&& value) {
    SetPedestrian(std::forward<PedestrianT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for the rental leg of the intermodal route.</p>
   */
  inline const RouteIntermodalRentalOptions& GetRental() const { return m_rental; }
  inline bool RentalHasBeenSet() const { return m_rentalHasBeenSet; }
  template <typename RentalT = RouteIntermodalRentalOptions>
  void SetRental(RentalT&& value) {
    m_rentalHasBeenSet = true;
    m_rental = std::forward<RentalT>(value);
  }
  template <typename RentalT = RouteIntermodalRentalOptions>
  RouteIntermodalOptions& WithRental(RentalT&& value) {
    SetRental(std::forward<RentalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for the taxi leg of the intermodal route.</p>
   */
  inline const RouteIntermodalTaxiOptions& GetTaxi() const { return m_taxi; }
  inline bool TaxiHasBeenSet() const { return m_taxiHasBeenSet; }
  template <typename TaxiT = RouteIntermodalTaxiOptions>
  void SetTaxi(TaxiT&& value) {
    m_taxiHasBeenSet = true;
    m_taxi = std::forward<TaxiT>(value);
  }
  template <typename TaxiT = RouteIntermodalTaxiOptions>
  RouteIntermodalOptions& WithTaxi(TaxiT&& value) {
    SetTaxi(std::forward<TaxiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for the transit leg of the intermodal route.</p>
   */
  inline const RouteIntermodalTransitOptions& GetTransit() const { return m_transit; }
  inline bool TransitHasBeenSet() const { return m_transitHasBeenSet; }
  template <typename TransitT = RouteIntermodalTransitOptions>
  void SetTransit(TransitT&& value) {
    m_transitHasBeenSet = true;
    m_transit = std::forward<TransitT>(value);
  }
  template <typename TransitT = RouteIntermodalTransitOptions>
  RouteIntermodalOptions& WithTransit(TransitT&& value) {
    SetTransit(std::forward<TransitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for the vehicle leg of the intermodal route.</p>
   */
  inline const RouteIntermodalVehicleOptions& GetVehicle() const { return m_vehicle; }
  inline bool VehicleHasBeenSet() const { return m_vehicleHasBeenSet; }
  template <typename VehicleT = RouteIntermodalVehicleOptions>
  void SetVehicle(VehicleT&& value) {
    m_vehicleHasBeenSet = true;
    m_vehicle = std::forward<VehicleT>(value);
  }
  template <typename VehicleT = RouteIntermodalVehicleOptions>
  RouteIntermodalOptions& WithVehicle(VehicleT&& value) {
    SetVehicle(std::forward<VehicleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteAccessibilityAttribute> m_accessibilityAttributes;

  int m_maxTransfers{0};

  RouteIntermodalPedestrianOptions m_pedestrian;

  RouteIntermodalRentalOptions m_rental;

  RouteIntermodalTaxiOptions m_taxi;

  RouteIntermodalTransitOptions m_transit;

  RouteIntermodalVehicleOptions m_vehicle;
  bool m_accessibilityAttributesHasBeenSet = false;
  bool m_maxTransfersHasBeenSet = false;
  bool m_pedestrianHasBeenSet = false;
  bool m_rentalHasBeenSet = false;
  bool m_taxiHasBeenSet = false;
  bool m_transitHasBeenSet = false;
  bool m_vehicleHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
