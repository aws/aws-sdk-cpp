/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANFuotaTask.h>
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

LoRaWANFuotaTask::LoRaWANFuotaTask() : 
    m_rfRegion(SupportedRfRegion::NOT_SET),
    m_rfRegionHasBeenSet(false)
{
}

LoRaWANFuotaTask::LoRaWANFuotaTask(JsonView jsonValue) : 
    m_rfRegion(SupportedRfRegion::NOT_SET),
    m_rfRegionHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANFuotaTask& LoRaWANFuotaTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = SupportedRfRegionMapper::GetSupportedRfRegionForName(jsonValue.GetString("RfRegion"));

    m_rfRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANFuotaTask::Jsonize() const
{
  JsonValue payload;

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", SupportedRfRegionMapper::GetNameForSupportedRfRegion(m_rfRegion));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
