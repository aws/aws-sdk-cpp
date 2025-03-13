/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
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

  class DeviceMethod
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod() = default;
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline const Aws::String& GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    template<typename DeviceTypeT = Aws::String>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = Aws::String>
    DeviceMethod& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline const Aws::String& GetMethodName() const { return m_methodName; }
    inline bool MethodNameHasBeenSet() const { return m_methodNameHasBeenSet; }
    template<typename MethodNameT = Aws::String>
    void SetMethodName(MethodNameT&& value) { m_methodNameHasBeenSet = true; m_methodName = std::forward<MethodNameT>(value); }
    template<typename MethodNameT = Aws::String>
    DeviceMethod& WithMethodName(MethodNameT&& value) { SetMethodName(std::forward<MethodNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    Aws::String m_methodName;
    bool m_methodNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
