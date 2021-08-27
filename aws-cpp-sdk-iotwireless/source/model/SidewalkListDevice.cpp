/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkListDevice.h>
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

SidewalkListDevice::SidewalkListDevice() : 
    m_amazonIdHasBeenSet(false)
{
}

SidewalkListDevice::SidewalkListDevice(JsonView jsonValue) : 
    m_amazonIdHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkListDevice& SidewalkListDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonId"))
  {
    m_amazonId = jsonValue.GetString("AmazonId");

    m_amazonIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkListDevice::Jsonize() const
{
  JsonValue payload;

  if(m_amazonIdHasBeenSet)
  {
   payload.WithString("AmazonId", m_amazonId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
