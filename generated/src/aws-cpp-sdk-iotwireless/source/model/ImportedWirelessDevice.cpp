/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ImportedWirelessDevice.h>
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

ImportedWirelessDevice::ImportedWirelessDevice() : 
    m_sidewalkHasBeenSet(false)
{
}

ImportedWirelessDevice::ImportedWirelessDevice(JsonView jsonValue) : 
    m_sidewalkHasBeenSet(false)
{
  *this = jsonValue;
}

ImportedWirelessDevice& ImportedWirelessDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

    m_sidewalkHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportedWirelessDevice::Jsonize() const
{
  JsonValue payload;

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
