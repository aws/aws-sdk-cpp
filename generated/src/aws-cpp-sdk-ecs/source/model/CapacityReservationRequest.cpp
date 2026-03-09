/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/CapacityReservationRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

CapacityReservationRequest::CapacityReservationRequest(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationRequest& CapacityReservationRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reservationGroupArn")) {
    m_reservationGroupArn = jsonValue.GetString("reservationGroupArn");
    m_reservationGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reservationPreference")) {
    m_reservationPreference =
        CapacityReservationPreferenceMapper::GetCapacityReservationPreferenceForName(jsonValue.GetString("reservationPreference"));
    m_reservationPreferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationRequest::Jsonize() const {
  JsonValue payload;

  if (m_reservationGroupArnHasBeenSet) {
    payload.WithString("reservationGroupArn", m_reservationGroupArn);
  }

  if (m_reservationPreferenceHasBeenSet) {
    payload.WithString("reservationPreference",
                       CapacityReservationPreferenceMapper::GetNameForCapacityReservationPreference(m_reservationPreference));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
