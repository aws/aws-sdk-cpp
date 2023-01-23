/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANStartFuotaTask.h>
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

LoRaWANStartFuotaTask::LoRaWANStartFuotaTask() : 
    m_startTimeHasBeenSet(false)
{
}

LoRaWANStartFuotaTask::LoRaWANStartFuotaTask(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANStartFuotaTask& LoRaWANStartFuotaTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANStartFuotaTask::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
