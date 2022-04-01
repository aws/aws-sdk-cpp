/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

DeviceConfig::DeviceConfig() : 
    m_deviceHasBeenSet(false)
{
}

DeviceConfig::DeviceConfig(JsonView jsonValue) : 
    m_deviceHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceConfig& DeviceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("device"))
  {
    m_device = jsonValue.GetString("device");

    m_deviceHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_deviceHasBeenSet)
  {
   payload.WithString("device", m_device);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
