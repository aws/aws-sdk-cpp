/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/MaintenanceReservationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

MaintenanceReservationDetails::MaintenanceReservationDetails(JsonView jsonValue) { *this = jsonValue; }

MaintenanceReservationDetails& MaintenanceReservationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maintenanceType")) {
    m_maintenanceType = MaintenanceTypeMapper::GetMaintenanceTypeForName(jsonValue.GetString("maintenanceType"));
    m_maintenanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue MaintenanceReservationDetails::Jsonize() const {
  JsonValue payload;

  if (m_maintenanceTypeHasBeenSet) {
    payload.WithString("maintenanceType", MaintenanceTypeMapper::GetNameForMaintenanceType(m_maintenanceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
