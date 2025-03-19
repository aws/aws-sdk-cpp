/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/UpdateAbpV1_1.h>
#include <aws/iotwireless/model/UpdateAbpV1_0_x.h>
#include <aws/iotwireless/model/UpdateFPorts.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWAN object for update functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANUpdateDevice">AWS
   * API Reference</a></p>
   */
  class LoRaWANUpdateDevice
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANUpdateDevice() = default;
    AWS_IOTWIRELESS_API LoRaWANUpdateDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANUpdateDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const { return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    template<typename DeviceProfileIdT = Aws::String>
    void SetDeviceProfileId(DeviceProfileIdT&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::forward<DeviceProfileIdT>(value); }
    template<typename DeviceProfileIdT = Aws::String>
    LoRaWANUpdateDevice& WithDeviceProfileId(DeviceProfileIdT&& value) { SetDeviceProfileId(std::forward<DeviceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service profile.</p>
     */
    inline const Aws::String& GetServiceProfileId() const { return m_serviceProfileId; }
    inline bool ServiceProfileIdHasBeenSet() const { return m_serviceProfileIdHasBeenSet; }
    template<typename ServiceProfileIdT = Aws::String>
    void SetServiceProfileId(ServiceProfileIdT&& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = std::forward<ServiceProfileIdT>(value); }
    template<typename ServiceProfileIdT = Aws::String>
    LoRaWANUpdateDevice& WithServiceProfileId(ServiceProfileIdT&& value) { SetServiceProfileId(std::forward<ServiceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ABP device object for update APIs for v1.1</p>
     */
    inline const UpdateAbpV1_1& GetAbpV1_1() const { return m_abpV1_1; }
    inline bool AbpV1_1HasBeenSet() const { return m_abpV1_1HasBeenSet; }
    template<typename AbpV1_1T = UpdateAbpV1_1>
    void SetAbpV1_1(AbpV1_1T&& value) { m_abpV1_1HasBeenSet = true; m_abpV1_1 = std::forward<AbpV1_1T>(value); }
    template<typename AbpV1_1T = UpdateAbpV1_1>
    LoRaWANUpdateDevice& WithAbpV1_1(AbpV1_1T&& value) { SetAbpV1_1(std::forward<AbpV1_1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ABP device object for update APIs for v1.0.x</p>
     */
    inline const UpdateAbpV1_0_x& GetAbpV1_0_x() const { return m_abpV1_0_x; }
    inline bool AbpV1_0_xHasBeenSet() const { return m_abpV1_0_xHasBeenSet; }
    template<typename AbpV1_0_xT = UpdateAbpV1_0_x>
    void SetAbpV1_0_x(AbpV1_0_xT&& value) { m_abpV1_0_xHasBeenSet = true; m_abpV1_0_x = std::forward<AbpV1_0_xT>(value); }
    template<typename AbpV1_0_xT = UpdateAbpV1_0_x>
    LoRaWANUpdateDevice& WithAbpV1_0_x(AbpV1_0_xT&& value) { SetAbpV1_0_x(std::forward<AbpV1_0_xT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>FPorts object for the positioning information of the device.</p>
     */
    inline const UpdateFPorts& GetFPorts() const { return m_fPorts; }
    inline bool FPortsHasBeenSet() const { return m_fPortsHasBeenSet; }
    template<typename FPortsT = UpdateFPorts>
    void SetFPorts(FPortsT&& value) { m_fPortsHasBeenSet = true; m_fPorts = std::forward<FPortsT>(value); }
    template<typename FPortsT = UpdateFPorts>
    LoRaWANUpdateDevice& WithFPorts(FPortsT&& value) { SetFPorts(std::forward<FPortsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    Aws::String m_serviceProfileId;
    bool m_serviceProfileIdHasBeenSet = false;

    UpdateAbpV1_1 m_abpV1_1;
    bool m_abpV1_1HasBeenSet = false;

    UpdateAbpV1_0_x m_abpV1_0_x;
    bool m_abpV1_0_xHasBeenSet = false;

    UpdateFPorts m_fPorts;
    bool m_fPortsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
