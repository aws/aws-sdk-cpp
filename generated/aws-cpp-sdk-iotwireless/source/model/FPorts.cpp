﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/FPorts.h>
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

FPorts::FPorts() : 
    m_fuota(0),
    m_fuotaHasBeenSet(false),
    m_multicast(0),
    m_multicastHasBeenSet(false),
    m_clockSync(0),
    m_clockSyncHasBeenSet(false)
{
}

FPorts::FPorts(JsonView jsonValue) : 
    m_fuota(0),
    m_fuotaHasBeenSet(false),
    m_multicast(0),
    m_multicastHasBeenSet(false),
    m_clockSync(0),
    m_clockSyncHasBeenSet(false)
{
  *this = jsonValue;
}

FPorts& FPorts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fuota"))
  {
    m_fuota = jsonValue.GetInteger("Fuota");

    m_fuotaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Multicast"))
  {
    m_multicast = jsonValue.GetInteger("Multicast");

    m_multicastHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClockSync"))
  {
    m_clockSync = jsonValue.GetInteger("ClockSync");

    m_clockSyncHasBeenSet = true;
  }

  return *this;
}

JsonValue FPorts::Jsonize() const
{
  JsonValue payload;

  if(m_fuotaHasBeenSet)
  {
   payload.WithInteger("Fuota", m_fuota);

  }

  if(m_multicastHasBeenSet)
  {
   payload.WithInteger("Multicast", m_multicast);

  }

  if(m_clockSyncHasBeenSet)
  {
   payload.WithInteger("ClockSync", m_clockSync);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
