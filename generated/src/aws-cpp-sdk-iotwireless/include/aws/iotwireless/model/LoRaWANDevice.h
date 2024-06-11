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
    AWS_IOTWIRELESS_API LoRaWANDevice();
    AWS_IOTWIRELESS_API LoRaWANDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DevEUI value.</p>
     */
    inline const Aws::String& GetDevEui() const{ return m_devEui; }
    inline bool DevEuiHasBeenSet() const { return m_devEuiHasBeenSet; }
    inline void SetDevEui(const Aws::String& value) { m_devEuiHasBeenSet = true; m_devEui = value; }
    inline void SetDevEui(Aws::String&& value) { m_devEuiHasBeenSet = true; m_devEui = std::move(value); }
    inline void SetDevEui(const char* value) { m_devEuiHasBeenSet = true; m_devEui.assign(value); }
    inline LoRaWANDevice& WithDevEui(const Aws::String& value) { SetDevEui(value); return *this;}
    inline LoRaWANDevice& WithDevEui(Aws::String&& value) { SetDevEui(std::move(value)); return *this;}
    inline LoRaWANDevice& WithDevEui(const char* value) { SetDevEui(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device profile for the new wireless device.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }
    inline LoRaWANDevice& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}
    inline LoRaWANDevice& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}
    inline LoRaWANDevice& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service profile.</p>
     */
    inline const Aws::String& GetServiceProfileId() const{ return m_serviceProfileId; }
    inline bool ServiceProfileIdHasBeenSet() const { return m_serviceProfileIdHasBeenSet; }
    inline void SetServiceProfileId(const Aws::String& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = value; }
    inline void SetServiceProfileId(Aws::String&& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = std::move(value); }
    inline void SetServiceProfileId(const char* value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId.assign(value); }
    inline LoRaWANDevice& WithServiceProfileId(const Aws::String& value) { SetServiceProfileId(value); return *this;}
    inline LoRaWANDevice& WithServiceProfileId(Aws::String&& value) { SetServiceProfileId(std::move(value)); return *this;}
    inline LoRaWANDevice& WithServiceProfileId(const char* value) { SetServiceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>OTAA device object for v1.1 for create APIs</p>
     */
    inline const OtaaV1_1& GetOtaaV1_1() const{ return m_otaaV1_1; }
    inline bool OtaaV1_1HasBeenSet() const { return m_otaaV1_1HasBeenSet; }
    inline void SetOtaaV1_1(const OtaaV1_1& value) { m_otaaV1_1HasBeenSet = true; m_otaaV1_1 = value; }
    inline void SetOtaaV1_1(OtaaV1_1&& value) { m_otaaV1_1HasBeenSet = true; m_otaaV1_1 = std::move(value); }
    inline LoRaWANDevice& WithOtaaV1_1(const OtaaV1_1& value) { SetOtaaV1_1(value); return *this;}
    inline LoRaWANDevice& WithOtaaV1_1(OtaaV1_1&& value) { SetOtaaV1_1(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OTAA device object for create APIs for v1.0.x</p>
     */
    inline const OtaaV1_0_x& GetOtaaV1_0_x() const{ return m_otaaV1_0_x; }
    inline bool OtaaV1_0_xHasBeenSet() const { return m_otaaV1_0_xHasBeenSet; }
    inline void SetOtaaV1_0_x(const OtaaV1_0_x& value) { m_otaaV1_0_xHasBeenSet = true; m_otaaV1_0_x = value; }
    inline void SetOtaaV1_0_x(OtaaV1_0_x&& value) { m_otaaV1_0_xHasBeenSet = true; m_otaaV1_0_x = std::move(value); }
    inline LoRaWANDevice& WithOtaaV1_0_x(const OtaaV1_0_x& value) { SetOtaaV1_0_x(value); return *this;}
    inline LoRaWANDevice& WithOtaaV1_0_x(OtaaV1_0_x&& value) { SetOtaaV1_0_x(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ABP device object for create APIs for v1.1</p>
     */
    inline const AbpV1_1& GetAbpV1_1() const{ return m_abpV1_1; }
    inline bool AbpV1_1HasBeenSet() const { return m_abpV1_1HasBeenSet; }
    inline void SetAbpV1_1(const AbpV1_1& value) { m_abpV1_1HasBeenSet = true; m_abpV1_1 = value; }
    inline void SetAbpV1_1(AbpV1_1&& value) { m_abpV1_1HasBeenSet = true; m_abpV1_1 = std::move(value); }
    inline LoRaWANDevice& WithAbpV1_1(const AbpV1_1& value) { SetAbpV1_1(value); return *this;}
    inline LoRaWANDevice& WithAbpV1_1(AbpV1_1&& value) { SetAbpV1_1(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>LoRaWAN object for create APIs</p>
     */
    inline const AbpV1_0_x& GetAbpV1_0_x() const{ return m_abpV1_0_x; }
    inline bool AbpV1_0_xHasBeenSet() const { return m_abpV1_0_xHasBeenSet; }
    inline void SetAbpV1_0_x(const AbpV1_0_x& value) { m_abpV1_0_xHasBeenSet = true; m_abpV1_0_x = value; }
    inline void SetAbpV1_0_x(AbpV1_0_x&& value) { m_abpV1_0_xHasBeenSet = true; m_abpV1_0_x = std::move(value); }
    inline LoRaWANDevice& WithAbpV1_0_x(const AbpV1_0_x& value) { SetAbpV1_0_x(value); return *this;}
    inline LoRaWANDevice& WithAbpV1_0_x(AbpV1_0_x&& value) { SetAbpV1_0_x(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FPorts& GetFPorts() const{ return m_fPorts; }
    inline bool FPortsHasBeenSet() const { return m_fPortsHasBeenSet; }
    inline void SetFPorts(const FPorts& value) { m_fPortsHasBeenSet = true; m_fPorts = value; }
    inline void SetFPorts(FPorts&& value) { m_fPortsHasBeenSet = true; m_fPorts = std::move(value); }
    inline LoRaWANDevice& WithFPorts(const FPorts& value) { SetFPorts(value); return *this;}
    inline LoRaWANDevice& WithFPorts(FPorts&& value) { SetFPorts(std::move(value)); return *this;}
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
