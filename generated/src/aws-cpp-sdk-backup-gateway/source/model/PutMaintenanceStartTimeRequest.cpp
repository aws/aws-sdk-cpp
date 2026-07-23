/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/PutMaintenanceStartTimeRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutMaintenanceStartTimeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gatewayArnHasBeenSet) {
    mapSize++;
  }
  if (m_hourOfDayHasBeenSet) {
    mapSize++;
  }
  if (m_minuteOfHourHasBeenSet) {
    mapSize++;
  }
  if (m_dayOfWeekHasBeenSet) {
    mapSize++;
  }
  if (m_dayOfMonthHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gatewayArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GatewayArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gatewayArn.c_str()));
  }

  if (m_hourOfDayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HourOfDay"));
    (m_hourOfDay >= 0) ? encoder.WriteUInt(m_hourOfDay) : encoder.WriteNegInt(m_hourOfDay);
  }

  if (m_minuteOfHourHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MinuteOfHour"));
    (m_minuteOfHour >= 0) ? encoder.WriteUInt(m_minuteOfHour) : encoder.WriteNegInt(m_minuteOfHour);
  }

  if (m_dayOfWeekHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DayOfWeek"));
    (m_dayOfWeek >= 0) ? encoder.WriteUInt(m_dayOfWeek) : encoder.WriteNegInt(m_dayOfWeek);
  }

  if (m_dayOfMonthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DayOfMonth"));
    (m_dayOfMonth >= 0) ? encoder.WriteUInt(m_dayOfMonth) : encoder.WriteNegInt(m_dayOfMonth);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutMaintenanceStartTimeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
