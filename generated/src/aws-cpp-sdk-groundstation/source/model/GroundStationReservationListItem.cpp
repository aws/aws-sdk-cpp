/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/GroundStationReservationListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

GroundStationReservationListItem::GroundStationReservationListItem(JsonView jsonValue) { *this = jsonValue; }

GroundStationReservationListItem& GroundStationReservationListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reservationType")) {
    m_reservationType = ReservationTypeMapper::GetReservationTypeForName(jsonValue.GetString("reservationType"));
    m_reservationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groundStationId")) {
    m_groundStationId = jsonValue.GetString("groundStationId");
    m_groundStationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("antennaName")) {
    m_antennaName = jsonValue.GetString("antennaName");
    m_antennaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reservationDetails")) {
    m_reservationDetails = jsonValue.GetObject("reservationDetails");
    m_reservationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue GroundStationReservationListItem::Jsonize() const {
  JsonValue payload;

  if (m_reservationTypeHasBeenSet) {
    payload.WithString("reservationType", ReservationTypeMapper::GetNameForReservationType(m_reservationType));
  }

  if (m_groundStationIdHasBeenSet) {
    payload.WithString("groundStationId", m_groundStationId);
  }

  if (m_antennaNameHasBeenSet) {
    payload.WithString("antennaName", m_antennaName);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_reservationDetailsHasBeenSet) {
    payload.WithObject("reservationDetails", m_reservationDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
