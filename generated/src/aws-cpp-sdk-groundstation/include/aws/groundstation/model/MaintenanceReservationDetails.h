/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/MaintenanceType.h>

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
 * <p>Details of a maintenance reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/MaintenanceReservationDetails">AWS
 * API Reference</a></p>
 */
class MaintenanceReservationDetails {
 public:
  AWS_GROUNDSTATION_API MaintenanceReservationDetails() = default;
  AWS_GROUNDSTATION_API MaintenanceReservationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API MaintenanceReservationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Type of maintenance.</p>
   */
  inline MaintenanceType GetMaintenanceType() const { return m_maintenanceType; }
  inline bool MaintenanceTypeHasBeenSet() const { return m_maintenanceTypeHasBeenSet; }
  inline void SetMaintenanceType(MaintenanceType value) {
    m_maintenanceTypeHasBeenSet = true;
    m_maintenanceType = value;
  }
  inline MaintenanceReservationDetails& WithMaintenanceType(MaintenanceType value) {
    SetMaintenanceType(value);
    return *this;
  }
  ///@}
 private:
  MaintenanceType m_maintenanceType{MaintenanceType::NOT_SET};
  bool m_maintenanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
