/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/Device.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{

  class DeviceEvent
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceEvent() = default;
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline const Device& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Device>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Device>
    DeviceEvent& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline const Aws::String& GetStdEvent() const { return m_stdEvent; }
    inline bool StdEventHasBeenSet() const { return m_stdEventHasBeenSet; }
    template<typename StdEventT = Aws::String>
    void SetStdEvent(StdEventT&& value) { m_stdEventHasBeenSet = true; m_stdEvent = std::forward<StdEventT>(value); }
    template<typename StdEventT = Aws::String>
    DeviceEvent& WithStdEvent(StdEventT&& value) { SetStdEvent(std::forward<StdEventT>(value)); return *this;}
    ///@}
  private:

    Device m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_stdEvent;
    bool m_stdEventHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
