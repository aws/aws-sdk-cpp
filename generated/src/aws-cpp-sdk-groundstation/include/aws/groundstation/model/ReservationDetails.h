/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ContactReservationDetails.h>
#include <aws/groundstation/model/MaintenanceReservationDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Details of a ground station reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReservationDetails">AWS
 * API Reference</a></p>
 */
class ReservationDetails {
 public:
  AWS_GROUNDSTATION_API ReservationDetails() = default;
  AWS_GROUNDSTATION_API ReservationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API ReservationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details of a maintenance reservation.</p>
   */
  inline const MaintenanceReservationDetails& GetMaintenance() const { return m_maintenance; }
  inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
  template <typename MaintenanceT = MaintenanceReservationDetails>
  void SetMaintenance(MaintenanceT&& value) {
    m_maintenanceHasBeenSet = true;
    m_maintenance = std::forward<MaintenanceT>(value);
  }
  template <typename MaintenanceT = MaintenanceReservationDetails>
  ReservationDetails& WithMaintenance(MaintenanceT&& value) {
    SetMaintenance(std::forward<MaintenanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of a contact reservation.</p>
   */
  inline const ContactReservationDetails& GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  template <typename ContactT = ContactReservationDetails>
  void SetContact(ContactT&& value) {
    m_contactHasBeenSet = true;
    m_contact = std::forward<ContactT>(value);
  }
  template <typename ContactT = ContactReservationDetails>
  ReservationDetails& WithContact(ContactT&& value) {
    SetContact(std::forward<ContactT>(value));
    return *this;
  }
  ///@}
 private:
  MaintenanceReservationDetails m_maintenance;

  ContactReservationDetails m_contact;
  bool m_maintenanceHasBeenSet = false;
  bool m_contactHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
