/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DeviceFormFactor.h>
#include <aws/devicefarm/model/DevicePlatform.h>
#include <aws/devicefarm/model/CPU.h>
#include <aws/devicefarm/model/Resolution.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a device type that an app is tested against.</p>
   */
  class AWS_DEVICEFARM_API Device
  {
  public:
    Device();
    Device(const Aws::Utils::Json::JsonValue& jsonValue);
    Device& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline Device& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline Device& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline Device& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The device's display name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The device's display name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The device's display name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The device's display name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The device's display name.</p>
     */
    inline Device& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The device's display name.</p>
     */
    inline Device& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The device's display name.</p>
     */
    inline Device& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline Device& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline Device& WithManufacturer(Aws::String&& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The device's manufacturer name.</p>
     */
    inline Device& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}

    /**
     * <p>The device's model name.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The device's model name.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The device's model name.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The device's model name.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The device's model name.</p>
     */
    inline Device& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The device's model name.</p>
     */
    inline Device& WithModel(Aws::String&& value) { SetModel(value); return *this;}

    /**
     * <p>The device's model name.</p>
     */
    inline Device& WithModel(const char* value) { SetModel(value); return *this;}

    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE: The phone form factor.</p> </li> <li> <p>TABLET: The tablet form
     * factor.</p> </li> </ul>
     */
    inline const DeviceFormFactor& GetFormFactor() const{ return m_formFactor; }

    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE: The phone form factor.</p> </li> <li> <p>TABLET: The tablet form
     * factor.</p> </li> </ul>
     */
    inline void SetFormFactor(const DeviceFormFactor& value) { m_formFactorHasBeenSet = true; m_formFactor = value; }

    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE: The phone form factor.</p> </li> <li> <p>TABLET: The tablet form
     * factor.</p> </li> </ul>
     */
    inline void SetFormFactor(DeviceFormFactor&& value) { m_formFactorHasBeenSet = true; m_formFactor = value; }

    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE: The phone form factor.</p> </li> <li> <p>TABLET: The tablet form
     * factor.</p> </li> </ul>
     */
    inline Device& WithFormFactor(const DeviceFormFactor& value) { SetFormFactor(value); return *this;}

    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE: The phone form factor.</p> </li> <li> <p>TABLET: The tablet form
     * factor.</p> </li> </ul>
     */
    inline Device& WithFormFactor(DeviceFormFactor&& value) { SetFormFactor(value); return *this;}

    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID: The Android platform.</p> </li> <li> <p>IOS: The iOS platform.</p>
     * </li> </ul>
     */
    inline const DevicePlatform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID: The Android platform.</p> </li> <li> <p>IOS: The iOS platform.</p>
     * </li> </ul>
     */
    inline void SetPlatform(const DevicePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID: The Android platform.</p> </li> <li> <p>IOS: The iOS platform.</p>
     * </li> </ul>
     */
    inline void SetPlatform(DevicePlatform&& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID: The Android platform.</p> </li> <li> <p>IOS: The iOS platform.</p>
     * </li> </ul>
     */
    inline Device& WithPlatform(const DevicePlatform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID: The Android platform.</p> </li> <li> <p>IOS: The iOS platform.</p>
     * </li> </ul>
     */
    inline Device& WithPlatform(DevicePlatform&& value) { SetPlatform(value); return *this;}

    /**
     * <p>The device's operating system type.</p>
     */
    inline const Aws::String& GetOs() const{ return m_os; }

    /**
     * <p>The device's operating system type.</p>
     */
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>The device's operating system type.</p>
     */
    inline void SetOs(Aws::String&& value) { m_osHasBeenSet = true; m_os = value; }

    /**
     * <p>The device's operating system type.</p>
     */
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }

    /**
     * <p>The device's operating system type.</p>
     */
    inline Device& WithOs(const Aws::String& value) { SetOs(value); return *this;}

    /**
     * <p>The device's operating system type.</p>
     */
    inline Device& WithOs(Aws::String&& value) { SetOs(value); return *this;}

    /**
     * <p>The device's operating system type.</p>
     */
    inline Device& WithOs(const char* value) { SetOs(value); return *this;}

    /**
     * <p>Information about the device's CPU.</p>
     */
    inline const CPU& GetCpu() const{ return m_cpu; }

    /**
     * <p>Information about the device's CPU.</p>
     */
    inline void SetCpu(const CPU& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>Information about the device's CPU.</p>
     */
    inline void SetCpu(CPU&& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>Information about the device's CPU.</p>
     */
    inline Device& WithCpu(const CPU& value) { SetCpu(value); return *this;}

    /**
     * <p>Information about the device's CPU.</p>
     */
    inline Device& WithCpu(CPU&& value) { SetCpu(value); return *this;}

    
    inline const Resolution& GetResolution() const{ return m_resolution; }

    
    inline void SetResolution(const Resolution& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    
    inline void SetResolution(Resolution&& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    
    inline Device& WithResolution(const Resolution& value) { SetResolution(value); return *this;}

    
    inline Device& WithResolution(Resolution&& value) { SetResolution(value); return *this;}

    /**
     * <p>The device's heap size, expressed in bytes.</p>
     */
    inline long long GetHeapSize() const{ return m_heapSize; }

    /**
     * <p>The device's heap size, expressed in bytes.</p>
     */
    inline void SetHeapSize(long long value) { m_heapSizeHasBeenSet = true; m_heapSize = value; }

    /**
     * <p>The device's heap size, expressed in bytes.</p>
     */
    inline Device& WithHeapSize(long long value) { SetHeapSize(value); return *this;}

    /**
     * <p>The device's total memory size, expressed in bytes.</p>
     */
    inline long long GetMemory() const{ return m_memory; }

    /**
     * <p>The device's total memory size, expressed in bytes.</p>
     */
    inline void SetMemory(long long value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The device's total memory size, expressed in bytes.</p>
     */
    inline Device& WithMemory(long long value) { SetMemory(value); return *this;}

    /**
     * <p>The device's image name.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The device's image name.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The device's image name.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The device's image name.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The device's image name.</p>
     */
    inline Device& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The device's image name.</p>
     */
    inline Device& WithImage(Aws::String&& value) { SetImage(value); return *this;}

    /**
     * <p>The device's image name.</p>
     */
    inline Device& WithImage(const char* value) { SetImage(value); return *this;}

    /**
     * <p>The device's carrier.</p>
     */
    inline const Aws::String& GetCarrier() const{ return m_carrier; }

    /**
     * <p>The device's carrier.</p>
     */
    inline void SetCarrier(const Aws::String& value) { m_carrierHasBeenSet = true; m_carrier = value; }

    /**
     * <p>The device's carrier.</p>
     */
    inline void SetCarrier(Aws::String&& value) { m_carrierHasBeenSet = true; m_carrier = value; }

    /**
     * <p>The device's carrier.</p>
     */
    inline void SetCarrier(const char* value) { m_carrierHasBeenSet = true; m_carrier.assign(value); }

    /**
     * <p>The device's carrier.</p>
     */
    inline Device& WithCarrier(const Aws::String& value) { SetCarrier(value); return *this;}

    /**
     * <p>The device's carrier.</p>
     */
    inline Device& WithCarrier(Aws::String&& value) { SetCarrier(value); return *this;}

    /**
     * <p>The device's carrier.</p>
     */
    inline Device& WithCarrier(const char* value) { SetCarrier(value); return *this;}

    /**
     * <p>The device's radio.</p>
     */
    inline const Aws::String& GetRadio() const{ return m_radio; }

    /**
     * <p>The device's radio.</p>
     */
    inline void SetRadio(const Aws::String& value) { m_radioHasBeenSet = true; m_radio = value; }

    /**
     * <p>The device's radio.</p>
     */
    inline void SetRadio(Aws::String&& value) { m_radioHasBeenSet = true; m_radio = value; }

    /**
     * <p>The device's radio.</p>
     */
    inline void SetRadio(const char* value) { m_radioHasBeenSet = true; m_radio.assign(value); }

    /**
     * <p>The device's radio.</p>
     */
    inline Device& WithRadio(const Aws::String& value) { SetRadio(value); return *this;}

    /**
     * <p>The device's radio.</p>
     */
    inline Device& WithRadio(Aws::String&& value) { SetRadio(value); return *this;}

    /**
     * <p>The device's radio.</p>
     */
    inline Device& WithRadio(const char* value) { SetRadio(value); return *this;}

    /**
     * <p>Specifies whether remote access has been enabled for the specified
     * device.</p>
     */
    inline bool GetRemoteAccessEnabled() const{ return m_remoteAccessEnabled; }

    /**
     * <p>Specifies whether remote access has been enabled for the specified
     * device.</p>
     */
    inline void SetRemoteAccessEnabled(bool value) { m_remoteAccessEnabledHasBeenSet = true; m_remoteAccessEnabled = value; }

    /**
     * <p>Specifies whether remote access has been enabled for the specified
     * device.</p>
     */
    inline Device& WithRemoteAccessEnabled(bool value) { SetRemoteAccessEnabled(value); return *this;}

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline const Aws::String& GetFleetType() const{ return m_fleetType; }

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline void SetFleetType(const Aws::String& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline void SetFleetType(Aws::String&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline void SetFleetType(const char* value) { m_fleetTypeHasBeenSet = true; m_fleetType.assign(value); }

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline Device& WithFleetType(const Aws::String& value) { SetFleetType(value); return *this;}

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline Device& WithFleetType(Aws::String&& value) { SetFleetType(value); return *this;}

    /**
     * <p>The type of fleet to which this device belongs. Possible values for fleet
     * type are PRIVATE and PUBLIC.</p>
     */
    inline Device& WithFleetType(const char* value) { SetFleetType(value); return *this;}

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline Device& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline Device& WithFleetName(Aws::String&& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline Device& WithFleetName(const char* value) { SetFleetName(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet;
    Aws::String m_model;
    bool m_modelHasBeenSet;
    DeviceFormFactor m_formFactor;
    bool m_formFactorHasBeenSet;
    DevicePlatform m_platform;
    bool m_platformHasBeenSet;
    Aws::String m_os;
    bool m_osHasBeenSet;
    CPU m_cpu;
    bool m_cpuHasBeenSet;
    Resolution m_resolution;
    bool m_resolutionHasBeenSet;
    long long m_heapSize;
    bool m_heapSizeHasBeenSet;
    long long m_memory;
    bool m_memoryHasBeenSet;
    Aws::String m_image;
    bool m_imageHasBeenSet;
    Aws::String m_carrier;
    bool m_carrierHasBeenSet;
    Aws::String m_radio;
    bool m_radioHasBeenSet;
    bool m_remoteAccessEnabled;
    bool m_remoteAccessEnabledHasBeenSet;
    Aws::String m_fleetType;
    bool m_fleetTypeHasBeenSet;
    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
