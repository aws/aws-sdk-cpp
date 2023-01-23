/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PlatformDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

PlatformDevice::PlatformDevice() : 
    m_idHasBeenSet(false),
    m_type(PlatformDeviceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PlatformDevice::PlatformDevice(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(PlatformDeviceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PlatformDevice& PlatformDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = PlatformDeviceTypeMapper::GetPlatformDeviceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PlatformDevice::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PlatformDeviceTypeMapper::GetNameForPlatformDeviceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
