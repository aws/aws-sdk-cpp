/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DeviceFormFactor.h>
#include <aws/devicefarm/model/DevicePlatform.h>
#include <aws/devicefarm/model/CPU.h>
#include <aws/devicefarm/model/Resolution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceAvailability.h>
#include <aws/devicefarm/model/DeviceInstance.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a device type that an app is tested against.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_DEVICEFARM_API Device();
    AWS_DEVICEFARM_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Device& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Device& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Device& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's display name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Device& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Device& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Device& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's manufacturer name.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::move(value); }
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }
    inline Device& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}
    inline Device& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}
    inline Device& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's model name.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline Device& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline Device& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline Device& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline Device& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline Device& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline Device& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE</p> </li> <li> <p>TABLET</p> </li> </ul>
     */
    inline const DeviceFormFactor& GetFormFactor() const{ return m_formFactor; }
    inline bool FormFactorHasBeenSet() const { return m_formFactorHasBeenSet; }
    inline void SetFormFactor(const DeviceFormFactor& value) { m_formFactorHasBeenSet = true; m_formFactor = value; }
    inline void SetFormFactor(DeviceFormFactor&& value) { m_formFactorHasBeenSet = true; m_formFactor = std::move(value); }
    inline Device& WithFormFactor(const DeviceFormFactor& value) { SetFormFactor(value); return *this;}
    inline Device& WithFormFactor(DeviceFormFactor&& value) { SetFormFactor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline const DevicePlatform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const DevicePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(DevicePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline Device& WithPlatform(const DevicePlatform& value) { SetPlatform(value); return *this;}
    inline Device& WithPlatform(DevicePlatform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's operating system type.</p>
     */
    inline const Aws::String& GetOs() const{ return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }
    inline void SetOs(Aws::String&& value) { m_osHasBeenSet = true; m_os = std::move(value); }
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }
    inline Device& WithOs(const Aws::String& value) { SetOs(value); return *this;}
    inline Device& WithOs(Aws::String&& value) { SetOs(std::move(value)); return *this;}
    inline Device& WithOs(const char* value) { SetOs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the device's CPU.</p>
     */
    inline const CPU& GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(const CPU& value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline void SetCpu(CPU&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }
    inline Device& WithCpu(const CPU& value) { SetCpu(value); return *this;}
    inline Device& WithCpu(CPU&& value) { SetCpu(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolution of the device.</p>
     */
    inline const Resolution& GetResolution() const{ return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    inline void SetResolution(const Resolution& value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline void SetResolution(Resolution&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }
    inline Device& WithResolution(const Resolution& value) { SetResolution(value); return *this;}
    inline Device& WithResolution(Resolution&& value) { SetResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's heap size, expressed in bytes.</p>
     */
    inline long long GetHeapSize() const{ return m_heapSize; }
    inline bool HeapSizeHasBeenSet() const { return m_heapSizeHasBeenSet; }
    inline void SetHeapSize(long long value) { m_heapSizeHasBeenSet = true; m_heapSize = value; }
    inline Device& WithHeapSize(long long value) { SetHeapSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's total memory size, expressed in bytes.</p>
     */
    inline long long GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(long long value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline Device& WithMemory(long long value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's image name.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline Device& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline Device& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline Device& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's carrier.</p>
     */
    inline const Aws::String& GetCarrier() const{ return m_carrier; }
    inline bool CarrierHasBeenSet() const { return m_carrierHasBeenSet; }
    inline void SetCarrier(const Aws::String& value) { m_carrierHasBeenSet = true; m_carrier = value; }
    inline void SetCarrier(Aws::String&& value) { m_carrierHasBeenSet = true; m_carrier = std::move(value); }
    inline void SetCarrier(const char* value) { m_carrierHasBeenSet = true; m_carrier.assign(value); }
    inline Device& WithCarrier(const Aws::String& value) { SetCarrier(value); return *this;}
    inline Device& WithCarrier(Aws::String&& value) { SetCarrier(std::move(value)); return *this;}
    inline Device& WithCarrier(const char* value) { SetCarrier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's radio.</p>
     */
    inline const Aws::String& GetRadio() const{ return m_radio; }
    inline bool RadioHasBeenSet() const { return m_radioHasBeenSet; }
    inline void SetRadio(const Aws::String& value) { m_radioHasBeenSet = true; m_radio = value; }
    inline void SetRadio(Aws::String&& value) { m_radioHasBeenSet = true; m_radio = std::move(value); }
    inline void SetRadio(const char* value) { m_radioHasBeenSet = true; m_radio.assign(value); }
    inline Device& WithRadio(const Aws::String& value) { SetRadio(value); return *this;}
    inline Device& WithRadio(Aws::String&& value) { SetRadio(std::move(value)); return *this;}
    inline Device& WithRadio(const char* value) { SetRadio(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether remote access has been enabled for the specified
     * device.</p>
     */
    inline bool GetRemoteAccessEnabled() const{ return m_remoteAccessEnabled; }
    inline bool RemoteAccessEnabledHasBeenSet() const { return m_remoteAccessEnabledHasBeenSet; }
    inline void SetRemoteAccessEnabled(bool value) { m_remoteAccessEnabledHasBeenSet = true; m_remoteAccessEnabled = value; }
    inline Device& WithRemoteAccessEnabled(bool value) { SetRemoteAccessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * device.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline bool GetRemoteDebugEnabled() const{ return m_remoteDebugEnabled; }
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }
    inline Device& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of fleet to which this device belongs. Possible values are PRIVATE
     * and PUBLIC.</p>
     */
    inline const Aws::String& GetFleetType() const{ return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    inline void SetFleetType(const Aws::String& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }
    inline void SetFleetType(Aws::String&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }
    inline void SetFleetType(const char* value) { m_fleetTypeHasBeenSet = true; m_fleetType.assign(value); }
    inline Device& WithFleetType(const Aws::String& value) { SetFleetType(value); return *this;}
    inline Device& WithFleetType(Aws::String&& value) { SetFleetType(std::move(value)); return *this;}
    inline Device& WithFleetType(const char* value) { SetFleetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }
    inline Device& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}
    inline Device& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}
    inline Device& WithFleetName(const char* value) { SetFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances that belong to this device.</p>
     */
    inline const Aws::Vector<DeviceInstance>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<DeviceInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<DeviceInstance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline Device& WithInstances(const Aws::Vector<DeviceInstance>& value) { SetInstances(value); return *this;}
    inline Device& WithInstances(Aws::Vector<DeviceInstance>&& value) { SetInstances(std::move(value)); return *this;}
    inline Device& AddInstances(const DeviceInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline Device& AddInstances(DeviceInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates how likely a device is available for a test run. Currently
     * available in the <a>ListDevices</a> and GetDevice API methods.</p>
     */
    inline const DeviceAvailability& GetAvailability() const{ return m_availability; }
    inline bool AvailabilityHasBeenSet() const { return m_availabilityHasBeenSet; }
    inline void SetAvailability(const DeviceAvailability& value) { m_availabilityHasBeenSet = true; m_availability = value; }
    inline void SetAvailability(DeviceAvailability&& value) { m_availabilityHasBeenSet = true; m_availability = std::move(value); }
    inline Device& WithAvailability(const DeviceAvailability& value) { SetAvailability(value); return *this;}
    inline Device& WithAvailability(DeviceAvailability&& value) { SetAvailability(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    DeviceFormFactor m_formFactor;
    bool m_formFactorHasBeenSet = false;

    DevicePlatform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_os;
    bool m_osHasBeenSet = false;

    CPU m_cpu;
    bool m_cpuHasBeenSet = false;

    Resolution m_resolution;
    bool m_resolutionHasBeenSet = false;

    long long m_heapSize;
    bool m_heapSizeHasBeenSet = false;

    long long m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_carrier;
    bool m_carrierHasBeenSet = false;

    Aws::String m_radio;
    bool m_radioHasBeenSet = false;

    bool m_remoteAccessEnabled;
    bool m_remoteAccessEnabledHasBeenSet = false;

    bool m_remoteDebugEnabled;
    bool m_remoteDebugEnabledHasBeenSet = false;

    Aws::String m_fleetType;
    bool m_fleetTypeHasBeenSet = false;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::Vector<DeviceInstance> m_instances;
    bool m_instancesHasBeenSet = false;

    DeviceAvailability m_availability;
    bool m_availabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
