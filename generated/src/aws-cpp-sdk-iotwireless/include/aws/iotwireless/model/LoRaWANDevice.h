/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/OtaaV1_1.h>
#include <aws/iotwireless/model/OtaaV1_0_x.h>
#include <aws/iotwireless/model/AbpV1_1.h>
#include <aws/iotwireless/model/AbpV1_0_x.h>
#include <aws/iotwireless/model/FPorts.h>
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
   * <p>LoRaWAN object for create functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANDevice">AWS
   * API Reference</a></p>
   */
  class LoRaWANDevice
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANDevice() = default;
    AWS_IOTWIRELESS_API LoRaWANDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DevEUI value.</p>
     */
    inline const Aws::String& GetDevEui() const { return m_devEui; }
    inline bool DevEuiHasBeenSet() const { return m_devEuiHasBeenSet; }
    template<typename DevEuiT = Aws::String>
    void SetDevEui(DevEuiT&& value) { m_devEuiHasBeenSet = true; m_devEui = std::forward<DevEuiT>(value); }
    template<typename DevEuiT = Aws::String>
    LoRaWANDevice& WithDevEui(DevEuiT&& value) { SetDevEui(std::forward<DevEuiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device profile for the new wireless device.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const { return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    template<typename DeviceProfileIdT = Aws::String>
    void SetDeviceProfileId(DeviceProfileIdT&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::forward<DeviceProfileIdT>(value); }
    template<typename DeviceProfileIdT = Aws::String>
    LoRaWANDevice& WithDeviceProfileId(DeviceProfileIdT&& value) { SetDeviceProfileId(std::forward<DeviceProfileIdT>(value)); return *this;}
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
    LoRaWANDevice& WithServiceProfileId(ServiceProfileIdT&& value) { SetServiceProfileId(std::forward<ServiceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OTAA device object for v1.1 for create APIs</p>
     */
    inline const OtaaV1_1& GetOtaaV1_1() const { return m_otaaV1_1; }
    inline bool OtaaV1_1HasBeenSet() const { return m_otaaV1_1HasBeenSet; }
    template<typename OtaaV1_1T = OtaaV1_1>
    void SetOtaaV1_1(OtaaV1_1T&& value) { m_otaaV1_1HasBeenSet = true; m_otaaV1_1 = std::forward<OtaaV1_1T>(value); }
    template<typename OtaaV1_1T = OtaaV1_1>
    LoRaWANDevice& WithOtaaV1_1(OtaaV1_1T&& value) { SetOtaaV1_1(std::forward<OtaaV1_1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OTAA device object for create APIs for v1.0.x</p>
     */
    inline const OtaaV1_0_x& GetOtaaV1_0_x() const { return m_otaaV1_0_x; }
    inline bool OtaaV1_0_xHasBeenSet() const { return m_otaaV1_0_xHasBeenSet; }
    template<typename OtaaV1_0_xT = OtaaV1_0_x>
    void SetOtaaV1_0_x(OtaaV1_0_xT&& value) { m_otaaV1_0_xHasBeenSet = true; m_otaaV1_0_x = std::forward<OtaaV1_0_xT>(value); }
    template<typename OtaaV1_0_xT = OtaaV1_0_x>
    LoRaWANDevice& WithOtaaV1_0_x(OtaaV1_0_xT&& value) { SetOtaaV1_0_x(std::forward<OtaaV1_0_xT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ABP device object for create APIs for v1.1</p>
     */
    inline const AbpV1_1& GetAbpV1_1() const { return m_abpV1_1; }
    inline bool AbpV1_1HasBeenSet() const { return m_abpV1_1HasBeenSet; }
    template<typename AbpV1_1T = AbpV1_1>
    void SetAbpV1_1(AbpV1_1T&& value) { m_abpV1_1HasBeenSet = true; m_abpV1_1 = std::forward<AbpV1_1T>(value); }
    template<typename AbpV1_1T = AbpV1_1>
    LoRaWANDevice& WithAbpV1_1(AbpV1_1T&& value) { SetAbpV1_1(std::forward<AbpV1_1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>LoRaWAN object for create APIs</p>
     */
    inline const AbpV1_0_x& GetAbpV1_0_x() const { return m_abpV1_0_x; }
    inline bool AbpV1_0_xHasBeenSet() const { return m_abpV1_0_xHasBeenSet; }
    template<typename AbpV1_0_xT = AbpV1_0_x>
    void SetAbpV1_0_x(AbpV1_0_xT&& value) { m_abpV1_0_xHasBeenSet = true; m_abpV1_0_x = std::forward<AbpV1_0_xT>(value); }
    template<typename AbpV1_0_xT = AbpV1_0_x>
    LoRaWANDevice& WithAbpV1_0_x(AbpV1_0_xT&& value) { SetAbpV1_0_x(std::forward<AbpV1_0_xT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FPorts& GetFPorts() const { return m_fPorts; }
    inline bool FPortsHasBeenSet() const { return m_fPortsHasBeenSet; }
    template<typename FPortsT = FPorts>
    void SetFPorts(FPortsT&& value) { m_fPortsHasBeenSet = true; m_fPorts = std::forward<FPortsT>(value); }
    template<typename FPortsT = FPorts>
    LoRaWANDevice& WithFPorts(FPortsT&& value) { SetFPorts(std::forward<FPortsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_devEui;
    bool m_devEuiHasBeenSet = false;

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    Aws::String m_serviceProfileId;
    bool m_serviceProfileIdHasBeenSet = false;

    OtaaV1_1 m_otaaV1_1;
    bool m_otaaV1_1HasBeenSet = false;

    OtaaV1_0_x m_otaaV1_0_x;
    bool m_otaaV1_0_xHasBeenSet = false;

    AbpV1_1 m_abpV1_1;
    bool m_abpV1_1HasBeenSet = false;

    AbpV1_0_x m_abpV1_0_x;
    bool m_abpV1_0_xHasBeenSet = false;

    FPorts m_fPorts;
    bool m_fPortsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
