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

  class AWS_IOT1CLICKDEVICESSERVICE_API DeviceEvent
  {
  public:
    DeviceEvent();
    DeviceEvent(Aws::Utils::Json::JsonView jsonValue);
    DeviceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }

    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline DeviceEvent& WithDevice(const Device& value) { SetDevice(value); return *this;}

    /**
     * <p>An object representing the device associated with the event.</p>
     */
    inline DeviceEvent& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}


    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline const Aws::String& GetStdEvent() const{ return m_stdEvent; }

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline bool StdEventHasBeenSet() const { return m_stdEventHasBeenSet; }

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline void SetStdEvent(const Aws::String& value) { m_stdEventHasBeenSet = true; m_stdEvent = value; }

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline void SetStdEvent(Aws::String&& value) { m_stdEventHasBeenSet = true; m_stdEvent = std::move(value); }

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline void SetStdEvent(const char* value) { m_stdEventHasBeenSet = true; m_stdEvent.assign(value); }

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline DeviceEvent& WithStdEvent(const Aws::String& value) { SetStdEvent(value); return *this;}

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline DeviceEvent& WithStdEvent(Aws::String&& value) { SetStdEvent(std::move(value)); return *this;}

    /**
     * <p>A serialized JSON object representing the device-type specific event.</p>
     */
    inline DeviceEvent& WithStdEvent(const char* value) { SetStdEvent(value); return *this;}

  private:

    Device m_device;
    bool m_deviceHasBeenSet;

    Aws::String m_stdEvent;
    bool m_stdEventHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
