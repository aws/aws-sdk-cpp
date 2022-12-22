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
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod();
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline DeviceMethod& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline DeviceMethod& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline DeviceMethod& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}


    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline const Aws::String& GetMethodName() const{ return m_methodName; }

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline bool MethodNameHasBeenSet() const { return m_methodNameHasBeenSet; }

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline void SetMethodName(const Aws::String& value) { m_methodNameHasBeenSet = true; m_methodName = value; }

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline void SetMethodName(Aws::String&& value) { m_methodNameHasBeenSet = true; m_methodName = std::move(value); }

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline void SetMethodName(const char* value) { m_methodNameHasBeenSet = true; m_methodName.assign(value); }

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline DeviceMethod& WithMethodName(const Aws::String& value) { SetMethodName(value); return *this;}

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline DeviceMethod& WithMethodName(Aws::String&& value) { SetMethodName(std::move(value)); return *this;}

    /**
     * <p>The name of the method applicable to the deviceType.</p>
     */
    inline DeviceMethod& WithMethodName(const char* value) { SetMethodName(value); return *this;}

  private:

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    Aws::String m_methodName;
    bool m_methodNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
