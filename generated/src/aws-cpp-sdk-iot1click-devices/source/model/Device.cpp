/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

Device::Device() : 
    m_attributesHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    m_attributes = jsonValue.GetObject("attributes");

    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceId"))
  {
    m_deviceId = jsonValue.GetString("deviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("attributes", m_attributes.Jsonize());

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("deviceId", m_deviceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
