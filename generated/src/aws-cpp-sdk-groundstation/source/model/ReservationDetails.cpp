/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/ReservationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

ReservationDetails::ReservationDetails(JsonView jsonValue) { *this = jsonValue; }

ReservationDetails& ReservationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maintenance")) {
    m_maintenance = jsonValue.GetObject("maintenance");
    m_maintenanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contact")) {
    m_contact = jsonValue.GetObject("contact");
    m_contactHasBeenSet = true;
  }
  return *this;
}

JsonValue ReservationDetails::Jsonize() const {
  JsonValue payload;

  if (m_maintenanceHasBeenSet) {
    payload.WithObject("maintenance", m_maintenance.Jsonize());
  }

  if (m_contactHasBeenSet) {
    payload.WithObject("contact", m_contact.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
