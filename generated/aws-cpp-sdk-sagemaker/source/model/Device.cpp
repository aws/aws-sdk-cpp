/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Device::Device() : 
    m_deviceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iotThingNameHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iotThingNameHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IotThingName"))
  {
    m_iotThingName = jsonValue.GetString("IotThingName");

    m_iotThingNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_iotThingNameHasBeenSet)
  {
   payload.WithString("IotThingName", m_iotThingName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
