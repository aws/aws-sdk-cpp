/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/Attributes.h>
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

  class Device
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API Device();
    AWS_IOT1CLICKDEVICESSERVICE_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline const Attributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline void SetAttributes(const Attributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline void SetAttributes(Attributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline Device& WithAttributes(const Attributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline Device& WithAttributes(Attributes&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline Device& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline Device& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline Device& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The device type, such as "button".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The device type, such as "button".</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The device type, such as "button".</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device type, such as "button".</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The device type, such as "button".</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The device type, such as "button".</p>
     */
    inline Device& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The device type, such as "button".</p>
     */
    inline Device& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The device type, such as "button".</p>
     */
    inline Device& WithType(const char* value) { SetType(value); return *this;}

  private:

    Attributes m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
