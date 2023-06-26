/**
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
    m_clockSyncHasBeenSet(false),
    m_positioningHasBeenSet(false),
    m_applicationsHasBeenSet(false)
{
}

FPorts::FPorts(JsonView jsonValue) : 
    m_fuota(0),
    m_fuotaHasBeenSet(false),
    m_multicast(0),
    m_multicastHasBeenSet(false),
    m_clockSync(0),
    m_clockSyncHasBeenSet(false),
    m_positioningHasBeenSet(false),
    m_applicationsHasBeenSet(false)
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

  if(jsonValue.ValueExists("Positioning"))
  {
    m_positioning = jsonValue.GetObject("Positioning");

    m_positioningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Applications"))
  {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsObject());
    }
    m_applicationsHasBeenSet = true;
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

  if(m_positioningHasBeenSet)
  {
   payload.WithObject("Positioning", m_positioning.Jsonize());

  }

  if(m_applicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsObject(m_applications[applicationsIndex].Jsonize());
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
