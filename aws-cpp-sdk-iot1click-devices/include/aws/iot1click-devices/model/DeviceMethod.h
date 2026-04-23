/*
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

  class AWS_IOT1CLICKDEVICESSERVICE_API DeviceMethod
  {
  public:
    DeviceMethod();
    DeviceMethod(Aws::Utils::Json::JsonView jsonValue);
    DeviceMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_deviceTypeHasBeenSet;

    Aws::String m_methodName;
    bool m_methodNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
