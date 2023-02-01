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

LoRaWANMulticastSession::LoRaWANMulticastSession() : 
    m_dlDr(0),
    m_dlDrHasBeenSet(false),
    m_dlFreq(0),
    m_dlFreqHasBeenSet(false),
    m_sessionStartTimeHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false)
{
}

LoRaWANMulticastSession::LoRaWANMulticastSession(JsonView jsonValue) : 
    m_dlDr(0),
    m_dlDrHasBeenSet(false),
    m_dlFreq(0),
    m_dlFreqHasBeenSet(false),
    m_sessionStartTimeHasBeenSet(false),
    m_sessionTimeout(0),
    m_sessionTimeoutHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
