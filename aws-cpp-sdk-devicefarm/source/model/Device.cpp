﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/devicefarm/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Device::Device() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_formFactor(DeviceFormFactor::NOT_SET),
    m_formFactorHasBeenSet(false),
    m_platform(DevicePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_osHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_heapSize(0),
    m_heapSizeHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_radioHasBeenSet(false),
    m_remoteAccessEnabled(false),
    m_remoteAccessEnabledHasBeenSet(false),
    m_remoteDebugEnabled(false),
    m_remoteDebugEnabledHasBeenSet(false),
    m_fleetTypeHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_formFactor(DeviceFormFactor::NOT_SET),
    m_formFactorHasBeenSet(false),
    m_platform(DevicePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_osHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_heapSize(0),
    m_heapSizeHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_radioHasBeenSet(false),
    m_remoteAccessEnabled(false),
    m_remoteAccessEnabledHasBeenSet(false),
    m_remoteDebugEnabled(false),
    m_remoteDebugEnabledHasBeenSet(false),
    m_fleetTypeHasBeenSet(false),
    m_fleetNameHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manufacturer"))
  {
    m_manufacturer = jsonValue.GetString("manufacturer");

    m_manufacturerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formFactor"))
  {
    m_formFactor = DeviceFormFactorMapper::GetDeviceFormFactorForName(jsonValue.GetString("formFactor"));

    m_formFactorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = DevicePlatformMapper::GetDevicePlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("os"))
  {
    m_os = jsonValue.GetString("os");

    m_osHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetObject("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = jsonValue.GetObject("resolution");

    m_resolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("heapSize"))
  {
    m_heapSize = jsonValue.GetInt64("heapSize");

    m_heapSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInt64("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("carrier"))
  {
    m_carrier = jsonValue.GetString("carrier");

    m_carrierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("radio"))
  {
    m_radio = jsonValue.GetString("radio");

    m_radioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteAccessEnabled"))
  {
    m_remoteAccessEnabled = jsonValue.GetBool("remoteAccessEnabled");

    m_remoteAccessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteDebugEnabled"))
  {
    m_remoteDebugEnabled = jsonValue.GetBool("remoteDebugEnabled");

    m_remoteDebugEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleetType"))
  {
    m_fleetType = jsonValue.GetString("fleetType");

    m_fleetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleetName"))
  {
    m_fleetName = jsonValue.GetString("fleetName");

    m_fleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instances"))
  {
    Array<JsonView> instancesJsonList = jsonValue.GetArray("instances");
    for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
    {
      m_instances.push_back(instancesJsonList[instancesIndex].AsObject());
    }
    m_instancesHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_manufacturerHasBeenSet)
  {
   payload.WithString("manufacturer", m_manufacturer);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_formFactorHasBeenSet)
  {
   payload.WithString("formFactor", DeviceFormFactorMapper::GetNameForDeviceFormFactor(m_formFactor));
  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", DevicePlatformMapper::GetNameForDevicePlatform(m_platform));
  }

  if(m_osHasBeenSet)
  {
   payload.WithString("os", m_os);

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithObject("cpu", m_cpu.Jsonize());

  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithObject("resolution", m_resolution.Jsonize());

  }

  if(m_heapSizeHasBeenSet)
  {
   payload.WithInt64("heapSize", m_heapSize);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInt64("memory", m_memory);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_carrierHasBeenSet)
  {
   payload.WithString("carrier", m_carrier);

  }

  if(m_radioHasBeenSet)
  {
   payload.WithString("radio", m_radio);

  }

  if(m_remoteAccessEnabledHasBeenSet)
  {
   payload.WithBool("remoteAccessEnabled", m_remoteAccessEnabled);

  }

  if(m_remoteDebugEnabledHasBeenSet)
  {
   payload.WithBool("remoteDebugEnabled", m_remoteDebugEnabled);

  }

  if(m_fleetTypeHasBeenSet)
  {
   payload.WithString("fleetType", m_fleetType);

  }

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("fleetName", m_fleetName);

  }

  if(m_instancesHasBeenSet)
  {
   Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsObject(m_instances[instancesIndex].Jsonize());
   }
   payload.WithArray("instances", std::move(instancesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
