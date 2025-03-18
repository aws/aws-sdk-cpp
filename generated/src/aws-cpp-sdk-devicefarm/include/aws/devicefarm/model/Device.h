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
    AWS_DEVICEFARM_API Device() = default;
    AWS_DEVICEFARM_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Device& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's display name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Device& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's manufacturer name.</p>
     */
    inline const Aws::String& GetManufacturer() const { return m_manufacturer; }
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }
    template<typename ManufacturerT = Aws::String>
    void SetManufacturer(ManufacturerT&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::forward<ManufacturerT>(value); }
    template<typename ManufacturerT = Aws::String>
    Device& WithManufacturer(ManufacturerT&& value) { SetManufacturer(std::forward<ManufacturerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's model name.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    Device& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's model ID.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    Device& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's form factor.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PHONE</p> </li> <li> <p>TABLET</p> </li> </ul>
     */
    inline DeviceFormFactor GetFormFactor() const { return m_formFactor; }
    inline bool FormFactorHasBeenSet() const { return m_formFactorHasBeenSet; }
    inline void SetFormFactor(DeviceFormFactor value) { m_formFactorHasBeenSet = true; m_formFactor = value; }
    inline Device& WithFormFactor(DeviceFormFactor value) { SetFormFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline DevicePlatform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(DevicePlatform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Device& WithPlatform(DevicePlatform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's operating system type.</p>
     */
    inline const Aws::String& GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    template<typename OsT = Aws::String>
    void SetOs(OsT&& value) { m_osHasBeenSet = true; m_os = std::forward<OsT>(value); }
    template<typename OsT = Aws::String>
    Device& WithOs(OsT&& value) { SetOs(std::forward<OsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the device's CPU.</p>
     */
    inline const CPU& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = CPU>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = CPU>
    Device& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolution of the device.</p>
     */
    inline const Resolution& GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    template<typename ResolutionT = Resolution>
    void SetResolution(ResolutionT&& value) { m_resolutionHasBeenSet = true; m_resolution = std::forward<ResolutionT>(value); }
    template<typename ResolutionT = Resolution>
    Device& WithResolution(ResolutionT&& value) { SetResolution(std::forward<ResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's heap size, expressed in bytes.</p>
     */
    inline long long GetHeapSize() const { return m_heapSize; }
    inline bool HeapSizeHasBeenSet() const { return m_heapSizeHasBeenSet; }
    inline void SetHeapSize(long long value) { m_heapSizeHasBeenSet = true; m_heapSize = value; }
    inline Device& WithHeapSize(long long value) { SetHeapSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's total memory size, expressed in bytes.</p>
     */
    inline long long GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(long long value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline Device& WithMemory(long long value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's image name.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    Device& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's carrier.</p>
     */
    inline const Aws::String& GetCarrier() const { return m_carrier; }
    inline bool CarrierHasBeenSet() const { return m_carrierHasBeenSet; }
    template<typename CarrierT = Aws::String>
    void SetCarrier(CarrierT&& value) { m_carrierHasBeenSet = true; m_carrier = std::forward<CarrierT>(value); }
    template<typename CarrierT = Aws::String>
    Device& WithCarrier(CarrierT&& value) { SetCarrier(std::forward<CarrierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's radio.</p>
     */
    inline const Aws::String& GetRadio() const { return m_radio; }
    inline bool RadioHasBeenSet() const { return m_radioHasBeenSet; }
    template<typename RadioT = Aws::String>
    void SetRadio(RadioT&& value) { m_radioHasBeenSet = true; m_radio = std::forward<RadioT>(value); }
    template<typename RadioT = Aws::String>
    Device& WithRadio(RadioT&& value) { SetRadio(std::forward<RadioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether remote access has been enabled for the specified
     * device.</p>
     */
    inline bool GetRemoteAccessEnabled() const { return m_remoteAccessEnabled; }
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
    inline bool GetRemoteDebugEnabled() const { return m_remoteDebugEnabled; }
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }
    inline Device& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of fleet to which this device belongs. Possible values are PRIVATE
     * and PUBLIC.</p>
     */
    inline const Aws::String& GetFleetType() const { return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    template<typename FleetTypeT = Aws::String>
    void SetFleetType(FleetTypeT&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::forward<FleetTypeT>(value); }
    template<typename FleetTypeT = Aws::String>
    Device& WithFleetType(FleetTypeT&& value) { SetFleetType(std::forward<FleetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet to which this device belongs.</p>
     */
    inline const Aws::String& GetFleetName() const { return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    template<typename FleetNameT = Aws::String>
    void SetFleetName(FleetNameT&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::forward<FleetNameT>(value); }
    template<typename FleetNameT = Aws::String>
    Device& WithFleetName(FleetNameT&& value) { SetFleetName(std::forward<FleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances that belong to this device.</p>
     */
    inline const Aws::Vector<DeviceInstance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<DeviceInstance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<DeviceInstance>>
    Device& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = DeviceInstance>
    Device& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates how likely a device is available for a test run. Currently
     * available in the <a>ListDevices</a> and GetDevice API methods.</p>
     */
    inline DeviceAvailability GetAvailability() const { return m_availability; }
    inline bool AvailabilityHasBeenSet() const { return m_availabilityHasBeenSet; }
    inline void SetAvailability(DeviceAvailability value) { m_availabilityHasBeenSet = true; m_availability = value; }
    inline Device& WithAvailability(DeviceAvailability value) { SetAvailability(value); return *this;}
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

    DeviceFormFactor m_formFactor{DeviceFormFactor::NOT_SET};
    bool m_formFactorHasBeenSet = false;

    DevicePlatform m_platform{DevicePlatform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::String m_os;
    bool m_osHasBeenSet = false;

    CPU m_cpu;
    bool m_cpuHasBeenSet = false;

    Resolution m_resolution;
    bool m_resolutionHasBeenSet = false;

    long long m_heapSize{0};
    bool m_heapSizeHasBeenSet = false;

    long long m_memory{0};
    bool m_memoryHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_carrier;
    bool m_carrierHasBeenSet = false;

    Aws::String m_radio;
    bool m_radioHasBeenSet = false;

    bool m_remoteAccessEnabled{false};
    bool m_remoteAccessEnabledHasBeenSet = false;

    bool m_remoteDebugEnabled{false};
    bool m_remoteDebugEnabledHasBeenSet = false;

    Aws::String m_fleetType;
    bool m_fleetTypeHasBeenSet = false;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::Vector<DeviceInstance> m_instances;
    bool m_instancesHasBeenSet = false;

    DeviceAvailability m_availability{DeviceAvailability::NOT_SET};
    bool m_availabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
