/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkCreateDeviceProfile.h>
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

SidewalkCreateDeviceProfile::SidewalkCreateDeviceProfile()
{
}

SidewalkCreateDeviceProfile::SidewalkCreateDeviceProfile(JsonView jsonValue)
{
  *this = jsonValue;
}

SidewalkCreateDeviceProfile& SidewalkCreateDeviceProfile::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SidewalkCreateDeviceProfile::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
