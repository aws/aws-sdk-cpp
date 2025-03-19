/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANMulticastSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

LoRaWANMulticastSession::LoRaWANMulticastSession(JsonView jsonValue)
{
  *this = jsonValue;
}

LoRaWANMulticastSession& LoRaWANMulticastSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DlDr"))
  {
    m_dlDr = jsonValue.GetInteger("DlDr");
    m_dlDrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DlFreq"))
  {
    m_dlFreq = jsonValue.GetInteger("DlFreq");
    m_dlFreqHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionStartTime"))
  {
    m_sessionStartTime = jsonValue.GetString("SessionStartTime");
    m_sessionStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionTimeout"))
  {
    m_sessionTimeout = jsonValue.GetInteger("SessionTimeout");
    m_sessionTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PingSlotPeriod"))
  {
    m_pingSlotPeriod = jsonValue.GetInteger("PingSlotPeriod");
    m_pingSlotPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue LoRaWANMulticastSession::Jsonize() const
{
  JsonValue payload;

  if(m_dlDrHasBeenSet)
  {
   payload.WithInteger("DlDr", m_dlDr);

  }

  if(m_dlFreqHasBeenSet)
  {
   payload.WithInteger("DlFreq", m_dlFreq);

  }

  if(m_sessionStartTimeHasBeenSet)
  {
   payload.WithString("SessionStartTime", m_sessionStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sessionTimeoutHasBeenSet)
  {
   payload.WithInteger("SessionTimeout", m_sessionTimeout);

  }

  if(m_pingSlotPeriodHasBeenSet)
  {
   payload.WithInteger("PingSlotPeriod", m_pingSlotPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
