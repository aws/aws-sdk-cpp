/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANFuotaTaskGetInfo.h>
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

LoRaWANFuotaTaskGetInfo::LoRaWANFuotaTaskGetInfo() : 
    m_rfRegionHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

LoRaWANFuotaTaskGetInfo::LoRaWANFuotaTaskGetInfo(JsonView jsonValue) : 
    m_rfRegionHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANFuotaTaskGetInfo& LoRaWANFuotaTaskGetInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = jsonValue.GetString("RfRegion");

    m_rfRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANFuotaTaskGetInfo::Jsonize() const
{
  JsonValue payload;

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", m_rfRegion);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
